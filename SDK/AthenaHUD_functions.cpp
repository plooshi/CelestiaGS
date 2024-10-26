#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaHUD

#include "Basic.hpp"

#include "AthenaHUD_classes.hpp"
#include "AthenaHUD_parameters.hpp"


namespace SDK
{

// Function AthenaHUD.AthenaHUD_C.ExecuteUbergraph_AthenaHUD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::ExecuteUbergraph_AthenaHUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "ExecuteUbergraph_AthenaHUD");

	Params::AthenaHUD_C_ExecuteUbergraph_AthenaHUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.OnExtensionWidgetRemoved
// (Event, Protected, BlueprintEvent)
// Parameters:
// EUIExtensionSlot                        ExtensionSlot                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::OnExtensionWidgetRemoved(EUIExtensionSlot ExtensionSlot, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "OnExtensionWidgetRemoved");

	Params::AthenaHUD_C_OnExtensionWidgetRemoved Parms{};

	Parms.ExtensionSlot = ExtensionSlot;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.EndMatchSpectateLayout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Placement                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::EndMatchSpectateLayout(class FName Placement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "EndMatchSpectateLayout");

	Params::AthenaHUD_C_EndMatchSpectateLayout Parms{};

	Parms.Placement = Placement;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.OnPawnSet
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::OnPawnSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "OnPawnSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.HandleLocalPawnSet
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::HandleLocalPawnSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandleLocalPawnSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.PrepareToShowEndGameUI
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::PrepareToShowEndGameUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "PrepareToShowEndGameUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.OnDisplayGameOver
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::OnDisplayGameOver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "OnDisplayGameOver");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.HandleCursorModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bCursorModeEnabled                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             ActionName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      CustomWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::HandleCursorModeChanged(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CustomWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandleCursorModeChanged");

	Params::AthenaHUD_C_HandleCursorModeChanged Parms{};

	Parms.bCursorModeEnabled = bCursorModeEnabled;
	Parms.ActionName = ActionName;
	Parms.CustomWidget = CustomWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.On Placement Changed
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::On_Placement_Changed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "On Placement Changed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.SetQuickBarNative
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bShouldDoQuickBarNative                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::SetQuickBarNative(bool bShouldDoQuickBarNative)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "SetQuickBarNative");

	Params::AthenaHUD_C_SetQuickBarNative Parms{};

	Parms.bShouldDoQuickBarNative = bShouldDoQuickBarNative;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.OnExtensionWidgetCreated
// (Event, Protected, BlueprintEvent)
// Parameters:
// EUIExtensionSlot                        ExtensionSlot                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::OnExtensionWidgetCreated(EUIExtensionSlot ExtensionSlot, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "OnExtensionWidgetCreated");

	Params::AthenaHUD_C_OnExtensionWidgetCreated Parms{};

	Parms.ExtensionSlot = ExtensionSlot;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.OnHUDScaleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   HUDScale                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::OnHUDScaleChanged(float HUDScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "OnHUDScaleChanged");

	Params::AthenaHUD_C_OnHUDScaleChanged Parms{};

	Parms.HUDScale = HUDScale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.HandleRevived
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::HandleRevived()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandleRevived");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.OnRevived
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::OnRevived()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "OnRevived");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.On Player Died
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport           DeathReport                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaHUD_C::On_Player_Died(const struct FFortPlayerDeathReport& DeathReport)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "On Player Died");

	Params::AthenaHUD_C_On_Player_Died Parms{};

	Parms.DeathReport = move(DeathReport);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.Prepare Game Over
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::Prepare_Game_Over()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "Prepare Game Over");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.OnUnableToPerformAction
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer            FailedReason                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             FailureText                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaHUD_C::OnUnableToPerformAction(const struct FGameplayTagContainer& FailedReason, const class FText& FailureText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "OnUnableToPerformAction");

	Params::AthenaHUD_C_OnUnableToPerformAction Parms{};

	Parms.FailedReason = move(FailedReason);
	Parms.FailureText = move(FailureText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaHUD_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.HandleInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        InputType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::HandleInputMethodChanged(ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandleInputMethodChanged");

	Params::AthenaHUD_C_HandleInputMethodChanged Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaHUD_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.HandleQuickbarSlotFocusSlotChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuickBars                          Quickbar_Index                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Slot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::HandleQuickbarSlotFocusSlotChanged(EFortQuickBars Quickbar_Index, int32 Param_Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandleQuickbarSlotFocusSlotChanged");

	Params::AthenaHUD_C_HandleQuickbarSlotFocusSlotChanged Parms{};

	Parms.Quickbar_Index = Quickbar_Index;
	Parms.Param_Slot = Param_Slot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.SetQuickbarSizes
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::SetQuickbarSizes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "SetQuickbarSizes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.HandleKeybindsChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::HandleKeybindsChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandleKeybindsChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.HandleIndicatorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InidicatorsEnabled                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::HandleIndicatorModeChanged(bool InidicatorsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandleIndicatorModeChanged");

	Params::AthenaHUD_C_HandleIndicatorModeChanged Parms{};

	Parms.InidicatorsEnabled = InidicatorsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.ToggleChat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::ToggleChat(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "ToggleChat");

	Params::AthenaHUD_C_ToggleChat Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.HandleFocusChat
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::HandleFocusChat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandleFocusChat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.CheckHUDElementVisibility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer            HiddenHUDElementTags                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     HUDElementTagToCheck                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          HUDElement                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::CheckHUDElementVisibility(struct FGameplayTagContainer& HiddenHUDElementTags, const struct FGameplayTag& HUDElementTagToCheck, class UWidget*& HUDElement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "CheckHUDElementVisibility");

	Params::AthenaHUD_C_CheckHUDElementVisibility Parms{};

	Parms.HiddenHUDElementTags = move(HiddenHUDElementTags);
	Parms.HUDElementTagToCheck = move(HUDElementTagToCheck);
	Parms.HUDElement = HUDElement;

	UObject::ProcessEvent(Func, &Parms);

	HiddenHUDElementTags = move(Parms.HiddenHUDElementTags);
	HUDElement = Parms.HUDElement;
}


// Function AthenaHUD.AthenaHUD_C.HandleAircraftModeChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::HandleAircraftModeChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandleAircraftModeChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.SetupCameraMode
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::SetupCameraMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "SetupCameraMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::BindDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "BindDelegates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.HandlePawnSet
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::HandlePawnSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandlePawnSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.HandlePawnSet_VisibilityUpdates
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bHideElements                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::HandlePawnSet_VisibilityUpdates(bool& bHideElements)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandlePawnSet_VisibilityUpdates");

	Params::AthenaHUD_C_HandlePawnSet_VisibilityUpdates Parms{};

	Parms.bHideElements = bHideElements;

	UObject::ProcessEvent(Func, &Parms);

	bHideElements = Parms.bHideElements;
}


