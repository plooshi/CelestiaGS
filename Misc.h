#pragma once
#include "pch.h"
#include "LateGame.h"
#include "Bots.h"
#include "Defs.h"
#include "Globals.h"

void InGameHooks();
class Misc
{
	static int GetNetMode()
	{
		return 1;
	}

	static bool IsThereAnywhereToBuildNavigationHook()
	{
		return true;
	}

	static inline void (*InitializeForWorldOG)(UNavigationSystemV1*, UWorld*, uint8);
	static void InitializeForWorldHook(UNavigationSystemV1* NavSystem, UWorld* World, uint8 Mode)
	{
    		NavSystem->bAutoCreateNavigationData = true;
    		return InitializeForWorldOG(NavSystem, World, Mode);
	}

	static inline void (*SetDynamicFoundationEnabledOG)(UObject *, FFrame &);
	static void SetDynamicFoundationEnabled(UObject *Context, FFrame &Stack)
	{
		bool bEnabled;
		Stack.StepCompiledIn(&bEnabled);
		auto Foundation = (ABuildingFoundation *)Context;
		Foundation->DynamicFoundationRepData.EnabledState = bEnabled ? EDynamicFoundationEnabledState::Enabled : EDynamicFoundationEnabledState::Disabled;
		Foundation->OnRep_DynamicFoundationRepData();
		Foundation->FoundationEnabledState = bEnabled ? EDynamicFoundationEnabledState::Enabled : EDynamicFoundationEnabledState::Disabled;
		return SetDynamicFoundationEnabledOG(Context, Stack);
	}

	static inline void (*SetDynamicFoundationTransformOG)(UObject *Context, FFrame &Stack);
	static void SetDynamicFoundationTransform(UObject *Context, FFrame &Stack)
	{
		FTransform Transform;
		Stack.StepCompiledIn(&Transform);

		auto Rotation = Transform.Rotation.Rotator();
		auto Location = Transform.Translation;
		auto Foundation = (ABuildingFoundation *)Context;
		Foundation->DynamicFoundationTransform = Transform;
		Foundation->StreamingData.FoundationLocation = Location;
		Foundation->DynamicFoundationRepData.Rotation = Rotation;
		Foundation->DynamicFoundationRepData.Translation = Location;
		Foundation->OnRep_DynamicFoundationRepData();
		if (Foundation->GetName() == "Fortilla_Foundation_MANG")
		{
			for (auto &World : Foundation->AdditionalWorlds)
			{
				ULevelStreamingDynamic::LoadLevelInstanceBySoftObjectPtr(UWorld::Get(), World, Location, Rotation, nullptr, FString());
			}
		}
		return SetDynamicFoundationTransformOG(Context, Stack);
	}

