#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaPickupMessageItem

#include "Basic.hpp"

#include "AthenaPickupMessageItem_classes.hpp"
#include "AthenaPickupMessageItem_parameters.hpp"


namespace SDK
{

// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPickupMessageItem_C::Setup(TSoftObjectPtr<class UTexture2D> Icon, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPickupMessageItem_C", "Setup");

	Params::AthenaPickupMessageItem_C_Setup Parms{};

	Parms.Icon = Icon;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}

}

