#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MatchStatsGrid

#include "Basic.hpp"

#include "MatchStatsGrid_classes.hpp"
#include "MatchStatsGrid_parameters.hpp"


namespace SDK
{

// Function MatchStatsGrid.MatchStatsGrid_C.SetStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaMatchStatView*             AthenaMatchStats                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchStatsGrid_C::SetStats(class UAthenaMatchStatView* AthenaMatchStats)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatchStatsGrid_C", "SetStats");

	Params::MatchStatsGrid_C_SetStats Parms{};

	Parms.AthenaMatchStats = AthenaMatchStats;

	UObject::ProcessEvent(Func, &Parms);
}

}