	static inline void (*StartNewSafeZonePhaseOG)(AFortGameModeAthena *GM, int a2);
	static void StartNewSafeZonePhaseHook(AFortGameModeAthena *GM, int a2)
	{
		auto GameState = AFortGameStateAthena::Get();

		FFortSafeZoneDefinition* SafeZoneDefinition = &GameState->MapInfo->SafeZoneDefinition;
		TArray<float> Durations = *(TArray<float>*)(__int64(SafeZoneDefinition) + 0x1F8);
		TArray<float> HoldDurations = *(TArray<float>*)(__int64(SafeZoneDefinition) + 0x1E8);

		auto DurationSum = 0.f;
		for (auto& _v : Durations) DurationSum += _v;
		if (DurationSum == 0)
		{
			auto GameData = GameState->CurrentPlaylistInfo.BasePlaylist->GameData.Get();

			if (!GameData)
				GameData = Utils::FindObject<UCurveTable>("/Game/Balance/AthenaGameData.AthenaGameData");

			auto ShrinkTime = FName(L"Default.SafeZone.ShrinkTime");
			auto HoldTime = FName(L"Default.SafeZone.WaitTime");

			if (LateGame)
			{
				array<float, 8> LDDurations{
					0.f,
					65.f,
					60.f,
					50.f,
					45.f,
					35.f,
					30.f,
					40.f,
				};

				array<float, 8> LDHDurations{
					0.f,
					60.f + 11.f,
					55.f,
					50.f,
					45.f,
					30.f,
					0.f,
					0.f,
				};

				for (int i = 0; i < Durations.Num(); i++)
				{
					Durations[i] = LDDurations[i];
				}

				for (int i = 0; i < HoldDurations.Num(); i++)
				{
					HoldDurations[i] = LDHDurations[i];
				}
			}
			else
			{
				for (int i = 0; i < Durations.Num(); i++)
				{
					UDataTableFunctionLibrary::EvaluateCurveTableRow(GameData, ShrinkTime, (float) i, nullptr, &Durations[i], FString());
				}
				for (int i = 0; i < HoldDurations.Num(); i++)
				{
					UDataTableFunctionLibrary::EvaluateCurveTableRow(GameData, HoldTime, (float) i, nullptr, &HoldDurations[i], FString());
				}
			}

			if (LateGame)
			{
				GM->SafeZonePhase = 2;
			}
		}

		if ( /* !LateGame &&  */ GM->SafeZonePhase % 2)
		{
			for (auto& PC : GM->AlivePlayers)
			{
				FGameplayTagContainer SourceTags;
				FGameplayTagContainer ContextTags;
				FGameplayTagContainer TargetTags;

				auto QuestManager = PC->GetQuestManager(ESubGame::Athena);

				if (QuestManager)
				{
					QuestManager->GetSourceAndContextTags(&SourceTags, &ContextTags);

					XP::CountMap[PC->Class]++;
					XP::SendStatEvent(QuestManager, nullptr, SourceTags, TargetTags, nullptr, nullptr, XP::CountMap[PC->Class], EFortQuestObjectiveStatEvent::StormPhase);
				}
			}
		}

		auto& Duration = Durations[LateGame ? GM->SafeZonePhase - 2 : GM->SafeZonePhase + 1];
		auto& HoldDuration = HoldDurations[LateGame ? GM->SafeZonePhase - 2 : GM->SafeZonePhase + 1];

		GM->SafeZoneIndicator->SafeZoneStartShrinkTime = UGameplayStatics::GetTimeSeconds(UWorld::Get()) + HoldDuration;
		GM->SafeZoneIndicator->SafeZoneFinishShrinkTime = GM->SafeZoneIndicator->SafeZoneStartShrinkTime + Duration;
		if (DurationSum == 0) {
			GM->SafeZoneIndicator->LastCenter = AFortGameStateAthena::Get()->Aircrafts[0]->FlightInfo.FlightStartLocation;
		}
		StartNewSafeZonePhaseOG(GM, a2);
	}

	static inline __int64 (*ApplyCostOG)(UGameplayAbility *, void *, void *, void *);
	static __int64 ApplyCost(UFortGameplayAbility *GA, void *a2, void *a3, void *a4)
	{
		if (GA->GetName().starts_with("GA_Athena_AppleSun_Passive_C_"))
		{
			auto Def = Utils::FindObject<UFortItemDefinition>("/Game/Athena/Items/Consumables/AppleSun/WID_Athena_AppleSun.WID_Athena_AppleSun");
			auto ASC = GA->GetActivatingAbilityComponent();
			AFortPlayerStateAthena *PS = (AFortPlayerStateAthena *)ASC->GetOwner();
			auto Pawn = PS->GetCurrentPawn();
			AFortPlayerControllerAthena *PC = (AFortPlayerControllerAthena *)Pawn->GetOwner();

			auto Entry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([Def](FFortItemEntry &Entry)
																				{ return Entry.ItemDefinition == Def; });
			Entry->Count -= 1;
			if (Entry->Count <= 0)
			{
				Inventory::Remove(PC, Entry->ItemGuid);
			}
			Inventory::ReplaceEntry(PC, *Entry);
		}
		return ApplyCostOG(GA, a2, a3, a4);
	}

