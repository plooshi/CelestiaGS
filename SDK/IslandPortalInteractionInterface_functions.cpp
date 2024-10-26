#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IslandPortalInteractionInterface

#include "Basic.hpp"

#include "IslandPortalInteractionInterface_classes.hpp"
#include "IslandPortalInteractionInterface_parameters.hpp"


namespace SDK
{

// Function IslandPortalInteractionInterface.IslandPortalInteractionInterface_C.BroadcastIsBeingInteractedWith
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInteracting                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIslandPortalInteractionInterface_C::BroadcastIsBeingInteractedWith(bool IsInteracting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IslandPortalInteractionInterface_C", "BroadcastIsBeingInteractedWith");

	Params::IslandPortalInteractionInterface_C_BroadcastIsBeingInteractedWith Parms{};

	Parms.IsInteracting = IsInteracting;

	UObject::ProcessEvent(Func, &Parms);
}

}

