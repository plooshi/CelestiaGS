#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GiftingUserItem

#include "Basic.hpp"

#include "GiftingUserItem_classes.hpp"
#include "GiftingUserItem_parameters.hpp"


namespace SDK
{

// Function GiftingUserItem.GiftingUserItem_C.ExecuteUbergraph_GiftingUserItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGiftingUserItem_C::ExecuteUbergraph_GiftingUserItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GiftingUserItem_C", "ExecuteUbergraph_GiftingUserItem");

	Params::GiftingUserItem_C_ExecuteUbergraph_GiftingUserItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GiftingUserItem.GiftingUserItem_C.UpdateMessageText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             NewMessage                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGiftingUserItem_C::UpdateMessageText(const class FText& NewMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GiftingUserItem_C", "UpdateMessageText");

	Params::GiftingUserItem_C_UpdateMessageText Parms{};

	Parms.NewMessage = move(NewMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GiftingUserItem.GiftingUserItem_C.SetSelectionState
// (Event, Public, BlueprintEvent)
// Parameters:
// ESelectionState                         NewState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAnimateOnSelect                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGiftingUserItem_C::SetSelectionState(ESelectionState NewState, bool bAnimateOnSelect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GiftingUserItem_C", "SetSelectionState");

	Params::GiftingUserItem_C_SetSelectionState Parms{};

	Parms.NewState = NewState;
	Parms.bAnimateOnSelect = bAnimateOnSelect;

	UObject::ProcessEvent(Func, &Parms);
}

}
