#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MatchXPScreen

#include "Basic.hpp"

#include "MatchXPScreen_classes.hpp"
#include "MatchXPScreen_parameters.hpp"


namespace SDK
{

// Function MatchXPScreen.MatchXPScreen_C.ExecuteUbergraph_MatchXPScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchXPScreen_C::ExecuteUbergraph_MatchXPScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatchXPScreen_C", "ExecuteUbergraph_MatchXPScreen");

	Params::MatchXPScreen_C_ExecuteUbergraph_MatchXPScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MatchXPScreen.MatchXPScreen_C.SetStatButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMatchXPScreen_C::SetStatButtonText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatchXPScreen_C", "SetStatButtonText");

	Params::MatchXPScreen_C_SetStatButtonText Parms{};

	Parms.InText = move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MatchXPScreen.MatchXPScreen_C.OnToggleDetailsRecap
// (Event, Protected, BlueprintEvent)

void UMatchXPScreen_C::OnToggleDetailsRecap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatchXPScreen_C", "OnToggleDetailsRecap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MatchXPScreen.MatchXPScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UMatchXPScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatchXPScreen_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

}
