#pragma once
#include "pch.h"
#include "Utils.h"
#include "Inventory.h"

class Building
{
	static bool CanBePlacedByPlayer(UClass *BuildClass) {
		return AFortGameStateAthena::Get()->AllPlayerBuildableClasses.Search([BuildClass](UClass *Class) { return Class == BuildClass; });
	}
	static inline void (*ServerCreateBuildingActorOG)(AFortPlayerControllerAthena *PC, FCreateBuildingActorData &CreateBuildingData);
	static void ServerCreateBuildingActor(AFortPlayerControllerAthena *PC, FCreateBuildingActorData &CreateBuildingData)
	{
		if (!PC || !PC->bBuildFree)
			return ServerCreateBuildingActorOG(PC, CreateBuildingData);
		PC->bBuildFree = false;
		auto BClass = PC->BroadcastRemoteClientInfo->RemoteBuildableClass;
		if (!CanBePlacedByPlayer(BClass)) return ServerCreateBuildingActorOG(PC, CreateBuildingData);

		TArray<ABuildingSMActor *> RemoveBuildings;
		char idk;
		static auto CantBuild = (__int64 (*)(UWorld*, UObject*, FVector, FRotator, bool, TArray<ABuildingSMActor*> *, char*))(ImageBase + 0x24c16b0);
		if (CantBuild(UWorld::Get(), BClass, CreateBuildingData.BuildLoc, CreateBuildingData.BuildRot, CreateBuildingData.bMirrored, &RemoveBuildings, &idk))
		{
			PC->bBuildFree = true;
			return ServerCreateBuildingActorOG(PC, CreateBuildingData);
		}
		auto res = UFortKismetLibrary::K2_GetResourceItemDefinition(((ABuildingSMActor *)BClass->DefaultObject)->ResourceType);
		auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([res](FFortItemEntry &entry)
																				{ return entry.ItemDefinition == res; });
		if (!itemEntry || itemEntry->Count < 10)
		{
			PC->bBuildFree = true;
			return ServerCreateBuildingActorOG(PC, CreateBuildingData);
		}

		itemEntry->Count -= 10;
		if (itemEntry->Count <= 0)
			Inventory::Remove(PC, itemEntry->ItemGuid);
		Inventory::ReplaceEntry((AFortPlayerControllerAthena *)PC, *itemEntry);

		for (auto &RB : RemoveBuildings)
			RB->K2_DestroyActor();
		RemoveBuildings.Free();

		ABuildingSMActor *Building = Utils::SpawnActor<ABuildingSMActor>(BClass, CreateBuildingData.BuildLoc, CreateBuildingData.BuildRot, PC);
		Building->bPlayerPlaced = true;
		Building->InitializeKismetSpawnedBuildingActor(Building, PC, true);
		Building->TeamIndex = ((AFortPlayerStateAthena *)PC->PlayerState)->TeamIndex;
		Building->Team = EFortTeam(Building->TeamIndex);
		PC->bBuildFree = true;
		return ServerCreateBuildingActorOG(PC, CreateBuildingData);
	}

	static void ServerBeginEditingBuildingActor(AFortPlayerControllerAthena *PC, ABuildingSMActor *Building)
	{
		if (!PC || !PC->MyFortPawn || !Building || Building->TeamIndex != static_cast<AFortPlayerStateAthena *>(PC->PlayerState)->TeamIndex)
			return;

		AFortPlayerStateAthena *PlayerState = (AFortPlayerStateAthena *)PC->PlayerState;
		if (!PlayerState)
			return;

		auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([](FFortItemEntry &entry)
																				{ return entry.ItemDefinition->IsA<UFortEditToolItemDefinition>(); });
		if (!itemEntry)
			return;

		PC->ServerExecuteInventoryItem(itemEntry->ItemGuid);
	}

	static void ServerEditBuildingActor(AFortPlayerControllerAthena *PC, ABuildingSMActor *Building, TSubclassOf<ABuildingSMActor> NewClass, uint8 RotationIterations, bool bMirrored)
	{
		if (!PC || !Building || !NewClass || !Building->IsA<ABuildingSMActor>() || !CanBePlacedByPlayer(NewClass) || Building->TeamIndex != static_cast<AFortPlayerStateAthena *>(PC->PlayerState)->TeamIndex)
			return;

		Building->SetNetDormancy(ENetDormancy::DORM_DormantAll);
		Building->EditingPlayer = nullptr;

		static auto ReplaceBuildingActor = (ABuildingSMActor * (*)(ABuildingSMActor*, unsigned int, UObject*, unsigned int, int, bool, AFortPlayerControllerAthena*))(ImageBase + 0x21903b0);

		ABuildingSMActor *NewBuild = ReplaceBuildingActor(Building, 1, NewClass, Building->CurrentBuildingLevel, RotationIterations, bMirrored, PC);

		if (NewBuild)
			NewBuild->bPlayerPlaced = true;
	}

