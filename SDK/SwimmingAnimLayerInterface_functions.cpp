#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SwimmingAnimLayerInterface

#include "Basic.hpp"

#include "SwimmingAnimLayerInterface_classes.hpp"
#include "SwimmingAnimLayerInterface_parameters.hpp"


namespace SDK
{

// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        MainPlayerAnimBP                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_SwimmingLayer                                    (Parm, OutParm, NoDestructor)

void ISwimmingAnimLayerInterface_C::SwimmingLayer(const struct FPoseLink& MainPlayerAnimBP, struct FPoseLink* Param_SwimmingLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimLayerInterface_C", "SwimmingLayer");

	Params::SwimmingAnimLayerInterface_C_SwimmingLayer Parms{};

	Parms.MainPlayerAnimBP = move(MainPlayerAnimBP);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SwimmingLayer != nullptr)
		*Param_SwimmingLayer = move(Parms.Param_SwimmingLayer);
}


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingMovementAdditiveLayerPose
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        PassThroughSwimmingMovementAdditive                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_SwimmingMovementAdditiveLayerPose                (Parm, OutParm, NoDestructor)

void ISwimmingAnimLayerInterface_C::SwimmingMovementAdditiveLayerPose(const struct FPoseLink& PassThroughSwimmingMovementAdditive, struct FPoseLink* Param_SwimmingMovementAdditiveLayerPose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimLayerInterface_C", "SwimmingMovementAdditiveLayerPose");

	Params::SwimmingAnimLayerInterface_C_SwimmingMovementAdditiveLayerPose Parms{};

	Parms.PassThroughSwimmingMovementAdditive = move(PassThroughSwimmingMovementAdditive);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SwimmingMovementAdditiveLayerPose != nullptr)
		*Param_SwimmingMovementAdditiveLayerPose = move(Parms.Param_SwimmingMovementAdditiveLayerPose);
}


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingSprintLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        PassThroughSwimmingSprint                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    IsHidingInPropLayer                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPoseLink                        Param_SwimmingSprintLayer                              (Parm, OutParm, NoDestructor)

void ISwimmingAnimLayerInterface_C::SwimmingSprintLayer(const struct FPoseLink& PassThroughSwimmingSprint, bool IsHidingInPropLayer, struct FPoseLink* Param_SwimmingSprintLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimLayerInterface_C", "SwimmingSprintLayer");

	Params::SwimmingAnimLayerInterface_C_SwimmingSprintLayer Parms{};

	Parms.PassThroughSwimmingSprint = move(PassThroughSwimmingSprint);
	Parms.IsHidingInPropLayer = IsHidingInPropLayer;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SwimmingSprintLayer != nullptr)
		*Param_SwimmingSprintLayer = move(Parms.Param_SwimmingSprintLayer);
}


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingUpperBodyPoseTargetingLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        PassThroughSwimmingUpperBodyPoseTargeting              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_SwimmingUpperBodyPoseTargetingLayer              (Parm, OutParm, NoDestructor)

void ISwimmingAnimLayerInterface_C::SwimmingUpperBodyPoseTargetingLayer(const struct FPoseLink& PassThroughSwimmingUpperBodyPoseTargeting, struct FPoseLink* Param_SwimmingUpperBodyPoseTargetingLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimLayerInterface_C", "SwimmingUpperBodyPoseTargetingLayer");

	Params::SwimmingAnimLayerInterface_C_SwimmingUpperBodyPoseTargetingLayer Parms{};

	Parms.PassThroughSwimmingUpperBodyPoseTargeting = move(PassThroughSwimmingUpperBodyPoseTargeting);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SwimmingUpperBodyPoseTargetingLayer != nullptr)
		*Param_SwimmingUpperBodyPoseTargetingLayer = move(Parms.Param_SwimmingUpperBodyPoseTargetingLayer);
}


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingUpperBodyPoseNonTargetingLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        PassThroughSwimmingUpperBodyPoseNonTargeting           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_SwimmingUpperBodyPoseNonTargetingLayer           (Parm, OutParm, NoDestructor)

void ISwimmingAnimLayerInterface_C::SwimmingUpperBodyPoseNonTargetingLayer(const struct FPoseLink& PassThroughSwimmingUpperBodyPoseNonTargeting, struct FPoseLink* Param_SwimmingUpperBodyPoseNonTargetingLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimLayerInterface_C", "SwimmingUpperBodyPoseNonTargetingLayer");

	Params::SwimmingAnimLayerInterface_C_SwimmingUpperBodyPoseNonTargetingLayer Parms{};

	Parms.PassThroughSwimmingUpperBodyPoseNonTargeting = move(PassThroughSwimmingUpperBodyPoseNonTargeting);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SwimmingUpperBodyPoseNonTargetingLayer != nullptr)
		*Param_SwimmingUpperBodyPoseNonTargetingLayer = move(Parms.Param_SwimmingUpperBodyPoseNonTargetingLayer);
}


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingLowerBodyLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        UpperBody_Cache                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        PreUpperBodySlot_Cache                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        PassThroughSwimmingLowerBody                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_SwimmingLowerBodyLayer                           (Parm, OutParm, NoDestructor)

