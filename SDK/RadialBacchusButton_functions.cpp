#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RadialBacchusButton

#include "Basic.hpp"

#include "RadialBacchusButton_classes.hpp"
#include "RadialBacchusButton_parameters.hpp"


namespace SDK
{

// Function RadialBacchusButton.RadialBacchusButton_C.ExecuteUbergraph_RadialBacchusButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadialBacchusButton_C::ExecuteUbergraph_RadialBacchusButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadialBacchusButton_C", "ExecuteUbergraph_RadialBacchusButton");

	Params::RadialBacchusButton_C_ExecuteUbergraph_RadialBacchusButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RadialBacchusButton.RadialBacchusButton_C.OnCooldownCompleted
// (Event, Protected, BlueprintEvent)

void URadialBacchusButton_C::OnCooldownCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadialBacchusButton_C", "OnCooldownCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RadialBacchusButton.RadialBacchusButton_C.OnCooldownStarted
// (Event, Protected, BlueprintEvent)

void URadialBacchusButton_C::OnCooldownStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadialBacchusButton_C", "OnCooldownStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RadialBacchusButton.RadialBacchusButton_C.UpdateDuration_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   Remaining                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_Duration                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadialBacchusButton_C::UpdateDuration_Blueprint(float Remaining, float Param_Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadialBacchusButton_C", "UpdateDuration_Blueprint");

	Params::RadialBacchusButton_C_UpdateDuration_Blueprint Parms{};

	Parms.Remaining = Remaining;
	Parms.Param_Duration = Param_Duration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RadialBacchusButton.RadialBacchusButton_C.UpdateCooldown_Blueprint
// (Event, Protected, BlueprintEvent)

void URadialBacchusButton_C::UpdateCooldown_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadialBacchusButton_C", "UpdateCooldown_Blueprint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RadialBacchusButton.RadialBacchusButton_C.ReceiveRadialProgressEvent_Blueprint
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGameplayCueEvent                       EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void URadialBacchusButton_C::ReceiveRadialProgressEvent_Blueprint(class FName EventName, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadialBacchusButton_C", "ReceiveRadialProgressEvent_Blueprint");

	Params::RadialBacchusButton_C_ReceiveRadialProgressEvent_Blueprint Parms{};

	Parms.EventName = EventName;
	Parms.EventType = EventType;
	Parms.Parameters = move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RadialBacchusButton.RadialBacchusButton_C.VerifyCueCountIsClear
// (BlueprintCallable, BlueprintEvent)

void URadialBacchusButton_C::VerifyCueCountIsClear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadialBacchusButton_C", "VerifyCueCountIsClear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RadialBacchusButton.RadialBacchusButton_C.HideSelf
// (BlueprintCallable, BlueprintEvent)

void URadialBacchusButton_C::HideSelf()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadialBacchusButton_C", "HideSelf");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RadialBacchusButton.RadialBacchusButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URadialBacchusButton_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadialBacchusButton_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RadialBacchusButton.RadialBacchusButton_C.OnCursorModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCursorModeEnabled                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             ActionName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      CursorModeContentWidget                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadialBacchusButton_C::OnCursorModeChanged(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadialBacchusButton_C", "OnCursorModeChanged");

	Params::RadialBacchusButton_C_OnCursorModeChanged Parms{};

	Parms.bCursorModeEnabled = bCursorModeEnabled;
	Parms.ActionName = ActionName;
	Parms.CursorModeContentWidget = CursorModeContentWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RadialBacchusButton.RadialBacchusButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URadialBacchusButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadialBacchusButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RadialBacchusButton.RadialBacchusButton_C.IsListenedTag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag                     MatchedTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                                    Match                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URadialBacchusButton_C::IsListenedTag(const struct FGameplayTag& MatchedTag, bool* Match)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadialBacchusButton_C", "IsListenedTag");

	Params::RadialBacchusButton_C_IsListenedTag Parms{};

	Parms.MatchedTag = move(MatchedTag);

	UObject::ProcessEvent(Func, &Parms);

	if (Match != nullptr)
		*Match = Parms.Match;
}

}