	static void ServerEndEditingBuildingActor(AFortPlayerControllerAthena *PC, ABuildingSMActor *Building)
	{
		if (!PC || !PC->MyFortPawn || !Building || Building->EditingPlayer != (AFortPlayerStateZone *)PC->PlayerState || Building->TeamIndex != static_cast<AFortPlayerStateAthena *>(PC->PlayerState)->TeamIndex)
			return;

		Building->SetNetDormancy(ENetDormancy::DORM_DormantAll);
		Building->EditingPlayer = nullptr;

		AFortWeap_EditingTool *EditTool = PC->MyFortPawn->CurrentWeapon->Cast<AFortWeap_EditingTool>();

		if (!EditTool)
			return;

		EditTool->EditActor = nullptr;
		EditTool->OnRep_EditActor();
	}

	static void ServerRepairBuildingActor(AFortPlayerControllerAthena *PC, ABuildingSMActor *Building)
	{
		if (!PC)
			return;

		auto Price = (int32)std::floor((10.f * (1.f - Building->GetHealthPercent())) * 0.75f);
		auto res = UFortKismetLibrary::K2_GetResourceItemDefinition(Building->ResourceType);
		auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([res](FFortItemEntry &entry)
																				{ return entry.ItemDefinition == res; });
		itemEntry->Count -= Price;
		if (itemEntry->Count <= 0)
			Inventory::Remove(PC, itemEntry->ItemGuid);
		else
			Inventory::ReplaceEntry(PC, *itemEntry);

		Building->RepairBuilding(PC, Price);
	}

