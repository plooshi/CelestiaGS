#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JackalVehicleLayerAnimBP

#include "Basic.hpp"

#include "JackalVehicleLayerAnimBP_classes.hpp"
#include "JackalVehicleLayerAnimBP_parameters.hpp"


namespace SDK
{

// Function JackalVehicleLayerAnimBP.JackalVehicleLayerAnimBP_C.ExecuteUbergraph_JackalVehicleLayerAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJackalVehicleLayerAnimBP_C::ExecuteUbergraph_JackalVehicleLayerAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicleLayerAnimBP_C", "ExecuteUbergraph_JackalVehicleLayerAnimBP");

	Params::JackalVehicleLayerAnimBP_C_ExecuteUbergraph_JackalVehicleLayerAnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JackalVehicleLayerAnimBP.JackalVehicleLayerAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJackalVehicleLayerAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicleLayerAnimBP_C", "BlueprintUpdateAnimation");

	Params::JackalVehicleLayerAnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JackalVehicleLayerAnimBP.JackalVehicleLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_JackalVehicleLayerAnimBP_AnimGraphNode_TransitionResult_D271E88842668EB5D64CC6A7629D75D6
// (BlueprintEvent)

void UJackalVehicleLayerAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_JackalVehicleLayerAnimBP_AnimGraphNode_TransitionResult_D271E88842668EB5D64CC6A7629D75D6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicleLayerAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_JackalVehicleLayerAnimBP_AnimGraphNode_TransitionResult_D271E88842668EB5D64CC6A7629D75D6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JackalVehicleLayerAnimBP.JackalVehicleLayerAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UJackalVehicleLayerAnimBP_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicleLayerAnimBP_C", "AnimGraph");

	Params::JackalVehicleLayerAnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = move(Parms.Param_AnimGraph);
}


// Function JackalVehicleLayerAnimBP.JackalVehicleLayerAnimBP_C.VehicleLowerBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseLowerBodyDefault                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        InPoseUpperBody                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_VehicleLowerBodyOverride                         (Parm, OutParm, NoDestructor)

void UJackalVehicleLayerAnimBP_C::VehicleLowerBodyOverride(const struct FPoseLink& InPoseLowerBodyDefault, const struct FPoseLink& InPoseUpperBody, struct FPoseLink* Param_VehicleLowerBodyOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicleLayerAnimBP_C", "VehicleLowerBodyOverride");

	Params::JackalVehicleLayerAnimBP_C_VehicleLowerBodyOverride Parms{};

	Parms.InPoseLowerBodyDefault = move(InPoseLowerBodyDefault);
	Parms.InPoseUpperBody = move(InPoseUpperBody);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_VehicleLowerBodyOverride != nullptr)
		*Param_VehicleLowerBodyOverride = move(Parms.Param_VehicleLowerBodyOverride);
}


// Function JackalVehicleLayerAnimBP.JackalVehicleLayerAnimBP_C.VehicleFullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseFullBody                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        InPoseUpperAndLowerCachePose                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_VehicleFullBodyOverride                          (Parm, OutParm, NoDestructor)

void UJackalVehicleLayerAnimBP_C::VehicleFullBodyOverride(const struct FPoseLink& InPoseFullBody, const struct FPoseLink& InPoseUpperAndLowerCachePose, struct FPoseLink* Param_VehicleFullBodyOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicleLayerAnimBP_C", "VehicleFullBodyOverride");

	Params::JackalVehicleLayerAnimBP_C_VehicleFullBodyOverride Parms{};

	Parms.InPoseFullBody = move(InPoseFullBody);
	Parms.InPoseUpperAndLowerCachePose = move(InPoseUpperAndLowerCachePose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_VehicleFullBodyOverride != nullptr)
		*Param_VehicleFullBodyOverride = move(Parms.Param_VehicleFullBodyOverride);
}


// Function JackalVehicleLayerAnimBP.JackalVehicleLayerAnimBP_C.VehicleSplitBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseSplitBody                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        InPoseUpperAndLowerBody                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFortAnimInput_TurnInPlace       Param_TurnInPlace                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink                        InPoseUpperAndLowerBodyRemoveRoot                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_VehicleSplitBodyOverride                         (Parm, OutParm, NoDestructor)

void UJackalVehicleLayerAnimBP_C::VehicleSplitBodyOverride(const struct FPoseLink& InPoseSplitBody, const struct FPoseLink& InPoseUpperAndLowerBody, const struct FFortAnimInput_TurnInPlace& Param_TurnInPlace, const struct FPoseLink& InPoseUpperAndLowerBodyRemoveRoot, struct FPoseLink* Param_VehicleSplitBodyOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicleLayerAnimBP_C", "VehicleSplitBodyOverride");

	Params::JackalVehicleLayerAnimBP_C_VehicleSplitBodyOverride Parms{};

	Parms.InPoseSplitBody = move(InPoseSplitBody);
	Parms.InPoseUpperAndLowerBody = move(InPoseUpperAndLowerBody);
	Parms.Param_TurnInPlace = move(Param_TurnInPlace);
	Parms.InPoseUpperAndLowerBodyRemoveRoot = move(InPoseUpperAndLowerBodyRemoveRoot);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_VehicleSplitBodyOverride != nullptr)
		*Param_VehicleSplitBodyOverride = move(Parms.Param_VehicleSplitBodyOverride);
}

}
