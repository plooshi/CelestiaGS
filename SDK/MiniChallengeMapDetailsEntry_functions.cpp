#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MiniChallengeMapDetailsEntry

#include "Basic.hpp"

#include "MiniChallengeMapDetailsEntry_classes.hpp"
#include "MiniChallengeMapDetailsEntry_parameters.hpp"


namespace SDK
{

// Function MiniChallengeMapDetailsEntry.MiniChallengeMapDetailsEntry_C.ExecuteUbergraph_MiniChallengeMapDetailsEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniChallengeMapDetailsEntry_C::ExecuteUbergraph_MiniChallengeMapDetailsEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniChallengeMapDetailsEntry_C", "ExecuteUbergraph_MiniChallengeMapDetailsEntry");

	Params::MiniChallengeMapDetailsEntry_C_ExecuteUbergraph_MiniChallengeMapDetailsEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniChallengeMapDetailsEntry.MiniChallengeMapDetailsEntry_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMiniChallengeMapDetailsEntry_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniChallengeMapDetailsEntry_C", "BP_OnItemSelectionChanged");

	Params::MiniChallengeMapDetailsEntry_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniChallengeMapDetailsEntry.MiniChallengeMapDetailsEntry_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMiniChallengeMapDetailsEntry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniChallengeMapDetailsEntry_C", "BP_OnItemExpansionChanged");

	Params::MiniChallengeMapDetailsEntry_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniChallengeMapDetailsEntry.MiniChallengeMapDetailsEntry_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UMiniChallengeMapDetailsEntry_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniChallengeMapDetailsEntry_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}

}
