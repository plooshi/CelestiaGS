#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Tethered

#include "Basic.hpp"

#include "GA_Athena_Tethered_classes.hpp"
#include "GA_Athena_Tethered_parameters.hpp"


namespace SDK
{

// Function GA_Athena_Tethered.GA_Athena_Tethered_C.ExecuteUbergraph_GA_Athena_Tethered
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Tethered_C::ExecuteUbergraph_GA_Athena_Tethered(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Tethered_C", "ExecuteUbergraph_GA_Athena_Tethered");

	Params::GA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Tethered.GA_Athena_Tethered_C.BreakBuildingsAtPlayerInDirectionOfTether
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Tethered_C::BreakBuildingsAtPlayerInDirectionOfTether()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Tethered_C", "BreakBuildingsAtPlayerInDirectionOfTether");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Tethered.GA_Athena_Tethered_C.MovementModeChangedDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMovementMode                           PrevMovementMode                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   PreviousCustomMode                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Tethered_C::MovementModeChangedDelegate_Event_0(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Tethered_C", "MovementModeChangedDelegate_Event_0");

	Params::GA_Athena_Tethered_C_MovementModeChangedDelegate_Event_0 Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Tethered.GA_Athena_Tethered_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_Tethered_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Tethered_C", "K2_OnEndAbility");

	Params::GA_Athena_Tethered_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Tethered.GA_Athena_Tethered_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Tethered_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Tethered_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Tethered.GA_Athena_Tethered_C.BreakNearbyStructures
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          ForwardVector                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OffsetForward                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Tethered_C::BreakNearbyStructures(const struct FVector& ForwardVector, float OffsetForward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Tethered_C", "BreakNearbyStructures");

	Params::GA_Athena_Tethered_C_BreakNearbyStructures Parms{};

	Parms.ForwardVector = move(ForwardVector);
	Parms.OffsetForward = OffsetForward;

	UObject::ProcessEvent(Func, &Parms);
}

}
