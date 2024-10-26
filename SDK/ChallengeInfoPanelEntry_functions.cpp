#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengeInfoPanelEntry

#include "Basic.hpp"

#include "ChallengeInfoPanelEntry_classes.hpp"
#include "ChallengeInfoPanelEntry_parameters.hpp"


namespace SDK
{

// Function ChallengeInfoPanelEntry.ChallengeInfoPanelEntry_C.ExecuteUbergraph_ChallengeInfoPanelEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeInfoPanelEntry_C::ExecuteUbergraph_ChallengeInfoPanelEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeInfoPanelEntry_C", "ExecuteUbergraph_ChallengeInfoPanelEntry");

	Params::ChallengeInfoPanelEntry_C_ExecuteUbergraph_ChallengeInfoPanelEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChallengeInfoPanelEntry.ChallengeInfoPanelEntry_C.OnLocalPlayerMissingAssistedChallenge
// (Event, Protected, BlueprintEvent)

void UChallengeInfoPanelEntry_C::OnLocalPlayerMissingAssistedChallenge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeInfoPanelEntry_C", "OnLocalPlayerMissingAssistedChallenge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengeInfoPanelEntry.ChallengeInfoPanelEntry_C.OnChallengeInfoSet
// (Event, Protected, BlueprintEvent)

void UChallengeInfoPanelEntry_C::OnChallengeInfoSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeInfoPanelEntry_C", "OnChallengeInfoSet");

	UObject::ProcessEvent(Func, nullptr);
}

}

