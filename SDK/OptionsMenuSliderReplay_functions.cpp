#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsMenuSliderReplay

#include "Basic.hpp"

#include "OptionsMenuSliderReplay_classes.hpp"
#include "OptionsMenuSliderReplay_parameters.hpp"


namespace SDK
{

// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.SliderChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Slider_Value                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSliderReplay_C::SliderChanged__DelegateSignature(float Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSliderReplay_C", "SliderChanged__DelegateSignature");

	Params::OptionsMenuSliderReplay_C_SliderChanged__DelegateSignature Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.ExecuteUbergraph_OptionsMenuSliderReplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSliderReplay_C::ExecuteUbergraph_OptionsMenuSliderReplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSliderReplay_C", "ExecuteUbergraph_OptionsMenuSliderReplay");

	Params::OptionsMenuSliderReplay_C_ExecuteUbergraph_OptionsMenuSliderReplay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuSliderReplay_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSliderReplay_C", "PreConstruct");

	Params::OptionsMenuSliderReplay_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSliderReplay_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSliderReplay_C", "BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature");

	Params::OptionsMenuSliderReplay_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSliderReplay_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSliderReplay_C", "BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature");

	Params::OptionsMenuSliderReplay_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuSliderReplay_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSliderReplay_C", "BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuSliderReplay_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSliderReplay_C", "BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuSliderReplay_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSliderReplay_C", "OnMouseEnter");

	Params::OptionsMenuSliderReplay_C_OnMouseEnter Parms{};

	Parms.MyGeometry = move(MyGeometry);
	Parms.MouseEvent = move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuSliderReplay_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSliderReplay_C", "OnMouseLeave");

	Params::OptionsMenuSliderReplay_C_OnMouseLeave Parms{};

	Parms.MouseEvent = move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.Update Slider
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Slider_Text                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// float                                   Slider_Value                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Param_Hover_Text                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonTextBlock*                 Tooltip_Text_Block                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Min_Max_Value                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSliderReplay_C::Update_Slider(const class FText& Slider_Text, float Slider_Value, const class FText& Param_Hover_Text, class UCommonTextBlock* Tooltip_Text_Block, const struct FVector2D& Min_Max_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSliderReplay_C", "Update Slider");

	Params::OptionsMenuSliderReplay_C_Update_Slider Parms{};

	Parms.Slider_Text = move(Slider_Text);
	Parms.Slider_Value = Slider_Value;
	Parms.Param_Hover_Text = move(Param_Hover_Text);
	Parms.Tooltip_Text_Block = Tooltip_Text_Block;
	Parms.Min_Max_Value = move(Min_Max_Value);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.Center On Widget
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuSliderReplay_C::Center_On_Widget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSliderReplay_C", "Center On Widget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UOptionsMenuSliderReplay_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSliderReplay_C", "OnFocusReceived");

	Params::OptionsMenuSliderReplay_C_OnFocusReceived Parms{};

	Parms.MyGeometry = move(MyGeometry);
	Parms.InFocusEvent = move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.GetSliderValueText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ValueText                                              (Parm, OutParm)

void UOptionsMenuSliderReplay_C::GetSliderValueText(float Value, class FText* ValueText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSliderReplay_C", "GetSliderValueText");

	Params::OptionsMenuSliderReplay_C_GetSliderValueText Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	if (ValueText != nullptr)
		*ValueText = move(Parms.ValueText);
}


// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.Update Slider Value
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NormalizedValue                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSliderReplay_C::Update_Slider_Value(float NormalizedValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSliderReplay_C", "Update Slider Value");

	Params::OptionsMenuSliderReplay_C_Update_Slider_Value Parms{};

	Parms.NormalizedValue = NormalizedValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.GetMappedValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   MappedValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSliderReplay_C::GetMappedValue(float* MappedValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSliderReplay_C", "GetMappedValue");

	Params::OptionsMenuSliderReplay_C_GetMappedValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MappedValue != nullptr)
		*MappedValue = Parms.MappedValue;
}


// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.UpdateSliderValueUnmapped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   UnmappedValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSliderReplay_C::UpdateSliderValueUnmapped(float UnmappedValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSliderReplay_C", "UpdateSliderValueUnmapped");

	Params::OptionsMenuSliderReplay_C_UpdateSliderValueUnmapped Parms{};

	Parms.UnmappedValue = UnmappedValue;

	UObject::ProcessEvent(Func, &Parms);
}

}
