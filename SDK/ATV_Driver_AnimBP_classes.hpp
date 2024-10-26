#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ATV_Driver_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ATV_Driver_AnimBP.ATV_Driver_AnimBP_C
// 0x2F10 (0x4A70 - 0x1B60)
class UATV_Driver_AnimBP_C final : public UFortPlayerAnimInstance_ATVDriver
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1B60(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1B68(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_18;                 // 0x1B98(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_17;                 // 0x1BC0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_16;                 // 0x1BE8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_15;                 // 0x1C10(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_14;                 // 0x1C38(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_13;                 // 0x1C60(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_12;                 // 0x1C88(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x1CB0(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_27;                   // 0x1CD8(0x0078)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_26;                   // 0x1D50(0x0078)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_25;                   // 0x1DC8(0x0078)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_24;                   // 0x1E40(0x0078)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_4;                   // 0x1EB8(0x00B0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_14;                      // 0x1F68(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_23;                   // 0x1F98(0x0078)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_22;                   // 0x2010(0x0078)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_3;                   // 0x2088(0x00B0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_13;                      // 0x2138(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_21;                   // 0x2168(0x0078)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x21E0(0x0028)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_7;                     // 0x2208(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_20;                   // 0x22D0(0x0078)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_2;                   // 0x2348(0x00B0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_12;                      // 0x23F8(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x2428(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_19;                   // 0x2450(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_11;                      // 0x24C8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_18;                   // 0x24F8(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_10;                      // 0x2570(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_3;                      // 0x25A0(0x00B0)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_6;                     // 0x2650(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x2718(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_9;                       // 0x2740(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_17;                   // 0x2770(0x0078)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x27E8(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;                   // 0x2810(0x00A0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_8;                       // 0x28B0(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x28E0(0x00B0)()
	struct FAnimNode_LegIK                        AnimGraphNode_LegIK_1;                             // 0x2990(0x00F8)()
	struct FAnimNode_LegIK                        AnimGraphNode_LegIK;                               // 0x2A88(0x00F8)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2B80(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2BA0(0x0020)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_5;                     // 0x2BC0(0x00C8)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x2C88(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x2CB0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x2CD8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x2D00(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x2D28(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x2D50(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x2D78(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x2DA0(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_16;                   // 0x2DC8(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x2E40(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_15;                   // 0x2E70(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x2EE8(0x0030)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x2F18(0x0028)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_4;                     // 0x2F40(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_14;                   // 0x3008(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x3080(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x30B0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x30D8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_13;                   // 0x3100(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x3178(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_12;                   // 0x31A8(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x3220(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_11;                   // 0x3250(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x32C8(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x32F8(0x00B0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;                   // 0x33A8(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_10;                   // 0x3448(0x0078)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_3;                     // 0x34C0(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x3588(0x0028)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_2;                     // 0x35B0(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9;                    // 0x3678(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x36F0(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;                    // 0x3720(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x3798(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x3838(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x38B0(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x38E0(0x00B0)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x3990(0x00E0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x3A70(0x00C8)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x3B38(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x3C40(0x0108)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_1;                   // 0x3D48(0x00B0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x3DF8(0x0078)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x3E70(0x0078)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x3EE8(0x0078)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x3F60(0x0078)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x3FD8(0x00C8)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;            // 0x40A0(0x0188)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x4228(0x0048)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x4270(0x00B0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x4320(0x0078)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_1;                     // 0x4398(0x00C8)()
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose;                        // 0x4460(0x0018)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x4478(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x4518(0x0078)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x4590(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x4608(0x00A0)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x46A8(0x00E0)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x4788(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x4850(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x4898(0x00C0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x4958(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x4A20(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x4A48(0x0028)()

public:
	void ExecuteUbergraph_ATV_Driver_AnimBP(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ATV_Driver_AnimBP_C">();
	}
	static class UATV_Driver_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATV_Driver_AnimBP_C>();
	}
};
static_assert(alignof(UATV_Driver_AnimBP_C) == 0x000010, "Wrong alignment on UATV_Driver_AnimBP_C");
static_assert(sizeof(UATV_Driver_AnimBP_C) == 0x004A70, "Wrong size on UATV_Driver_AnimBP_C");
static_assert(offsetof(UATV_Driver_AnimBP_C, UberGraphFrame) == 0x001B60, "Member 'UATV_Driver_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_Root) == 0x001B68, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_TransitionResult_18) == 0x001B98, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_TransitionResult_18' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_TransitionResult_17) == 0x001BC0, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_TransitionResult_17' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_TransitionResult_16) == 0x001BE8, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_TransitionResult_16' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_TransitionResult_15) == 0x001C10, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_TransitionResult_15' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_TransitionResult_14) == 0x001C38, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_TransitionResult_14' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_TransitionResult_13) == 0x001C60, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_TransitionResult_13' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_TransitionResult_12) == 0x001C88, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_TransitionResult_12' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_TransitionResult_11) == 0x001CB0, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_TransitionResult_11' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_27) == 0x001CD8, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_27' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_26) == 0x001D50, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_26' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_25) == 0x001DC8, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_25' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_24) == 0x001E40, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_24' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_BlendListByEnum_4) == 0x001EB8, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_BlendListByEnum_4' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_StateResult_14) == 0x001F68, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_StateResult_14' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_23) == 0x001F98, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_23' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_22) == 0x002010, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_22' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_BlendListByEnum_3) == 0x002088, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_BlendListByEnum_3' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_StateResult_13) == 0x002138, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_StateResult_13' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_21) == 0x002168, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_21' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_UseCachedPose_6) == 0x0021E0, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_ApplyAdditive_7) == 0x002208, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_ApplyAdditive_7' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_20) == 0x0022D0, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_20' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_BlendListByEnum_2) == 0x002348, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_BlendListByEnum_2' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_StateResult_12) == 0x0023F8, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_StateResult_12' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_TransitionResult_10) == 0x002428, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_19) == 0x002450, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_19' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_StateResult_11) == 0x0024C8, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_StateResult_11' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_18) == 0x0024F8, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_18' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_StateResult_10) == 0x002570, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_StateResult_10' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_StateMachine_3) == 0x0025A0, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_StateMachine_3' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_ApplyAdditive_6) == 0x002650, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_ApplyAdditive_6' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_UseCachedPose_5) == 0x002718, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_StateResult_9) == 0x002740, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_StateResult_9' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_17) == 0x002770, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_17' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_UseCachedPose_4) == 0x0027E8, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_BlendListByBool_4) == 0x002810, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_StateResult_8) == 0x0028B0, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_StateResult_8' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_StateMachine_2) == 0x0028E0, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_LegIK_1) == 0x002990, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_LegIK_1' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_LegIK) == 0x002A88, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_LegIK' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x002B80, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x002BA0, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_ApplyAdditive_5) == 0x002BC0, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_ApplyAdditive_5' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_TransitionResult_9) == 0x002C88, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_TransitionResult_8) == 0x002CB0, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_TransitionResult_7) == 0x002CD8, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_TransitionResult_6) == 0x002D00, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_TransitionResult_5) == 0x002D28, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x002D50, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x002D78, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x002DA0, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_16) == 0x002DC8, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_16' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_StateResult_7) == 0x002E40, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_15) == 0x002E70, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_15' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_StateResult_6) == 0x002EE8, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_UseCachedPose_3) == 0x002F18, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_ApplyAdditive_4) == 0x002F40, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_ApplyAdditive_4' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_14) == 0x003008, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_14' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_StateResult_5) == 0x003080, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x0030B0, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_TransitionResult) == 0x0030D8, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_13) == 0x003100, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_13' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_StateResult_4) == 0x003178, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_12) == 0x0031A8, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_12' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_StateResult_3) == 0x003220, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_11) == 0x003250, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_11' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_StateResult_2) == 0x0032C8, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_StateMachine_1) == 0x0032F8, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_BlendListByBool_3) == 0x0033A8, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_10) == 0x003448, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_10' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_ApplyAdditive_3) == 0x0034C0, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_ApplyAdditive_3' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_UseCachedPose_2) == 0x003588, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_ApplyAdditive_2) == 0x0035B0, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_ApplyAdditive_2' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_9) == 0x003678, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_9' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_StateResult_1) == 0x0036F0, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_8) == 0x003720, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_BlendListByBool_2) == 0x003798, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_7) == 0x003838, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_StateResult) == 0x0038B0, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_StateMachine) == 0x0038E0, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_BlendSpacePlayer_1) == 0x003990, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SaveCachedPose_2) == 0x003A70, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x003B38, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_ModifyBone) == 0x003C40, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_BlendListByEnum_1) == 0x003D48, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_BlendListByEnum_1' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_6) == 0x003DF8, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_5) == 0x003E70, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x003EE8, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x003F60, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SaveCachedPose_1) == 0x003FD8, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_RotationOffsetBlendSpace) == 0x0040A0, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_RotationOffsetBlendSpace' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_Slot_1) == 0x004228, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_BlendListByEnum) == 0x004270, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x004320, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_ApplyAdditive_1) == 0x004398, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_ApplyAdditive_1' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_IdentityPose) == 0x004460, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_IdentityPose' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x004478, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x004518, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x004590, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x004608, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_BlendSpacePlayer) == 0x0046A8, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_ApplyAdditive) == 0x004788, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_Slot) == 0x004850, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_LayeredBoneBlend) == 0x004898, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x004958, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x004A20, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UATV_Driver_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x004A48, "Member 'UATV_Driver_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");

}