// Function AthenaHUD.AthenaHUD_C.HandlePawnSet_RCPawnVisibilityUpdates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::HandlePawnSet_RCPawnVisibilityUpdates(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandlePawnSet_RCPawnVisibilityUpdates");

	Params::AthenaHUD_C_HandlePawnSet_RCPawnVisibilityUpdates Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.AllowCursorModeWhenDead
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Allow                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::AllowCursorModeWhenDead(bool* Allow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "AllowCursorModeWhenDead");

	Params::AthenaHUD_C_AllowCursorModeWhenDead Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Allow != nullptr)
		*Allow = Parms.Allow;
}


// Function AthenaHUD.AthenaHUD_C.UpdateCursorModeVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CursorMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::UpdateCursorModeVisibility(class FName CursorMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "UpdateCursorModeVisibility");

	Params::AthenaHUD_C_UpdateCursorModeVisibility Parms{};

	Parms.CursorMode = CursorMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.HandleGameViewportActivationChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::HandleGameViewportActivationChanged(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandleGameViewportActivationChanged");

	Params::AthenaHUD_C_HandleGameViewportActivationChanged Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaHUD_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "OnKeyDown");

	Params::AthenaHUD_C_OnKeyDown Parms{};

	Parms.MyGeometry = move(MyGeometry);
	Parms.InKeyEvent = move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AthenaHUD.AthenaHUD_C.HandleToggledBattleMapLive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleMapPawnLive*               NewSpectatorPawn                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::HandleToggledBattleMapLive(class ABattleMapPawnLive* NewSpectatorPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandleToggledBattleMapLive");

	Params::AthenaHUD_C_HandleToggledBattleMapLive Parms{};

	Parms.NewSpectatorPawn = NewSpectatorPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.ProcessPawnChangeForRCPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::ProcessPawnChangeForRCPawn(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "ProcessPawnChangeForRCPawn");

	Params::AthenaHUD_C_ProcessPawnChangeForRCPawn Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.ProcessPawnChangeForOstrich
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::ProcessPawnChangeForOstrich(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "ProcessPawnChangeForOstrich");

	Params::AthenaHUD_C_ProcessPawnChangeForOstrich Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.IsInVehicleOstrich
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::IsInVehicleOstrich(class UObject* Object, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "IsInVehicleOstrich");

	Params::AthenaHUD_C_IsInVehicleOstrich Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;
}


// Function AthenaHUD.AthenaHUD_C.HandleVehicleEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::HandleVehicleEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandleVehicleEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.Reset UI Changes for Ostrich
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::Reset_UI_Changes_for_Ostrich()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "Reset UI Changes for Ostrich");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.OnCreativeQuickbarEquippedChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEquipped                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::OnCreativeQuickbarEquippedChanged(bool IsEquipped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "OnCreativeQuickbarEquippedChanged");

	Params::AthenaHUD_C_OnCreativeQuickbarEquippedChanged Parms{};

	Parms.IsEquipped = IsEquipped;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.IsClientNotifiedOfWin
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    bClientWon                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bTeamWon                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::IsClientNotifiedOfWin(bool* bClientWon, bool* bTeamWon) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "IsClientNotifiedOfWin");

	Params::AthenaHUD_C_IsClientNotifiedOfWin Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bClientWon != nullptr)
		*bClientWon = Parms.bClientWon;

	if (bTeamWon != nullptr)
		*bTeamWon = Parms.bTeamWon;
}


// Function AthenaHUD.AthenaHUD_C.WidgetContainsChildClass
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPanelWidget*                     WidgetToCheckChildren                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           ContainsClass                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bContainsChild                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::WidgetContainsChildClass(class UPanelWidget* WidgetToCheckChildren, class UClass* ContainsClass, bool* bContainsChild) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "WidgetContainsChildClass");

	Params::AthenaHUD_C_WidgetContainsChildClass Parms{};

	Parms.WidgetToCheckChildren = WidgetToCheckChildren;
	Parms.ContainsClass = ContainsClass;

	UObject::ProcessEvent(Func, &Parms);

	if (bContainsChild != nullptr)
		*bContainsChild = Parms.bContainsChild;
}

}

