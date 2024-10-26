#pragma once
#include "pch.h"

class Inventory
{
public:
	static FFortRangedWeaponStats *GetStats(UFortWeaponItemDefinition *Def)
	{
		if (!Def || !Def->WeaponStatHandle.DataTable)
			return nullptr;

		auto StatsPP = Def->WeaponStatHandle.DataTable->Search([Def](FName &Key, uint8_t *Value)
															   { return Def->WeaponStatHandle.RowName == Key && Value; });

		return StatsPP ? *(FFortRangedWeaponStats **)StatsPP : nullptr;
	}

	static int GetLevel(const FDataTableCategoryHandle& categoryh)
	{
		auto GS = AFortGameStateAthena::Get();
		auto DataTable = categoryh.DataTable;

		if (!DataTable)
			return 0;

		if (!categoryh.ColumnName.ComparisonIndex)
			return 0;

		if (!categoryh.RowContents.ComparisonIndex)
			return 0;

		TArray<FFortLootLevelData*> lldata;

		for (auto& LootLevelDataPair : (TMap<FName, FFortLootLevelData*>)categoryh.DataTable->RowMap)
		{
			if (LootLevelDataPair.Value()->Category != categoryh.RowContents)
				continue;

			lldata.Add(LootLevelDataPair.Value());
		}

		if (lldata.Num() > 0)
		{
			int ind = -1;
			int ll = 0;

			for (int i = 0; i < lldata.Num(); i++)
			{
				if (lldata[i]->LootLevel <= GS->WorldLevel && lldata[i]->LootLevel > ll)
				{
					ll = lldata[i]->LootLevel;
					ind = i;
				}
			}

			if (ind != -1)
			{
				auto subbed = lldata[ind]->MaxItemLevel - lldata[ind]->MinItemLevel;

				if (subbed <= -1)
					subbed = 0;
				else
				{
					auto calc = (int)(((float)rand() / 32767) * (float)(subbed + 1));
					if (calc <= subbed)
						subbed = calc;
				}

				return subbed + lldata[ind]->MinItemLevel;
			}
		}

		return 0;
	}

	static FFortItemEntry *MakeItemEntry(UFortWorldItemDefinition *ID, int32 Count, int32 Level)
	{
		FFortItemEntry *IE = new FFortItemEntry();

		IE->MostRecentArrayReplicationKey = -1;
		IE->ReplicationID = -1;
		IE->ReplicationKey = -1;

		IE->ItemDefinition = ID;
		IE->Count = Count;
		IE->LoadedAmmo = ID->IsA<UFortWeaponItemDefinition>() ? GetStats((UFortWeaponItemDefinition *)ID)->ClipSize : 0;
		IE->Durability = 1.f;
		IE->GameplayAbilitySpecHandle = FGameplayAbilitySpecHandle(-1);
		IE->ParentInventory.ObjectIndex = -1;
		IE->Level = Level;

		return IE;
	}

