#pragma once
#include "pch.h"
#include "Utils.h"
#include "Inventory.h"
#include "LateGame.h"

class Looting
{
	static inline UDataTable *LootTierData = nullptr;
	static inline UDataTable *LootPackages = nullptr;

public:
	template <typename T>
	static pair<FName, T *> PickWeighted(xmap<FName, T *> &Map, float (*RandFunc)(float))
	{
		float TotalWeight = accumulate(Map.begin(), Map.end(), 0.0f, [&](float acc, const pair<FName, T *> &p)
									   { return acc + p.second->Weight; });
		float RandomNumber = RandFunc(TotalWeight);

		for (auto &Element : Map)
		{
			float Weight = Element.second->Weight;

			if (Weight == 0)
				continue;

			if (RandomNumber <= Weight)
				return Element;

			RandomNumber -= Weight;
		}

		pair<FName, T *> None;
		return None;
	}

	static inline map<FName, FFortLootPackageData *> LPGroupsAll;

private:
	static void SetupLDSForPackage(TArray<FFortItemEntry *> &LDS, SDK::FName Package, int i, FName TierGroup, int WorldLevel = AFortGameStateAthena::Get()->WorldLevel)
	{
		auto GS = AFortGameStateAthena::Get();

		if (!LootPackages)
		{
			LootPackages = GS->CurrentPlaylistInfo.BasePlaylist->LootPackages.Get();
			if (!LootPackages)
				LootPackages = Utils::FindObject<UDataTable>("/Game/Items/Datatables/AthenaLootPackages_Client.AthenaLootPackages_Client");
			if (!LootPackages)
				return;
			for (auto &[Key, Val] : (TMap<FName, FFortLootPackageData *>)LootPackages->RowMap)
			{
				LPGroupsAll[Key] = Val;
			}
			if (auto CompositeTable = LootPackages->Cast<UCompositeDataTable>())
			{
				for (auto &PT : CompositeTable->ParentTables)
				{
					for (auto &[Key, Val] : (TMap<FName, FFortLootPackageData *>)PT->RowMap)
					{
						if (LPGroupsAll.contains(Key) && LPGroupsAll[Key]->Weight <= Val->Weight)
							continue;
						else
							LPGroupsAll[Key] = Val;
					}
				}
			}
		}

		xmap<FName, FFortLootPackageData *> LPGroups;
		for (auto const &[Key, Val] : LPGroupsAll)
		{
			if (Val->LootPackageID == Package && (i != -1 ? Val->LootPackageCategory == i : true) && (WorldLevel >= 0 ? ((Val->MaxWorldLevel >= 0 ? WorldLevel <= Val->MaxWorldLevel : true) && (Val->MinWorldLevel >= 0 ? WorldLevel >= Val->MinWorldLevel : true)) : true))
				LPGroups[Key] = Val;
		}
		if (LPGroups.size() == 0)
			return;

		auto pair = PickWeighted(LPGroups, [](float Total)
								 { return ((float)rand() / 32767) * Total; });
		auto LP = pair.second;
		if (!LP)
			return;
		if (LP->LootPackageCall.Num() > 1)
		{
			for (int i = 0; i < LP->Count; i++)
			{
				SetupLDSForPackage(LDS, FName(LP->LootPackageCall), 0, TierGroup);
			}

			return;
		}

		UFortWorldItemDefinition *ID = (UFortWorldItemDefinition *)LP->ItemDefinition.Get();
		if (!ID)
			return;

		bool found = false;
		for (auto &LD : LDS)
		{
			if (LD->ItemDefinition == ID)
			{
				LD->Count += LP->Count;
				auto MaxStack = (int32) ID->MaxStackSize.GetValue();
				if (LD->Count > MaxStack && Inventory::GetQuickbar(LD->ItemDefinition) == EFortQuickBars::Secondary)
				{
					auto OGCount = LD->Count;
					LD->Count = MaxStack;

					auto IE = Inventory::MakeItemEntry(ID, OGCount - MaxStack, ID->IsA<UBGAConsumableWrapperItemDefinition>() ? 0 : std::clamp(Inventory::GetLevel(ID->LootLevelData), ID->MinLevel, ID->MaxLevel));

					LDS.Add(IE);
				}
				if (Inventory::GetQuickbar(LD->ItemDefinition) == EFortQuickBars::Secondary)
					found = true;
			}
		}

		if (!found && LP->Count > 0)
		{
			auto IE = Inventory::MakeItemEntry(ID, LP->Count, ID->IsA<UBGAConsumableWrapperItemDefinition>() ? 0 : clamp(Inventory::GetLevel(ID->LootLevelData), ID->MinLevel, ID->MaxLevel));
			static auto FlopperDefault = FName(L"Loot_AthenaFlopper_Default");
			static auto FlopperHigh = FName(L"Loot_AthenaFlopper_High");
			static auto FlopperSwampDefault = FName(L"Loot_AthenaFlopper_Swamp_Default");
			static auto FlopperSwampHigh = FName(L"Loot_AthenaFlopper_Swamp_High");
			if (ID->IsA<UFortWeaponRangedItemDefinition>() && !ID->IsStackable() && ID->GetAmmoWorldItemDefinition_BP() && TierGroup != FlopperDefault && TierGroup != FlopperHigh && TierGroup != FlopperSwampDefault && TierGroup != FlopperSwampHigh)
			{
				FFortLootPackageData *Group = nullptr;
				auto AD = ID->GetAmmoWorldItemDefinition_BP();
				static auto AmmoSmall = FName(L"WorldList.AthenaAmmoSmall");
				for (auto const &[Key, Val] : LPGroupsAll)
				{
					if (Val->LootPackageID == AmmoSmall && Val->ItemDefinition == AD)
					{
						Group = Val;
						break;
					}
				}
				if (Group)
				{
					auto IE2 = Inventory::MakeItemEntry(ID->GetAmmoWorldItemDefinition_BP(), Group->Count, 0);
					LDS.Add(IE2);
				}
			}

			LDS.Add(IE);
		}
	}

