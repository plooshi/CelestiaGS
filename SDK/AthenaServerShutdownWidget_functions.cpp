#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaServerShutdownWidget

#include "Basic.hpp"

#include "AthenaServerShutdownWidget_classes.hpp"
#include "AthenaServerShutdownWidget_parameters.hpp"


namespace SDK
{

// Function AthenaServerShutdownWidget.AthenaServerShutdownWidget_C.ExecuteUbergraph_AthenaServerShutdownWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaServerShutdownWidget_C::ExecuteUbergraph_AthenaServerShutdownWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaServerShutdownWidget_C", "ExecuteUbergraph_AthenaServerShutdownWidget");

	Params::AthenaServerShutdownWidget_C_ExecuteUbergraph_AthenaServerShutdownWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaServerShutdownWidget.AthenaServerShutdownWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaServerShutdownWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaServerShutdownWidget_C", "PreConstruct");

	Params::AthenaServerShutdownWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaServerShutdownWidget.AthenaServerShutdownWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaServerShutdownWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaServerShutdownWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaServerShutdownWidget.AthenaServerShutdownWidget_C.OnStopShowing
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   RemainingTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaServerShutdownWidget_C::OnStopShowing(float RemainingTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaServerShutdownWidget_C", "OnStopShowing");

	Params::AthenaServerShutdownWidget_C_OnStopShowing Parms{};

	Parms.RemainingTime = RemainingTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaServerShutdownWidget.AthenaServerShutdownWidget_C.OnStartShowing
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   RemainingTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaServerShutdownWidget_C::OnStartShowing(float RemainingTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaServerShutdownWidget_C", "OnStartShowing");

	Params::AthenaServerShutdownWidget_C_OnStartShowing Parms{};

	Parms.RemainingTime = RemainingTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaServerShutdownWidget.AthenaServerShutdownWidget_C.OnUpdateCountdown
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   RemainingTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaServerShutdownWidget_C::OnUpdateCountdown(float RemainingTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaServerShutdownWidget_C", "OnUpdateCountdown");

	Params::AthenaServerShutdownWidget_C_OnUpdateCountdown Parms{};

	Parms.RemainingTime = RemainingTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaServerShutdownWidget.AthenaServerShutdownWidget_C.SetCountdownText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   RemainingTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaServerShutdownWidget_C::SetCountdownText(float RemainingTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaServerShutdownWidget_C", "SetCountdownText");

	Params::AthenaServerShutdownWidget_C_SetCountdownText Parms{};

	Parms.RemainingTime = RemainingTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
