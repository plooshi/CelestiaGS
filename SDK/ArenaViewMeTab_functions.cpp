#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArenaViewMeTab

#include "Basic.hpp"

#include "ArenaViewMeTab_classes.hpp"
#include "ArenaViewMeTab_parameters.hpp"


namespace SDK
{

// Function ArenaViewMeTab.ArenaViewMeTab_C.ExecuteUbergraph_ArenaViewMeTab
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArenaViewMeTab_C::ExecuteUbergraph_ArenaViewMeTab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaViewMeTab_C", "ExecuteUbergraph_ArenaViewMeTab");

	Params::ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ArenaViewMeTab.ArenaViewMeTab_C.Colorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo       ColorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UArenaViewMeTab_C::Colorize(const struct FFortTournamentDisplayInfo& ColorInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaViewMeTab_C", "Colorize");

	Params::ArenaViewMeTab_C_Colorize Parms{};

	Parms.ColorInfo = move(ColorInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}