	static TArray<FFortItemEntry *> ChooseLootForContainer(FName TG, int LootTier = -1, int WorldLevel = AFortGameStateAthena::Get()->WorldLevel)
	{
		static map<FName, FFortLootTierData *> LTDGroupsAll;
		auto GS = AFortGameStateAthena::Get();
		if (!LootTierData)
		{
			LootTierData = GS->CurrentPlaylistInfo.BasePlaylist->LootTierData.Get();
			if (!LootTierData)
				LootTierData = Utils::FindObject<UDataTable>("/Game/Items/Datatables/AthenaLootTierData_Client.AthenaLootTierData_Client");
			if (!LootTierData)
				return {};
			for (auto &[Key, Val] : (TMap<FName, FFortLootTierData *>)LootTierData->RowMap)
			{
				LTDGroupsAll[Key] = Val;
			}
			if (auto CompositeTable = LootTierData->Cast<UCompositeDataTable>())
			{
				for (auto &PT : CompositeTable->ParentTables)
				{
					for (auto &[Key, Val] : (TMap<FName, FFortLootTierData *>)PT->RowMap)
					{
						if (LTDGroupsAll.contains(Key) && LTDGroupsAll[Key]->Weight <= Val->Weight)
							continue;
						else
							LTDGroupsAll[Key] = Val;
					}
				}
			}
		}

		xmap<FName, FFortLootTierData *> LTDGroups;
		for (auto const &[Key, Val] : LTDGroupsAll)
		{
			if (Val->TierGroup == TG && (LootTier == -1 ? true : LootTier == Val->LootTier))
				LTDGroups[Key] = Val;
		}
		auto pair = PickWeighted(LTDGroups, [](float Total)
								 { return ((float)rand() / 32767) * Total; });
		auto LTD = pair.second;
		if (!LTD)
			return {};

		float LDCount = 0;
		if (LTD->NumLootPackageDrops > 0)
		{
			LDCount = LTD->NumLootPackageDrops < 1 ? 1 : (float)((int)((LTD->NumLootPackageDrops * 2) - .5f) >> 1);
			if (LTD->NumLootPackageDrops > 1)
			{
				float idk = LTD->NumLootPackageDrops - LDCount;
				if (idk > 0.0000099999997f)
					LDCount += idk >= ((float)rand() / 32767);
			}
		}

		float AmLD = 0;
		float MinLD = 0;

		for (auto &M : LTD->LootPackageCategoryMinArray)
			MinLD += M;

		int sum = 0;

		for (int i = 0; i < LTD->LootPackageCategoryWeightArray.Num(); ++i)
		{
			if (LTD->LootPackageCategoryWeightArray[i] > 0 && LTD->LootPackageCategoryMaxArray[i] != 0)
				sum += LTD->LootPackageCategoryWeightArray[i];
		}

		while (sum > 0)
		{
			MinLD++;

			if (MinLD >= LTD->NumLootPackageDrops)
			{
				AmLD = MinLD;
				break;
			}

			sum--;
		}

		if (!AmLD)
			AmLD = MinLD;
		TArray<FFortItemEntry *> LDS;

		for (int i = 0; i < AmLD && i < LTD->LootPackageCategoryMinArray.Num(); i++)
		{
			for (int j = 0; j < LTD->LootPackageCategoryMinArray[i] && LTD->LootPackageCategoryMinArray[i] >= 1; j++)
			{
				SetupLDSForPackage(LDS, LTD->LootPackage, i, TG, WorldLevel);
			}
		}

		return LDS;
	}

