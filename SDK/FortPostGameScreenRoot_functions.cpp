#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortPostGameScreenRoot

#include "Basic.hpp"

#include "FortPostGameScreenRoot_classes.hpp"
#include "FortPostGameScreenRoot_parameters.hpp"


namespace SDK
{

// Function FortPostGameScreenRoot.FortPostGameScreenRoot_C.OnToggleBlurRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFortPostGameScreenRoot_C::OnToggleBlurRequested__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPostGameScreenRoot_C", "OnToggleBlurRequested__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FortPostGameScreenRoot.FortPostGameScreenRoot_C.ExecuteUbergraph_FortPostGameScreenRoot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortPostGameScreenRoot_C::ExecuteUbergraph_FortPostGameScreenRoot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPostGameScreenRoot_C", "ExecuteUbergraph_FortPostGameScreenRoot");

	Params::FortPostGameScreenRoot_C_ExecuteUbergraph_FortPostGameScreenRoot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FortPostGameScreenRoot.FortPostGameScreenRoot_C.AnimateCinematicBars
// (Event, Protected, BlueprintEvent)

void UFortPostGameScreenRoot_C::AnimateCinematicBars()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPostGameScreenRoot_C", "AnimateCinematicBars");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FortPostGameScreenRoot.FortPostGameScreenRoot_C.ToggleBlur
// (Event, Protected, BlueprintEvent)

void UFortPostGameScreenRoot_C::ToggleBlur()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPostGameScreenRoot_C", "ToggleBlur");

	UObject::ProcessEvent(Func, nullptr);
}

}
