#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M_LRG_Professor_Pup_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "ControlRig_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass M_LRG_Professor_Pup_AnimBP.M_LRG_Professor_Pup_AnimBP_C
// 0x37D0 (0x3C70 - 0x04A0)
class UM_LRG_Professor_Pup_AnimBP_C final : public UCustomCharacterPartAnimInstance_ProfPupBody
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x04A8(0x0030)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x04D8(0x0140)(ContainsInstancedReference)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x0618(0x0020)()
	uint8                                         Pad_545C[0x8];                                     // 0x0638(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_6;                      // 0x0640(0x0440)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x0A80(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x0AA0(0x0108)()
	uint8                                         Pad_545D[0x8];                                     // 0x0BA8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_5;                      // 0x0BB0(0x0440)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_4;                      // 0x0FF0(0x0440)()
	struct FAnimNode_SpringBone                   AnimGraphNode_SpringBone_1;                        // 0x1430(0x0128)()
	struct FAnimNode_ControlRig                   AnimGraphNode_ControlRig_2;                        // 0x1558(0x0360)()
	float                                         __CustomProperty_CurrentLOD_float_ACCD6BD94642F97285D1E7BD9E5B9CCA; // 0x18B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_545E[0x4];                                     // 0x18BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_ControlRig                   AnimGraphNode_ControlRig_1;                        // 0x18C0(0x0360)()
	struct FAnimNode_SpringBone                   AnimGraphNode_SpringBone;                          // 0x1C20(0x0128)()
	struct FAnimNode_ControlRig                   AnimGraphNode_ControlRig;                          // 0x1D48(0x0360)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x20A8(0x0020)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_1;                        // 0x20C8(0x0108)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint;                          // 0x21D0(0x0108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x22D8(0x0020)()
	uint8                                         Pad_545F[0x8];                                     // 0x22F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_3;                      // 0x2300(0x0440)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_2;                      // 0x2740(0x0440)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_1;                      // 0x2B80(0x0440)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics;                        // 0x2FC0(0x0440)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x3400(0x00C8)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x34C8(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x34E8(0x00C8)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x35B0(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x35D0(0x0028)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x35F8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x3618(0x0078)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x3690(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x3798(0x0108)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_1;                 // 0x38A0(0x0048)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x38E8(0x0020)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x3908(0x00A0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x39A8(0x00A0)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator;                   // 0x3A48(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x3A90(0x00C0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x3B50(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x3C18(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x3C40(0x0028)()

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void ExecuteUbergraph_M_LRG_Professor_Pup_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"M_LRG_Professor_Pup_AnimBP_C">();
	}
	static class UM_LRG_Professor_Pup_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UM_LRG_Professor_Pup_AnimBP_C>();
	}
};
static_assert(alignof(UM_LRG_Professor_Pup_AnimBP_C) == 0x000010, "Wrong alignment on UM_LRG_Professor_Pup_AnimBP_C");
static_assert(sizeof(UM_LRG_Professor_Pup_AnimBP_C) == 0x003C70, "Wrong size on UM_LRG_Professor_Pup_AnimBP_C");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, UberGraphFrame) == 0x0004A0, "Member 'UM_LRG_Professor_Pup_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_Root) == 0x0004A8, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_CopyPoseFromMesh) == 0x0004D8, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_ComponentToLocalSpace_3) == 0x000618, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_ComponentToLocalSpace_3' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_AnimDynamics_6) == 0x000640, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_AnimDynamics_6' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_LocalToComponentSpace_3) == 0x000A80, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_LocalToComponentSpace_3' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_ModifyBone_2) == 0x000AA0, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_AnimDynamics_5) == 0x000BB0, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_AnimDynamics_5' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_AnimDynamics_4) == 0x000FF0, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_AnimDynamics_4' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_SpringBone_1) == 0x001430, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_SpringBone_1' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_ControlRig_2) == 0x001558, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_ControlRig_2' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, __CustomProperty_CurrentLOD_float_ACCD6BD94642F97285D1E7BD9E5B9CCA) == 0x0018B8, "Member 'UM_LRG_Professor_Pup_AnimBP_C::__CustomProperty_CurrentLOD_float_ACCD6BD94642F97285D1E7BD9E5B9CCA' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_ControlRig_1) == 0x0018C0, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_ControlRig_1' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_SpringBone) == 0x001C20, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_SpringBone' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_ControlRig) == 0x001D48, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_ControlRig' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_LocalToComponentSpace_2) == 0x0020A8, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_LocalToComponentSpace_2' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_Constraint_1) == 0x0020C8, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_Constraint_1' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_Constraint) == 0x0021D0, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_Constraint' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_ComponentToLocalSpace_2) == 0x0022D8, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_ComponentToLocalSpace_2' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_AnimDynamics_3) == 0x002300, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_AnimDynamics_3' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_AnimDynamics_2) == 0x002740, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_AnimDynamics_2' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_AnimDynamics_1) == 0x002B80, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_AnimDynamics_1' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_AnimDynamics) == 0x002FC0, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_AnimDynamics' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_ApplyAdditive) == 0x003400, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_LocalToComponentSpace_1) == 0x0034C8, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_SaveCachedPose_1) == 0x0034E8, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x0035B0, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_UseCachedPose_2) == 0x0035D0, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x0035F8, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x003618, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x003690, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_ModifyBone) == 0x003798, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_SequenceEvaluator_1) == 0x0038A0, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_SequenceEvaluator_1' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x0038E8, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x003908, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x0039A8, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_SequenceEvaluator) == 0x003A48, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_SequenceEvaluator' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_LayeredBoneBlend) == 0x003A90, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x003B50, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x003C18, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x003C40, "Member 'UM_LRG_Professor_Pup_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");

}
