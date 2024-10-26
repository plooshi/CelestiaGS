#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Athena_BuriedChest_Spawner

#include "Basic.hpp"

#include "B_Athena_BuriedChest_Spawner_classes.hpp"
#include "B_Athena_BuriedChest_Spawner_parameters.hpp"


namespace SDK
{

// Function B_Athena_BuriedChest_Spawner.B_Athena_BuriedChest_Spawner_C.ExecuteUbergraph_B_Athena_BuriedChest_Spawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Athena_BuriedChest_Spawner_C::ExecuteUbergraph_B_Athena_BuriedChest_Spawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_BuriedChest_Spawner_C", "ExecuteUbergraph_B_Athena_BuriedChest_Spawner");

	Params::B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Athena_BuriedChest_Spawner.B_Athena_BuriedChest_Spawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Athena_BuriedChest_Spawner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_BuriedChest_Spawner_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Athena_BuriedChest_Spawner.B_Athena_BuriedChest_Spawner_C.EQSFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EEnvQueryStatus                         QueryStatus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Athena_BuriedChest_Spawner_C::EQSFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_BuriedChest_Spawner_C", "EQSFinished");

	Params::B_Athena_BuriedChest_Spawner_C_EQSFinished Parms{};

	Parms.QueryInstance = QueryInstance;
	Parms.QueryStatus = QueryStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Athena_BuriedChest_Spawner.B_Athena_BuriedChest_Spawner_C.OnReady_3CC8EEA44ECD5BB2C05F4DB46D35F02D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*             GameState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylist*                    Playlist                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            PlaylistContextTags                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_Athena_BuriedChest_Spawner_C::OnReady_3CC8EEA44ECD5BB2C05F4DB46D35F02D(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_BuriedChest_Spawner_C", "OnReady_3CC8EEA44ECD5BB2C05F4DB46D35F02D");

	Params::B_Athena_BuriedChest_Spawner_C_OnReady_3CC8EEA44ECD5BB2C05F4DB46D35F02D Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = move(PlaylistContextTags);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Athena_BuriedChest_Spawner.B_Athena_BuriedChest_Spawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Athena_BuriedChest_Spawner_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_BuriedChest_Spawner_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Athena_BuriedChest_Spawner.B_Athena_BuriedChest_Spawner_C.CheckForSpawnRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AB_Athena_BuriedChest_Spawner_C::CheckForSpawnRate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_BuriedChest_Spawner_C", "CheckForSpawnRate");

	Params::B_Athena_BuriedChest_Spawner_C_CheckForSpawnRate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

