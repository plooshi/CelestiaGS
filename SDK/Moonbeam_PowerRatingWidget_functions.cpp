#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Moonbeam_PowerRatingWidget

#include "Basic.hpp"

#include "Moonbeam_PowerRatingWidget_classes.hpp"
#include "Moonbeam_PowerRatingWidget_parameters.hpp"


namespace SDK
{

// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.ExecuteUbergraph_Moonbeam_PowerRatingWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMoonbeam_PowerRatingWidget_C::ExecuteUbergraph_Moonbeam_PowerRatingWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Moonbeam_PowerRatingWidget_C", "ExecuteUbergraph_Moonbeam_PowerRatingWidget");

	Params::Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnTeamMembershipChanged
// (Event, Protected, BlueprintEvent)

void UMoonbeam_PowerRatingWidget_C::OnTeamMembershipChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Moonbeam_PowerRatingWidget_C", "OnTeamMembershipChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMoonbeam_PowerRatingWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Moonbeam_PowerRatingWidget_C", "PreConstruct");

	Params::Moonbeam_PowerRatingWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnPowerRatingProgressUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   BaseRatingProgress                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TeamRatingProgress                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMoonbeam_PowerRatingWidget_C::OnPowerRatingProgressUpdated(float BaseRatingProgress, float TeamRatingProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Moonbeam_PowerRatingWidget_C", "OnPowerRatingProgressUpdated");

	Params::Moonbeam_PowerRatingWidget_C_OnPowerRatingProgressUpdated Parms{};

	Parms.BaseRatingProgress = BaseRatingProgress;
	Parms.TeamRatingProgress = TeamRatingProgress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnTeamPowerRatingUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   TeamPowerRating                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMoonbeam_PowerRatingWidget_C::OnTeamPowerRatingUpdated(int32 TeamPowerRating)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Moonbeam_PowerRatingWidget_C", "OnTeamPowerRatingUpdated");

	Params::Moonbeam_PowerRatingWidget_C_OnTeamPowerRatingUpdated Parms{};

	Parms.TeamPowerRating = TeamPowerRating;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnBasePowerRatingUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   BasePowerRating                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMoonbeam_PowerRatingWidget_C::OnBasePowerRatingUpdated(int32 BasePowerRating)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Moonbeam_PowerRatingWidget_C", "OnBasePowerRatingUpdated");

	Params::Moonbeam_PowerRatingWidget_C_OnBasePowerRatingUpdated Parms{};

	Parms.BasePowerRating = BasePowerRating;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMoonbeam_PowerRatingWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Moonbeam_PowerRatingWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.UpdateWidgetState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMoonbeam_PowerRatingWidget_C::UpdateWidgetState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Moonbeam_PowerRatingWidget_C", "UpdateWidgetState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.SetBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     NewColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMoonbeam_PowerRatingWidget_C::SetBackgroundColor(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Moonbeam_PowerRatingWidget_C", "SetBackgroundColor");

	Params::Moonbeam_PowerRatingWidget_C_SetBackgroundColor Parms{};

	Parms.NewColor = move(NewColor);

	UObject::ProcessEvent(Func, &Parms);
}

}
