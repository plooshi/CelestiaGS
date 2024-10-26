#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaHUDMenu

#include "Basic.hpp"

#include "AthenaHUDMenu_classes.hpp"
#include "AthenaHUDMenu_parameters.hpp"


namespace SDK
{

// Function AthenaHUDMenu.AthenaHUDMenu_C.ExecuteUbergraph_AthenaHUDMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUDMenu_C::ExecuteUbergraph_AthenaHUDMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUDMenu_C", "ExecuteUbergraph_AthenaHUDMenu");

	Params::AthenaHUDMenu_C_ExecuteUbergraph_AthenaHUDMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUDMenu.AthenaHUDMenu_C.BP_OnPostGameEnded
// (Event, Protected, BlueprintEvent)

void UAthenaHUDMenu_C::BP_OnPostGameEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUDMenu_C", "BP_OnPostGameEnded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUDMenu.AthenaHUDMenu_C.BP_OnPostGameStarted
// (Event, Protected, BlueprintEvent)

void UAthenaHUDMenu_C::BP_OnPostGameStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUDMenu_C", "BP_OnPostGameStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUDMenu.AthenaHUDMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaHUDMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUDMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

