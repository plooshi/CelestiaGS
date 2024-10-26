#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SW_Interrupt

#include "Basic.hpp"

#include "BP_SW_Interrupt_classes.hpp"
#include "BP_SW_Interrupt_parameters.hpp"


namespace SDK
{

// Function BP_SW_Interrupt.BP_SW_Interrupt_C.ExecuteUbergraph_BP_SW_Interrupt
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SW_Interrupt_C::ExecuteUbergraph_BP_SW_Interrupt(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SW_Interrupt_C", "ExecuteUbergraph_BP_SW_Interrupt");

	Params::BP_SW_Interrupt_C_ExecuteUbergraph_BP_SW_Interrupt Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SW_Interrupt.BP_SW_Interrupt_C.ResetInterrupt
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_SW_Interrupt_C::ResetInterrupt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SW_Interrupt_C", "ResetInterrupt");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SW_Interrupt.BP_SW_Interrupt_C.PlayerKilled
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_SW_Interrupt_C::PlayerKilled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SW_Interrupt_C", "PlayerKilled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SW_Interrupt.BP_SW_Interrupt_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SW_Interrupt_C::BlueprintOnInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SW_Interrupt_C", "BlueprintOnInteract");

	Params::BP_SW_Interrupt_C_BlueprintOnInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SW_Interrupt.BP_SW_Interrupt_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SW_Interrupt_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SW_Interrupt_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SW_Interrupt.BP_SW_Interrupt_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      EventInstigator                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_SW_Interrupt_C::ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SW_Interrupt_C", "ShouldDie");

	Params::BP_SW_Interrupt_C_ShouldDie Parms{};

	Parms.Damage = Damage;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SW_Interrupt.BP_SW_Interrupt_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETInteractionType                       InteractionType                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_SW_Interrupt_C::BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SW_Interrupt_C", "BlueprintCanInteract");

	Params::BP_SW_Interrupt_C_BlueprintCanInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;
	Parms.InteractionType = InteractionType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SW_Interrupt.BP_SW_Interrupt_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText ABP_SW_Interrupt_C::BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SW_Interrupt_C", "BlueprintGetInteractionString");

	Params::BP_SW_Interrupt_C_BlueprintGetInteractionString Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

