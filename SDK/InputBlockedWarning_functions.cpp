#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InputBlockedWarning

#include "Basic.hpp"

#include "InputBlockedWarning_classes.hpp"
#include "InputBlockedWarning_parameters.hpp"


namespace SDK
{

// Function InputBlockedWarning.InputBlockedWarning_C.ExecuteUbergraph_InputBlockedWarning
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputBlockedWarning_C::ExecuteUbergraph_InputBlockedWarning(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputBlockedWarning_C", "ExecuteUbergraph_InputBlockedWarning");

	Params::InputBlockedWarning_C_ExecuteUbergraph_InputBlockedWarning Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InputBlockedWarning.InputBlockedWarning_C.WarningFinished
// (BlueprintCallable, BlueprintEvent)

void UInputBlockedWarning_C::WarningFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputBlockedWarning_C", "WarningFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InputBlockedWarning.InputBlockedWarning_C.InputFiltered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        AttemptedInput                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputBlockedWarning_C::InputFiltered(ECommonInputType AttemptedInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputBlockedWarning_C", "InputFiltered");

	Params::InputBlockedWarning_C_InputFiltered Parms{};

	Parms.AttemptedInput = AttemptedInput;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InputBlockedWarning.InputBlockedWarning_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInputBlockedWarning_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputBlockedWarning_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