	static inline void (*OnDamageServerOG)(ABuildingSMActor *, float, FGameplayTagContainer, FVector, FHitResult, AFortPlayerControllerAthena *, AActor *, FGameplayEffectContextHandle);
	static void OnDamageServer(ABuildingSMActor *Actor, float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, AFortPlayerControllerAthena *InstigatedBy, AActor *DamageCauser, FGameplayEffectContextHandle EffectContext)
	{
		static AFortGameStateAthena* GameState = AFortGameStateAthena::Get();
		if (!InstigatedBy || Actor->bPlayerPlaced || Actor->GetHealth() == 1 || Actor->IsA(UObject::FindClassFast("B_Athena_VendingMachine_C")) || Actor->IsA(AFortGameStateAthena::Get()->MapInfo->LlamaClass) || Actor->IsA<AB_Athena_Wumba_C>())
			return OnDamageServerOG(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);
		if (!DamageCauser || !DamageCauser->IsA<AFortWeapon>() || !((AFortWeapon *)DamageCauser)->WeaponData->Cast<UFortWeaponMeleeItemDefinition>() || InstigatedBy->IsA<AFortAthenaAIBotController>())
			return OnDamageServerOG(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);
		static auto PickaxeTag = FName(L"Weapon.Melee.Impact.Pickaxe");
		auto entry = DamageTags.GameplayTags.Search([](FGameplayTag &entry)
													{ return entry.TagName == PickaxeTag; });
		if (!entry)
			return OnDamageServerOG(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

		auto Resource = UFortKismetLibrary::K2_GetResourceItemDefinition(Actor->ResourceType);
		if (!Resource)
			return OnDamageServerOG(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

		static auto Stone = Utils::FindObject<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/StoneItemData.StoneItemData");
		static auto Metal = Utils::FindObject<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/MetalItemData.MetalItemData");

		int MaxMat = (int32) Stone->MaxStackSize.GetValue();

		FCurveTableRowHandle &BuildingResourceAmountOverride = Actor->BuildingResourceAmountOverride;
		float ResCountF = 0.f;

		if (Actor->BuildingResourceAmountOverride.RowName.ComparisonIndex && Actor->BuildingResourceAmountOverride.CurveTable)
		{
			float Out;
			UDataTableFunctionLibrary::EvaluateCurveTableRow(Actor->BuildingResourceAmountOverride.CurveTable, Actor->BuildingResourceAmountOverride.RowName, 0.f, nullptr, &Out, FString());

			float RC = Out / (Actor->GetMaxHealth() / Damage);

			ResCountF = round(RC);
		}
		auto ResCount = (int32) ResCountF;

		if (ResCount > 0)
		{
			auto itemEntry = InstigatedBy->WorldInventory->Inventory.ReplicatedEntries.Search([Resource](FFortItemEntry &entry)
				{ return entry.ItemDefinition == Resource; });

			if (GameState->GamePhaseStep != EAthenaGamePhaseStep::Warmup && GameState->GamePhaseStep != EAthenaGamePhaseStep::Warmup) {
				if (Damage == 100.f)
				{
					XP::GiveAccolade(InstigatedBy, Utils::FindObject<UFortAccoladeItemDefinition>("/Game/Athena/Items/Accolades/AccoladeId_066_WeakSpotsInARow.AccoladeId_066_WeakSpotsInARow"));
				}
			}

			if (itemEntry)
			{
				Inventory::AddMore(InstigatedBy, *itemEntry, ResCount, false);
			}
			else
			{
				if (ResCount > MaxMat)
				{
					Inventory::SpawnPickup(InstigatedBy->Pawn->K2_GetActorLocation(), itemEntry->ItemDefinition, ResCount - MaxMat, 0, EFortPickupSourceTypeFlag::Tossed, EFortPickupSpawnSource::Unset, InstigatedBy->MyFortPawn);
					ResCount = MaxMat;
				}
				Inventory::GiveItem(InstigatedBy, Resource, ResCount, 0, 0, false);
			}
			InstigatedBy->ClientReportDamagedResourceBuilding(Actor, Actor->ResourceType, ResCount, Actor->GetHealth() - Damage <= 0, Damage == 100.f);
		}
		return OnDamageServerOG(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);
	}

	static void ServerCreateBuildingAndSpawnDeco(ATrapTool_C *Tool, FVector_NetQuantize10 &BuildingLocation, FRotator &BuildingRotation, FVector_NetQuantize10 &Location, FRotator &Rotation, EBuildingAttachmentType InBuildingAttachmentType)
	{
		auto Pawn = (AFortPlayerPawnAthena *)Tool->Owner;
		auto PC = (AFortPlayerControllerAthena *)Pawn->Controller;
		if (!PC)
			return;
		auto Mat = PC->BroadcastRemoteClientInfo->RemoteBuildingMaterial;
		xstring MatName;
		xstring MatNameShort;
		switch ((int)Mat)
		{
		case 0:
			MatName = "Wood";
			MatNameShort = "W";
			break;
		case 1:
			MatName = "Stone";
			MatNameShort = "S";
			break;
		case 2:
			MatName = "Metal";
			MatNameShort = "M";
			break;
		}
		xstring BuildingType;
		switch ((int)InBuildingAttachmentType)
		{
		case 0:
		case 6:
		case 7:
		case 2:
			BuildingType = "Floor";
			break;
		case 1:
			BuildingType = "Solid";
			break;
		}
		auto Build = Utils::FindObject<UClass>("/Game/Building/ActorBlueprints/Player/" + MatName + "/L1/PBWA_" + MatNameShort + "1_" + BuildingType + ".PBWA_" + MatNameShort + "1_" + BuildingType + "_C");
		TArray<ABuildingSMActor *> RemoveBuildings;
		char idk;
		ABuildingSMActor *Building = nullptr;
		if (((__int64 (*)(UWorld *, UObject *, FVector, FRotator, bool, TArray<ABuildingSMActor *> *, char *))(ImageBase + 0x24c16b0))(UWorld::Get(), Build, BuildingLocation, BuildingRotation, false, &RemoveBuildings, &idk))
			return;
		auto res = UFortKismetLibrary::K2_GetResourceItemDefinition(((ABuildingSMActor *)Build->DefaultObject)->ResourceType);
		auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([res](FFortItemEntry &entry)
																				{ return entry.ItemDefinition == res; });
		if (!itemEntry)
			return;

		itemEntry->Count -= 10;
		if (itemEntry->Count <= 0)
			Inventory::Remove(PC, itemEntry->ItemGuid);
		Inventory::ReplaceEntry((AFortPlayerControllerAthena *)PC, *itemEntry);

		for (auto &RB : RemoveBuildings)
			RB->K2_DestroyActor();
		RemoveBuildings.Free();

		Building = Utils::SpawnActor<ABuildingSMActor>(Build, BuildingLocation, BuildingRotation, PC);
		Building->bPlayerPlaced = true;
		Building->InitializeKismetSpawnedBuildingActor(Building, PC, true);
		Building->TeamIndex = ((AFortPlayerStateAthena *)PC->PlayerState)->TeamIndex;
		Building->Team = EFortTeam(Building->TeamIndex);
		Tool->ServerSpawnDeco(Location, Rotation, Building, InBuildingAttachmentType);
	}

public:
	static void HookFunctions()
	{
		Utils::Hook<AFortPlayerControllerAthena>(uint32(0x230), ServerCreateBuildingActor, ServerCreateBuildingActorOG);
		Utils::Hook<AFortPlayerControllerAthena>(uint32(0x237), ServerBeginEditingBuildingActor);
		Utils::Hook<AFortPlayerControllerAthena>(uint32(0x232), ServerEditBuildingActor);
		Utils::Hook<AFortPlayerControllerAthena>(uint32(0x235), ServerEndEditingBuildingActor);
		Utils::Hook<AFortPlayerControllerAthena>(uint32(0x22c), ServerRepairBuildingActor);
		Utils::Hook<ATrapTool_C>(uint32(0x15a), ServerCreateBuildingAndSpawnDeco);
		Utils::Hook<ATrapTool_ContextTrap_Athena_C>(uint32(0x15a), ServerCreateBuildingAndSpawnDeco);
		Utils::Hook(ImageBase + 0x2d211a0, OnDamageServer, OnDamageServerOG);
	}
};