	static AFortPickupAthena *SpawnPickup(FVector Loc, FFortItemEntry &Entry, EFortPickupSourceTypeFlag SourceTypeFlag = EFortPickupSourceTypeFlag::Tossed, EFortPickupSpawnSource SpawnSource = EFortPickupSpawnSource::Unset, AFortPlayerPawn *Pawn = nullptr, int OverrideCount = -1, bool Toss = true, bool RandomRotation = true, bool bCombine = true)
	{
		if (!&Entry)
			return nullptr;
		static auto PetrolLauncher = Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/Prototype/WID_Launcher_Petrol.WID_Launcher_Petrol");
		if (Entry.ItemDefinition == PetrolLauncher)
		{
			static auto BGA = Utils::FindObject<UBlueprintGeneratedClass>("/Game/Athena/Items/Weapons/Prototype/PetrolPump/BGA_Petrol_Pickup.BGA_Petrol_Pickup_C");
			Utils::SpawnActor(BGA, Loc, {});
			return nullptr;
		}
		AFortPickupAthena *NewPickup = Utils::SpawnActor<AFortPickupAthena>(Loc, {});
		if (!NewPickup)
			return nullptr;
		NewPickup->bRandomRotation = RandomRotation;
		((FVector * (*)(AFortPickup *, FFortItemEntry *, TArray<FFortItemEntry>, bool))(ImageBase + 0x262adc0))(NewPickup, &Entry, TArray<FFortItemEntry>(), false);
		NewPickup->PrimaryPickupItemEntry.Count = OverrideCount != -1 ? OverrideCount : Entry.Count;
		NewPickup->OnRep_PrimaryPickupItemEntry();
		NewPickup->PawnWhoDroppedPickup = Pawn;

		auto Pickups = Utils::GetAll<AFortPickupAthena>();
		auto MaxStack = (int32) NewPickup->PrimaryPickupItemEntry.ItemDefinition->MaxStackSize.GetValue();
		if (bCombine && NewPickup->PrimaryPickupItemEntry.Count < MaxStack) for (auto &Pickup : Pickups)
		{
			if (Pickup->PrimaryPickupItemEntry.ItemDefinition == Entry.ItemDefinition && Pickup->GetDistanceTo(NewPickup) <= 500.f && !Pickup->bPickedUp && Pickup->PrimaryPickupItemEntry.ItemDefinition->IsStackable() && Pickup->PrimaryPickupItemEntry.Count < MaxStack && NewPickup != Pickup && UFortKismetLibrary::CheckLineOfSightToActor(Loc, Pickup, NewPickup))
			{
				NewPickup->PickupLocationData.CombineTarget = Pickup;
				break;
			}
		}
		Pickups.Free();
		if (NewPickup->PickupLocationData.CombineTarget)
		{
			NewPickup->PickupLocationData.LootInitialPosition = Loc.Quantize10();
			NewPickup->PickupLocationData.LootFinalPosition = NewPickup->PickupLocationData.CombineTarget->K2_GetActorLocation().Quantize10();
			NewPickup->PickupLocationData.FlyTime = NewPickup->PickupLocationData.CombineTarget->GetDistanceTo(NewPickup) / 1000.f;
			NewPickup->PickupLocationData.ItemOwner = Pawn;
			NewPickup->PickupLocationData.FinalTossRestLocation = NewPickup->PickupLocationData.CombineTarget->K2_GetActorLocation().Quantize10();
			NewPickup->OnRep_PickupLocationData();
		}
		else
		{
			NewPickup->TossPickup(Loc, Pawn, -1, Toss, true, SourceTypeFlag, SpawnSource);
			NewPickup->bTossedFromContainer = SpawnSource == EFortPickupSpawnSource::Chest || SpawnSource == EFortPickupSpawnSource::AmmoBox;
			if (NewPickup->bTossedFromContainer)
				NewPickup->OnRep_TossedFromContainer();
		}

		return NewPickup;
	}

	static AFortPickupAthena *SpawnPickup(ABuildingContainer *Container, FFortItemEntry &Entry, EFortPickupSourceTypeFlag SourceTypeFlag = EFortPickupSourceTypeFlag::Tossed, EFortPickupSpawnSource SpawnSource = EFortPickupSpawnSource::Unset, AFortPlayerPawn *Pawn = nullptr, int OverrideCount = -1, bool Toss = true)
	{
		if (!&Entry)
			return nullptr;
		AFortPickupAthena *NewPickup = Utils::SpawnActor<AFortPickupAthena>(Container->K2_GetActorLocation() + Container->GetActorForwardVector() * Container->LootSpawnLocation_Athena.X + Container->GetActorRightVector() * Container->LootSpawnLocation_Athena.Y + Container->GetActorUpVector() * Container->LootSpawnLocation_Athena.Z, {});
		if (!NewPickup)
			return nullptr;
		NewPickup->bRandomRotation = true;
		((FVector * (*)(AFortPickup *, FFortItemEntry *, TArray<FFortItemEntry>, bool))(ImageBase + 0x262adc0))(NewPickup, &Entry, TArray<FFortItemEntry>(), false);
		NewPickup->PrimaryPickupItemEntry.Count = OverrideCount != -1 ? OverrideCount : Entry.Count;
		NewPickup->OnRep_PrimaryPickupItemEntry();
		NewPickup->PawnWhoDroppedPickup = Pawn;
		auto bFloorLoot = Container->IsA<ATiered_Athena_FloorLoot_01_C>() || Container->IsA<ATiered_Athena_FloorLoot_Warmup_C>();
		UFortKismetLibrary::TossPickupFromContainer(UWorld::Get(), Container, NewPickup, 1, 0, Container->LootTossConeHalfAngle_Athena, Container->LootTossDirection_Athena, Container->LootTossSpeed_Athena, false);
		NewPickup->bTossedFromContainer = true;
		NewPickup->OnRep_TossedFromContainer();

		return NewPickup;
	}

	static AFortPickupAthena *SpawnPickup(FVector Loc, UFortItemDefinition *Def, int Count, int LoadedAmmo, EFortPickupSourceTypeFlag SourceTypeFlag = EFortPickupSourceTypeFlag::Tossed, EFortPickupSpawnSource SpawnSource = EFortPickupSpawnSource::Unset, AFortPlayerPawn *Pawn = nullptr, bool Toss = true, bool RandomRotation = true, bool bCombine = true)
	{
		auto WorldDef = (UFortWorldItemDefinition*)Def;
		auto entry = MakeItemEntry(WorldDef, Count, clamp(Inventory::GetLevel(WorldDef->LootLevelData), WorldDef->MinLevel, WorldDef->MaxLevel));

		return SpawnPickup(Loc, *entry, SourceTypeFlag, SpawnSource, Pawn, Count, Toss, RandomRotation, bCombine);
	}

