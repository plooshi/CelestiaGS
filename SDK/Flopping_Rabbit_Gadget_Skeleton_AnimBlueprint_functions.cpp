#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_classes.hpp"
#include "Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint");

	Params::Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C_AnimGraph Parms{};

	Parms.InPose = move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = move(Parms.Param_AnimGraph);
}

}
