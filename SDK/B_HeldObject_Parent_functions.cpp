#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_HeldObject_Parent

#include "Basic.hpp"

#include "B_HeldObject_Parent_classes.hpp"
#include "B_HeldObject_Parent_parameters.hpp"


namespace SDK
{

// Function B_HeldObject_Parent.B_HeldObject_Parent_C.ExecuteUbergraph_B_HeldObject_Parent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_HeldObject_Parent_C::ExecuteUbergraph_B_HeldObject_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HeldObject_Parent_C", "ExecuteUbergraph_B_HeldObject_Parent");

	Params::B_HeldObject_Parent_C_ExecuteUbergraph_B_HeldObject_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_HeldObject_Parent.B_HeldObject_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_HeldObject_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HeldObject_Parent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_HeldObject_Parent.B_HeldObject_Parent_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_HeldObject_Parent_C::BlueprintOnInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HeldObject_Parent_C", "BlueprintOnInteract");

	Params::B_HeldObject_Parent_C_BlueprintOnInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_HeldObject_Parent.B_HeldObject_Parent_C.OnRep_IsHeld
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_HeldObject_Parent_C::OnRep_IsHeld()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HeldObject_Parent_C", "OnRep_IsHeld");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_HeldObject_Parent.B_HeldObject_Parent_C.OnRep_IsSocketed
// (BlueprintCallable, BlueprintEvent)

void AB_HeldObject_Parent_C::OnRep_IsSocketed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HeldObject_Parent_C", "OnRep_IsSocketed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_HeldObject_Parent.B_HeldObject_Parent_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETInteractionType                       InteractionType                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AB_HeldObject_Parent_C::BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HeldObject_Parent_C", "BlueprintCanInteract");

	Params::B_HeldObject_Parent_C_BlueprintCanInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;
	Parms.InteractionType = InteractionType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_HeldObject_Parent.B_HeldObject_Parent_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText AB_HeldObject_Parent_C::BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HeldObject_Parent_C", "BlueprintGetInteractionString");

	Params::B_HeldObject_Parent_C_BlueprintGetInteractionString Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

