#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ValetVehicle_Driver_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ValetVehicle_Driver_AnimBP.ValetVehicle_Driver_AnimBP_C
// 0x2670 (0x2C20 - 0x05B0)
class UValetVehicle_Driver_AnimBP_C final : public UFortVehicleOccupantAnimInstance
{
public:
	uint8                                         Pad_74D4[0x8];                                     // 0x05A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x05B8(0x0030)()
	struct FAnimNode_LegIK                        AnimGraphNode_LegIK_2;                             // 0x05E8(0x00F8)()
	struct FAnimNode_LegIK                        AnimGraphNode_LegIK_1;                             // 0x06E0(0x00F8)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x07D8(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x07F8(0x0108)()
	struct FAnimNode_LegIK                        AnimGraphNode_LegIK;                               // 0x0900(0x00F8)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x09F8(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0A18(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0B20(0x0108)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0C28(0x0048)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_25;                 // 0x0C70(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_24;                 // 0x0C98(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_23;                 // 0x0CC0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_22;                 // 0x0CE8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_21;                 // 0x0D10(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_20;                 // 0x0D38(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_19;                 // 0x0D60(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_18;                 // 0x0D88(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_17;                 // 0x0DB0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_16;                 // 0x0DD8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_15;                 // 0x0E00(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_14;                 // 0x0E28(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_13;                 // 0x0E50(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_12;                 // 0x0E78(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x0EA0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x0EC8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x0EF0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x0F18(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x0F40(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0F68(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0F90(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0FB8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_16;                   // 0x0FE0(0x0078)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_1;          // 0x1058(0x0188)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_13;                      // 0x11E0(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_15;                   // 0x1210(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_12;                      // 0x1288(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_14;                   // 0x12B8(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_11;                      // 0x1330(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_13;                   // 0x1360(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_10;                      // 0x13D8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_12;                   // 0x1408(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_9;                       // 0x1480(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_11;                   // 0x14B0(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_8;                       // 0x1528(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_10;                   // 0x1558(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x15D0(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9;                    // 0x1600(0x0078)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;                    // 0x1678(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;                   // 0x16F0(0x00A0)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_6;                     // 0x1790(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x1858(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x1880(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x18B0(0x0078)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_5;                     // 0x1928(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x19F0(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x1A18(0x0030)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x1A48(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x1A70(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x1AA0(0x00B0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x1B50(0x0078)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x1BC8(0x0078)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x1C40(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x1C68(0x0028)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_4;                     // 0x1C90(0x00C8)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;                   // 0x1D58(0x00A0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x1DF8(0x00A0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x1E98(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x1EC8(0x00B0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x1F78(0x00C8)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_3;                     // 0x2040(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x2108(0x0078)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_2;                     // 0x2180(0x00C8)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x2248(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x2270(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x2298(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x22C0(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x22E8(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x2360(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x2390(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x2408(0x0030)()
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose;                        // 0x2438(0x0018)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x2450(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x2480(0x00B0)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_1;                     // 0x2530(0x00C8)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x25F8(0x00A0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x2698(0x00A0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x2738(0x00C8)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_2;                 // 0x2800(0x0048)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_1;                 // 0x2848(0x0048)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator;                   // 0x2890(0x0048)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;            // 0x28D8(0x0188)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x2A60(0x0078)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x2AD8(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x2BA0(0x0078)()
	float                                         StartPosition;                                     // 0x2C18(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AimOffsetEnable;                                   // 0x2C1C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ValetVehicle_Driver_AnimBP(int32 EntryPoint);
	void AnimNotify_OnDisableAimOffset();
	void AnimNotify_OnEnableAimOffset();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ValetVehicle_Driver_AnimBP_C">();
	}
	static class UValetVehicle_Driver_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UValetVehicle_Driver_AnimBP_C>();
	}
};
static_assert(alignof(UValetVehicle_Driver_AnimBP_C) == 0x000010, "Wrong alignment on UValetVehicle_Driver_AnimBP_C");
static_assert(sizeof(UValetVehicle_Driver_AnimBP_C) == 0x002C20, "Wrong size on UValetVehicle_Driver_AnimBP_C");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, UberGraphFrame) == 0x0005B0, "Member 'UValetVehicle_Driver_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_Root) == 0x0005B8, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_LegIK_2) == 0x0005E8, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_LegIK_2' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_LegIK_1) == 0x0006E0, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_LegIK_1' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x0007D8, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_ModifyBone_2) == 0x0007F8, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_LegIK) == 0x000900, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_LegIK' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x0009F8, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x000A18, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_ModifyBone) == 0x000B20, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_Slot) == 0x000C28, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_25) == 0x000C70, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_25' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_24) == 0x000C98, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_24' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_23) == 0x000CC0, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_23' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_22) == 0x000CE8, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_22' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_21) == 0x000D10, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_21' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_20) == 0x000D38, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_20' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_19) == 0x000D60, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_19' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_18) == 0x000D88, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_18' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_17) == 0x000DB0, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_17' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_16) == 0x000DD8, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_16' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_15) == 0x000E00, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_15' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_14) == 0x000E28, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_14' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_13) == 0x000E50, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_13' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_12) == 0x000E78, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_12' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_11) == 0x000EA0, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_11' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_10) == 0x000EC8, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_9) == 0x000EF0, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_8) == 0x000F18, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_7) == 0x000F40, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_6) == 0x000F68, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_5) == 0x000F90, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x000FB8, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_16) == 0x000FE0, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_16' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_RotationOffsetBlendSpace_1) == 0x001058, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_RotationOffsetBlendSpace_1' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_13) == 0x0011E0, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_13' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_15) == 0x001210, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_15' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_12) == 0x001288, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_12' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_14) == 0x0012B8, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_14' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_11) == 0x001330, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_11' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_13) == 0x001360, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_13' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_10) == 0x0013D8, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_10' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_12) == 0x001408, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_12' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_9) == 0x001480, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_9' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_11) == 0x0014B0, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_11' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_8) == 0x001528, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_8' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_10) == 0x001558, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_10' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_7) == 0x0015D0, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_9) == 0x001600, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_9' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_8) == 0x001678, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_BlendListByBool_4) == 0x0016F0, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_ApplyAdditive_6) == 0x001790, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_ApplyAdditive_6' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_UseCachedPose_4) == 0x001858, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_6) == 0x001880, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_7) == 0x0018B0, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_ApplyAdditive_5) == 0x001928, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_ApplyAdditive_5' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_UseCachedPose_3) == 0x0019F0, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_5) == 0x001A18, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_UseCachedPose_2) == 0x001A48, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_4) == 0x001A70, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_StateMachine_2) == 0x001AA0, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_6) == 0x001B50, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_5) == 0x001BC8, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x001C40, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x001C68, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_ApplyAdditive_4) == 0x001C90, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_ApplyAdditive_4' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_BlendListByBool_3) == 0x001D58, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_BlendListByBool_2) == 0x001DF8, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_3) == 0x001E98, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_StateMachine_1) == 0x001EC8, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_SaveCachedPose_1) == 0x001F78, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_ApplyAdditive_3) == 0x002040, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_ApplyAdditive_3' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x002108, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_ApplyAdditive_2) == 0x002180, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_ApplyAdditive_2' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x002248, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x002270, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x002298, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_TransitionResult) == 0x0022C0, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x0022E8, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_2) == 0x002360, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x002390, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult_1) == 0x002408, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_IdentityPose) == 0x002438, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_IdentityPose' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_StateResult) == 0x002450, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_StateMachine) == 0x002480, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_ApplyAdditive_1) == 0x002530, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_ApplyAdditive_1' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x0025F8, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x002698, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x002738, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_SequenceEvaluator_2) == 0x002800, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_SequenceEvaluator_2' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_SequenceEvaluator_1) == 0x002848, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_SequenceEvaluator_1' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_SequenceEvaluator) == 0x002890, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_SequenceEvaluator' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_RotationOffsetBlendSpace) == 0x0028D8, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_RotationOffsetBlendSpace' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x002A60, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_ApplyAdditive) == 0x002AD8, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x002BA0, "Member 'UValetVehicle_Driver_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, StartPosition) == 0x002C18, "Member 'UValetVehicle_Driver_AnimBP_C::StartPosition' has a wrong offset!");
static_assert(offsetof(UValetVehicle_Driver_AnimBP_C, AimOffsetEnable) == 0x002C1C, "Member 'UValetVehicle_Driver_AnimBP_C::AimOffsetEnable' has a wrong offset!");

}
