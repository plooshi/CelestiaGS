#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Prop_Plant_Shrub_03

#include "Basic.hpp"

#include "Athena_Prop_Plant_Shrub_03_classes.hpp"
#include "Athena_Prop_Plant_Shrub_03_parameters.hpp"


namespace SDK
{

// Function Athena_Prop_Plant_Shrub_03.Athena_Prop_Plant_Shrub_03_C.ExecuteUbergraph_Athena_Prop_Plant_Shrub_03
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_Prop_Plant_Shrub_03_C::ExecuteUbergraph_Athena_Prop_Plant_Shrub_03(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Plant_Shrub_03_C", "ExecuteUbergraph_Athena_Prop_Plant_Shrub_03");

	Params::Athena_Prop_Plant_Shrub_03_C_ExecuteUbergraph_Athena_Prop_Plant_Shrub_03 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Prop_Plant_Shrub_03.Athena_Prop_Plant_Shrub_03_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AAthena_Prop_Plant_Shrub_03_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Plant_Shrub_03_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Prop_Plant_Shrub_03.Athena_Prop_Plant_Shrub_03_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAthena_Prop_Plant_Shrub_03_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Plant_Shrub_03_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