	static void SpawnLoot(FName &TG, FVector Loc, EFortPickupSourceTypeFlag ST = EFortPickupSourceTypeFlag::Tossed, EFortPickupSpawnSource SS = EFortPickupSpawnSource::Unset)
	{
		auto &RTG = TG;
		for (auto &[TierGroup, Redirect] : AFortGameModeAthena::Get()->RedirectAthenaLootTierGroups)
		{
			if (TierGroup == TG)
			{
				RTG = Redirect;
				break;
			}
		}
		auto LDS = ChooseLootForContainer(RTG);
		for (auto &LD : LDS)
			Inventory::SpawnPickup(Loc, *LD, ST, SS);
	}
	static void SpawnLoot(ABuildingContainer *Container)
	{
		auto &RTG = Container->SearchLootTierGroup;
		for (auto &[TierGroup, Redirect] : AFortGameModeAthena::Get()->RedirectAthenaLootTierGroups)
		{
			if (TierGroup == Container->SearchLootTierGroup)
			{
				RTG = Redirect;
				break;
			}
		}
		auto LDS = ChooseLootForContainer(RTG);
		EFortPickupSpawnSource SS = EFortPickupSpawnSource::Unset;
		if (Container->IsA<ATiered_Ammo_Athena_C>())
			SS = EFortPickupSpawnSource::AmmoBox;
		else if (Container->IsA<ATiered_Chest_Athena_C>())
			SS = EFortPickupSpawnSource::Chest;
		for (auto &LD : LDS)
			Inventory::SpawnPickup(Container, *LD, Container->IsA<ATiered_Ammo_Athena_C>() || Container->IsA<ATiered_Chest_Athena_C>() ? EFortPickupSourceTypeFlag::Container : EFortPickupSourceTypeFlag::FloorLoot, SS);
	}

public:
	static void SpawnFloorLootForContainer(UClass *ContainerType)
	{
		auto Containers = Utils::GetAll<ABuildingContainer>(ContainerType);

		for (auto &BCContainer : Containers)
		{
			//SpawnLoot(BCContainer->SearchLootTierGroup, BCContainer->K2_GetActorLocation() + BCContainer->GetActorForwardVector() * BCContainer->LootSpawnLocation_Athena.X + BCContainer->GetActorRightVector() * BCContainer->LootSpawnLocation_Athena.Y + BCContainer->GetActorUpVector() * BCContainer->LootSpawnLocation_Athena.Z);
			BCContainer->K2_DestroyActor();
		}

		Containers.Free();
		Utils::Log("Spawned floor loot for container " + ContainerType->GetName());
	}

private:
	static inline bool (*PickLootDropsOG)(UObject* Object, FFrame& Stack, bool* Ret);
	static bool PickLootDrops(UObject* Object, FFrame& Stack, bool* Ret) {
		UObject *WorldContextObject;
		TArray<FFortItemEntry> OutLootToDrop_;
		FName TierGroupName;
		int32 WorldLevel;
		int32 ForcedLootTier;

		Stack.StepCompiledIn(&WorldContextObject);
		auto& OutLootToDrop = Stack.StepCompiledInRef<TArray<FFortItemEntry>>();
		Stack.StepCompiledIn(&TierGroupName);
		Stack.StepCompiledIn(&WorldLevel);
		Stack.StepCompiledIn(&ForcedLootTier);

		auto LDS = ChooseLootForContainer(TierGroupName, ForcedLootTier, WorldLevel);
		for (int32 i = 0; i < LDS.Num(); i++)
		{
			OutLootToDrop.Add(*LDS[i]);
		}
		PickLootDropsOG(Object, Stack, Ret);
		*Ret = true;
		return *Ret;
	
	}

