#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StayTogetherButton

#include "Basic.hpp"

#include "StayTogetherButton_classes.hpp"
#include "StayTogetherButton_parameters.hpp"


namespace SDK
{

// Function StayTogetherButton.StayTogetherButton_C.ExecuteUbergraph_StayTogetherButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStayTogetherButton_C::ExecuteUbergraph_StayTogetherButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StayTogetherButton_C", "ExecuteUbergraph_StayTogetherButton");

	Params::StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StayTogetherButton.StayTogetherButton_C.BP_HandlePreserveSquadChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bPreserveSquad                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStayTogetherButton_C::BP_HandlePreserveSquadChanged(bool bPreserveSquad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StayTogetherButton_C", "BP_HandlePreserveSquadChanged");

	Params::StayTogetherButton_C_BP_HandlePreserveSquadChanged Parms{};

	Parms.bPreserveSquad = bPreserveSquad;

	UObject::ProcessEvent(Func, &Parms);
}

}