	static void TriggerInventoryUpdate(AFortPlayerController *PC, FFortItemEntry *Entry)
	{
		AFortInventory *Inventory;
		if (auto Bot = PC->Cast<AFortAthenaAIBotController>())
		{
			Inventory = Bot->Inventory;
		}
		else
		{
			Inventory = PC->WorldInventory;
		}
		if (!PC)
			return;
		Inventory->bRequiresLocalUpdate = true;
		Inventory->HandleInventoryLocalUpdate();

		return Entry ? Inventory->Inventory.MarkItemDirty(*Entry) : Inventory->Inventory.MarkArrayDirty();
	}

	static UFortWorldItem *GiveItem(AFortPlayerController *PC, UFortItemDefinition *Def, int Count = 1, int LoadedAmmo = 0, int Level = 0, bool ShowPickupNoti = true, bool updateInventory = true)
	{
		if (!PC || !Def)
			return nullptr;
		UFortWorldItem *Item = (UFortWorldItem *)Def->CreateTemporaryItemInstanceBP(Count, Level);
		Item->SetOwningControllerForTemporaryItem(PC);
		Item->ItemEntry.LoadedAmmo = LoadedAmmo;
		if (auto Weapon = Def->Cast<UFortWeaponItemDefinition>())
		{
			auto Stats = GetStats(Weapon);
			if (Weapon->bUsesPhantomReserveAmmo)
				Item->ItemEntry.PhantomReserveAmmo = Stats->InitialClips - Stats->ClipSize;
		}

		if (Def->IsA<UFortAmmoItemDefinition>() || Def->IsA<UFortResourceItemDefinition>())
		{
			FFortItemEntryStateValue Value{};
			Value.IntValue = ShowPickupNoti;
			Value.StateType = EFortItemEntryState::ShouldShowItemToast;
			Item->ItemEntry.StateValues.Add(Value);
		}

		auto& IE = PC->WorldInventory->Inventory.ReplicatedEntries.Add(Item->ItemEntry);
		auto II = PC->WorldInventory->Inventory.ItemInstances.Add(Item);

		if (auto Gadget = Def->Cast<UFortGadgetItemDefinition>())
		{
			((bool(*)(UFortGadgetItemDefinition*, IInterface*, UFortWorldItem*, uint8)) (ImageBase + 0x22f3c70))(Gadget, Utils::GetInterface<IFortInventoryOwnerInterface>(PC), Item, 1);
		}
		if (updateInventory)
			TriggerInventoryUpdate(PC, &Item->ItemEntry);
		return Item;
	}

	static UFortWorldItem *GiveItem(AFortPlayerController *PC, FFortItemEntry entry, int Count = -1, bool ShowPickupNoti = true, bool updateInventory = true)
	{
		if (Count == -1)
			Count = entry.Count;
		return GiveItem(PC, entry.ItemDefinition, Count, entry.LoadedAmmo, entry.Level, ShowPickupNoti, updateInventory);
	}

	static void ReplaceEntry(AFortPlayerController *PC, FFortItemEntry &Entry)
	{
		FFortItemList *Inventory;
		if (auto Bot = PC->Cast<AFortAthenaAIBotController>())
		{
			Inventory = &Bot->Inventory->Inventory;
		}
		else
		{
			Inventory = &PC->WorldInventory->Inventory;
		}
		if (!PC)
			return;
		auto ent = Inventory->ItemInstances.Search([Entry](UFortWorldItem *item)
												   { return item->ItemEntry.ItemGuid == Entry.ItemGuid; });
		if (ent)
			(*ent)->ItemEntry = Entry;

		TriggerInventoryUpdate(PC, &Entry);
	}

	static EFortQuickBars GetQuickbar(UFortItemDefinition *Def)
	{
		return Def->IsA<UFortWeaponMeleeItemDefinition>() || Def->IsA<UFortResourceItemDefinition>() || Def->IsA<UFortAmmoItemDefinition>() || Def->IsA<UFortTrapItemDefinition>() || Def->IsA<UFortBuildingItemDefinition>() || Def->IsA<UFortEditToolItemDefinition>() || ((UFortWorldItemDefinition *) Def)->bForceIntoOverflow ? EFortQuickBars::Secondary : EFortQuickBars::Primary;
	}