	static inline AFortPickup *(*SpawnPickupOG)(UObject* Object, FFrame& Stack, AFortPickup **Ret);
	static AFortPickup* SpawnPickup(UObject* Object, FFrame& Stack, AFortPickup** Ret) {
		UFortWorldItemDefinition *ItemDefinition;
		int32 NumberToSpawn;
		AFortPawn *TriggeringPawn;
		FVector Position;
		FVector Direction;
		Stack.StepCompiledIn(&ItemDefinition);
		Stack.StepCompiledIn(&NumberToSpawn);
		Stack.StepCompiledIn(&TriggeringPawn);
		Stack.StepCompiledIn(&Position);
		Stack.StepCompiledIn(&Direction);

		auto Pickup = Inventory::SpawnPickup(Position, ItemDefinition, NumberToSpawn, ItemDefinition->IsA<UFortWeaponItemDefinition>() ? Inventory::GetStats((UFortWeaponItemDefinition *) ItemDefinition)->ClipSize : 0, EFortPickupSourceTypeFlag::Other, EFortPickupSpawnSource::SupplyDrop);
		SpawnPickupOG(Object, Stack, Ret);
		if (Pickup)
			*Ret = Pickup;
		return *Ret;
	}

public:
	static inline bool bScuffed = false;

private:
	static bool SpawnLootHook(ABuildingContainer *BuildingContainer)
	{
		if (AFortGameStateAthena::Get()->GamePhase > EAthenaGamePhase::Aircraft && LateGame)
			return true;
		if (!bScuffed)
		{
			SpawnLoot(BuildingContainer);

			BuildingContainer->bAlreadySearched = true;
			BuildingContainer->OnRep_bAlreadySearched();
			BuildingContainer->SearchBounceData.SearchAnimationCount++;
			BuildingContainer->BounceContainer();
		}

		return true;
	}

	static inline AFortPickup* (*K2_SpawnPickupInWorldOG)(UObject* Object, FFrame& Stack, AFortPickup **Ret);
	static AFortPickup* K2_SpawnPickupInWorld(UObject* Object, FFrame& Stack, AFortPickup **Ret) {
		class UObject* WorldContextObject;
		class UFortWorldItemDefinition* ItemDefinition;
		int32 NumberToSpawn;
		FVector Position;
		FVector Direction;
		int32 OverrideMaxStackCount;
		bool bToss;
		bool bRandomRotation;
		bool bBlockedFromAutoPickup;
		int32 PickupInstigatorHandle;
		EFortPickupSourceTypeFlag SourceType;
		EFortPickupSpawnSource Source;
		class AFortPlayerController* OptionalOwnerPC;
		bool bPickupOnlyRelevantToOwner;

		Stack.StepCompiledIn(&WorldContextObject);
		Stack.StepCompiledIn(&ItemDefinition);
		Stack.StepCompiledIn(&NumberToSpawn);
		Stack.StepCompiledIn(&Position);
		Stack.StepCompiledIn(&Direction);
		Stack.StepCompiledIn(&OverrideMaxStackCount);
		Stack.StepCompiledIn(&bToss);
		Stack.StepCompiledIn(&bRandomRotation);
		Stack.StepCompiledIn(&bBlockedFromAutoPickup);
		Stack.StepCompiledIn(&PickupInstigatorHandle);
		Stack.StepCompiledIn(&SourceType);
		Stack.StepCompiledIn(&Source);
		Stack.StepCompiledIn(&OptionalOwnerPC);
		Stack.StepCompiledIn(&bPickupOnlyRelevantToOwner);

		auto Pickup = Inventory::SpawnPickup(Position, ItemDefinition, NumberToSpawn, 0, SourceType, Source, OptionalOwnerPC ? OptionalOwnerPC->MyFortPawn : nullptr, bToss, bRandomRotation);
		K2_SpawnPickupInWorldOG(Object, Stack, Ret);
		if (Pickup)
			*Ret = Pickup;
		return *Ret;
	}

