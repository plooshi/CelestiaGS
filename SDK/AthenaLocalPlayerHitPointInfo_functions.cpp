#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLocalPlayerHitPointInfo

#include "Basic.hpp"

#include "AthenaLocalPlayerHitPointInfo_classes.hpp"
#include "AthenaLocalPlayerHitPointInfo_parameters.hpp"


namespace SDK
{

// Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.ExecuteUbergraph_AthenaLocalPlayerHitPointInfo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLocalPlayerHitPointInfo_C::ExecuteUbergraph_AthenaLocalPlayerHitPointInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLocalPlayerHitPointInfo_C", "ExecuteUbergraph_AthenaLocalPlayerHitPointInfo");

	Params::AthenaLocalPlayerHitPointInfo_C_ExecuteUbergraph_AthenaLocalPlayerHitPointInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLocalPlayerHitPointInfo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLocalPlayerHitPointInfo_C", "PreConstruct");

	Params::AthenaLocalPlayerHitPointInfo_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.OnPawnHealthChanged_Event
// (BlueprintCallable, BlueprintEvent)

void UAthenaLocalPlayerHitPointInfo_C::OnPawnHealthChanged_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLocalPlayerHitPointInfo_C", "OnPawnHealthChanged_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaLocalPlayerHitPointInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLocalPlayerHitPointInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.HandleEnterVehicle
// (Event, Protected, BlueprintEvent)

void UAthenaLocalPlayerHitPointInfo_C::HandleEnterVehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLocalPlayerHitPointInfo_C", "HandleEnterVehicle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.HandleExitVehicle
// (Event, Protected, BlueprintEvent)

void UAthenaLocalPlayerHitPointInfo_C::HandleExitVehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLocalPlayerHitPointInfo_C", "HandleExitVehicle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.OnCreativeQuickbarEquippedChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsEquipped                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLocalPlayerHitPointInfo_C::OnCreativeQuickbarEquippedChanged(bool bIsEquipped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLocalPlayerHitPointInfo_C", "OnCreativeQuickbarEquippedChanged");

	Params::AthenaLocalPlayerHitPointInfo_C_OnCreativeQuickbarEquippedChanged Parms{};

	Parms.bIsEquipped = bIsEquipped;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.OnCreativeModeEnabledChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bIsEnabled                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLocalPlayerHitPointInfo_C::OnCreativeModeEnabledChanged(bool Param_bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLocalPlayerHitPointInfo_C", "OnCreativeModeEnabledChanged");

	Params::AthenaLocalPlayerHitPointInfo_C_OnCreativeModeEnabledChanged Parms{};

	Parms.Param_bIsEnabled = Param_bIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

}