	static void SwapEntry(AFortPlayerController *PC, FFortItemEntry &Entry, FFortItemEntry &NewEntry)
	{
		if (!PC)
			return;
		auto ent = PC->WorldInventory->Inventory.ItemInstances.Search([Entry](UFortWorldItem *item)
																	  { return item->ItemEntry.ItemGuid == Entry.ItemGuid; });
		auto ent2 = PC->WorldInventory->Inventory.ReplicatedEntries.Search([Entry](FFortItemEntry &item)
																		   { return item.ItemGuid == Entry.ItemGuid; });
		if (!ent || !ent2)
			return;
		(*ent)->ItemEntry = NewEntry;
		*ent2 = NewEntry;

		TriggerInventoryUpdate(PC, &NewEntry);
		PC->ServerExecuteInventoryItem(NewEntry.ItemGuid);
		PC->ClientEquipItem(NewEntry.ItemGuid, true);
	}

	static void Remove(AFortPlayerController *PC, FGuid Guid)
	{
		FFortItemList *Inventory;
		if (auto Bot = PC->Cast<AFortAthenaAIBotController>())
		{
			Inventory = &Bot->Inventory->Inventory;
		}
		else
		{
			Inventory = &PC->WorldInventory->Inventory;
		}
		if (!PC)
			return;
		auto entry = Inventory->ReplicatedEntries.SearchIndex([Guid](FFortItemEntry &entry)
															  { return entry.ItemGuid == Guid; });
		if (entry != -1)
			Inventory->ReplicatedEntries.Remove(entry);
		auto item = Inventory->ItemInstances.SearchIndex([Guid](UFortWorldItem *entry)
														 { return entry->ItemEntry.ItemGuid == Guid; });
		auto ItemInstance = Inventory->ItemInstances.Search([Guid](UFortWorldItem* entry)
			{ return entry->ItemEntry.ItemGuid == Guid; });
		auto Instance = ItemInstance ? *ItemInstance : nullptr;
		if (item != -1) {
			Inventory->ItemInstances.Remove(item);
		}

		TriggerInventoryUpdate(PC, nullptr);
		if (Instance) {
			if (auto Gadget = Instance->ItemEntry.ItemDefinition->Cast<UFortGadgetItemDefinition>())
			{
				((bool(*)(UFortGadgetItemDefinition*, IInterface*, UFortWorldItem*)) (ImageBase + 0x22f3d30))(Gadget, Utils::GetInterface<IFortInventoryOwnerInterface>(PC), Instance);
			}
		}
	}

public:
	static void InternalPickup(AFortPlayerControllerAthena* PC, FFortItemEntry& PickupEntry)
	{
		auto MaxStack = (int32) PickupEntry.ItemDefinition->MaxStackSize.GetValue();
		int ItemCount = 0;
		for (auto& Item : PC->WorldInventory->Inventory.ReplicatedEntries)
		{
			if (Inventory::GetQuickbar(Item.ItemDefinition) == EFortQuickBars::Primary)
				ItemCount += ((UFortWorldItemDefinition*)Item.ItemDefinition)->NumberOfSlotsToTake;
		}
		auto GiveOrSwap = [PC, ItemCount, PickupEntry]() {
			if (ItemCount == 5 && GetQuickbar(PickupEntry.ItemDefinition) == EFortQuickBars::Primary) {
				if (GetQuickbar(PC->MyFortPawn->CurrentWeapon->WeaponData) == EFortQuickBars::Primary) {
					auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([PC](FFortItemEntry& entry)
						{ return entry.ItemGuid == PC->MyFortPawn->CurrentWeapon->ItemEntryGuid; });
					Inventory::SpawnPickup(PC->GetViewTarget()->K2_GetActorLocation(), *itemEntry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PC->MyFortPawn);
					Remove(PC, PC->MyFortPawn->CurrentWeapon->ItemEntryGuid);
					Inventory::GiveItem(PC, PickupEntry, PickupEntry.Count, true);
				}
				else {
					Inventory::SpawnPickup(PC->GetViewTarget()->K2_GetActorLocation(), (FFortItemEntry&)PickupEntry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PC->MyFortPawn);
				}
			}
			else
				Inventory::GiveItem(PC, PickupEntry, PickupEntry.Count, true);
		};
		auto GiveOrSwapStack = [PC, MaxStack, PickupEntry, ItemCount](int32 OriginalCount) {
			if (PickupEntry.ItemDefinition->bAllowMultipleStacks && ItemCount < 5)
				Inventory::GiveItem(PC, PickupEntry, OriginalCount - MaxStack, true);
			else
				Inventory::SpawnPickup(PC->GetViewTarget()->K2_GetActorLocation(), (FFortItemEntry&)PickupEntry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PC->MyFortPawn, OriginalCount - MaxStack);
		};
		if (PickupEntry.ItemDefinition->IsStackable()) {
			auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([PickupEntry, MaxStack](FFortItemEntry& entry)
				{ return entry.ItemDefinition == PickupEntry.ItemDefinition && entry.Count < MaxStack; });
			if (itemEntry) {
				auto State = itemEntry->StateValues.Search([](FFortItemEntryStateValue& Value)
					{ return Value.StateType == EFortItemEntryState::ShouldShowItemToast; });
				if (!State) {
					FFortItemEntryStateValue Value{};
					Value.StateType = EFortItemEntryState::ShouldShowItemToast;
					Value.IntValue = true;
					itemEntry->StateValues.Add(Value);
				}
				else State->IntValue = true;

				if ((itemEntry->Count += PickupEntry.Count) > MaxStack) {
					auto OriginalCount = itemEntry->Count;
					itemEntry->Count = MaxStack;

					GiveOrSwapStack(OriginalCount);
				}
				Inventory::ReplaceEntry(PC, *itemEntry);
			}
			else {
				if (PickupEntry.Count > MaxStack) {
					auto OriginalCount = PickupEntry.Count;
					PickupEntry.Count = MaxStack;

					GiveOrSwapStack(OriginalCount);
				}
				GiveOrSwap();
			}
		}
		else {
			GiveOrSwap();
		}
	}

