#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Athena_SuperDingo_Spawner

#include "Basic.hpp"

#include "B_Athena_SuperDingo_Spawner_classes.hpp"
#include "B_Athena_SuperDingo_Spawner_parameters.hpp"


namespace SDK
{

// Function B_Athena_SuperDingo_Spawner.B_Athena_SuperDingo_Spawner_C.ExecuteUbergraph_B_Athena_SuperDingo_Spawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Athena_SuperDingo_Spawner_C::ExecuteUbergraph_B_Athena_SuperDingo_Spawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_SuperDingo_Spawner_C", "ExecuteUbergraph_B_Athena_SuperDingo_Spawner");

	Params::B_Athena_SuperDingo_Spawner_C_ExecuteUbergraph_B_Athena_SuperDingo_Spawner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Athena_SuperDingo_Spawner.B_Athena_SuperDingo_Spawner_C.RunEQS
// (BlueprintCallable, BlueprintEvent)

void AB_Athena_SuperDingo_Spawner_C::RunEQS()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_SuperDingo_Spawner_C", "RunEQS");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Athena_SuperDingo_Spawner.B_Athena_SuperDingo_Spawner_C.QueryFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EEnvQueryStatus                         QueryStatus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Athena_SuperDingo_Spawner_C::QueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_SuperDingo_Spawner_C", "QueryFinished");

	Params::B_Athena_SuperDingo_Spawner_C_QueryFinished Parms{};

	Parms.QueryInstance = QueryInstance;
	Parms.QueryStatus = QueryStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Athena_SuperDingo_Spawner.B_Athena_SuperDingo_Spawner_C.Spawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       SpawnTransform                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void AB_Athena_SuperDingo_Spawner_C::Spawn(const struct FTransform& SpawnTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_SuperDingo_Spawner_C", "Spawn");

	Params::B_Athena_SuperDingo_Spawner_C_Spawn Parms{};

	Parms.SpawnTransform = move(SpawnTransform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Athena_SuperDingo_Spawner.B_Athena_SuperDingo_Spawner_C.InitalSpawn
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>                  Locations                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void AB_Athena_SuperDingo_Spawner_C::InitalSpawn(const TArray<struct FVector>& Locations)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_SuperDingo_Spawner_C", "InitalSpawn");

	Params::B_Athena_SuperDingo_Spawner_C_InitalSpawn Parms{};

	Parms.Locations = move(Locations);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Athena_SuperDingo_Spawner.B_Athena_SuperDingo_Spawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Athena_SuperDingo_Spawner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_SuperDingo_Spawner_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Athena_SuperDingo_Spawner.B_Athena_SuperDingo_Spawner_C.OnReady_B0BE7F084F1885AE13A829BB40DE8390
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*             GameState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylist*                    Playlist                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            PlaylistContextTags                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_Athena_SuperDingo_Spawner_C::OnReady_B0BE7F084F1885AE13A829BB40DE8390(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_SuperDingo_Spawner_C", "OnReady_B0BE7F084F1885AE13A829BB40DE8390");

	Params::B_Athena_SuperDingo_Spawner_C_OnReady_B0BE7F084F1885AE13A829BB40DE8390 Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = move(PlaylistContextTags);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Athena_SuperDingo_Spawner.B_Athena_SuperDingo_Spawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Athena_SuperDingo_Spawner_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_SuperDingo_Spawner_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Athena_SuperDingo_Spawner.B_Athena_SuperDingo_Spawner_C.RollRarity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EFortRarity                             RarityOut                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Athena_SuperDingo_Spawner_C::RollRarity(EFortRarity* RarityOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_SuperDingo_Spawner_C", "RollRarity");

	Params::B_Athena_SuperDingo_Spawner_C_RollRarity Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RarityOut != nullptr)
		*RarityOut = Parms.RarityOut;
}


// Function B_Athena_SuperDingo_Spawner.B_Athena_SuperDingo_Spawner_C.GetRowsForSpawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   HeightMax                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HeightMin                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   LeashDistance                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Athena_SuperDingo_Spawner_C::GetRowsForSpawn(float* HeightMax, float* HeightMin, float* LeashDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_SuperDingo_Spawner_C", "GetRowsForSpawn");

	Params::B_Athena_SuperDingo_Spawner_C_GetRowsForSpawn Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HeightMax != nullptr)
		*HeightMax = Parms.HeightMax;

	if (HeightMin != nullptr)
		*HeightMin = Parms.HeightMin;

	if (LeashDistance != nullptr)
		*LeashDistance = Parms.LeashDistance;
}


// Function B_Athena_SuperDingo_Spawner.B_Athena_SuperDingo_Spawner_C.SelectSpawnerPOISize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Athena_SuperDingo_Spawner_C::SelectSpawnerPOISize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_SuperDingo_Spawner_C", "SelectSpawnerPOISize");

	UObject::ProcessEvent(Func, nullptr);
}

}