	static void RestartDedicatedSession()
	{
		TerminateProcess(GetCurrentProcess(), 0);
	}

	static void CombinePickup(AFortPickupAthena *Pickup)
	{
		auto CombineTarget = Pickup->PickupLocationData.CombineTarget;
		auto MaxStack = Pickup->PrimaryPickupItemEntry.ItemDefinition->MaxStackSize.GetValue();
		CombineTarget->PrimaryPickupItemEntry.Count += Pickup->PrimaryPickupItemEntry.Count;
		if (CombineTarget->PrimaryPickupItemEntry.Count > MaxStack) {
			auto OriginalCount = CombineTarget->PrimaryPickupItemEntry.Count;
			CombineTarget->PrimaryPickupItemEntry.Count = MaxStack;

			Inventory::SpawnPickup(Pickup->PickupLocationData.LootInitialPosition, Pickup->PrimaryPickupItemEntry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, (AFortPlayerPawn*)Pickup->PickupLocationData.ItemOwner, OriginalCount - MaxStack);
		}
		CombineTarget->OnRep_PrimaryPickupItemEntry();
		Pickup->PickupLocationData.CombineTarget->ForceNetUpdate();

		Pickup->K2_DestroyActor();
	}

	static inline void (*StartAircraftPhaseOG)(AFortGameModeAthena *, char a2);
	static void StartAircraftPhase(AFortGameModeAthena *GM, char a2)
	{
		StartAircraftPhaseOG(GM, a2);

		if (LateGame)
		{
			DestroyAll<AFortPickupAthena>();
			DestroyAll<AFortAthenaVehicle>();

			auto GS = AFortGameStateAthena::Get();
			GS->GamePhase = EAthenaGamePhase::SafeZones;
			GS->GamePhaseStep = EAthenaGamePhaseStep::StormHolding;
			GS->OnRep_GamePhase(EAthenaGamePhase::Aircraft);

			auto Bus = GS->Aircrafts[0];
			Bus->FlightInfo.FlightSpeed = 0.f;
			FVector Loc{ 0, 0, 0 };
			while (Loc.X == 0 && Loc.Y == 0 && Loc.Z == 0)
				Loc = GM->SafeZoneLocations[rand() % (GM->SafeZoneLocations.Num() - 1)];
			Loc.Z = 17500.f;

			Bus->FlightInfo.FlightStartLocation = Loc.Quantize100();

			Bus->FlightInfo.TimeTillFlightEnd = 11.f;
			Bus->FlightInfo.TimeTillDropEnd = 11.f;
			Bus->FlightInfo.TimeTillDropStart = 1.f;
			Bus->FlightStartTime = UGameplayStatics::GetTimeSeconds(UWorld::Get());
			Bus->FlightEndTime = UGameplayStatics::GetTimeSeconds(UWorld::Get()) + 11.f;
			GS->bAircraftIsLocked = false;
			GS->SafeZonesStartTime = UGameplayStatics::GetTimeSeconds(UWorld::Get());
		}
	}

