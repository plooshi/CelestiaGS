#pragma once
#include "pch.h"
#include "Abilities.h"
#include "XP.h"
#include "GameMode.h"
#include "NativeHTTP.h"
#include "Globals.h"

class Player
{
	static void GiveModifier(AFortPlayerControllerAthena* PC, UFortGameplayModifierItemDefinition* Modifier)
	{
		if (!PC || !PC->MyFortPawn || !Modifier)
			return;
		for (auto& Ability : Modifier->PersistentAbilitySets)
			if (Ability.DeliveryRequirements.bApplyToPlayerPawns)
				for (auto& abi : Ability.AbilitySets)
					Abilities::GiveAbilitySet(PC->MyFortPawn, abi);
		for (auto& Effect : Modifier->PersistentGameplayEffects)
			if (Effect.DeliveryRequirements.bApplyToPlayerPawns)
				for (auto& eff : Effect.GameplayEffects)
					PC->MyFortPawn->AbilitySystemComponent->BP_ApplyGameplayEffectToSelf(eff.GameplayEffect.Get(), eff.Level, PC->MyFortPawn->AbilitySystemComponent->MakeEffectContext());
	}

	static inline void (*ServerAcknowledgePossessionOG)(AFortPlayerControllerAthena* PC, APawn* Pawn);
	static void ServerAcknowledgePossessionHook(AFortPlayerControllerAthena* PC, APawn* Pawn)
	{
		PC->AcknowledgedPawn = Pawn;

		static UFortAbilitySet* AbilitySet = Utils::FindObject<UFortAbilitySet>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_AthenaPlayer.GAS_AthenaPlayer");
		Abilities::GiveAbilitySet((AFortPlayerPawn*)Pawn, AbilitySet);

		auto& ModifierList = AFortGameStateAthena::Get()->CurrentPlaylistInfo.BasePlaylist->ModifierList;
		for (auto& mod : ModifierList)
			GiveModifier(PC, mod);

		PC->bBuildFree = true;

		((AFortPlayerStateAthena*)PC->PlayerState)->HeroType = PC->CosmeticLoadoutPC.Character->HeroDefinition;
		((void (*)(APlayerState*, APawn*))ApplyCharacterCustomization)(PC->PlayerState, Pawn);

		return ServerAcknowledgePossessionOG(PC, Pawn);
	}

	static void ServerSendZiplineState(AFortPlayerPawnAthena* Pawn, FZiplinePawnState State)
	{
		Pawn->ZiplineState = State;
		((void (*)(AFortPlayerPawn*))(ImageBase + 0x2902140))(Pawn);

		if (State.bJumped)
		{
			auto Velocity = Pawn->CharacterMovement->Velocity;
			auto VelocityX = Velocity.X * -0.5f;
			auto VelocityY = Velocity.Y * -0.5f;
			Pawn->LaunchCharacterJump({ VelocityX >= -750 ? fminf(VelocityX, 750) : -750, VelocityY >= -750 ? fminf(VelocityY, 750) : -750, 1200 }, false, false, true, true);
		}
	}

	static void ServerClientIsReadyToRespawn(AFortPlayerControllerAthena* PC)
	{
		auto PS = PC->PlayerState->Cast<AFortPlayerStateAthena>();
		if (PS->RespawnData.bRespawnDataAvailable && PS->RespawnData.bServerIsReady)
		{
			PS->RespawnData.bClientIsReady = true;

			FTransform Transform(PS->RespawnData.RespawnLocation, PS->RespawnData.RespawnRotation);
			auto Pawn = (AFortPlayerPawnAthena*)AFortGameModeAthena::Get()->SpawnDefaultPawnAtTransform(PC, Transform);
			PC->Possess(Pawn);
			Pawn->SetHealth(100);
			Pawn->SetShield(0);

			PC->RespawnPlayerAfterDeath(true);
			Pawn->BeginSkydiving(true);
		}
	}

	static inline void (*ServerHandlePickupInfoOG)(AFortPlayerPawnAthena* Pawn, AFortPickup* Pickup, FFortPickupRequestInfo& Params);
	static void ServerHandlePickupInfo(AFortPlayerPawnAthena* Pawn, AFortPickup* Pickup, FFortPickupRequestInfo& Params)
	{
		if (!Pawn || !Pickup || Pickup->bPickedUp)
			return ServerHandlePickupInfoOG(Pawn, Pickup, Params);
		if (Pawn->GetDistanceTo(Pickup) > 500.f)
			return;

		if ((Params.bTrySwapWithWeapon || Params.bUseRequestedSwap) && Inventory::GetQuickbar(Pawn->CurrentWeapon->WeaponData) == EFortQuickBars::Primary && Inventory::GetQuickbar(Pickup->PrimaryPickupItemEntry.ItemDefinition) == EFortQuickBars::Primary)
		{
			auto PC = (AFortPlayerControllerAthena*)Pawn->Controller;
			auto SwapEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([Params](FFortItemEntry& entry)
				{ return entry.ItemGuid == Params.SwapWithItem; });
			PC->SwappingItemDefinition = (UFortWorldItemDefinition*)SwapEntry; // proper af
		}
		Pawn->IncomingPickups.Add(Pickup);

		Pickup->PickupLocationData.bPlayPickupSound = Params.bPlayPickupSound;
		Pickup->PickupLocationData.FlyTime = 0.4f;
		Pickup->PickupLocationData.ItemOwner = Pawn;
		Pickup->PickupLocationData.PickupGuid = Pickup->PrimaryPickupItemEntry.ItemGuid;
		Pickup->PickupLocationData.PickupTarget = Pawn;
		Pickup->PickupLocationData.StartDirection = Params.Direction.QuantizeNormal();
		Pickup->OnRep_PickupLocationData();

		Pickup->bPickedUp = true;
		Pickup->OnRep_bPickedUp();
		return ServerHandlePickupInfoOG(Pawn, Pickup, Params);
	}

	static inline void* (*DispatchRequestOG)(__int64, __int64, __int64);
	static void* DispatchRequestHook(__int64 a1, __int64 a2, __int64 a3)
	{
		return DispatchRequestOG(a1, a2, 3);
	}

