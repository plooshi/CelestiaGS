#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_XP_Pop_Source

#include "Basic.hpp"

#include "HUD_XP_Pop_Source_classes.hpp"
#include "HUD_XP_Pop_Source_parameters.hpp"


namespace SDK
{

// Function HUD_XP_Pop_Source.HUD_XP_Pop_Source_C.ExecuteUbergraph_HUD_XP_Pop_Source
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_XP_Pop_Source_C::ExecuteUbergraph_HUD_XP_Pop_Source(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_XP_Pop_Source_C", "ExecuteUbergraph_HUD_XP_Pop_Source");

	Params::HUD_XP_Pop_Source_C_ExecuteUbergraph_HUD_XP_Pop_Source Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_XP_Pop_Source.HUD_XP_Pop_Source_C.EventSetSourceText
// (BlueprintCallable, BlueprintEvent)

void UHUD_XP_Pop_Source_C::EventSetSourceText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_XP_Pop_Source_C", "EventSetSourceText");

	UObject::ProcessEvent(Func, nullptr);
}

}

