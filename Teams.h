#pragma once
#include "pch.h"

class Teams
{
	static inline uint8_t NextTeam = 3;
	static inline uint8_t LastPlayers = 0;
	static EFortTeam PickTeamHook(AFortGameModeAthena *GameMode, uint8_t Preferred, AFortPlayerControllerAthena *PC)
	{
		uint8_t Return = NextTeam;

		auto GameState = AFortGameStateAthena::Get();

		LastPlayers++;
		if (LastPlayers >= GameState->CurrentPlaylistInfo.BasePlaylist->MaxSquadSize)
		{
			NextTeam++;
			LastPlayers = 0;
		}

		return EFortTeam(Return);
	}

	void ServerReviveFromDBNO(AFortPlayerPawn *Pawn, class AController *EventInstigator)
	{
		Pawn->bIsDBNO = false;
		Pawn->OnRep_IsDBNO();
	}

public:
	static void HookFunctions()
	{
		Utils::Hook(PickTeam, PickTeamHook);
	}
};