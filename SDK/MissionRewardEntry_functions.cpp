#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionRewardEntry

#include "Basic.hpp"

#include "MissionRewardEntry_classes.hpp"
#include "MissionRewardEntry_parameters.hpp"


namespace SDK
{

// Function MissionRewardEntry.MissionRewardEntry_C.ExecuteUbergraph_MissionRewardEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionRewardEntry_C::ExecuteUbergraph_MissionRewardEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionRewardEntry_C", "ExecuteUbergraph_MissionRewardEntry");

	Params::MissionRewardEntry_C_ExecuteUbergraph_MissionRewardEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionRewardEntry.MissionRewardEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionRewardEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionRewardEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionRewardEntry.MissionRewardEntry_C.ShowSelectionBorder
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionRewardEntry_C::ShowSelectionBorder()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionRewardEntry_C", "ShowSelectionBorder");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionRewardEntry.MissionRewardEntry_C.HideSelectionBorder
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionRewardEntry_C::HideSelectionBorder()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionRewardEntry_C", "HideSelectionBorder");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionRewardEntry.MissionRewardEntry_C.HideCompletionCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionRewardEntry_C::HideCompletionCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionRewardEntry_C", "HideCompletionCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionRewardEntry.MissionRewardEntry_C.ShowCompletionCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionRewardEntry_C::ShowCompletionCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionRewardEntry_C", "ShowCompletionCheck");

	UObject::ProcessEvent(Func, nullptr);
}

}