	static void AddMore(AFortPlayerControllerAthena *PC, FFortItemEntry &Entry, int Count, bool ShowPickupNoti = true)
	{
		if (Entry.ItemDefinition->IsA<UFortAmmoItemDefinition>() || Entry.ItemDefinition->IsA<UFortResourceItemDefinition>())
		{
			auto State = Entry.StateValues.Search([](FFortItemEntryStateValue &Value)
												  { return Value.StateType == EFortItemEntryState::ShouldShowItemToast; });
			if (!State) {
				FFortItemEntryStateValue Value{};
				Value.StateType = EFortItemEntryState::ShouldShowItemToast;
				Value.IntValue = ShowPickupNoti;
				Entry.StateValues.Add(Value);
			}
			else State->IntValue = ShowPickupNoti;
		}
		auto MaxStack = (int32) Entry.ItemDefinition->MaxStackSize.GetValue();
		Entry.Count += Count;
		if (Entry.Count > MaxStack)
		{
			SpawnPickup(PC->Pawn->K2_GetActorLocation(), Entry.ItemDefinition, Entry.Count - MaxStack, 0, EFortPickupSourceTypeFlag::Tossed, EFortPickupSpawnSource::Unset, PC->MyFortPawn);
			Entry.Count = MaxStack;
		}
		ReplaceEntry(PC, Entry);
	}

	static bool AddItemToInventoryOwner(UFortItemEntryComponent* Component, TScriptInterface<class IFortInventoryOwnerInterface> InventoryOwner) {
		InternalPickup((AFortPlayerControllerAthena*)InventoryOwner.ObjectPointer, Component->OwnedItemEntry);
		return true;
	}

	static inline void (*GiveItemToInventoryOwnerOG)(UObject* Object, FFrame& Stack);
	static void GiveItemToInventoryOwner(UObject* Object, FFrame& Stack) {
		TScriptInterface<class IFortInventoryOwnerInterface> InventoryOwner;
		UFortWorldItemDefinition* ItemDefinition;
		int32 NumberToGive;
		bool bNotifyPlayer;
		int32 ItemLevel;
		int32 PickupInstigatorHandle;
		Stack.StepCompiledIn(&InventoryOwner);
		Stack.StepCompiledIn(&ItemDefinition);
		Stack.StepCompiledIn(&NumberToGive);
		Stack.StepCompiledIn(&bNotifyPlayer);
		Stack.StepCompiledIn(&ItemLevel);
		Stack.StepCompiledIn(&PickupInstigatorHandle);

		auto PC = (AFortPlayerControllerAthena *) InventoryOwner.ObjectPointer;
		auto ItemEntry = MakeItemEntry(ItemDefinition, NumberToGive, ItemLevel);
		InternalPickup(PC, *ItemEntry);
		return GiveItemToInventoryOwnerOG(Object, Stack);
	}

	static int32 TrySetLoadedAmmo(UFortItemEntryComponent *Component, int32 NewLoadedAmmo)
	{
		Utils::Log("stripped trust");
		return 44;
	}

	static inline bool (*AddItemOG)(UObject* Object, FFrame& Stack, bool* Ret);
	static bool AddItem(UObject* Object, FFrame& Stack, bool* Ret) {
		TScriptInterface<class IFortInventoryOwnerInterface> InventoryOwner;
		UFortItemDefinition* ItemDefinition;
		int32 Count;
		Stack.StepCompiledIn(&InventoryOwner);
		Stack.StepCompiledIn(&ItemDefinition);
		Stack.StepCompiledIn(&Count);

		auto PC = (AFortPlayerControllerAthena*)InventoryOwner.ObjectPointer;
		auto WorldDef = (UFortWorldItemDefinition*)ItemDefinition;
		auto ItemEntry = MakeItemEntry(WorldDef, Count, clamp(GetLevel(WorldDef->LootLevelData), WorldDef->MinLevel, WorldDef->MaxLevel));
		InternalPickup(PC, *ItemEntry);
		AddItemOG(Object, Stack, Ret);
		*Ret = true;
		return *Ret;
	}