	static void ServerAttemptAircraftJumpHook(UFortControllerComponent_Aircraft* Comp, FRotator ClientRot)
	{
		auto PC = (AFortPlayerControllerAthena*)Comp->GetOwner();
		static auto GM = AFortGameModeAthena::Get();
		static auto GS = AFortGameStateAthena::Get();

		if (!PC || !GM || !GS)
			return;

		GM->RestartPlayer(PC);
		if (LateGame && PC->MyFortPawn) PC->MyFortPawn->K2_SetActorLocation(GS->Aircrafts[0]->K2_GetActorLocation(), false, nullptr, false);

		if (PC->MyFortPawn)
		{

			PC->MyFortPawn->BeginSkydiving(true);
			if (LateGame)
			{
				PC->MyFortPawn->SetHealth(100);
				PC->MyFortPawn->SetShield(100);

				LateGameInternal::Guns Guns;
				auto& Shotgun = Guns.Shotguns[rand() % (Guns.Shotguns.size() - 1)];
				auto& AssaultRifle = Guns.AssaultRifles[rand() % (Guns.AssaultRifles.size() - 1)];
				auto& SMG = Guns.SMGs[rand() % (Guns.SMGs.size() - 1)];
				auto& Utility = Guns.Utilities[rand() % (Guns.Utilities.size() - 1)];
				auto& Heal = Guns.Heals[rand() % (Guns.Heals.size() - 1)];
				auto ShotgunClipSize = Inventory::GetStats((UFortWeaponItemDefinition*)Shotgun.Item)->ClipSize;
				auto AssaultRifleClipSize = Inventory::GetStats((UFortWeaponItemDefinition*)AssaultRifle.Item)->ClipSize;
				auto SubmachineGunClipSize = Inventory::GetStats((UFortWeaponItemDefinition*)SMG.Item)->ClipSize;
				auto UtilityClipSize = Inventory::GetStats((UFortWeaponItemDefinition*)Utility.Item)->ClipSize;

				Inventory::GiveItem(PC, Guns.Wood, 500);
				Inventory::GiveItem(PC, Guns.Stone, 500);
				Inventory::GiveItem(PC, Guns.Metal, 500);
				Inventory::GiveItem(PC, Guns.AssaultAmmo, 250);
				Inventory::GiveItem(PC, Guns.ShotgunAmmo, 50);
				Inventory::GiveItem(PC, Guns.SubmachineAmmo, 400);

				auto ARIE = Inventory::GiveItem(PC, AssaultRifle.Item, AssaultRifle.Count, AssaultRifleClipSize, true, false);
				auto SIE = Inventory::GiveItem(PC, Shotgun.Item, Shotgun.Count, ShotgunClipSize, 0, true, false);
				auto SGIE = Inventory::GiveItem(PC, SMG.Item, SMG.Count, SubmachineGunClipSize, true, false);
				auto UIE = Inventory::GiveItem(PC, Utility.Item, Utility.Count, UtilityClipSize, true, false);
				auto HIE = Inventory::GiveItem(PC, Heal.Item, Heal.Count, true, false);
				PC->WorldInventory->Inventory.MarkItemDirty(SIE->ItemEntry, false);
				PC->WorldInventory->Inventory.MarkItemDirty(ARIE->ItemEntry, false);
				PC->WorldInventory->Inventory.MarkItemDirty(SGIE->ItemEntry, false);
				PC->WorldInventory->Inventory.MarkItemDirty(UIE->ItemEntry, false);
				PC->WorldInventory->Inventory.MarkItemDirty(HIE->ItemEntry, false);
				PC->WorldInventory->Inventory.MarkArrayDirty();
			}
		}
	}

	static void ServerExecuteInventoryItemHook(AFortPlayerControllerAthena* PC, FGuid Guid)
	{
		if (!PC)
			return;
		auto entry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([Guid](FFortItemEntry& entry)
			{ return entry.ItemGuid == Guid; });

		if (!entry || !PC->MyFortPawn)
			return;
		UFortWeaponItemDefinition* ItemDef = (UFortWeaponItemDefinition*)entry->ItemDefinition;
		if (auto Gadget = ItemDef->Cast<UFortGadgetItemDefinition>())
			ItemDef = Gadget->GetWeaponItemDefinition();
		else if (auto Deco = ItemDef->Cast<UFortDecoItemDefinition>())
		{
			PC->MyFortPawn->PickUpActor(nullptr, Deco);
			PC->MyFortPawn->CurrentWeapon->ItemEntryGuid = Guid;

			if (auto CT = PC->MyFortPawn->CurrentWeapon->Cast<AFortDecoTool_ContextTrap>())
				CT->ContextTrapItemDefinition = (UFortContextTrapItemDefinition*)Deco;
			return;
		}
		PC->MyFortPawn->EquipWeaponDefinition(ItemDef, Guid);
	}

private:
	static inline char (*CompletePickupAnimationOG)(AFortPickup* Pickup);
	static char CompletePickupAnimation(AFortPickup* Pickup)
	{
		auto Pawn = (AFortPlayerPawnAthena*)Pickup->PickupLocationData.PickupTarget;
		if (!Pawn)
			return CompletePickupAnimationOG(Pickup);
		auto PC = (AFortPlayerControllerAthena*)Pawn->Controller;
		if (!PC)
			return CompletePickupAnimationOG(Pickup);
		if (auto entry = (FFortItemEntry*)PC->SwappingItemDefinition)
		{
			Inventory::SpawnPickup(PC->GetViewTarget()->K2_GetActorLocation(), *entry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PC->MyFortPawn);
			// SwapEntry(PC, *entry, Pickup->PrimaryPickupItemEntry);
			Inventory::Remove(PC, entry->ItemGuid);
			Inventory::GiveItem(PC, Pickup->PrimaryPickupItemEntry);
			PC->SwappingItemDefinition = nullptr;
		}
		else
		{
			Inventory::InternalPickup(PC, Pickup->PrimaryPickupItemEntry);
		}
		return CompletePickupAnimationOG(Pickup);
	}

