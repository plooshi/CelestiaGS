#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaRespawnIndicator

#include "Basic.hpp"

#include "AthenaRespawnIndicator_classes.hpp"
#include "AthenaRespawnIndicator_parameters.hpp"


namespace SDK
{

// Function AthenaRespawnIndicator.AthenaRespawnIndicator_C.ExecuteUbergraph_AthenaRespawnIndicator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaRespawnIndicator_C::ExecuteUbergraph_AthenaRespawnIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaRespawnIndicator_C", "ExecuteUbergraph_AthenaRespawnIndicator");

	Params::AthenaRespawnIndicator_C_ExecuteUbergraph_AthenaRespawnIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaRespawnIndicator.AthenaRespawnIndicator_C.OnUpdateLives
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   Lives                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaRespawnIndicator_C::OnUpdateLives(int32 Lives)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaRespawnIndicator_C", "OnUpdateLives");

	Params::AthenaRespawnIndicator_C_OnUpdateLives Parms{};

	Parms.Lives = Lives;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaRespawnIndicator.AthenaRespawnIndicator_C.OnUpdateRespawnState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaRespawnIndicator_C::OnUpdateRespawnState(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaRespawnIndicator_C", "OnUpdateRespawnState");

	Params::AthenaRespawnIndicator_C_OnUpdateRespawnState Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaRespawnIndicator.AthenaRespawnIndicator_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaRespawnIndicator_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaRespawnIndicator_C", "PreConstruct");

	Params::AthenaRespawnIndicator_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaRespawnIndicator.AthenaRespawnIndicator_C.SetVisibilty
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaRespawnIndicator_C::SetVisibilty(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaRespawnIndicator_C", "SetVisibilty");

	Params::AthenaRespawnIndicator_C_SetVisibilty Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaRespawnIndicator.AthenaRespawnIndicator_C.ToggleRespawnState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_CanRespawn                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaRespawnIndicator_C::ToggleRespawnState(bool Param_CanRespawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaRespawnIndicator_C", "ToggleRespawnState");

	Params::AthenaRespawnIndicator_C_ToggleRespawnState Parms{};

	Parms.Param_CanRespawn = Param_CanRespawn;

	UObject::ProcessEvent(Func, &Parms);
}

}