	static inline void (*Athena_MedConsumable_TriggeredOriginal)(UObject *Context, FFrame &Stack);
	static void Athena_MedConsumable_TriggeredHook(UObject *Context, FFrame &Stack)
	{
		UGA_Athena_MedConsumable_Parent_C *Consumable = (UGA_Athena_MedConsumable_Parent_C *)Context;

		if (!Consumable || (!Consumable->HealsShields && !Consumable->HealsHealth) || !Consumable->PlayerPawn)
			return Athena_MedConsumable_TriggeredOriginal(Context, Stack);

		auto Handle = Consumable->PlayerPawn->AbilitySystemComponent->MakeEffectContext();
		FGameplayTag Tag{};
		static auto ShieldCue = FName(L"GameplayCue.Shield.PotionConsumed");
		static auto HealthCue = FName(L"GameplayCue.Athena.Health.HealUsed");
		FName CueName = Consumable->HealsShields ? ShieldCue : HealthCue;
		if (Consumable->HealsHealth && Consumable->HealsShields) {
			if (Consumable->PlayerPawn->GetHealth() + Consumable->HealthHealAmount <= 100) CueName = HealthCue;
		}
		Tag.TagName = CueName;
		Consumable->PlayerPawn->AbilitySystemComponent->NetMulticast_InvokeGameplayCueAdded(Tag, FPredictionKey(), Handle);
		Consumable->PlayerPawn->AbilitySystemComponent->NetMulticast_InvokeGameplayCueExecuted(Tag, FPredictionKey(), Handle);

		return Athena_MedConsumable_TriggeredOriginal(Context, Stack);
	}

private:
	static float GetMaxTickRateHook()
	{
		return 30.f;
	}

	static inline void (*PrimePoolOG)(void *a1, void *Template, UWorld *World);
	static void PrimePool(void *a1, void *Template, UWorld *World)
	{
		return PrimePoolOG(a1, Template, UWorld::Get());
	}

	static inline AActor *(*SpawnBuildingGameplayActorOG)(TSubclassOf<class ABuildingGameplayActor> BGAClass, FTransform& Transform, AActor* Instigator);
	static AActor* SpawnBuildingGameplayActor(TSubclassOf<class ABuildingGameplayActor> BGAClass, FTransform& Transform, class AActor* Instigator)
	{
		if (!Instigator) {
			auto Actor = Utils::SpawnActor<ABuildingGameplayActor>(BGAClass, Transform);
			VirtualFunction<void(AActor*, uint64, AController *, uint64)>(Actor, 0x102)(Actor, 0, nullptr, 1);
			return Actor;
		}
		return SpawnBuildingGameplayActorOG(BGAClass, Transform, Instigator);
	}

	static inline AFortProjectileBase *(*SpawnProjectileOG)(TSubclassOf<AFortProjectileBase> ProjectileClass, AActor* RequestedBy, FVector& SpawnLocation, FRotator& SpawnRotation, FRotator& SpawnDirection, FFortGameplayEffectContainerSpec& EffectContainerSpecToApplyOnHit, FFortGameplayEffectContainerSpec& EffectContainerSpecToApplyOnExplode, bool bUseDefaultPhysics, AActor* HomingTarget, float InitialSpeed, float GravityScale, float ChargePercent);
	static AFortProjectileBase *SpawnProjectile(TSubclassOf<AFortProjectileBase> ProjectileClass, AActor* RequestedBy, FVector& SpawnLocation, FRotator& SpawnRotation, FRotator& SpawnDirection, FFortGameplayEffectContainerSpec& EffectContainerSpecToApplyOnHit, FFortGameplayEffectContainerSpec& EffectContainerSpecToApplyOnExplode, bool bUseDefaultPhysics, AActor* HomingTarget, float InitialSpeed, float GravityScale, float ChargePercent)
	{
		if (!RequestedBy) RequestedBy = AFortGameStateAthena::Get(); // prob scuffed but wtv
		return SpawnProjectileOG(ProjectileClass, RequestedBy, SpawnLocation, SpawnRotation, SpawnDirection, EffectContainerSpecToApplyOnHit, EffectContainerSpecToApplyOnExplode, bUseDefaultPhysics, HomingTarget, InitialSpeed, GravityScale, ChargePercent);
	}

