#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaReadyUpTooltipTickWidget

#include "Basic.hpp"

#include "AthenaReadyUpTooltipTickWidget_classes.hpp"
#include "AthenaReadyUpTooltipTickWidget_parameters.hpp"


namespace SDK
{

// Function AthenaReadyUpTooltipTickWidget.AthenaReadyUpTooltipTickWidget_C.ExecuteUbergraph_AthenaReadyUpTooltipTickWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReadyUpTooltipTickWidget_C::ExecuteUbergraph_AthenaReadyUpTooltipTickWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaReadyUpTooltipTickWidget_C", "ExecuteUbergraph_AthenaReadyUpTooltipTickWidget");

	Params::AthenaReadyUpTooltipTickWidget_C_ExecuteUbergraph_AthenaReadyUpTooltipTickWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaReadyUpTooltipTickWidget.AthenaReadyUpTooltipTickWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaReadyUpTooltipTickWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaReadyUpTooltipTickWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaReadyUpTooltipTickWidget.AthenaReadyUpTooltipTickWidget_C.OnSetPartyMember
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPartyMember*                 NewPartyMember                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReadyUpTooltipTickWidget_C::OnSetPartyMember(class UFortPartyMember* NewPartyMember)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaReadyUpTooltipTickWidget_C", "OnSetPartyMember");

	Params::AthenaReadyUpTooltipTickWidget_C_OnSetPartyMember Parms{};

	Parms.NewPartyMember = NewPartyMember;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaReadyUpTooltipTickWidget.AthenaReadyUpTooltipTickWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaReadyUpTooltipTickWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaReadyUpTooltipTickWidget_C", "PreConstruct");

	Params::AthenaReadyUpTooltipTickWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaReadyUpTooltipTickWidget.AthenaReadyUpTooltipTickWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaReadyUpTooltipTickWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaReadyUpTooltipTickWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaReadyUpTooltipTickWidget.AthenaReadyUpTooltipTickWidget_C.SetReadiness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsReady                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaReadyUpTooltipTickWidget_C::SetReadiness(bool bIsReady)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaReadyUpTooltipTickWidget_C", "SetReadiness");

	Params::AthenaReadyUpTooltipTickWidget_C_SetReadiness Parms{};

	Parms.bIsReady = bIsReady;

	UObject::ProcessEvent(Func, &Parms);
}

}
