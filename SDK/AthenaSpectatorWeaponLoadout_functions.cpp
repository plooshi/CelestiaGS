#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSpectatorWeaponLoadout

#include "Basic.hpp"

#include "AthenaSpectatorWeaponLoadout_classes.hpp"
#include "AthenaSpectatorWeaponLoadout_parameters.hpp"


namespace SDK
{

// Function AthenaSpectatorWeaponLoadout.AthenaSpectatorWeaponLoadout_C.ExecuteUbergraph_AthenaSpectatorWeaponLoadout
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorWeaponLoadout_C::ExecuteUbergraph_AthenaSpectatorWeaponLoadout(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSpectatorWeaponLoadout_C", "ExecuteUbergraph_AthenaSpectatorWeaponLoadout");

	Params::AthenaSpectatorWeaponLoadout_C_ExecuteUbergraph_AthenaSpectatorWeaponLoadout Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaSpectatorWeaponLoadout.AthenaSpectatorWeaponLoadout_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorWeaponLoadout_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSpectatorWeaponLoadout_C", "PreConstruct");

	Params::AthenaSpectatorWeaponLoadout_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