	static inline void (*BlueprintOnInteractOG)(UObject* Object, FFrame& Stack);
	static void BlueprintOnInteract(UObject* Object, FFrame& Stack)
	{
		constexpr static array<uint8_t, 29> CostMap = {
		   0,
		   10,
		   100,
		   150,
		   200,
		   10,
		   100,
		   150,
		   200,
		   10,
		   100,
		   150,
		   200,
		   20,
		   20,
		   20,
		   20,
		   20,
		   20,
		   20,
		   20,
		   20,
		   20,
		   20,
		   20,
		   20,
		   20,
		   20,
		   0 
		};
		AFortPawn* InteractingPawn;
		EInteractionBeingAttempted InteractionBeingAttempted;
		Stack.StepCompiledIn(&InteractingPawn, true);
		Stack.StepCompiledIn(&InteractionBeingAttempted, true);
		auto PC = (AFortPlayerControllerAthena*)InteractingPawn->Controller;
		auto Wumba = (AB_Athena_Wumba_C*)Object;
		static auto UT = Utils::FindObject<UDataTable>("/Game/Items/Datatables/AthenaWumbaData.AthenaWumbaData");
		auto Direction = InteractionBeingAttempted == EInteractionBeingAttempted::SecondInteraction ? EFortWeaponUpgradeDirection::Horizontal : EFortWeaponUpgradeDirection::Vertical;

		auto _Row = UT->Search([PC, Direction](FName& Key, uint8* _Val) { auto Val = (FWeaponUpgradeItemRow*) _Val; return Val->CurrentWeaponDef == PC->MyFortPawn->CurrentWeapon->WeaponData && Val->Direction == Direction; });
		FWeaponUpgradeItemRow* Row = _Row ? (FWeaponUpgradeItemRow*) *_Row : nullptr;
		if (!Row) return BlueprintOnInteractOG(Object, Stack);

		auto WoodCost = CostMap[uint32(Row->WoodCost)];
		auto StoneCost = CostMap[uint32(Row->BrickCost)];
		auto MetalCost = CostMap[uint32(Row->MetalCost)];

		LateGameInternal::Guns Guns;
		auto WoodEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([Guns](FFortItemEntry& Entry)
			{ return Entry.ItemDefinition == Guns.Wood; });
		auto StoneEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([Guns](FFortItemEntry& Entry)
			{ return Entry.ItemDefinition == Guns.Stone; });
		auto MetalEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([Guns](FFortItemEntry& Entry)
			{ return Entry.ItemDefinition == Guns.Metal; });

		WoodEntry->Count -= WoodCost;
		if (WoodEntry->Count <= 0)
			Inventory::Remove(PC, WoodEntry->ItemGuid);
		Inventory::ReplaceEntry(PC, *WoodEntry);

		StoneEntry->Count -= StoneCost;
		if (StoneEntry->Count <= 0)
			Inventory::Remove(PC, StoneEntry->ItemGuid);
		Inventory::ReplaceEntry(PC, *StoneEntry);

		MetalEntry->Count -= MetalCost;
		if (MetalEntry->Count <= 0)
			Inventory::Remove(PC, MetalEntry->ItemGuid);
		Inventory::ReplaceEntry(PC, *MetalEntry);

		auto IE = PC->WorldInventory->Inventory.ReplicatedEntries.Search([PC](FFortItemEntry& Entry)
			{ return Entry.ItemGuid == PC->MyFortPawn->CurrentWeapon->ItemEntryGuid; });
		auto NewItemEntry = Inventory::MakeItemEntry(Row->UpgradedWeaponDef, 1, 0);
		NewItemEntry->LoadedAmmo = IE->LoadedAmmo;
		Inventory::Remove(PC, IE->ItemGuid);
		Inventory::GiveItem(PC, *NewItemEntry);
		return BlueprintOnInteractOG(Object, Stack);
	}