	static inline void (*AddItemsOG)(UObject* Object, FFrame& Stack);
	static void AddItems(UObject* Object, FFrame& Stack) {
		TScriptInterface<class IFortInventoryOwnerInterface> InventoryOwner;
		TArray<FItemAndCount> Items;
		Stack.StepCompiledIn(&InventoryOwner);
		Stack.StepCompiledIn(&Items);

		auto PC = (AFortPlayerControllerAthena*)InventoryOwner.ObjectPointer;
		for (auto& Item : Items) {
			auto WorldDef = (UFortWorldItemDefinition*) Item.Item;
			auto ItemEntry = MakeItemEntry(WorldDef, Item.Count, clamp(GetLevel(WorldDef->LootLevelData), WorldDef->MinLevel, WorldDef->MaxLevel));
			InternalPickup(PC, *ItemEntry);
		}
		return AddItemsOG(Object, Stack);
	}

	static inline void (*GetItemsFromInventoryOwnerOG)(UObject* Object, FFrame& Stack);
	static void GetItemsFromInventoryOwner(UObject* Object, FFrame& Stack) {
		TScriptInterface<class IFortInventoryOwnerInterface> InventoryOwner;
		TArray<UFortWorldItem*> Items;
		Stack.StepCompiledIn(&InventoryOwner);
		Stack.StepCompiledIn(&Items);

		auto PC = (AFortPlayerControllerAthena*)InventoryOwner.ObjectPointer;
		auto Inventory = PC->WorldInventory->Inventory;
		for (auto& Item : Inventory.ItemInstances)
			Items.Add(Item);
		return GetItemsFromInventoryOwnerOG(Object, Stack);
	}

	static inline void (*GetItemsFromInventoryOwnerForRarityOG)(UObject* Object, FFrame& Stack);
	static void GetItemsFromInventoryOwnerForRarity(UObject* Object, FFrame& Stack) {
		TScriptInterface<class IFortInventoryOwnerInterface> InventoryOwner;
		TArray<UFortWorldItem*> Items;
		EFortRarity Rarity;
		Stack.StepCompiledIn(&InventoryOwner);
		Stack.StepCompiledIn(&Items);
		Stack.StepCompiledIn(&Rarity);

		auto PC = (AFortPlayerControllerAthena*)InventoryOwner.ObjectPointer;
		auto Inventory = PC->WorldInventory->Inventory;
		for (auto& Item : Inventory.ItemInstances)
			if (Item->ItemEntry.ItemDefinition->Rarity == Rarity)
				Items.Add(Item);
		return GetItemsFromInventoryOwnerForRarityOG(Object, Stack);
	}

	static inline bool (*GiveItemEntryToInventoryOwnerOG)(UObject* Object, FFrame& Stack, bool* Ret);
	static bool GiveItemEntryToInventoryOwner(UObject* Object, FFrame& Stack, bool* Ret) {
		TScriptInterface<class IFortInventoryOwnerInterface> InventoryOwner;
		FFortItemEntry ItemEntry;
		Stack.StepCompiledIn(&InventoryOwner);
		Stack.StepCompiledIn(&ItemEntry);

		auto PC = (AFortPlayerControllerAthena*)InventoryOwner.ObjectPointer;
		InternalPickup(PC, ItemEntry);
		GiveItemEntryToInventoryOwnerOG(Object, Stack, Ret);
		*Ret = true;
		return *Ret;
	}

	static inline bool (*RemoveItemOG)(UObject* Object, FFrame& Stack, bool* Ret);
	static bool RemoveItem(UObject* Object, FFrame& Stack, bool* Ret) {
		TScriptInterface<class IFortInventoryOwnerInterface> InventoryOwner;
		FGuid ItemGuid;
		int32 Count;
		Stack.StepCompiledIn(&InventoryOwner);
		Stack.StepCompiledIn(&ItemGuid);
		Stack.StepCompiledIn(&Count);

		auto PC = (AFortPlayerControllerAthena*)InventoryOwner.ObjectPointer;
		auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([ItemGuid](FFortItemEntry& entry)
			{ return entry.ItemGuid == ItemGuid; });
		itemEntry->Count -= Count;
		if (itemEntry->Count <= 0)
			Inventory::Remove(PC, itemEntry->ItemGuid);
		else
			Inventory::ReplaceEntry(PC, *itemEntry);
		RemoveItemOG(Object, Stack, Ret);
		*Ret = true;
		return *Ret;
	}