void ISwimmingAnimLayerInterface_C::SwimmingLowerBodyLayer(const struct FPoseLink& UpperBody_Cache, const struct FPoseLink& PreUpperBodySlot_Cache, const struct FPoseLink& PassThroughSwimmingLowerBody, struct FPoseLink* Param_SwimmingLowerBodyLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimLayerInterface_C", "SwimmingLowerBodyLayer");

	Params::SwimmingAnimLayerInterface_C_SwimmingLowerBodyLayer Parms{};

	Parms.UpperBody_Cache = move(UpperBody_Cache);
	Parms.PreUpperBodySlot_Cache = move(PreUpperBodySlot_Cache);
	Parms.PassThroughSwimmingLowerBody = move(PassThroughSwimmingLowerBody);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SwimmingLowerBodyLayer != nullptr)
		*Param_SwimmingLowerBodyLayer = move(Parms.Param_SwimmingLowerBodyLayer);
}


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingAdditiveLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        IdleAdditive_Cache                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        MovementAdditiveLayerPose_Cache                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        FullBody                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   PlayMeleeAttackAOLayer                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DisableArmsHeadAdditiveCurveAlphaLayer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DisableIKRootAdditiveCurveAlphaLayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   LocomotionAdditiveAlphaLayer                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MainInstanceAdditiveLayerAlpha                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                        UpperAndLowerBody_Cache                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        SprintingPose_PostMask_Cache                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_SwimmingAdditiveLayer                            (Parm, OutParm, NoDestructor)

void ISwimmingAnimLayerInterface_C::SwimmingAdditiveLayer(const struct FPoseLink& IdleAdditive_Cache, const struct FPoseLink& MovementAdditiveLayerPose_Cache, const struct FPoseLink& FullBody, float PlayMeleeAttackAOLayer, float DisableArmsHeadAdditiveCurveAlphaLayer, float DisableIKRootAdditiveCurveAlphaLayer, float LocomotionAdditiveAlphaLayer, float MainInstanceAdditiveLayerAlpha, const struct FPoseLink& UpperAndLowerBody_Cache, const struct FPoseLink& SprintingPose_PostMask_Cache, struct FPoseLink* Param_SwimmingAdditiveLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimLayerInterface_C", "SwimmingAdditiveLayer");

	Params::SwimmingAnimLayerInterface_C_SwimmingAdditiveLayer Parms{};

	Parms.IdleAdditive_Cache = move(IdleAdditive_Cache);
	Parms.MovementAdditiveLayerPose_Cache = move(MovementAdditiveLayerPose_Cache);
	Parms.FullBody = move(FullBody);
	Parms.PlayMeleeAttackAOLayer = PlayMeleeAttackAOLayer;
	Parms.DisableArmsHeadAdditiveCurveAlphaLayer = DisableArmsHeadAdditiveCurveAlphaLayer;
	Parms.DisableIKRootAdditiveCurveAlphaLayer = DisableIKRootAdditiveCurveAlphaLayer;
	Parms.LocomotionAdditiveAlphaLayer = LocomotionAdditiveAlphaLayer;
	Parms.MainInstanceAdditiveLayerAlpha = MainInstanceAdditiveLayerAlpha;
	Parms.UpperAndLowerBody_Cache = move(UpperAndLowerBody_Cache);
	Parms.SprintingPose_PostMask_Cache = move(SprintingPose_PostMask_Cache);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SwimmingAdditiveLayer != nullptr)
		*Param_SwimmingAdditiveLayer = move(Parms.Param_SwimmingAdditiveLayer);
}


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingFullBodyAdditiveLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        PassThroughFullBodyAdditive                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_SwimmingFullBodyAdditiveLayer                    (Parm, OutParm, NoDestructor)

void ISwimmingAnimLayerInterface_C::SwimmingFullBodyAdditiveLayer(const struct FPoseLink& PassThroughFullBodyAdditive, struct FPoseLink* Param_SwimmingFullBodyAdditiveLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimLayerInterface_C", "SwimmingFullBodyAdditiveLayer");

	Params::SwimmingAnimLayerInterface_C_SwimmingFullBodyAdditiveLayer Parms{};

	Parms.PassThroughFullBodyAdditive = move(PassThroughFullBodyAdditive);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SwimmingFullBodyAdditiveLayer != nullptr)
		*Param_SwimmingFullBodyAdditiveLayer = move(Parms.Param_SwimmingFullBodyAdditiveLayer);
}


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingDiveJumpingLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        PassThroughSwimmingDiveJumping                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    IsHidingInPropLayer2                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   MainInstanceDiveJumpLayerAlpha                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortPlayerAnimBodyType                 AnimBodyTypePassThrough                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                        Param_SwimmingDiveJumpingLayer                         (Parm, OutParm, NoDestructor)

void ISwimmingAnimLayerInterface_C::SwimmingDiveJumpingLayer(const struct FPoseLink& PassThroughSwimmingDiveJumping, bool IsHidingInPropLayer2, float MainInstanceDiveJumpLayerAlpha, EFortPlayerAnimBodyType AnimBodyTypePassThrough, struct FPoseLink* Param_SwimmingDiveJumpingLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimLayerInterface_C", "SwimmingDiveJumpingLayer");

	Params::SwimmingAnimLayerInterface_C_SwimmingDiveJumpingLayer Parms{};

	Parms.PassThroughSwimmingDiveJumping = move(PassThroughSwimmingDiveJumping);
	Parms.IsHidingInPropLayer2 = IsHidingInPropLayer2;
	Parms.MainInstanceDiveJumpLayerAlpha = MainInstanceDiveJumpLayerAlpha;
	Parms.AnimBodyTypePassThrough = AnimBodyTypePassThrough;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SwimmingDiveJumpingLayer != nullptr)
		*Param_SwimmingDiveJumpingLayer = move(Parms.Param_SwimmingDiveJumpingLayer);
}

}
