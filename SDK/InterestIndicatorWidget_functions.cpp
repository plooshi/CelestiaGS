#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InterestIndicatorWidget

#include "Basic.hpp"

#include "InterestIndicatorWidget_classes.hpp"
#include "InterestIndicatorWidget_parameters.hpp"


namespace SDK
{

// Function InterestIndicatorWidget.InterestIndicatorWidget_C.ExecuteUbergraph_InterestIndicatorWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInterestIndicatorWidget_C::ExecuteUbergraph_InterestIndicatorWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InterestIndicatorWidget_C", "ExecuteUbergraph_InterestIndicatorWidget");

	Params::InterestIndicatorWidget_C_ExecuteUbergraph_InterestIndicatorWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InterestIndicatorWidget.InterestIndicatorWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInterestIndicatorWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InterestIndicatorWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InterestIndicatorWidget.InterestIndicatorWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInterestIndicatorWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InterestIndicatorWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InterestIndicatorWidget.InterestIndicatorWidget_C.SetDisplayText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Description                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UInterestIndicatorWidget_C::SetDisplayText(const class FText& Description)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InterestIndicatorWidget_C", "SetDisplayText");

	Params::InterestIndicatorWidget_C_SetDisplayText Parms{};

	Parms.Description = move(Description);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InterestIndicatorWidget.InterestIndicatorWidget_C.SetDisplayImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInterestIndicatorWidget_C::SetDisplayImage(class UTexture2D* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InterestIndicatorWidget_C", "SetDisplayImage");

	Params::InterestIndicatorWidget_C_SetDisplayImage Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InterestIndicatorWidget.InterestIndicatorWidget_C.InitPointOfInterest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           PointOfInterest                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             DisplayText                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                       DisplayImage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     ImageColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInterestIndicatorWidget_C::InitPointOfInterest(class AActor* PointOfInterest, const class FText& DisplayText, class UTexture2D* DisplayImage, const struct FLinearColor& ImageColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InterestIndicatorWidget_C", "InitPointOfInterest");

	Params::InterestIndicatorWidget_C_InitPointOfInterest Parms{};

	Parms.PointOfInterest = PointOfInterest;
	Parms.DisplayText = move(DisplayText);
	Parms.DisplayImage = DisplayImage;
	Parms.ImageColor = move(ImageColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InterestIndicatorWidget.InterestIndicatorWidget_C.RemovePointOfInterest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           PointOfInterest                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Removed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInterestIndicatorWidget_C::RemovePointOfInterest(class AActor* PointOfInterest, bool* Removed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InterestIndicatorWidget_C", "RemovePointOfInterest");

	Params::InterestIndicatorWidget_C_RemovePointOfInterest Parms{};

	Parms.PointOfInterest = PointOfInterest;

	UObject::ProcessEvent(Func, &Parms);

	if (Removed != nullptr)
		*Removed = Parms.Removed;
}


// Function InterestIndicatorWidget.InterestIndicatorWidget_C.GetCanvasPanelContainer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EFortActorIndicatorContainerWidget      ContainerEnum                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanel*                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCanvasPanel* UInterestIndicatorWidget_C::GetCanvasPanelContainer(EFortActorIndicatorContainerWidget ContainerEnum) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InterestIndicatorWidget_C", "GetCanvasPanelContainer");

	Params::InterestIndicatorWidget_C_GetCanvasPanelContainer Parms{};

	Parms.ContainerEnum = ContainerEnum;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