	static inline void (*StreamLevelOverlayOG)(UFortLevelOverlayManager* LevelOverlayManager, UWorld* World, __int64 a3, ULevelStreamingDynamic* LevelStreamingDynamic);
	static void StreamLevelOverlay(UFortLevelOverlayManager* LevelOverlayManager, UWorld* World, __int64 a3, ULevelStreamingDynamic* LevelStreamingDynamic) {
		StreamLevelOverlayOG(LevelOverlayManager, World, a3, LevelStreamingDynamic);
		if (!LevelStreamingDynamic) return;
		static int32 LoadedCount = 0; 
		static AApollo_WaterSetup_C* WaterSetup = nullptr;
		if (!WaterSetup) {
			auto WaterSetups = Utils::GetAll<AApollo_WaterSetup_C>();
			if (WaterSetups.Num() > 0)
				WaterSetup = WaterSetups[0];
			WaterSetups.Free();
		}
		LoadedCount++;

		static int32 RequiredLoadedCount = 0;
		if (RequiredLoadedCount == 0) switch (WaterSetup->CurrentWaterLevel) {
		case 0:
		case 1:
			RequiredLoadedCount = 159;
			break;
		case 2:
		case 3:
			RequiredLoadedCount = 160;
			break;
		case 4:
			RequiredLoadedCount = 157;
			break;
		case 5:
			RequiredLoadedCount = 153;
			break;
		case 6:
		case 7:
			RequiredLoadedCount = 150;
			break;
		}
		if (LoadedCount > RequiredLoadedCount) LoadedCount = 1;
		else if (LoadedCount == RequiredLoadedCount) {

			auto GS = AFortGameStateAthena::Get();
			auto GM = AFortGameModeAthena::Get();
			auto RebootVans = Utils::GetAll<ABuildingGameplayActorSpawnMachine>();
			auto PlayerStarts = Utils::GetAll<AFortPlayerStart>();
			for (auto& Van : RebootVans)
			{
				AFortPlayerStart* ClosestStart = nullptr;
				float ClosestDistance = 0.f;
				for (auto& Start : PlayerStarts)
				{
					auto Distance = Start->K2_GetActorLocation().GetDistanceTo(Van->K2_GetActorLocation());
					if (ClosestStart == nullptr || Distance < ClosestDistance)
					{
						ClosestDistance = Distance;
						ClosestStart = Start;
					}
				}
				Van->ResurrectLocation = ClosestStart;
			}
			PlayerStarts.Free();
			RebootVans.Free();

			Looting::bScuffed = true;
			for (auto& AmmoBoxType : GS->MapInfo->AmmoBoxSpawnInfos)
			{
				auto AmmoBoxes = Utils::GetAll(AmmoBoxType.AmmoBoxClass);
				auto NumToWipe = Utils::EvaluateMinMaxPercent(AmmoBoxType.AmmoBoxMinSpawnPercent, AmmoBoxType.AmmoBoxMaxSpawnPercent, AmmoBoxes.Num());

				for (int i = 0; i < NumToWipe; i++)
				{
					auto ind = rand() % AmmoBoxes.Num();
					AmmoBoxes[ind]->K2_DestroyActor();
				}
				AmmoBoxes.Free();
			}
			for (auto& ChestType : GS->MapInfo->TreasureChestSpawnInfos)
			{
				auto Chests = Utils::GetAll(ChestType.TreasureChestClass);
				auto NumToWipe = Utils::EvaluateMinMaxPercent(ChestType.TreasureChestMinSpawnPercent, ChestType.TreasureChestMaxSpawnPercent, Chests.Num());

				for (int i = 0; i < NumToWipe; i++)
				{
					auto ind = rand() % Chests.Num();
					Chests[ind]->K2_DestroyActor();
				}
				Chests.Free();
			}
			Looting::bScuffed = false;

			auto LlamaMin = GS->MapInfo->LlamaQuantityMin.GetValue();
			auto LlamaMax = GS->MapInfo->LlamaQuantityMax.GetValue();
			auto LlamaCount = UKismetMathLibrary::GetDefaultObj()->RandomIntegerInRange((int)LlamaMin, (int)LlamaMax);

			for (int i = 0; i < LlamaCount; i++) {
				FVector Loc = FVector(0, 0, 0);
				((FVector * (*)(AFortAthenaMapInfo*, FVector*, FVector*, float))(ImageBase + 0x1e4d3a0))(GS->MapInfo, &Loc, new FVector(1, 1, 10000), 100000);

				FRotator Rot{ 0, 0, 0 };
				Rot.Yaw = rand() * 0.010986663f;

				auto Llama = Utils::SpawnActorUnfinished<AFortAthenaSupplyDrop>(GS->MapInfo->LlamaClass, Loc, Rot);

				Utils::FinishSpawnActor(Llama, Llama->FindGroundLocationAt(Loc), Rot);
			}
			Utils::Log("Spawned ", LlamaCount, " loot llamas");

			Looting::SpawnFloorLootForContainer(ATiered_Athena_FloorLoot_Warmup_C::StaticClass());
			Looting::SpawnFloorLootForContainer(ATiered_Athena_FloorLoot_01_C::StaticClass());

			Vehicles::SpawnVehicles();

			auto ConsumableSpawners = Utils::GetAll<ABGAConsumableSpawner>();
			for (auto& Spawner : ConsumableSpawners) {
				Looting::SpawnConsumableActor(Spawner);
			}

			FString Err;
			FURL URL;
			URL.Port = 7777;

			using InitListenType = bool (*)(UNetDriver*, UWorld*, FURL&, bool, FString&);
			using SetWorldType = void (*)(UNetDriver*, UWorld*);

			((InitListenType)InitListen)(UWorld::Get()->NetDriver, UWorld::Get(), URL, false, Err);
			((SetWorldType)SetWorld)(UWorld::Get()->NetDriver, UWorld::Get());
			SetConsoleTitleA("Celestia | Listening");

			InGameHooks();
			GM->bWorldIsReady = true;
		}
	}