	static inline void (*OnCapsuleBeginOverlapOG)(AFortPlayerPawnAthena* Pawn, UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	static void OnCapsuleBeginOverlap(AFortPlayerPawnAthena* Pawn, UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult SweepResult)
	{
		if (!Pawn || Pawn->Controller->IsA<AFortAthenaAIBotController>())
			return OnCapsuleBeginOverlapOG(Pawn, OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
		auto Pickup = OtherActor->Cast<AFortPickup>();
		if (!Pickup || !Pickup->PrimaryPickupItemEntry.ItemDefinition)
			return OnCapsuleBeginOverlapOG(Pawn, OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
		auto MaxStack = (int32)Pickup->PrimaryPickupItemEntry.ItemDefinition->MaxStackSize.GetValue();
		auto itemEntry = ((AFortPlayerControllerAthena*)Pawn->Controller)->WorldInventory->Inventory.ReplicatedEntries.Search([Pickup, MaxStack](FFortItemEntry& entry)
			{ return entry.ItemDefinition == Pickup->PrimaryPickupItemEntry.ItemDefinition && entry.Count <= MaxStack; });
		if (Pickup && Pickup->PawnWhoDroppedPickup != Pawn)
		{
			if ((!itemEntry && Inventory::GetQuickbar(Pickup->PrimaryPickupItemEntry.ItemDefinition) == EFortQuickBars::Secondary) || (itemEntry && itemEntry->Count < MaxStack))
				Pawn->ServerHandlePickup(Pickup, 0.4f, FVector(), true);
		}
		return OnCapsuleBeginOverlapOG(Pawn, OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	}

	static inline void (*ServerAttemptInteractOG)(UFortControllerComponent_Interaction* Comp, AActor* ReceivingActor, UPrimitiveComponent* InteractComponent, ETInteractionType InteractType, UObject* OptionalObjectData, EInteractionBeingAttempted InteractionBeingAttempted, int32 RequestID);
	static void ServerAttemptInteract(UFortControllerComponent_Interaction* Comp, AActor* ReceivingActor, UPrimitiveComponent* InteractComponent, ETInteractionType InteractType, UObject* OptionalObjectData, EInteractionBeingAttempted InteractionBeingAttempted, int32 RequestID)
	{
		auto PC = Comp->GetOwner()->Cast<AFortPlayerControllerAthena>();
		ServerAttemptInteractOG(Comp, ReceivingActor, InteractComponent, InteractType, OptionalObjectData, InteractionBeingAttempted, RequestID);
		if (!PC)
			return;

		/*else if (auto GasPump = ReceivingActor->Cast<AApollo_GasPump_Valet_C>()) {
			auto Pump = FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/Prototype/PetrolPump/WID_Petrol_Pump.WID_Petrol_Pump");
			auto Item = GiveItem(PC, Pump, 1, 69696);
			ServerExecuteInventoryItemHook(PC, Item->ItemEntry.ItemGuid);
			PC->ClientEquipItem(Item->ItemEntry.ItemGuid, true);
		}*/ // todo: fix
		if (!LateGame) if (auto BuildingActor = ReceivingActor->Cast<ABuildingActor>())
		{
			FGameplayTagContainer SourceTags;
			FGameplayTagContainer ContextTags;
			FGameplayTagContainer TargetTags = BuildingActor->StaticGameplayTags;

			auto QuestManager = PC->GetQuestManager(ESubGame::Athena);

			if (QuestManager)
			{
				QuestManager->GetSourceAndContextTags(&SourceTags, &ContextTags);

				XP::CountMap[BuildingActor->Class]++;
				if (auto Chest = ReceivingActor->Cast<ATiered_Chest_Athena_C>())
				{
					static auto Name = FName(L"Loot_AthenaTreasure");
					if (Chest->SearchLootTierGroup == Name)
					{
						auto PS = PC->PlayerState->Cast<AFortPlayerStateAthena>();
						const char* AccoladePath = nullptr;
						switch (XP::CountMap[BuildingActor->Class])
						{
						case 3:
							AccoladePath = "/Game/Athena/Items/Accolades/AccoladeId_008_SearchChests_Bronze.AccoladeId_008_SearchChests_Bronze";
							break;
						case 7:
							AccoladePath = "/Game/Athena/Items/Accolades/AccoladeId_009_SearchChests_Silver.AccoladeId_009_SearchChests_Silver";
							break;
						case 12:
							AccoladePath = "/Game/Athena/Items/Accolades/AccoladeId_010_SearchChests_Gold.AccoladeId_010_SearchChests_Gold";
							break;
						default:
							break;
						}

						if (AccoladePath)
						{
							auto Accolade = Utils::FindObject<UFortAccoladeItemDefinition>(AccoladePath);
							XP::GiveAccolade(PC, Accolade);
						}
					}
				}
				XP::SendStatEvent(QuestManager, BuildingActor, SourceTags, TargetTags, nullptr, nullptr, XP::CountMap[BuildingActor->Class], EFortQuestObjectiveStatEvent::Interact);
			}
		}
	}

	static inline void (*GetPlayerViewPointOG)(AFortPlayerController* PC, FVector& Loc, FRotator& Rot);
	static void GetPlayerViewPoint(AFortPlayerController* PC, FVector& Loc, FRotator& Rot)
	{
		static auto Spec = FName(L"Spectating");
		if (PC->StateName == Spec)
		{
			Loc = PC->LastSpectatorSyncLocation;
			Rot = PC->LastSpectatorSyncRotation;
		}
		else if (PC->GetViewTarget())
		{
			Loc = PC->GetViewTarget()->K2_GetActorLocation();
			Rot = PC->GetControlRotation();
		}
		else
		{
			return GetPlayerViewPointOG(PC, Loc, Rot);
		}
	}

	static void ServerAttemptInventoryDrop(AFortPlayerControllerAthena* PC, FGuid Guid, int32 Count, bool bTrash)
	{
		if (!PC || !PC->Pawn)
			return;
		auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([Guid](FFortItemEntry& entry)
			{ return entry.ItemGuid == Guid; });
		if (!itemEntry || (itemEntry->Count - Count) < 0)
			return;
		itemEntry->Count -= Count;
		Inventory::SpawnPickup(PC->Pawn->K2_GetActorLocation() + PC->Pawn->GetActorForwardVector() * 70.f + FVector(0, 0, 50), *itemEntry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PC->MyFortPawn, Count);
		if (itemEntry->Count == 0)
			Inventory::Remove(PC, Guid);
		else
			Inventory::ReplaceEntry(PC, *itemEntry);
		return;
	}

	static size_t NullCallback(void* ptr, size_t size, size_t nmemb, void* data)
	{
		return size * nmemb;
	}

	static inline void (*ClientOnPawnDiedOG)(AFortPlayerControllerAthena* PC, FFortPlayerDeathReport& DeathReport);
	static void ClientOnPawnDied(AFortPlayerControllerAthena* PC, FFortPlayerDeathReport& DeathReport)
	{
		if (!PC)
			return ClientOnPawnDiedOG(PC, DeathReport);
		auto GS = AFortGameStateAthena::Get();
		auto GM = AFortGameModeAthena::Get();

		auto PlayerState = (AFortPlayerStateAthena*)PC->PlayerState;
		if (!GS->IsRespawningAllowed(PlayerState) && PC->WorldInventory && PC->MyFortPawn)
		{
			bool bHasMats = false;
			for (auto& entry : PC->WorldInventory->Inventory.ReplicatedEntries)
			{
				if (!entry.ItemDefinition->IsA<UFortWeaponMeleeItemDefinition>() && (entry.ItemDefinition->IsA<UFortResourceItemDefinition>() || entry.ItemDefinition->IsA<UFortWeaponRangedItemDefinition>() || entry.ItemDefinition->IsA<UFortConsumableItemDefinition>() || entry.ItemDefinition->IsA<UFortAmmoItemDefinition>()))
				{
					if (!bHasMats)
						bHasMats = entry.ItemDefinition->IsA<UFortResourceItemDefinition>();
					Inventory::SpawnPickup(PC->MyFortPawn->K2_GetActorLocation(), entry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::PlayerElimination, PC->MyFortPawn);
				}
			}
			if (!bHasMats) // ur an idiot ik how to do this ill do later
			{
				static LateGameInternal::Guns LGGuns;
				Inventory::SpawnPickup(PC->MyFortPawn->K2_GetActorLocation(), *Inventory::MakeItemEntry((UFortWorldItemDefinition*)LGGuns.Wood, 50, 0), EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::PlayerElimination, PC->MyFortPawn);
				Inventory::SpawnPickup(PC->MyFortPawn->K2_GetActorLocation(), *Inventory::MakeItemEntry((UFortWorldItemDefinition*)LGGuns.Stone, 50, 0), EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::PlayerElimination, PC->MyFortPawn);
				Inventory::SpawnPickup(PC->MyFortPawn->K2_GetActorLocation(), *Inventory::MakeItemEntry((UFortWorldItemDefinition*)LGGuns.Metal, 50, 0), EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::PlayerElimination, PC->MyFortPawn);
			}
		}

		auto KillerPS = (AFortPlayerStateAthena*)DeathReport.KillerPlayerState;
		auto KillerPawn = (AFortPlayerPawnAthena*)DeathReport.KillerPawn;
		if (KillerPS && KillerPawn && KillerPawn->Controller && KillerPawn->Controller->IsA<AFortPlayerControllerAthena>() && KillerPawn->Controller != PC)
		{
			KillerPS->KillScore++;
			KillerPS->OnRep_Kills();
			KillerPS->TeamKillScore++;
			KillerPS->OnRep_TeamKillScore();

			KillerPS->ClientReportKill(PlayerState);

			auto KillerPC = (AFortPlayerControllerAthena*)KillerPS->Owner;

			Utils::Log("Player " + KillerPS->GetPlayerName().ToString() + " killed " + PC->PlayerState->GetPlayerName().ToString());

			if (KillerPC && KillerPC->MatchReport)
				KillerPC->MatchReport->MatchStats.Stats[3] = KillerPS->KillScore;
		}
		if (PC->MyFortPawn && ((KillerPS && KillerPS->Place != 1) || PlayerState->Place != 1))
		{
			static auto AccoladeId_012_Elimination = Utils::FindObject<UFortAccoladeItemDefinition>("/Game/Athena/Items/Accolades/AccoladeId_012_Elimination.AccoladeId_012_Elimination");
			static auto AccoladeId_014_Elimination_Bronze = Utils::FindObject<UFortAccoladeItemDefinition>("/Game/Athena/Items/Accolades/AccoladeId_014_Elimination_Bronze.AccoladeId_014_Elimination_Bronze");
			static auto AccoladeId_015_Elimination_Silver = Utils::FindObject<UFortAccoladeItemDefinition>("/Game/Athena/Items/Accolades/AccoladeId_015_Elimination_Silver.AccoladeId_015_Elimination_Silver");
			static auto AccoladeId_016_Elimination_Gold = Utils::FindObject<UFortAccoladeItemDefinition>("/Game/Athena/Items/Accolades/AccoladeId_016_Elimination_Gold.AccoladeId_016_Elimination_Gold");

			switch (KillerPS->KillScore)
			{
			case 1:
				XP::GiveAccolade((AFortPlayerControllerAthena*)KillerPS->Owner, AccoladeId_014_Elimination_Bronze);
				break;
			case 4:
				XP::GiveAccolade((AFortPlayerControllerAthena*)KillerPS->Owner, AccoladeId_015_Elimination_Silver);
				break;
			case 8:
				XP::GiveAccolade((AFortPlayerControllerAthena*)KillerPS->Owner, AccoladeId_016_Elimination_Gold);
				break;
			default:
				XP::GiveAccolade((AFortPlayerControllerAthena*)KillerPS->Owner, AccoladeId_012_Elimination);
				break;
			}
		}
		PlayerState->PawnDeathLocation = PC->MyFortPawn ? PC->MyFortPawn->K2_GetActorLocation() : FVector();
		PlayerState->DeathInfo.bDBNO = PC->MyFortPawn ? PC->MyFortPawn->bWasDBNOOnDeath : false;
		PlayerState->DeathInfo.DeathLocation = PlayerState->PawnDeathLocation;
		PlayerState->DeathInfo.DeathTags = DeathReport.Tags;
		PlayerState->DeathInfo.DeathCause = AFortPlayerStateAthena::ToDeathCause(DeathReport.Tags, PlayerState->DeathInfo.bDBNO);
		if (PlayerState->DeathInfo.bDBNO)
			PlayerState->DeathInfo.Downer = KillerPS;
		PlayerState->DeathInfo.FinisherOrDowner = KillerPS;
		PlayerState->DeathInfo.Distance = PC->MyFortPawn ? (PlayerState->DeathInfo.DeathCause != EDeathCause::FallDamage ? (KillerPawn ? KillerPawn->GetDistanceTo(PC->MyFortPawn) : 0) : PC->MyFortPawn->Cast<AFortPlayerPawnAthena>()->LastFallDistance) : 0;
		PlayerState->DeathInfo.bInitialized = true;
		PlayerState->OnRep_DeathInfo();

		if (!GS->IsRespawningAllowed(PlayerState) && (PC->MyFortPawn ? !PC->MyFortPawn->IsDBNO() : true))
		{
			FAthenaRewardResult Result;
			Result.TotalBookXpGained = PC->XPComponent->TotalXpEarned;
			Result.TotalSeasonXpGained = PC->XPComponent->TotalXpEarned;
			PC->ClientSendEndBattleRoyaleMatchForPlayer(true, Result);

			PlayerState->Place = GS->PlayersLeft;
			PlayerState->OnRep_Place();
			FAthenaMatchStats& Stats = PC->MatchReport->MatchStats;
			FAthenaMatchTeamStats& TeamStats = PC->MatchReport->TeamStats;

			// Stats.Stats[3] = PlayerState->KillScore;
			// Stats.Stats[8] = PlayerState->SquadId;
			PC->ClientSendMatchStatsForPlayer(Stats);

			TeamStats.Place = PlayerState->Place;
			TeamStats.TotalPlayers = GS->TotalPlayers;
			PC->ClientSendTeamStatsForPlayer(TeamStats);

			AFortWeapon* DamageCauser = nullptr;
			if (auto Projectile = DeathReport.DamageCauser->Cast<AFortProjectileBase>())
				DamageCauser = Projectile->GetOwnerWeapon();
			else if (auto Weapon = DeathReport.DamageCauser->Cast<AFortWeapon>())
				DamageCauser = Weapon;
			((void (*)(AFortGameModeAthena*, AFortPlayerControllerAthena*, APlayerState*, AFortPlayerPawn*, UFortWeaponItemDefinition*, EDeathCause, char))(ImageBase + 0x1ec8680))(GM, PC, KillerPS, KillerPawn, DamageCauser ? DamageCauser->WeaponData : nullptr, PlayerState->DeathInfo.DeathCause, 0);

			if (PC->MyFortPawn && KillerPS && KillerPawn && KillerPawn->Controller != PC && !KillerPawn->IsA<ABP_MangPlayerPawn_Parent_C>())
			{
				FGameplayTagContainer SourceTags;
				FGameplayTagContainer ContextTags;
				FGameplayTagContainer TargetTags = PC->MyFortPawn->GameplayTags;
				AFortPlayerControllerAthena* KillerPC = (AFortPlayerControllerAthena*)KillerPS->GetOwner();

				auto QuestManager = ((AFortPlayerController*)KillerPawn->Controller)->GetQuestManager(ESubGame::Athena);

				if (QuestManager)
				{
					QuestManager->GetSourceAndContextTags(&SourceTags, &ContextTags);

					XP::CountMap[(UClass*)KillerPawn->Controller->Class->Super]++;
					XP::SendStatEvent(QuestManager, PC->MyFortPawn, SourceTags, TargetTags, nullptr, nullptr, XP::CountMap[(UClass*)KillerPawn->Controller->Class->Super], EFortQuestObjectiveStatEvent::Kill);
				}

				auto Handle = KillerPS->AbilitySystemComponent->MakeEffectContext();
				FGameplayTag Tag;
				static auto Cue = FName(L"GameplayCue.Shield.PotionConsumed");
				Tag.TagName = Cue;
				KillerPS->AbilitySystemComponent->NetMulticast_InvokeGameplayCueAdded(Tag, FPredictionKey(), Handle);
				KillerPS->AbilitySystemComponent->NetMulticast_InvokeGameplayCueExecuted(Tag, FPredictionKey(), Handle);

				auto Health = KillerPawn->GetHealth();
				auto Shield = KillerPawn->GetShield();

				if (Health == 100)
				{
					Shield += Shield + 50;
				}
				else if (Health + 50 > 100)
				{
					Health = 100;
					Shield += (Health + 50) - 100;
				}
				else if (Health + 50 <= 100)
				{
					Health += 50;
				}

				KillerPawn->SetHealth( /* UKismetMathLibrary::FClamp( */ Health /* , 0, 100) */);
				KillerPawn->SetShield( /* UKismetMathLibrary::FClamp( */ Shield /* , 0, 100) */);
			}
			if (PC->MyFortPawn && ((KillerPS && KillerPS->Place == 1) || PlayerState->Place == 1))
			{
				if (KillerPawn && !KillerPawn->IsA<ABP_MangPlayerPawn_Parent_C>())
				{
					FGameplayTagContainer SourceTags;
					FGameplayTagContainer ContextTags;
					FGameplayTagContainer TargetTags = PC->MyFortPawn->GameplayTags;

					auto QuestManager = ((AFortPlayerController*)KillerPawn->Controller)->GetQuestManager(ESubGame::Athena);

					QuestManager->GetSourceAndContextTags(&SourceTags, &ContextTags);

					XP::SendStatEvent(QuestManager, KillerPawn->Controller, SourceTags, TargetTags, nullptr, nullptr, 1, EFortQuestObjectiveStatEvent::Win);
				}
				if (PlayerState->Place == 1)
				{
					KillerPS = PlayerState;
					KillerPawn = (AFortPlayerPawnAthena*)PC->MyFortPawn;
				}
				auto KillerPC = (AFortPlayerControllerAthena*)KillerPS->Owner;
				auto KillerWeapon = DamageCauser ? DamageCauser->WeaponData : nullptr;
				
				if (KillerWeapon)
				{
					KillerPC->PlayWinEffects(KillerPawn, KillerWeapon, PlayerState->DeathInfo.DeathCause, false);
					KillerPC->ClientNotifyWon(KillerPawn, KillerWeapon, PlayerState->DeathInfo.DeathCause);
				}

				if (KillerPS != PlayerState)
				{
					FAthenaRewardResult KResult = KillerPC->MatchReport->EndOfMatchResults;
					KResult.TotalBookXpGained = KillerPC->XPComponent->TotalXpEarned;
					KResult.TotalSeasonXpGained = KillerPC->XPComponent->TotalXpEarned;
					KillerPC->ClientSendEndBattleRoyaleMatchForPlayer(true, KResult);

					FAthenaMatchStats KStats = PC->MatchReport->MatchStats;
					FAthenaMatchTeamStats KTeamStats = PC->MatchReport->TeamStats;

					KillerPC->ClientSendMatchStatsForPlayer(KStats);

					KTeamStats.Place = KillerPS->Place;
					KTeamStats.TotalPlayers = GS->TotalPlayers;
					KillerPC->ClientSendTeamStatsForPlayer(KTeamStats);
				}

				GS->WinningTeam = KillerPS->TeamIndex;
				GS->OnRep_WinningTeam();
				GS->WinningPlayerState = KillerPS;
				GS->OnRep_WinningPlayerState();
			}
		}

		return ClientOnPawnDiedOG(PC, DeathReport);
	}

	static inline void (*NetMulticast_Athena_BatchedDamageCuesOG)(AFortPawn* Pawn, FAthenaBatchedDamageGameplayCues_Shared SharedData, FAthenaBatchedDamageGameplayCues_NonShared NonSharedData);
	static void NetMulticast_Athena_BatchedDamageCues(AFortPlayerPawnAthena* Pawn, FAthenaBatchedDamageGameplayCues_Shared SharedData, FAthenaBatchedDamageGameplayCues_NonShared NonSharedData)
	{
		if (!Pawn || !Pawn->Controller || !Pawn->CurrentWeapon || Pawn->Controller->IsA<AFortAthenaAIBotController>())
			return NetMulticast_Athena_BatchedDamageCuesOG(Pawn, SharedData, NonSharedData);

		NetMulticast_Athena_BatchedDamageCuesOG(Pawn, SharedData, NonSharedData);
		AFortInventory* Inventory = nullptr;
		if (Pawn->CurrentWeapon && !Pawn->CurrentWeapon->WeaponData->bUsesPhantomReserveAmmo && Inventory::GetStats(Pawn->CurrentWeapon->WeaponData) && Inventory::GetStats(Pawn->CurrentWeapon->WeaponData)->ClipSize > 0)
		{
			auto ent = ((AFortPlayerControllerAthena*)Pawn->Controller)->WorldInventory->Inventory.ReplicatedEntries.Search([Pawn](FFortItemEntry& entry)
				{ return entry.ItemGuid == Pawn->CurrentWeapon->ItemEntryGuid; });
			if (ent)
			{
				ent->LoadedAmmo = Pawn->CurrentWeapon->AmmoCount;
				Inventory::ReplaceEntry((AFortPlayerControllerAthena*)Pawn->Controller, *ent);
			}
		}
		else if (Pawn->CurrentWeapon && Pawn->CurrentWeapon->WeaponData->bUsesPhantomReserveAmmo)
		{
			auto ent = ((AFortPlayerControllerAthena*)Pawn->Controller)->WorldInventory->Inventory.ReplicatedEntries.Search([Pawn](FFortItemEntry& entry)
				{ return entry.ItemGuid == Pawn->CurrentWeapon->ItemEntryGuid; });
			if (ent)
			{
				ent->LoadedAmmo--;
				Inventory::ReplaceEntry((AFortPlayerControllerAthena*)Pawn->Controller, *ent);
			}
		}
	}

	static void ReloadWeapon(AFortWeapon* Weapon, int AmmoToRemove)
	{
		AFortPlayerControllerAthena* PC = (AFortPlayerControllerAthena*)((AFortPlayerPawnAthena*)Weapon->Owner)->Controller;
		AFortInventory* Inventory;
		if (auto Bot = PC->Cast<AFortAthenaAIBotController>())
		{
			Inventory = Bot->Inventory;
		}
		else
		{
			Inventory = PC->WorldInventory;
		}
		if (!PC || !Inventory || !Weapon)
			return;
		if (Weapon->WeaponData->bUsesPhantomReserveAmmo)
		{
			Weapon->PhantomReserveAmmo -= AmmoToRemove;
			Weapon->OnRep_PhantomReserveAmmo();
			return;
		}
		auto Ammo = Weapon->WeaponData->GetAmmoWorldItemDefinition_BP();
		auto ent = Inventory->Inventory.ReplicatedEntries.Search([Ammo, Weapon](FFortItemEntry& entry)
			{ return Weapon->WeaponData == Ammo ? entry.ItemGuid == Weapon->ItemEntryGuid : entry.ItemDefinition == Ammo; });
		auto WeaponEnt = Inventory->Inventory.ReplicatedEntries.Search([Weapon](FFortItemEntry& entry)
			{ return entry.ItemGuid == Weapon->ItemEntryGuid; });
		if (!WeaponEnt)
			return;
		if (!Weapon->WeaponData->WeaponRechargeAmmoQuantity.Curve.CurveTable)
		{
			if (ent)
			{
				ent->Count -= AmmoToRemove;
				if (ent->Count <= 0)
					Inventory::Remove(PC, ent->ItemGuid);
				else
					Inventory::ReplaceEntry(PC, *ent);
			}
			WeaponEnt->LoadedAmmo += AmmoToRemove;
			Inventory::ReplaceEntry(PC, *WeaponEnt);
		}
	}

	static void ServerPlayEmoteItem(AFortPlayerControllerAthena* PC, UFortMontageItemDefinitionBase* EmoteAsset, float EmoteRandomNumber)
	{
		if (!PC || !EmoteAsset || !PC->MyFortPawn)
			return;
		auto ASC = ((AFortPlayerStateAthena*)PC->PlayerState)->AbilitySystemComponent;

		FGameplayAbilitySpec NewSpec;
		UClass* Ability = nullptr;
		if (auto Spray = EmoteAsset->Cast<UAthenaSprayItemDefinition>())
		{
			Ability = UGAB_Spray_Generic_C::StaticClass();
		}
		else if (auto Toy = EmoteAsset->Cast<UAthenaToyItemDefinition>())
		{
			Ability = Toy->ToySpawnAbility.Get();
		}
		else if (auto Emote = EmoteAsset->Cast<UAthenaDanceItemDefinition>())
		{
			auto DA = Emote->CustomDanceAbility.Get();
			Ability = DA ? DA : UGAB_Emote_Generic_C::StaticClass();
			PC->MyFortPawn->bMovingEmote = Emote->bMovingEmote;
			PC->MyFortPawn->bMovingEmoteForwardOnly = Emote->bMoveForwardOnly;
			PC->MyFortPawn->EmoteWalkSpeed = Emote->WalkForwardSpeed;
		}

		if (Ability)
		{
			((void (*)(FGameplayAbilitySpec*, UObject*, int, int, UObject*))ConstructAbilitySpec)(&NewSpec, Ability->DefaultObject, 1, -1, EmoteAsset);
			FGameplayAbilitySpecHandle handle;
			((void (*)(UFortAbilitySystemComponent*, FGameplayAbilitySpecHandle*, FGameplayAbilitySpec*, void*))(ImageBase + 0x9a5f70))(ASC, &handle, &NewSpec, nullptr);
		}
	}

	static inline void (*MovingEmoteStoppedOG)(AFortPlayerPawnAthena* Pawn);
	static void MovingEmoteStopped(AFortPlayerPawnAthena* Pawn)
	{
		if (!Pawn)
			return MovingEmoteStoppedOG(Pawn);
		Pawn->bMovingEmote = false;
		Pawn->bMovingEmoteForwardOnly = false;
		return MovingEmoteStoppedOG(Pawn);
	}

	static void ServerReturnToMainMenu(AFortPlayerControllerAthena* PC)
	{
		PC->ClientReturnToMainMenu(L"");
	}

	static inline AActor* (*SpawnToyInstanceOG)(UObject* Context, FFrame& Stack, AActor** Ret);
	static AActor* SpawnToyInstance(UObject* Context, FFrame& Stack, AActor** Ret)
	{
		Utils::Log("call");
		TSubclassOf<class AActor> ToyClass;
		FTransform SpawnPosition;
		Stack.StepCompiledIn(&ToyClass);
		Stack.StepCompiledIn(&SpawnPosition);

		SpawnToyInstanceOG(Context, Stack, Ret);
		auto PC = (AFortPlayerControllerAthena*)Context;
		auto Actor = Utils::SpawnActor(ToyClass.Get(), SpawnPosition, PC);

		PC->ActiveToyInstances.Add(Actor);
		for (auto& [Key, Val] : PC->ToySummonCounts)
		{
			if (Key == ToyClass)
			{
				Val++;
				break;
			}
		}

		*Ret = Actor;
		return Actor;
	}
	static void ServerCheat(AFortPlayerControllerAthena* PC, FString FCommand)
	{
		auto Command = FCommand.ToString();
		auto GS = AFortGameStateAthena::Get();
		auto GM = AFortGameModeAthena::Get();
		if (Command == "startbus" && GS->GamePhase < EAthenaGamePhase::Aircraft)
		{
			((void (*)(AGameModeBase*, int))(ImageBase + 0x1ed5710))(GM, 0);
			GameMode::startedBus = true;
		}
		else if (Command.starts_with("spawnactor "))
		{
			auto Loc = PC->Pawn->K2_GetActorLocation();
			Loc.Z += 500.f;
			auto ClassOrPath = Command.substr(11);
			auto Class = Utils::FindObject<UClass>(ClassOrPath);
			if (!Class)
				Class = UObject::FindClassFast(ClassOrPath.c_str());
			if (!Class)
				Class = UObject::FindClass(ClassOrPath.c_str());
			if (Class)
				Utils::SpawnActor(Class, Loc);
		}
		else if (Command.starts_with("loadlevel "))
		{
			auto Loc = PC->Pawn->K2_GetActorLocation();
			Loc.Z += 500.f;
			auto Path_ = Command.substr(10);
			auto Path = xwstring(Path_.begin(), Path_.end());
			ULevelStreamingDynamic::LoadLevelInstance(UWorld::Get(), Path.c_str(), Loc, FRotator(), nullptr, FString());
		}
		else if (Command.starts_with("internal "))
		{
			auto Cmd_ = Command.substr(9);
			auto Cmd = xwstring(Cmd_.begin(), Cmd_.end());
			UKismetSystemLibrary::ExecuteConsoleCommand(UWorld::Get(), Cmd.c_str(), nullptr);
		}
		else if (Command.starts_with("spawnpickup "))
		{
			auto WeaponName = Command.substr(12);
			auto Weapon = Utils::FindObject<UFortItemDefinition>(WeaponName);
			Inventory::SpawnPickup(PC->Pawn->K2_GetActorLocation(), Weapon, 1, 0, EFortPickupSourceTypeFlag::Tossed, EFortPickupSpawnSource::Unset, PC->MyFortPawn, false);
		}
		else if (Command.starts_with("getquesttags"))
		{
			FGameplayTagContainer SourceTags;
			FGameplayTagContainer ContextTags;
			FGameplayTagContainer PlaylistContextTags;
			FGameplayTagContainer PoiLocationTags;

			PC->GetQuestManager(ESubGame::Athena)->GetSourceAndContextTags(&SourceTags, &ContextTags);
			PlaylistContextTags = AFortGameStateAthena::Get()->CurrentPlaylistInfo.BasePlaylist->GameplayTagContainer;
			PoiLocationTags = AFortGameStateAthena::Get()->GetPoiGridTagsForLocation(PC->Pawn->K2_GetActorLocation());

			for (auto& Tag : SourceTags.GameplayTags)
				Utils::Log("SourceTags GameplayTag: " + Tag.TagName.ToString());

			for (auto& Tag : SourceTags.ParentTags)
				Utils::Log("SourceTags ParentTag: " + Tag.TagName.ToString());

			for (auto& Tag : ContextTags.GameplayTags)
				Utils::Log("ContextTags GameplayTag: " + Tag.TagName.ToString());

			for (auto& Tag : ContextTags.ParentTags)
				Utils::Log("ContextTags ParentTag: " + Tag.TagName.ToString());

			for (auto& Tag : PlaylistContextTags.GameplayTags)
				Utils::Log("PlaylistContextTags GameplayTag: " + Tag.TagName.ToString());

			for (auto& Tag : PlaylistContextTags.ParentTags)
				Utils::Log("PlaylistContextTags ParentTag: " + Tag.TagName.ToString());

			for (auto& Tag : PoiLocationTags.GameplayTags)
				Utils::Log("PoiLocationTags GameplayTag: " + Tag.TagName.ToString());

			for (auto& Tag : PoiLocationTags.ParentTags)
				Utils::Log("PoiLocationTags ParentTag: " + Tag.TagName.ToString());
		}
		else if (Command.starts_with("setupzonething"))
		{
			auto SafeZoneIndicator = GM->SafeZoneIndicator;
			SafeZoneIndicator->SetSafeZoneRadiusAndCenter(300 * 100, FVector(0, 0, 0));
		}
	}

	static inline void (*OnPlayImpactFXOG)(AFortWeapon* Weapon, FHitResult& HitResult, EPhysicalSurface ImpactPhysicalSurface, UFXSystemComponent* SpawnedPSC);
	static void OnPlayImpactFX(AFortWeapon* Weapon, FHitResult& HitResult, EPhysicalSurface ImpactPhysicalSurface, UFXSystemComponent* SpawnedPSC)
	{
		auto Pawn = Weapon->GetOwner()->Cast<AFortPlayerPawnAthena>();
		if (!Pawn || !((AFortPlayerControllerAthena*)Pawn->Controller)->WorldInventory)
			return OnPlayImpactFXOG(Weapon, HitResult, ImpactPhysicalSurface, SpawnedPSC);

		if (Pawn->CurrentWeapon && ((Inventory::GetStats(Pawn->CurrentWeapon->WeaponData) && Inventory::GetStats(Pawn->CurrentWeapon->WeaponData)->ClipSize == 0) || (Weapon->IsA<AB_HappyGhost_Athena_C>() && HitResult.Actor->bCanBeDamaged)))
		{
			auto ent = ((AFortPlayerControllerAthena*)Pawn->Controller)->WorldInventory->Inventory.ReplicatedEntries.Search([Pawn](FFortItemEntry& entry)
				{ return entry.ItemGuid == Pawn->CurrentWeapon->ItemEntryGuid; });
			if (ent)
			{
				ent->LoadedAmmo--;
				Inventory::ReplaceEntry((AFortPlayerControllerAthena*)Pawn->Controller, *ent);
			}
		}
		OnPlayImpactFXOG(Weapon, HitResult, ImpactPhysicalSurface, SpawnedPSC);
	}

	static inline void (*K2_ActivateAbilityOG)(UObject* Object, FFrame& Stack);
	static void K2_ActivateAbility(UObject* Object, FFrame& Stack)
	{
		auto PlayerLaunch = (UGA_WilliePete_PlayerLaunch_C*)Object;
		auto Pawn = (AFortPlayerPawnAthena*)PlayerLaunch->GetActivatingPawn();
		PlayerLaunch->OwningPawn = Pawn;
		Pawn->LaunchCharacterJump({ 0, 0, PlayerLaunch->LaunchHeightValue.GetValue() }, false, true, true, true);
		return K2_ActivateAbilityOG(Object, Stack);
	}

	static inline void (*Redeploy_GliderOG)(UObject* Object, FFrame& Stack);
	static void Redeploy_Glider(UObject* Object, FFrame& Stack)
	{
		auto PlayerLaunch = (UGA_WilliePete_PlayerLaunch_C*)Object;
		auto Pawn = (AFortPlayerPawnAthena*)PlayerLaunch->GetActivatingPawn();
		Utils::Log("wow");
		return Redeploy_GliderOG(Object, Stack);
	}

public:
	static void HookFunctions()
	{
		Utils::Hook<AFortPlayerControllerAthena>(ServerAcknowledgePossessionVft, ServerAcknowledgePossessionHook, ServerAcknowledgePossessionOG);
		Utils::Hook<AFortPlayerControllerAthena>(ServerExecuteInventoryItemVft, ServerExecuteInventoryItemHook);
		Utils::Hook<AFortPlayerControllerAthena>(uint32(0x21d), ServerAttemptInventoryDrop);
		Utils::Hook<AFortPlayerPawnAthena>(0x1F0, ServerHandlePickupInfo, ServerHandlePickupInfoOG);
		Utils::Hook<AFortPlayerPawnAthena>(ServerSendZiplineStateVft, ServerSendZiplineState);
		Utils::Hook<AFortPlayerControllerAthena>(uint32(0x4FA), ServerClientIsReadyToRespawn);
		Utils::Hook<AFortPlayerControllerAthena>(uint32(0x265), ServerReturnToMainMenu);
		Utils::Hook<AFortPlayerControllerAthena>(uint32(0x1c9), ServerPlayEmoteItem);
		Utils::Hook<AFortPlayerControllerAthena>(uint32(0x1c7), ServerCheat);
		Utils::Hook<AFortPlayerPawnAthena>(uint32(0x243), RetFalse); // shakedown, delete when fixed - ploosh
		Utils::Hook<AFortPlayerPawnAthena>(uint32(0x119), NetMulticast_Athena_BatchedDamageCues, NetMulticast_Athena_BatchedDamageCuesOG);
		Utils::Hook<UFortControllerComponent_Aircraft>(ServerAttemptAircraftJumpVft, ServerAttemptAircraftJumpHook);
		Utils::Hook<UFortControllerComponent_Interaction>(uint32(0x8b), ServerAttemptInteract, ServerAttemptInteractOG);
		Utils::Hook(DispatchRequest, DispatchRequestHook, DispatchRequestOG);
		Utils::Hook(ImageBase + 0x295b660, GetPlayerViewPoint, GetPlayerViewPointOG);
		Utils::Hook(ImageBase + 0x308dc10, ClientOnPawnDied, ClientOnPawnDiedOG);
		Utils::Hook(ImageBase + 0x261d8e0, CompletePickupAnimation, CompletePickupAnimationOG);
		Utils::Hook(ImageBase + 0x9f25a0, MovingEmoteStopped, MovingEmoteStoppedOG);
		Utils::Hook(ImageBase + 0x2ca3e80, ReloadWeapon);
		Utils::Hook(ImageBase + 0x290ca00, OnCapsuleBeginOverlap, OnCapsuleBeginOverlapOG);
		Utils::Hook(ImageBase + 0x306ea50, SpawnToyInstance, SpawnToyInstanceOG);
		Utils::Hook(ImageBase + 0x3168c80, OnPlayImpactFX, OnPlayImpactFXOG);
		Utils::ExecHook(Utils::FindObject<UFunction>("/Game/Athena/Items/EnvironmentalItems/HidingProps/Props/GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.K2_ActivateAbility"), K2_ActivateAbility, K2_ActivateAbilityOG);
		Utils::ExecHook(Utils::FindObject<UFunction>("/Game/Athena/Items/EnvironmentalItems/HidingProps/Props/GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.Redeploy Glider"), Redeploy_Glider, Redeploy_GliderOG);
	}
};
