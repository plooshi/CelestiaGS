#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSpectatorKillsWidget

#include "Basic.hpp"

#include "AthenaSpectatorKillsWidget_classes.hpp"
#include "AthenaSpectatorKillsWidget_parameters.hpp"


namespace SDK
{

// Function AthenaSpectatorKillsWidget.AthenaSpectatorKillsWidget_C.ExecuteUbergraph_AthenaSpectatorKillsWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorKillsWidget_C::ExecuteUbergraph_AthenaSpectatorKillsWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSpectatorKillsWidget_C", "ExecuteUbergraph_AthenaSpectatorKillsWidget");

	Params::AthenaSpectatorKillsWidget_C_ExecuteUbergraph_AthenaSpectatorKillsWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaSpectatorKillsWidget.AthenaSpectatorKillsWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorKillsWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSpectatorKillsWidget_C", "PreConstruct");

	Params::AthenaSpectatorKillsWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