	static inline void (*RemoveItemsOG)(UObject* Object, FFrame& Stack);
	static void RemoveItems(UObject* Object, FFrame& Stack) {
		TScriptInterface<class IFortInventoryOwnerInterface> InventoryOwner;
		TArray<FItemGuidAndCount> Items;
		Stack.StepCompiledIn(&InventoryOwner);
		Stack.StepCompiledIn(&Items);

		auto PC = (AFortPlayerControllerAthena*)InventoryOwner.ObjectPointer;
		for (auto& Item : Items)
		{
			auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([Guid = Item.ItemGuid](FFortItemEntry& entry)
				{ return entry.ItemGuid == Guid; });
			itemEntry->Count -= Item.Count;
			if (itemEntry->Count <= 0)
				Inventory::Remove(PC, itemEntry->ItemGuid);
			else
				Inventory::ReplaceEntry(PC, *itemEntry);
		}
		return RemoveItemsOG(Object, Stack);
	}

	static inline bool (*SwapItemOG)(UObject* Object, FFrame& Stack, bool* Ret);
	static bool SwapItem(UObject* Object, FFrame& Stack, bool* Ret) {
		TScriptInterface<class IFortInventoryOwnerInterface> SourceOwner;
		TScriptInterface<class IFortInventoryOwnerInterface> TargetOwner;
		FGuid ItemGuid;
		int32 Count;
		Stack.StepCompiledIn(&SourceOwner);
		Stack.StepCompiledIn(&TargetOwner);
		Stack.StepCompiledIn(&ItemGuid);
		Stack.StepCompiledIn(&Count);

		auto PC = (AFortPlayerControllerAthena*)SourceOwner.ObjectPointer;
		auto TargetPC = (AFortPlayerControllerAthena*)TargetOwner.ObjectPointer;

		auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([ItemGuid](FFortItemEntry& entry)
			{ return entry.ItemGuid == ItemGuid; });

		Remove(PC, ItemGuid);
		GiveItem(TargetPC, *itemEntry, Count);
		SwapItemOG(Object, Stack, Ret);
		*Ret = true;
		return *Ret;
	}

	static inline void (*SwapItemsOG)(UObject* Object, FFrame& Stack);
	static void SwapItems(UObject* Object, FFrame& Stack) {
		TScriptInterface<class IFortInventoryOwnerInterface> SourceOwner;
		TScriptInterface<class IFortInventoryOwnerInterface> TargetOwner;
		TArray<FItemGuidAndCount> Items;
		Stack.StepCompiledIn(&SourceOwner);
		Stack.StepCompiledIn(&TargetOwner);
		Stack.StepCompiledIn(&Items);

		auto PC = (AFortPlayerControllerAthena*)SourceOwner.ObjectPointer;
		auto TargetPC = (AFortPlayerControllerAthena*)TargetOwner.ObjectPointer;

		for (auto& Item : Items)
		{
			auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([Guid = Item.ItemGuid](FFortItemEntry& entry)
				{ return entry.ItemGuid == Guid; });

			Remove(PC, Item.ItemGuid);
			GiveItem(TargetPC, *itemEntry, Item.Count);
		}
		return SwapItemsOG(Object, Stack);
	}

	static inline int32(*K2_RemoveItemFromPlayerOG)(AFortPlayerControllerAthena *PC, UFortWorldItemDefinition* ItemDefinition, int32 AmountToRemove, bool bForceRemoval);
	static int32 K2_RemoveItemFromPlayer(AFortPlayerControllerAthena *PC, UFortWorldItemDefinition *ItemDefinition, int32 AmountToRemove, bool bForceRemoval) {
		if (__int64(_ReturnAddress()) == ImageBase + 0x29cc33b) return K2_RemoveItemFromPlayerOG(PC, ItemDefinition, AmountToRemove, bForceRemoval);
		if (!PC) return K2_RemoveItemFromPlayerOG(PC, ItemDefinition, AmountToRemove, bForceRemoval);

		auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([Def = ItemDefinition](FFortItemEntry& entry)
			{ return entry.ItemDefinition == Def; });
		if (!itemEntry) return K2_RemoveItemFromPlayerOG(PC, ItemDefinition, AmountToRemove, bForceRemoval);
		auto RC = AmountToRemove;
		itemEntry->Count -= AmountToRemove;
		if (itemEntry->Count <= 0 || ItemDefinition->IsA<UFortGadgetItemDefinition>()) {
			RC += itemEntry->Count;
			Inventory::Remove(PC, itemEntry->ItemGuid);
		}
		else
			Inventory::ReplaceEntry(PC, *itemEntry);
		return RC;
	}

