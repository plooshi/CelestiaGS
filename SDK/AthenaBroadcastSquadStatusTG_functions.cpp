#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaBroadcastSquadStatusTG

#include "Basic.hpp"

#include "AthenaBroadcastSquadStatusTG_classes.hpp"
#include "AthenaBroadcastSquadStatusTG_parameters.hpp"


namespace SDK
{

// Function AthenaBroadcastSquadStatusTG.AthenaBroadcastSquadStatusTG_C.ExecuteUbergraph_AthenaBroadcastSquadStatusTG
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBroadcastSquadStatusTG_C::ExecuteUbergraph_AthenaBroadcastSquadStatusTG(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastSquadStatusTG_C", "ExecuteUbergraph_AthenaBroadcastSquadStatusTG");

	Params::AthenaBroadcastSquadStatusTG_C_ExecuteUbergraph_AthenaBroadcastSquadStatusTG Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaBroadcastSquadStatusTG.AthenaBroadcastSquadStatusTG_C.UpdateFromMinigameTeamId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMinigameTeamIdentification*  MinigameTeamId                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBroadcastSquadStatusTG_C::UpdateFromMinigameTeamId(const class UFortMinigameTeamIdentification* MinigameTeamId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastSquadStatusTG_C", "UpdateFromMinigameTeamId");

	Params::AthenaBroadcastSquadStatusTG_C_UpdateFromMinigameTeamId Parms{};

	Parms.MinigameTeamId = MinigameTeamId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaBroadcastSquadStatusTG.AthenaBroadcastSquadStatusTG_C.OnMinigameTeamIdChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortMinigameTeamIdentification*  MinigameTeamId                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBroadcastSquadStatusTG_C::OnMinigameTeamIdChanged(const class UFortMinigameTeamIdentification* MinigameTeamId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastSquadStatusTG_C", "OnMinigameTeamIdChanged");

	Params::AthenaBroadcastSquadStatusTG_C_OnMinigameTeamIdChanged Parms{};

	Parms.MinigameTeamId = MinigameTeamId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaBroadcastSquadStatusTG.AthenaBroadcastSquadStatusTG_C.OnPipModeChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bPipModeEnabled                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaBroadcastSquadStatusTG_C::OnPipModeChanged(bool Param_bPipModeEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastSquadStatusTG_C", "OnPipModeChanged");

	Params::AthenaBroadcastSquadStatusTG_C_OnPipModeChanged Parms{};

	Parms.Param_bPipModeEnabled = Param_bPipModeEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaBroadcastSquadStatusTG.AthenaBroadcastSquadStatusTG_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaBroadcastSquadStatusTG_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastSquadStatusTG_C", "PreConstruct");

	Params::AthenaBroadcastSquadStatusTG_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaBroadcastSquadStatusTG.AthenaBroadcastSquadStatusTG_C.OnFollowedPlayerChanged
// (Event, Protected, BlueprintEvent)

void UAthenaBroadcastSquadStatusTG_C::OnFollowedPlayerChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastSquadStatusTG_C", "OnFollowedPlayerChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaBroadcastSquadStatusTG.AthenaBroadcastSquadStatusTG_C.OnPlayerAdded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemoteSquadViewData*       InSquadData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaRemotePlayerViewData*      InPlayerData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBroadcastSquadStatusTG_C::OnPlayerAdded(class UAthenaRemoteSquadViewData* InSquadData, class UAthenaRemotePlayerViewData* InPlayerData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastSquadStatusTG_C", "OnPlayerAdded");

	Params::AthenaBroadcastSquadStatusTG_C_OnPlayerAdded Parms{};

	Parms.InSquadData = InSquadData;
	Parms.InPlayerData = InPlayerData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaBroadcastSquadStatusTG.AthenaBroadcastSquadStatusTG_C.RebuildSquad
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaBroadcastSquadStatusTG_C::RebuildSquad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastSquadStatusTG_C", "RebuildSquad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaBroadcastSquadStatusTG.AthenaBroadcastSquadStatusTG_C.UpdateTeamTagVisibility
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaBroadcastSquadStatusTG_C::UpdateTeamTagVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastSquadStatusTG_C", "UpdateTeamTagVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

}
