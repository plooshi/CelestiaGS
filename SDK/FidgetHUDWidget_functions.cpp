#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FidgetHUDWidget

#include "Basic.hpp"

#include "FidgetHUDWidget_classes.hpp"
#include "FidgetHUDWidget_parameters.hpp"


namespace SDK
{

// Function FidgetHUDWidget.FidgetHUDWidget_C.ExecuteUbergraph_FidgetHUDWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFidgetHUDWidget_C::ExecuteUbergraph_FidgetHUDWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FidgetHUDWidget_C", "ExecuteUbergraph_FidgetHUDWidget");

	Params::FidgetHUDWidget_C_ExecuteUbergraph_FidgetHUDWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FidgetHUDWidget.FidgetHUDWidget_C.OnGamePhaseStepChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EAthenaGamePhaseStep                    GamePhaseStep                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFidgetHUDWidget_C::OnGamePhaseStepChanged(EAthenaGamePhaseStep GamePhaseStep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FidgetHUDWidget_C", "OnGamePhaseStepChanged");

	Params::FidgetHUDWidget_C_OnGamePhaseStepChanged Parms{};

	Parms.GamePhaseStep = GamePhaseStep;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FidgetHUDWidget.FidgetHUDWidget_C.KeybindsChanged
// (BlueprintCallable, BlueprintEvent)

void UFidgetHUDWidget_C::KeybindsChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FidgetHUDWidget_C", "KeybindsChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FidgetHUDWidget.FidgetHUDWidget_C.SkydiveLeaderChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bLocal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerState*                 SkydiveLeader                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFidgetHUDWidget_C::SkydiveLeaderChanged(bool bEnabled, bool bLocal, class AFortPlayerState* SkydiveLeader)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FidgetHUDWidget_C", "SkydiveLeaderChanged");

	Params::FidgetHUDWidget_C_SkydiveLeaderChanged Parms{};

	Parms.bEnabled = bEnabled;
	Parms.bLocal = bLocal;
	Parms.SkydiveLeader = SkydiveLeader;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FidgetHUDWidget.FidgetHUDWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFidgetHUDWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FidgetHUDWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FidgetHUDWidget.FidgetHUDWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFidgetHUDWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FidgetHUDWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
