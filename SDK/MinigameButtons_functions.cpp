#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MinigameButtons

#include "Basic.hpp"

#include "MinigameButtons_classes.hpp"
#include "MinigameButtons_parameters.hpp"


namespace SDK
{

// Function MinigameButtons.MinigameButtons_C.UpdateButtonsFromButtonState
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMinigameButtons_C::UpdateButtonsFromButtonState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameButtons_C", "UpdateButtonsFromButtonState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MinigameButtons.MinigameButtons_C.SetButtonState
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMinigameButtonsState                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinigameButtons_C::SetButtonState(EMinigameButtonsState Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameButtons_C", "SetButtonState");

	Params::MinigameButtons_C_SetButtonState Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MinigameButtons.MinigameButtons_C.CenterOnCurrentButton
// (Public, BlueprintCallable, BlueprintEvent)

void UMinigameButtons_C::CenterOnCurrentButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameButtons_C", "CenterOnCurrentButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MinigameButtons.MinigameButtons_C.UpdateButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UMinigameButtons_C::UpdateButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameButtons_C", "UpdateButtons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MinigameButtons.MinigameButtons_C.BndEvt__StartGameButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinigameButtons_C::BndEvt__StartGameButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameButtons_C", "BndEvt__StartGameButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::MinigameButtons_C_BndEvt__StartGameButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MinigameButtons.MinigameButtons_C.BndEvt__EndGameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinigameButtons_C::BndEvt__EndGameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameButtons_C", "BndEvt__EndGameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::MinigameButtons_C_BndEvt__EndGameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MinigameButtons.MinigameButtons_C.SetWidgetSwitcherIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinigameButtons_C::SetWidgetSwitcherIndex(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameButtons_C", "SetWidgetSwitcherIndex");

	Params::MinigameButtons_C_SetWidgetSwitcherIndex Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MinigameButtons.MinigameButtons_C.BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinigameButtons_C::BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameButtons_C", "BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::MinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MinigameButtons.MinigameButtons_C.BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinigameButtons_C::BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameButtons_C", "BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	Params::MinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MinigameButtons.MinigameButtons_C.BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinigameButtons_C::BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameButtons_C", "BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");

	Params::MinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MinigameButtons.MinigameButtons_C.BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinigameButtons_C::BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameButtons_C", "BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::MinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MinigameButtons.MinigameButtons_C.BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinigameButtons_C::BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameButtons_C", "BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature");

	Params::MinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MinigameButtons.MinigameButtons_C.BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinigameButtons_C::BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameButtons_C", "BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature");

	Params::MinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MinigameButtons.MinigameButtons_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMinigameButtons_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameButtons_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MinigameButtons.MinigameButtons_C.ExecuteUbergraph_MinigameButtons
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinigameButtons_C::ExecuteUbergraph_MinigameButtons(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameButtons_C", "ExecuteUbergraph_MinigameButtons");

	Params::MinigameButtons_C_ExecuteUbergraph_MinigameButtons Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MinigameButtons.MinigameButtons_C.EndButtonUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinigameButtons_C::EndButtonUnhovered__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameButtons_C", "EndButtonUnhovered__DelegateSignature");

	Params::MinigameButtons_C_EndButtonUnhovered__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MinigameButtons.MinigameButtons_C.StartButtonUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinigameButtons_C::StartButtonUnhovered__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameButtons_C", "StartButtonUnhovered__DelegateSignature");

	Params::MinigameButtons_C_StartButtonUnhovered__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MinigameButtons.MinigameButtons_C.EndButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinigameButtons_C::EndButtonHovered__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameButtons_C", "EndButtonHovered__DelegateSignature");

	Params::MinigameButtons_C_EndButtonHovered__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MinigameButtons.MinigameButtons_C.StartButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinigameButtons_C::StartButtonHovered__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameButtons_C", "StartButtonHovered__DelegateSignature");

	Params::MinigameButtons_C_StartButtonHovered__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MinigameButtons.MinigameButtons_C.EndButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMinigameButtons_C::EndButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameButtons_C", "EndButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MinigameButtons.MinigameButtons_C.StartButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMinigameButtons_C::StartButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameButtons_C", "StartButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}