	static inline void* (*DispatchRequestOG)(__int64, __int64, __int64);
	static void* DispatchRequestHook(__int64 a1, __int64 a2, __int64 a3)
	{
		return DispatchRequestOG(a1, a2, 3);
	}

public:
	// curl mem funcs
	static void* curlMalloc(size_t size)
	{
		return FMemory::Malloc(size);
	}

	static void* curlRealloc(void* ptr, size_t size)
	{
		return FMemory::Realloc(ptr, size, 0);
	}

	static void* curlCalloc(size_t nmemb, size_t size)
	{
		auto ptr = FMemory::Malloc(size * nmemb);
		if (!ptr) return nullptr;
		__stosb((uint8_t*)ptr, 0, size * nmemb);
		return ptr;
	}

	static char* curlStrdup(const char *str)
	{
		auto sz = strlen(str) + 1;
		auto ptr = FMemory::Malloc<char>(sz);
		if (!ptr) return nullptr;
		strcpy_s(ptr, sz, str);
		return ptr;
	}


public:
	static void HookFunctions()
	{
		Utils::Hook(WorldNetMode, GetNetMode);
		Utils::ExecHook(Utils::FindObject<UFunction>("/Script/FortniteGame.BuildingFoundation.SetDynamicFoundationTransform"), SetDynamicFoundationTransform, SetDynamicFoundationTransformOG);
		Utils::ExecHook(Utils::FindObject<UFunction>("/Script/FortniteGame.BuildingFoundation.SetDynamicFoundationEnabled"), SetDynamicFoundationEnabled, SetDynamicFoundationEnabledOG);
		Utils::Hook(GetMaxTickRate, GetMaxTickRateHook);
		Utils::NullCall(0x1e66e0f);
		Utils::NullCall(0x4a84bd9);
		Utils::NullCall(0x2921384);
		Utils::NullCall(0x1b1bd82);
		Utils::NullCall(0x1fa3ec3);
		Utils::NullCall(0x28f8ddc);
		Utils::NullCall(0x1b5f2fe);
		Utils::NullCall(0x21763b0);
		Utils::NullCall(0x2176244);
		Utils::Hook(ImageBase + 0x1040a00, PrimePool, PrimePoolOG);
		Utils::Hook(ImageBase + 0x5078A10, IsThereAnywhereToBuildNavigationHook);
		Utils::Hook<UAthenaNavSystem>(0x73, InitializeForWorldHook, InitializeForWorldOG);
		Utils::Hook(ImageBase + 0x24e4a60, SpawnBuildingGameplayActor, SpawnBuildingGameplayActorOG);
		Utils::Hook(ImageBase + 0x24e5870, SpawnProjectile, SpawnProjectileOG);
		Utils::Hook(ImageBase + 0x2644ec0, StreamLevelOverlay, StreamLevelOverlayOG);
		Utils::Hook(DispatchRequest, DispatchRequestHook, DispatchRequestOG);

		// hope these functions never get called (we can NOT implement creative)

		Utils::NullExec(Utils::FindObject<UFunction>("/Script/FortniteGame.CreativeQuickbarComponent.ServerAddToQuickBar"));
		Utils::NullExec(Utils::FindObject<UFunction>("/Script/FortniteGame.CreativeQuickbarComponent.ServerAddItemToQuickBar"));
		Utils::NullExec(Utils::FindObject<UFunction>("/Script/FortniteGame.FortPlayerControllerAthena.ServerGiveCreativeItem"));
		Utils::NullExec(Utils::FindObject<UFunction>("/Script/FortniteGame.FortPlayerControllerAthena.ServerAddToCachedPurchased"));
		Utils::NullExec(Utils::FindObject<UFunction>("/Script/FortniteGame.FortPlayerControllerAthena.ServerSpawnCreativeSupplyDrop"));
		Utils::NullExec(Utils::FindObject<UFunction>("/Script/FortniteGame.FortPlayerControllerAthena.ServerSimulateLevelUp"));

		// ExecHook(FindObject<UFunction>("/Game/Athena/Items/Consumables/HappyGhost/Prj_Athena_HappyGhost.Prj_Athena_HappyGhost_C.ReceiveHit"), ReceiveHit, ReceiveHitOG);

		Utils::PatchByte(EncryptionPatch, 0x74);
		Utils::PatchByte(GameSessionPatch, 0x85);
		Utils::PatchByte(ImageBase + 0x2715ef7, 0x85);
		Utils::PatchByte(ImageBase + 0x2715ec0, 0x85);

		auto GSPatch = ImageBase + 0x1ec1718;
		for (int i = 0; i < 18; i++)
			Utils::PatchByte(GSPatch + i, 0x90);
		for (auto &NullFunc : NullFuncs)
			Utils::PatchByte(NullFunc, 0xC3);
		for (auto &RetTrueFunc : RetTrueFuncs)
			Utils::Hook(RetTrueFunc, RetTrue);
	}

	static void HookPost()
	{
		Utils::ExecHook(Utils::FindObject<UFunction>("/Game/Athena/Items/Consumables/Parents/GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.Triggered_4C02BFB04B18D9E79F84848FFE6D2C32"), Athena_MedConsumable_TriggeredHook, Athena_MedConsumable_TriggeredOriginal);
		Utils::Hook(ImageBase + 0x1ed5710, StartAircraftPhase, StartAircraftPhaseOG);
		Utils::Hook(ImageBase + 0x1b1b6e0, ApplyCost, ApplyCostOG);
		Utils::Hook(ImageBase + 0x275e3f0, RestartDedicatedSession);
		Utils::Hook(ImageBase + 0x4f50740, CombinePickup);
		Utils::Hook(StartNewSafeZonePhase, StartNewSafeZonePhaseHook, StartNewSafeZonePhaseOG);

		Utils::PatchU32(ImageBase + 0x262d9e3, 0x2922d59);
		Utils::ExecHook(Utils::FindObject<UFunction>("/Game/Athena/Items/Gameplay/Wumba/B_Athena_Wumba.B_Athena_Wumba_C.BlueprintOnInteract"), BlueprintOnInteract, BlueprintOnInteractOG);
	}
};
