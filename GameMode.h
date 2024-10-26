#pragma once
#include "pch.h"
#include "Looting.h"
#include "Vehicles.h"
#include "Misc.h"
#include "Globals.h"
#include "Abilities.h"
#include "Building.h"

class GameMode
{
	static inline bool (*ReadyToStartMatchOG)(AFortGameModeAthena *);
	static bool ReadyToStartMatchHook(AFortGameModeAthena *GM)
	{
		ReadyToStartMatchOG(GM);
		auto GS = AFortGameStateAthena::Get();
		if (!GS->CurrentPlaylistInfo.BasePlaylist)
		{
			SetConsoleTitleA("Celestia | Setting up");
			GM->WarmupRequiredPlayerCount = 1;

			auto Playlist = Utils::FindObject<UFortPlaylistAthena>(Globals::PlaylistName.data());

			GS->CurrentPlaylistInfo.BasePlaylist = Playlist;
			GS->CurrentPlaylistInfo.OverridePlaylist = Playlist;
			GS->CurrentPlaylistInfo.PlaylistReplicationKey++;
			GS->CurrentPlaylistInfo.MarkArrayDirty();
			GS->OnRep_CurrentPlaylistInfo();

			GM->bAlwaysDBNO = Playlist->MaxSquadSize > 1;

			GS->CurrentPlaylistId = Playlist->PlaylistId;
			GS->OnRep_CurrentPlaylistId();

			GM->CurrentPlaylistName = Playlist->PlaylistName;
			GM->CurrentPlaylistId = Playlist->PlaylistId;

			GM->GameSession->MaxPlayers = Playlist->MaxPlayers;
			GS->CachedSafeZoneStartUp = Playlist->SafeZoneStartUp;
			GS->AirCraftBehavior = Playlist->AirCraftBehavior;

			if (auto GameSessionDedicatedAthena = GM->GameSession->Cast<AFortGameSessionDedicatedAthena>())
			{
				// GameSessionDedicatedAthena->HandlePlaylistLoaded(Playlist->PlaylistName, Playlist->GameplayTagContainer);
			}

			if (auto BotManager = (UFortServerBotManagerAthena*)UGameplayStatics::SpawnObject(UFortServerBotManagerAthena::StaticClass(), GM))
			{
				GM->ServerBotManager = BotManager;
				BotManager->CachedGameState = GS;
				BotManager->CachedGameMode = GM;
			}
			else
			{
				Utils::Log("BotManager is nullptr!");
			}

			static void (*CreateAIDirector)(AFortGameModeAthena * GameMode) = decltype(CreateAIDirector)(ImageBase + 0x1EA2F80);

			CreateAIDirector(GM);

			if (GM->AIDirector)
			{
				GM->AIDirector->Activate();
			}

			if (Playlist->AISettings)
			{
				if (Playlist->AISettings->bAllowAIGoalManager)
					GM->AIGoalManager = Utils::SpawnActor<AFortAIGoalManager>({ 0, 0, -99999 }, {});
			}
		}

		if (!UWorld::Get()->NetDriver)
		{
			auto Starts = Globals::bCreative ? (TArray<AActor*>) Utils::GetAll<AFortPlayerStartCreative>() : (TArray<AActor *>) Utils::GetAll<AFortPlayerStartWarmup>();
			auto StartsNum = Starts.Num();
			Starts.Free();
			if (StartsNum == 0)
				return false;
			
			using CreateNetDriverType = UNetDriver *(*)(UEngine *, UWorld *, FName);
			using InitListenType = bool (*)(UNetDriver *, UWorld *, FURL &, bool, FString &);
			using SetWorldType = void (*)(UNetDriver *, UWorld *);

			auto GND = FName(L"GameNetDriver");
			auto NetDriver = ((CreateNetDriverType)CreateNetDriver)(UEngine::GetEngine(), UWorld::Get(), GND);
			NetDriver->World = UWorld::Get();
			NetDriver->NetDriverName = GND;

			UWorld::Get()->NetDriver = NetDriver;
			for (auto &Collection : UWorld::Get()->LevelCollections)
				Collection.NetDriver = NetDriver;

			if (GS->CurrentPlaylistInfo.BasePlaylist->GameType != EFortGameType::BR)
			{
				FString Err;
				FURL URL;
				URL.Port = 7777;

				((InitListenType)InitListen)(NetDriver, UWorld::Get(), URL, false, Err);
				((SetWorldType)SetWorld)(NetDriver, UWorld::Get());
				SetConsoleTitleA("Celestia | Listening");
				GM->bWorldIsReady = true;
			}
		}

		auto Ret = GM->AlivePlayers.Num() >= GM->WarmupRequiredPlayerCount;
		if (!Ret)
		{
			auto Time = UGameplayStatics::GetTimeSeconds(UWorld::Get());
			auto WarmupDuration = 60.f;

			GS->WarmupCountdownStartTime = Time;
			GS->WarmupCountdownEndTime = Time + WarmupDuration + 10.f;
			GM->WarmupCountdownDuration = WarmupDuration;
			GM->WarmupEarlyCountdownDuration = WarmupDuration;
		}

		return Ret;
	}

