#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaQuickBarSlot

#include "Basic.hpp"

#include "AthenaQuickBarSlot_classes.hpp"
#include "AthenaQuickBarSlot_parameters.hpp"


namespace SDK
{

// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.ExecuteUbergraph_AthenaQuickBarSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaQuickBarSlot_C::ExecuteUbergraph_AthenaQuickBarSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickBarSlot_C", "ExecuteUbergraph_AthenaQuickBarSlot");

	Params::AthenaQuickBarSlot_C_ExecuteUbergraph_AthenaQuickBarSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.Handle OnQuickbarContentsChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuickBars                          QuickbarIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           ChangedSlots                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UAthenaQuickBarSlot_C::Handle_OnQuickbarContentsChanged(EFortQuickBars QuickbarIndex, const TArray<int32>& ChangedSlots)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickBarSlot_C", "Handle OnQuickbarContentsChanged");

	Params::AthenaQuickBarSlot_C_Handle_OnQuickbarContentsChanged Parms{};

	Parms.QuickbarIndex = QuickbarIndex;
	Parms.ChangedSlots = move(ChangedSlots);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaQuickBarSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickBarSlot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    InTouchEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaQuickBarSlot_C::OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickBarSlot_C", "OnTouchStarted");

	Params::AthenaQuickBarSlot_C_OnTouchStarted Parms{};

	Parms.MyGeometry = move(MyGeometry);
	Parms.InTouchEvent = move(InTouchEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

