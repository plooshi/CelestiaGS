#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CreativePickupItemCostComponent

#include "Basic.hpp"

#include "CreativePickupItemCostComponent_classes.hpp"
#include "CreativePickupItemCostComponent_parameters.hpp"


namespace SDK
{

// Function CreativePickupItemCostComponent.CreativePickupItemCostComponent_C.GetCost
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TMap<EFortResourceType, int32>          Cost                                                   (Parm, OutParm)

void UCreativePickupItemCostComponent_C::GetCost(TMap<EFortResourceType, int32>* Cost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativePickupItemCostComponent_C", "GetCost");

	Params::CreativePickupItemCostComponent_C_GetCost Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Cost != nullptr)
		*Cost = move(Parms.Cost);
}

}