	static APawn *SpawnDefaultPawnForHook(AFortGameModeAthena *GM, AFortPlayerControllerAthena *PC, AActor *StartSpot)
	{
		FRotator StartRotation;
		StartRotation.Yaw = StartSpot->K2_GetActorRotation().Yaw;
		auto Transform = FTransform(StartSpot->K2_GetActorLocation(), StartRotation);
		auto Pawn = GM->SpawnDefaultPawnAtTransform(PC, Transform);

		PC->WorldInventory->Inventory.ReplicatedEntries.ResetNum();
		PC->WorldInventory->Inventory.ItemInstances.ResetNum();

		for (auto &SI : GM->StartingItems)
			if (SI.Count)
				Inventory::GiveItem(PC, SI.Item, SI.Count);

		Inventory::GiveItem(PC, PC->CosmeticLoadoutPC.Pickaxe->WeaponDefinition);

		return Pawn;
	}

	static inline void (*HandleStartingNewPlayerOG)(AGameModeBase *, APlayerController *);
	static void HandleStartingNewPlayerHook(AGameModeBase *GM, APlayerController *NewPlayer)
	{
		auto GS = AFortGameStateAthena::Get();
		if (GS->GamePhase >= EAthenaGamePhase::Aircraft)
		{
			((void(*)(AGameSession*, APlayerController*, FText))(AFortGameModeAthena::Get()->GameSession->VTable[0xd3]))(AFortGameModeAthena::Get()->GameSession, NewPlayer, UKismetTextLibrary::Conv_StringToText(L"You joined too late!"));
			return;
		}
		AFortPlayerStateAthena *PlayerState = (AFortPlayerStateAthena *)NewPlayer->PlayerState;
		AFortPlayerControllerAthena *PC = (AFortPlayerControllerAthena *)NewPlayer;

		for (auto &Modifier : GS->CurrentPlaylistInfo.BasePlaylist->ModifierList)
		{
			for (auto &AbilitySet : Modifier.Get()->PersistentAbilitySets)
				if (!AbilitySet.DeliveryRequirements.bConsiderTeam && AbilitySet.DeliveryRequirements.bApplyToPlayerPawns && AbilitySet.AbilitySets)
					for (auto &AbilitySet : AbilitySet.AbilitySets)
						Abilities::GiveAbilitySet(PlayerState, AbilitySet.Get());
			for (auto &GameplayEffectSet : Modifier->PersistentGameplayEffects)
				if (!GameplayEffectSet.DeliveryRequirements.bConsiderTeam && GameplayEffectSet.DeliveryRequirements.bApplyToPlayerPawns && GameplayEffectSet.GameplayEffects)
					for (auto &GameplayEffect : GameplayEffectSet.GameplayEffects)
					{
						auto GE = GameplayEffect.GameplayEffect.Get();

						if (!GE)
							continue;
						PlayerState->AbilitySystemComponent->BP_ApplyGameplayEffectToSelf(GE, GameplayEffect.Level, FGameplayEffectContextHandle());
					}
		}

		PlayerState->SeasonLevelUIDisplay = PC->XPComponent->CurrentLevel;
		PlayerState->OnRep_SeasonLevelUIDisplay();
		PC->XPComponent->bRegisteredWithQuestManager = true;
		PC->XPComponent->OnRep_bRegisteredWithQuestManager();

		PC->GetQuestManager(ESubGame::Athena)->InitializeQuestAbilities(PC->Pawn);

		if (!PC->MatchReport)
			PC->MatchReport = (UAthenaPlayerMatchReport *)UGameplayStatics::SpawnObject(UAthenaPlayerMatchReport::StaticClass(), PC);

		PlayerState->SquadId = PlayerState->TeamIndex - 3;
		PlayerState->OnRep_SquadId();

		FGameMemberInfo Member;
		Member.MostRecentArrayReplicationKey = -1;
		Member.ReplicationID = -1;
		Member.ReplicationKey = -1;
		Member.TeamIndex = PlayerState->TeamIndex;
		Member.SquadId = PlayerState->SquadId;
		Member.MemberUniqueId = PlayerState->UniqueId;

		GS->GameMemberInfoArray.Members.Add(Member);
		GS->GameMemberInfoArray.MarkArrayDirty();

		return HandleStartingNewPlayerOG(GM, NewPlayer);
	}

