#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeldObjectLayerAnimBP

#include "Basic.hpp"

#include "HeldObjectLayerAnimBP_classes.hpp"
#include "HeldObjectLayerAnimBP_parameters.hpp"


namespace SDK
{

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ExecuteUbergraph_HeldObjectLayerAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeldObjectLayerAnimBP_C::ExecuteUbergraph_HeldObjectLayerAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ExecuteUbergraph_HeldObjectLayerAnimBP");

	Params::HeldObjectLayerAnimBP_C_ExecuteUbergraph_HeldObjectLayerAnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UHeldObjectLayerAnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.AnimNotify_HeldObjectPickUp
// (BlueprintCallable, BlueprintEvent)

void UHeldObjectLayerAnimBP_C::AnimNotify_HeldObjectPickUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "AnimNotify_HeldObjectPickUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.AnimNotify_HeldObjectPlace
// (BlueprintCallable, BlueprintEvent)

void UHeldObjectLayerAnimBP_C::AnimNotify_HeldObjectPlace()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "AnimNotify_HeldObjectPlace");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HeldObjectLayerAnimBP_AnimGraphNode_RotationOffsetBlendSpace_C2A887E04220180AB9CD6384FDB74E4E
// (BlueprintEvent)

void UHeldObjectLayerAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HeldObjectLayerAnimBP_AnimGraphNode_RotationOffsetBlendSpace_C2A887E04220180AB9CD6384FDB74E4E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_HeldObjectLayerAnimBP_AnimGraphNode_RotationOffsetBlendSpace_C2A887E04220180AB9CD6384FDB74E4E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "AnimGraph");

	Params::HeldObjectLayerAnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = move(Parms.Param_AnimGraph);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemSkeletalControl
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemSkeletalControl                              (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemSkeletalControl(const struct FPoseLink& InPose, struct FPoseLink* Param_ItemSkeletalControl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemSkeletalControl");

	Params::HeldObjectLayerAnimBP_C_ItemSkeletalControl Parms{};

	Parms.InPose = move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemSkeletalControl != nullptr)
		*Param_ItemSkeletalControl = move(Parms.Param_ItemSkeletalControl);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemSwimJumpSurfaceEnd
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemSwimJumpSurfaceEnd                           (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemSwimJumpSurfaceEnd(struct FPoseLink* Param_ItemSwimJumpSurfaceEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemSwimJumpSurfaceEnd");

	Params::HeldObjectLayerAnimBP_C_ItemSwimJumpSurfaceEnd Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemSwimJumpSurfaceEnd != nullptr)
		*Param_ItemSwimJumpSurfaceEnd = move(Parms.Param_ItemSwimJumpSurfaceEnd);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemSwimJumpSurfaceLoop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemSwimJumpSurfaceLoop                          (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemSwimJumpSurfaceLoop(struct FPoseLink* Param_ItemSwimJumpSurfaceLoop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemSwimJumpSurfaceLoop");

	Params::HeldObjectLayerAnimBP_C_ItemSwimJumpSurfaceLoop Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemSwimJumpSurfaceLoop != nullptr)
		*Param_ItemSwimJumpSurfaceLoop = move(Parms.Param_ItemSwimJumpSurfaceLoop);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemSwimJumpFallLoop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemSwimJumpFallLoop                             (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemSwimJumpFallLoop(struct FPoseLink* Param_ItemSwimJumpFallLoop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemSwimJumpFallLoop");

	Params::HeldObjectLayerAnimBP_C_ItemSwimJumpFallLoop Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemSwimJumpFallLoop != nullptr)
		*Param_ItemSwimJumpFallLoop = move(Parms.Param_ItemSwimJumpFallLoop);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemSwimJumpStartLoop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemSwimJumpStartLoop                            (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemSwimJumpStartLoop(struct FPoseLink* Param_ItemSwimJumpStartLoop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemSwimJumpStartLoop");

	Params::HeldObjectLayerAnimBP_C_ItemSwimJumpStartLoop Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemSwimJumpStartLoop != nullptr)
		*Param_ItemSwimJumpStartLoop = move(Parms.Param_ItemSwimJumpStartLoop);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemSwimJumpStart
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemSwimJumpStart                                (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemSwimJumpStart(struct FPoseLink* Param_ItemSwimJumpStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemSwimJumpStart");

	Params::HeldObjectLayerAnimBP_C_ItemSwimJumpStart Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemSwimJumpStart != nullptr)
		*Param_ItemSwimJumpStart = move(Parms.Param_ItemSwimJumpStart);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemRelaxedEntry
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseRelaxedEntry                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemRelaxedEntry                                 (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* Param_ItemRelaxedEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemRelaxedEntry");

	Params::HeldObjectLayerAnimBP_C_ItemRelaxedEntry Parms{};

	Parms.InPoseRelaxedEntry = move(InPoseRelaxedEntry);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemRelaxedEntry != nullptr)
		*Param_ItemRelaxedEntry = move(Parms.Param_ItemRelaxedEntry);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemLowerBodyJogPostPivot
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseLowerBodyJogPostPivot                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemLowerBodyJogPostPivot                        (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemLowerBodyJogPostPivot(const struct FPoseLink& InPoseLowerBodyJogPostPivot, struct FPoseLink* Param_ItemLowerBodyJogPostPivot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemLowerBodyJogPostPivot");

	Params::HeldObjectLayerAnimBP_C_ItemLowerBodyJogPostPivot Parms{};

	Parms.InPoseLowerBodyJogPostPivot = move(InPoseLowerBodyJogPostPivot);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemLowerBodyJogPostPivot != nullptr)
		*Param_ItemLowerBodyJogPostPivot = move(Parms.Param_ItemLowerBodyJogPostPivot);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemLowerBodyJogPrePivot
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseLowerBodyJogPrePivot                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemLowerBodyJogPrePivot                         (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemLowerBodyJogPrePivot(const struct FPoseLink& InPoseLowerBodyJogPrePivot, struct FPoseLink* Param_ItemLowerBodyJogPrePivot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemLowerBodyJogPrePivot");

	Params::HeldObjectLayerAnimBP_C_ItemLowerBodyJogPrePivot Parms{};

	Parms.InPoseLowerBodyJogPrePivot = move(InPoseLowerBodyJogPrePivot);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemLowerBodyJogPrePivot != nullptr)
		*Param_ItemLowerBodyJogPrePivot = move(Parms.Param_ItemLowerBodyJogPrePivot);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemLowerBodyJogStop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseLowerBodyJogStop                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemLowerBodyJogStop                             (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemLowerBodyJogStop(const struct FPoseLink& InPoseLowerBodyJogStop, struct FPoseLink* Param_ItemLowerBodyJogStop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemLowerBodyJogStop");

	Params::HeldObjectLayerAnimBP_C_ItemLowerBodyJogStop Parms{};

	Parms.InPoseLowerBodyJogStop = move(InPoseLowerBodyJogStop);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemLowerBodyJogStop != nullptr)
		*Param_ItemLowerBodyJogStop = move(Parms.Param_ItemLowerBodyJogStop);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemLowerBodyJogStart
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseLowerBodyJogStart                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemLowerBodyJogStart                            (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemLowerBodyJogStart(const struct FPoseLink& InPoseLowerBodyJogStart, struct FPoseLink* Param_ItemLowerBodyJogStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemLowerBodyJogStart");

	Params::HeldObjectLayerAnimBP_C_ItemLowerBodyJogStart Parms{};

	Parms.InPoseLowerBodyJogStart = move(InPoseLowerBodyJogStart);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemLowerBodyJogStart != nullptr)
		*Param_ItemLowerBodyJogStart = move(Parms.Param_ItemLowerBodyJogStart);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemLowerBodyLeanAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseLowerBodyLeanAdditive                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemLowerBodyLeanAdditive                        (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemLowerBodyLeanAdditive(const struct FPoseLink& InPoseLowerBodyLeanAdditive, struct FPoseLink* Param_ItemLowerBodyLeanAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemLowerBodyLeanAdditive");

	Params::HeldObjectLayerAnimBP_C_ItemLowerBodyLeanAdditive Parms{};

	Parms.InPoseLowerBodyLeanAdditive = move(InPoseLowerBodyLeanAdditive);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemLowerBodyLeanAdditive != nullptr)
		*Param_ItemLowerBodyLeanAdditive = move(Parms.Param_ItemLowerBodyLeanAdditive);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemLowerBodyMovement
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseLowerBodyMovement                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemLowerBodyMovement                            (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* Param_ItemLowerBodyMovement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemLowerBodyMovement");

	Params::HeldObjectLayerAnimBP_C_ItemLowerBodyMovement Parms{};

	Parms.InPoseLowerBodyMovement = move(InPoseLowerBodyMovement);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemLowerBodyMovement != nullptr)
		*Param_ItemLowerBodyMovement = move(Parms.Param_ItemLowerBodyMovement);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemJogPostPivotAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPosePostPivotAdditive                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemJogPostPivotAdditive                         (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemJogPostPivotAdditive(const struct FPoseLink& InPosePostPivotAdditive, struct FPoseLink* Param_ItemJogPostPivotAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemJogPostPivotAdditive");

	Params::HeldObjectLayerAnimBP_C_ItemJogPostPivotAdditive Parms{};

	Parms.InPosePostPivotAdditive = move(InPosePostPivotAdditive);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemJogPostPivotAdditive != nullptr)
		*Param_ItemJogPostPivotAdditive = move(Parms.Param_ItemJogPostPivotAdditive);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemJogPrePivotAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPosePrePivotAdditive                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemJogPrePivotAdditive                          (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemJogPrePivotAdditive(const struct FPoseLink& InPosePrePivotAdditive, struct FPoseLink* Param_ItemJogPrePivotAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemJogPrePivotAdditive");

	Params::HeldObjectLayerAnimBP_C_ItemJogPrePivotAdditive Parms{};

	Parms.InPosePrePivotAdditive = move(InPosePrePivotAdditive);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemJogPrePivotAdditive != nullptr)
		*Param_ItemJogPrePivotAdditive = move(Parms.Param_ItemJogPrePivotAdditive);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemJogStopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseJogStopAdditive                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemJogStopAdditive                              (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemJogStopAdditive(const struct FPoseLink& InPoseJogStopAdditive, struct FPoseLink* Param_ItemJogStopAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemJogStopAdditive");

	Params::HeldObjectLayerAnimBP_C_ItemJogStopAdditive Parms{};

	Parms.InPoseJogStopAdditive = move(InPoseJogStopAdditive);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemJogStopAdditive != nullptr)
		*Param_ItemJogStopAdditive = move(Parms.Param_ItemJogStopAdditive);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemJogStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseJogStartAdditive                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemJogStartAdditive                             (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemJogStartAdditive(const struct FPoseLink& InPoseJogStartAdditive, struct FPoseLink* Param_ItemJogStartAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemJogStartAdditive");

	Params::HeldObjectLayerAnimBP_C_ItemJogStartAdditive Parms{};

	Parms.InPoseJogStartAdditive = move(InPoseJogStartAdditive);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemJogStartAdditive != nullptr)
		*Param_ItemJogStartAdditive = move(Parms.Param_ItemJogStartAdditive);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemFlyModeLoopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemFlyModeLoopAdditive                          (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemFlyModeLoopAdditive(struct FPoseLink* Param_ItemFlyModeLoopAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemFlyModeLoopAdditive");

	Params::HeldObjectLayerAnimBP_C_ItemFlyModeLoopAdditive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemFlyModeLoopAdditive != nullptr)
		*Param_ItemFlyModeLoopAdditive = move(Parms.Param_ItemFlyModeLoopAdditive);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemFlyModeStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemFlyModeStartAdditive                         (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemFlyModeStartAdditive(struct FPoseLink* Param_ItemFlyModeStartAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemFlyModeStartAdditive");

	Params::HeldObjectLayerAnimBP_C_ItemFlyModeStartAdditive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemFlyModeStartAdditive != nullptr)
		*Param_ItemFlyModeStartAdditive = move(Parms.Param_ItemFlyModeStartAdditive);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemZipLineStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemZipLineStartAdditive                         (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemZipLineStartAdditive(struct FPoseLink* Param_ItemZipLineStartAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemZipLineStartAdditive");

	Params::HeldObjectLayerAnimBP_C_ItemZipLineStartAdditive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemZipLineStartAdditive != nullptr)
		*Param_ItemZipLineStartAdditive = move(Parms.Param_ItemZipLineStartAdditive);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemJetPackJumpAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemJetPackJumpAdditive                          (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemJetPackJumpAdditive(struct FPoseLink* Param_ItemJetPackJumpAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemJetPackJumpAdditive");

	Params::HeldObjectLayerAnimBP_C_ItemJetPackJumpAdditive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemJetPackJumpAdditive != nullptr)
		*Param_ItemJetPackJumpAdditive = move(Parms.Param_ItemJetPackJumpAdditive);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemJetPackStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemJetPackStartAdditive                         (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemJetPackStartAdditive(struct FPoseLink* Param_ItemJetPackStartAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemJetPackStartAdditive");

	Params::HeldObjectLayerAnimBP_C_ItemJetPackStartAdditive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemJetPackStartAdditive != nullptr)
		*Param_ItemJetPackStartAdditive = move(Parms.Param_ItemJetPackStartAdditive);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemFallLandAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemFallLandAdditive                             (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemFallLandAdditive(struct FPoseLink* Param_ItemFallLandAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemFallLandAdditive");

	Params::HeldObjectLayerAnimBP_C_ItemFallLandAdditive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemFallLandAdditive != nullptr)
		*Param_ItemFallLandAdditive = move(Parms.Param_ItemFallLandAdditive);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemFallAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemFallAdditive                                 (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemFallAdditive(struct FPoseLink* Param_ItemFallAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemFallAdditive");

	Params::HeldObjectLayerAnimBP_C_ItemFallAdditive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemFallAdditive != nullptr)
		*Param_ItemFallAdditive = move(Parms.Param_ItemFallAdditive);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemJumpLoopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemJumpLoopAdditive                             (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemJumpLoopAdditive(struct FPoseLink* Param_ItemJumpLoopAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemJumpLoopAdditive");

	Params::HeldObjectLayerAnimBP_C_ItemJumpLoopAdditive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemJumpLoopAdditive != nullptr)
		*Param_ItemJumpLoopAdditive = move(Parms.Param_ItemJumpLoopAdditive);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemJumpUpAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemJumpUpAdditive                               (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemJumpUpAdditive(struct FPoseLink* Param_ItemJumpUpAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemJumpUpAdditive");

	Params::HeldObjectLayerAnimBP_C_ItemJumpUpAdditive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemJumpUpAdditive != nullptr)
		*Param_ItemJumpUpAdditive = move(Parms.Param_ItemJumpUpAdditive);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemSlopeSliding
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemSlopeSliding                                 (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemSlopeSliding(struct FPoseLink* Param_ItemSlopeSliding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemSlopeSliding");

	Params::HeldObjectLayerAnimBP_C_ItemSlopeSliding Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemSlopeSliding != nullptr)
		*Param_ItemSlopeSliding = move(Parms.Param_ItemSlopeSliding);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemCrouchTurningAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemCrouchTurningAdditive                        (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemCrouchTurningAdditive(struct FPoseLink* Param_ItemCrouchTurningAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemCrouchTurningAdditive");

	Params::HeldObjectLayerAnimBP_C_ItemCrouchTurningAdditive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemCrouchTurningAdditive != nullptr)
		*Param_ItemCrouchTurningAdditive = move(Parms.Param_ItemCrouchTurningAdditive);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemIdleAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseIdleAdditive                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemIdleAdditive                                 (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* Param_ItemIdleAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemIdleAdditive");

	Params::HeldObjectLayerAnimBP_C_ItemIdleAdditive Parms{};

	Parms.InPoseIdleAdditive = move(InPoseIdleAdditive);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemIdleAdditive != nullptr)
		*Param_ItemIdleAdditive = move(Parms.Param_ItemIdleAdditive);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemFullBodySprint
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseSprint                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemFullBodySprint                               (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemFullBodySprint(const struct FPoseLink& InPoseSprint, struct FPoseLink* Param_ItemFullBodySprint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemFullBodySprint");

	Params::HeldObjectLayerAnimBP_C_ItemFullBodySprint Parms{};

	Parms.InPoseSprint = move(InPoseSprint);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemFullBodySprint != nullptr)
		*Param_ItemFullBodySprint = move(Parms.Param_ItemFullBodySprint);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemUpperBody
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseUpperBody                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFortAnimInput_AdjustedAim       Param_InputParam                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemUpperBody                                    (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& Param_InputParam, struct FPoseLink* Param_ItemUpperBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemUpperBody");

	Params::HeldObjectLayerAnimBP_C_ItemUpperBody Parms{};

	Parms.InPoseUpperBody = move(InPoseUpperBody);
	Parms.Param_InputParam = move(Param_InputParam);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemUpperBody != nullptr)
		*Param_ItemUpperBody = move(Parms.Param_ItemUpperBody);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemAimOffset
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose_AimOffset                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   Param_AimOffsetAlpha                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_Yaw                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_Pitch                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                        InPose_UpperLowerPreMeleeAO                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemAimOffset                                    (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemAimOffset(const struct FPoseLink& InPose_AimOffset, float Param_AimOffsetAlpha, float Param_Yaw, float Param_Pitch, const struct FPoseLink& InPose_UpperLowerPreMeleeAO, struct FPoseLink* Param_ItemAimOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemAimOffset");

	Params::HeldObjectLayerAnimBP_C_ItemAimOffset Parms{};

	Parms.InPose_AimOffset = move(InPose_AimOffset);
	Parms.Param_AimOffsetAlpha = Param_AimOffsetAlpha;
	Parms.Param_Yaw = Param_Yaw;
	Parms.Param_Pitch = Param_Pitch;
	Parms.InPose_UpperLowerPreMeleeAO = move(InPose_UpperLowerPreMeleeAO);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemAimOffset != nullptr)
		*Param_ItemAimOffset = move(Parms.Param_ItemAimOffset);
}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemFullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseFullBody                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemFullBodyOverride                             (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* Param_ItemFullBodyOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemFullBodyOverride");

	Params::HeldObjectLayerAnimBP_C_ItemFullBodyOverride Parms{};

	Parms.InPoseFullBody = move(InPoseFullBody);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemFullBodyOverride != nullptr)
		*Param_ItemFullBodyOverride = move(Parms.Param_ItemFullBodyOverride);
}

}