	static inline int32(*K2_RemoveItemFromPlayerByGuidOG)(UObject* Object, FFrame& Stack, int32* Ret);
	static int32 K2_RemoveItemFromPlayerByGuid(UObject* Object, FFrame& Stack, int32* Ret) {
		class AFortPlayerController* PlayerController;
		struct FGuid ItemGuid;
		int32 AmountToRemove;
		bool bForceRemoval;
		Stack.StepCompiledIn(&PlayerController);
		Stack.StepCompiledIn(&ItemGuid);
		Stack.StepCompiledIn(&AmountToRemove);
		Stack.StepCompiledIn(&bForceRemoval);

		auto PC = (AFortPlayerControllerAthena*)PlayerController;
		auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([Guid = ItemGuid](FFortItemEntry& entry)
			{ return entry.ItemGuid == Guid; });
		if (!itemEntry) return K2_RemoveItemFromPlayerByGuidOG(Object, Stack, Ret);
		auto RC = AmountToRemove;
		itemEntry->Count -= AmountToRemove;
		if (itemEntry->Count <= 0 || itemEntry->ItemDefinition->IsA<UFortGadgetItemDefinition>()) {
			RC += itemEntry->Count;
			Inventory::Remove(PC, itemEntry->ItemGuid);
		}
		else
			Inventory::ReplaceEntry(PC, *itemEntry);
		return K2_RemoveItemFromPlayerByGuidOG(Object, Stack, Ret);
	}

	static bool ServerRemoveInventoryItem(AFortPlayerControllerAthena *PC, FGuid ItemGuid, int Count, bool bForceRemoveFromQuickBars, bool bForceRemoval, bool a6) {
		auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([Guid = ItemGuid](FFortItemEntry& entry)
			{ return entry.ItemGuid == Guid; });
		if (!itemEntry) return false;

		itemEntry->Count -= Count;
		if (itemEntry->Count <= 0) {
			Inventory::Remove(PC, itemEntry->ItemGuid);
		}
		else
			Inventory::ReplaceEntry(PC, *itemEntry);
		return true;
	}

	static bool RemoveInventoryItem(__int64 InterfaceThing, FGuid ItemGuid, int Count, bool bForceRemoveFromQuickBars, bool bForceRemoval) {
		return ServerRemoveInventoryItem((AFortPlayerControllerAthena *) (InterfaceThing - 1440), ItemGuid, Count, bForceRemoveFromQuickBars, bForceRemoval, 0);
	}

	static void HookFunctions() {
		Utils::Hook(ImageBase + 0x2273930, AddItemToInventoryOwner);
		Utils::ExecHook(Utils::FindObject<UFunction>("/Script/FortniteGame.FortKismetLibrary.GiveItemToInventoryOwner"), GiveItemToInventoryOwner, GiveItemToInventoryOwnerOG);
		Utils::Hook(ImageBase + 0x2f76870, TrySetLoadedAmmo);
		// i dont think any of the inventorymanagementlibrary stuff is used in-game, but it's here just incase
		// if something inventory related doesnt work, try uncommenting these (not gas pumps, even though they are inventory related)
		/*Utils::ExecHook(Utils::FindObject<UFunction>("/Script/FortniteGame.InventoryManagementLibrary.AddItem"), AddItem, AddItemOG);
		Utils::ExecHook(Utils::FindObject<UFunction>("/Script/FortniteGame.InventoryManagementLibrary.AddItems"), AddItems, AddItemsOG);
		Utils::ExecHook(Utils::FindObject<UFunction>("/Script/FortniteGame.InventoryManagementLibrary.GetItemsFromInventoryOwner"), GetItemsFromInventoryOwner, GetItemsFromInventoryOwnerOG);
		Utils::ExecHook(Utils::FindObject<UFunction>("/Script/FortniteGame.InventoryManagementLibrary.GetItemsFromInventoryOwnerForRarity"), GetItemsFromInventoryOwnerForRarity, GetItemsFromInventoryOwnerForRarityOG);
		Utils::ExecHook(Utils::FindObject<UFunction>("/Script/FortniteGame.InventoryManagementLibrary.GiveItemEntryToInventoryOwner"), GiveItemEntryToInventoryOwner, GiveItemEntryToInventoryOwnerOG);
		Utils::ExecHook(Utils::FindObject<UFunction>("/Script/FortniteGame.InventoryManagementLibrary.RemoveItem"), RemoveItem, RemoveItemOG);
		Utils::ExecHook(Utils::FindObject<UFunction>("/Script/FortniteGame.InventoryManagementLibrary.RemoveItems"), RemoveItems, RemoveItemsOG);*/
		Utils::Hook(ImageBase + 0x24d8e50, K2_RemoveItemFromPlayer, K2_RemoveItemFromPlayerOG);
		Utils::ExecHook(Utils::FindObject<UFunction>("/Script/FortniteGame.FortKismetLibrary.K2_RemoveItemFromPlayerByGuid"), K2_RemoveItemFromPlayerByGuid, K2_RemoveItemFromPlayerByGuidOG);
		Utils::Hook(ImageBase + 0x305d9a0, ServerRemoveInventoryItem);
		Utils::Hook(ImageBase + 0x2981630, RemoveInventoryItem);
	}
};