	static inline void (*OnAircraftExitedDropZoneOG)(AFortGameModeAthena *, AFortAthenaAircraft *);
	static void OnAircraftExitedDropZone(AFortGameModeAthena *GM, AFortAthenaAircraft *Aircraft)
	{
		if (LateGame)
		{
			for (auto &Player : GM->AlivePlayers)
			{
				if (Player->IsInAircraft())
				{
					Player->GetAircraftComponent()->ServerAttemptAircraftJump({});
				}
			}
		}
		return OnAircraftExitedDropZoneOG(GM, Aircraft);
	}

public:
	static inline bool startedBus = false;

private:
	static inline void (*TickFlushOG)(UNetDriver *);
	static void TickFlushHook(UNetDriver *Driver)
	{
		if (Driver->ReplicationDriver)
			((void (*)(UReplicationDriver *))ServerReplicateActors)(Driver->ReplicationDriver);

		if (!startedBus)
		{
			static auto GS = AFortGameStateAthena::Get();
			auto Time = UGameplayStatics::GetTimeSeconds(UWorld::Get());
			if (GS->WarmupCountdownEndTime <= Time)
			{
				startedBus = true;

				((void (*)(AGameModeBase *, int))(ImageBase + 0x1ed5710))(AFortGameModeAthena::Get(), 0);
			}
		}
		else
		{
			for (auto& Bot : BotArray)
			{
				Bot->Tick();
			}
		}

		return TickFlushOG(Driver);
	}

	static UClass** GetGameSessionClass(__int64 a1, UClass** OutClass)
	{
		*OutClass = AFortGameSessionDedicatedAthena::StaticClass();
		return OutClass;
	}

	static void SpawnAIDirectorHook(AFortGameModeAthena* GameMode)
	{
		if (GameMode)
		{
			GameMode->AIDirector = Utils::SpawnActor<AAthenaAIDirector>({ 0, 0, -99999 }, {});
		}
	}

public:
	static void HookFunctions()
	{
		Utils::PatchU32(ImageBase + 0x1EA2F9C, 0x216C930);
		Utils::Hook(ImageBase + 0x400F8D0, SpawnAIDirectorHook);
		Utils::Hook(ReadyToStartMatch, ReadyToStartMatchHook, ReadyToStartMatchOG);
		Utils::Hook(TickFlush, TickFlushHook, TickFlushOG);
		Utils::Hook<AFortGameModeAthena>(uint32(0xd3), GetGameSessionClass);
	}

	static void HookPost()
	{
		Utils::Hook(ImageBase + 0x1ebade0, OnAircraftExitedDropZone, OnAircraftExitedDropZoneOG);
		Utils::Hook<AFortGameModeAthena>(HandleStartingNewPlayerVft, HandleStartingNewPlayerHook, HandleStartingNewPlayerOG);
		Utils::Hook<AFortGameModeAthena>(SpawnDefaultPawnForVft, SpawnDefaultPawnForHook);
	}
};