	static inline AFortPickup* (*SpawnItemVariantPickupInWorldOG)(UObject* Object, FFrame& Stack, AFortPickup** Ret);
	static AFortPickup* SpawnItemVariantPickupInWorld(UObject* Object, FFrame& Stack, AFortPickup** Ret) {
		UObject *WorldContextObject;
		FSpawnItemVariantParams Params;
		Stack.StepCompiledIn(&WorldContextObject);
		Stack.StepCompiledIn(&Params);

		auto Pickup = Inventory::SpawnPickup(Params.Position, Params.WorldItemDefinition, Params.NumberToSpawn, 0, Params.SourceType, Params.Source, nullptr, Params.bToss, Params.bRandomRotation);
		SpawnItemVariantPickupInWorldOG(Object, Stack, Ret);
		if (Pickup)
			*Ret = Pickup;
		return *Ret;
	}

public:
	static void SpawnConsumableActor(ABGAConsumableSpawner* Spawner) {
		auto LootDrops = ChooseLootForContainer(Spawner->SpawnLootTierGroup);
		if (LootDrops.Num() == 0)
			return;
		auto ItemDefinition = (UBGAConsumableWrapperItemDefinition*)LootDrops[0]->ItemDefinition;

		float AmmoSpawnMin = ItemDefinition->MinNumberConsumablesToSpawn.GetValue(), AmmoSpawnMax = ItemDefinition->MaxNumberConsumablesToSpawn.GetValue();
		auto NumToSpawn = AmmoSpawnMin + (rand() % (int)(AmmoSpawnMax - AmmoSpawnMin));
		FHitResult HitResult;
		UKismetSystemLibrary::LineTraceSingle(UWorld::Get(), Spawner->K2_GetActorLocation(), Spawner->K2_GetActorLocation() - FVector(0, 0, 1000), ETraceTypeQuery::TraceTypeQuery1, true, TArray<AActor*>(), EDrawDebugTrace::None, &HitResult, true, FLinearColor(), FLinearColor(), 0.f); // move to ground
		auto ValidLoc = HitResult.Location.X || HitResult.Location.Y || HitResult.Location.Z;
		auto SpawnTransform = FTransform(ValidLoc ? HitResult.Location : Spawner->K2_GetActorLocation(), Spawner->K2_GetActorRotation());
		Utils::SpawnActor(ItemDefinition->ConsumableClass, SpawnTransform);
	}

public:
	static void HookFunctions()
	{
		Utils::Hook(ImageBase + 0x213e180, SpawnLootHook);
		Utils::ExecHook(Utils::FindObject<UFunction>("/Script/FortniteGame.FortKismetLibrary.PickLootDrops"), PickLootDrops, PickLootDropsOG);
	}

	static void HookPost()
	{
		//Utils::Hook(ImageBase + 0x91da70, PickLootDrops);
		Utils::ExecHook(Utils::FindObject<UFunction>("/Script/FortniteGame.FortAthenaSupplyDrop.SpawnPickup"), SpawnPickup, SpawnPickupOG);
		Utils::ExecHook(Utils::FindObject<UFunction>("/Script/FortniteGame.FortKismetLibrary.K2_SpawnPickupInWorld"), K2_SpawnPickupInWorld, K2_SpawnPickupInWorldOG);
		Utils::ExecHook(Utils::FindObject<UFunction>("/Script/FortniteGame.FortKismetLibrary.SpawnItemVariantPickupInWorld"), SpawnItemVariantPickupInWorld, SpawnItemVariantPickupInWorldOG);
	}
};