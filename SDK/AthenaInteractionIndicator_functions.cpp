#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaInteractionIndicator

#include "Basic.hpp"

#include "AthenaInteractionIndicator_classes.hpp"
#include "AthenaInteractionIndicator_parameters.hpp"


namespace SDK
{

// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.ExecuteUbergraph_AthenaInteractionIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInteractionIndicator_C::ExecuteUbergraph_AthenaInteractionIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInteractionIndicator_C", "ExecuteUbergraph_AthenaInteractionIndicator");

	Params::AthenaInteractionIndicator_C_ExecuteUbergraph_AthenaInteractionIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.SetInteractionFailure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPickup*                      Pickup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInteractionIndicator_C::SetInteractionFailure(class AFortPickup* Pickup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInteractionIndicator_C", "SetInteractionFailure");

	Params::AthenaInteractionIndicator_C_SetInteractionFailure Parms{};

	Parms.Pickup = Pickup;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.OnInputMethodChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        bNewInputType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInteractionIndicator_C::OnInputMethodChanged_Event_0(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInteractionIndicator_C", "OnInputMethodChanged_Event_0");

	Params::AthenaInteractionIndicator_C_OnInputMethodChanged_Event_0 Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaInteractionIndicator_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInteractionIndicator_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaInteractionIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInteractionIndicator_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.HandleInteractionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortInteractContextInfo*         Param_Interaction                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInteractionIndicator_C::HandleInteractionChanged(class UFortInteractContextInfo* Param_Interaction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInteractionIndicator_C", "HandleInteractionChanged");

	Params::AthenaInteractionIndicator_C_HandleInteractionChanged Parms{};

	Parms.Param_Interaction = Param_Interaction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.ShowPickupWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPickup*                      Pickup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInteractionIndicator_C::ShowPickupWidget(class AFortPickup* Pickup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInteractionIndicator_C", "ShowPickupWidget");

	Params::AthenaInteractionIndicator_C_ShowPickupWidget Parms{};

	Parms.Pickup = Pickup;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.ShowBasicInteractionWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaInteractionIndicator_C::ShowBasicInteractionWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInteractionIndicator_C", "ShowBasicInteractionWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.UpdateKeybinds
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaInteractionIndicator_C::UpdateKeybinds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInteractionIndicator_C", "UpdateKeybinds");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.IsInteractionWidgetSuppressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsSuppressed                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInteractionIndicator_C::IsInteractionWidgetSuppressed(bool* IsSuppressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInteractionIndicator_C", "IsInteractionWidgetSuppressed");

	Params::AthenaInteractionIndicator_C_IsInteractionWidgetSuppressed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsSuppressed != nullptr)
		*IsSuppressed = Parms.IsSuppressed;
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.UpdateWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaInteractionIndicator_C::UpdateWidgetVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInteractionIndicator_C", "UpdateWidgetVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.ShowWumba
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_Athena_Wumba_C*                WUMBA_Ref                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInteractionIndicator_C::ShowWumba(class AB_Athena_Wumba_C*& WUMBA_Ref)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInteractionIndicator_C", "ShowWumba");

	Params::AthenaInteractionIndicator_C_ShowWumba Parms{};

	Parms.WUMBA_Ref = WUMBA_Ref;

	UObject::ProcessEvent(Func, &Parms);

	WUMBA_Ref = Parms.WUMBA_Ref;
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.SetRarityForWumbaItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*              Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBorder*                          Border                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInteractionIndicator_C::SetRarityForWumbaItems(class UFortItemDefinition* Item, class UBorder* Border, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInteractionIndicator_C", "SetRarityForWumbaItems");

	Params::AthenaInteractionIndicator_C_SetRarityForWumbaItems Parms{};

	Parms.Item = Item;
	Parms.Border = Border;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.ShowSecondInteractionWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaInteractionIndicator_C::ShowSecondInteractionWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInteractionIndicator_C", "ShowSecondInteractionWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.AttemptSetItemToRepresent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemWidget_NUI*              Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                        ItemToRepresent                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInteractionIndicator_C::AttemptSetItemToRepresent(class UFortItemWidget_NUI* Widget, const class UFortItem* ItemToRepresent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInteractionIndicator_C", "AttemptSetItemToRepresent");

	Params::AthenaInteractionIndicator_C_AttemptSetItemToRepresent Parms{};

	Parms.Widget = Widget;
	Parms.ItemToRepresent = ItemToRepresent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.HandleKeybindsChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaInteractionIndicator_C::HandleKeybindsChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInteractionIndicator_C", "HandleKeybindsChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.UpdateForCurrentInput
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaInteractionIndicator_C::UpdateForCurrentInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInteractionIndicator_C", "UpdateForCurrentInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    InTouchEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaInteractionIndicator_C::OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInteractionIndicator_C", "OnTouchStarted");

	Params::AthenaInteractionIndicator_C_OnTouchStarted Parms{};

	Parms.MyGeometry = move(MyGeometry);
	Parms.InTouchEvent = move(InTouchEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    InTouchEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaInteractionIndicator_C::OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInteractionIndicator_C", "OnTouchEnded");

	Params::AthenaInteractionIndicator_C_OnTouchEnded Parms{};

	Parms.MyGeometry = move(MyGeometry);
	Parms.InTouchEvent = move(InTouchEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.OnTouchMoved
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    InTouchEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaInteractionIndicator_C::OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInteractionIndicator_C", "OnTouchMoved");

	Params::AthenaInteractionIndicator_C_OnTouchMoved Parms{};

	Parms.MyGeometry = move(MyGeometry);
	Parms.InTouchEvent = move(InTouchEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.GetVisibleVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        Param_Visibility                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInteractionIndicator_C::GetVisibleVisibility(ESlateVisibility* Param_Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInteractionIndicator_C", "GetVisibleVisibility");

	Params::AthenaInteractionIndicator_C_GetVisibleVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Visibility != nullptr)
		*Param_Visibility = Parms.Param_Visibility;
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.ShouldShowCreativeModeName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             CreativeNameText                                       (Parm, OutParm)

void UAthenaInteractionIndicator_C::ShouldShowCreativeModeName(bool* Show, class FText* CreativeNameText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInteractionIndicator_C", "ShouldShowCreativeModeName");

	Params::AthenaInteractionIndicator_C_ShouldShowCreativeModeName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Show != nullptr)
		*Show = Parms.Show;

	if (CreativeNameText != nullptr)
		*CreativeNameText = move(Parms.CreativeNameText);
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.IsSimpleInteractionWidgetVisible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Visible                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInteractionIndicator_C::IsSimpleInteractionWidgetVisible(bool* Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInteractionIndicator_C", "IsSimpleInteractionWidgetVisible");

	Params::AthenaInteractionIndicator_C_IsSimpleInteractionWidgetVisible Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.InteractionFailureText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPickup*                      Pickup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInteractionIndicator_C::InteractionFailureText(class AFortPickup* Pickup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInteractionIndicator_C", "InteractionFailureText");

	Params::AthenaInteractionIndicator_C_InteractionFailureText Parms{};

	Parms.Pickup = Pickup;

	UObject::ProcessEvent(Func, &Parms);
}

}
