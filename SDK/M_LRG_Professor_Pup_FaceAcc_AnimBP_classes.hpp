#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M_LRG_Professor_Pup_FaceAcc_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass M_LRG_Professor_Pup_FaceAcc_AnimBP.M_LRG_Professor_Pup_FaceAcc_AnimBP_C
// 0x0B80 (0x0FD0 - 0x0450)
class UM_LRG_Professor_Pup_FaceAcc_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                         Pad_708C[0x8];                                     // 0x0448(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0458(0x0030)()
	uint8                                         Pad_708D[0x8];                                     // 0x0488(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_1;                      // 0x0490(0x0440)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics;                        // 0x08D0(0x0440)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0D10(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0D30(0x0020)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0D50(0x00C0)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x0E10(0x0140)(ContainsInstancedReference)
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0F50(0x0078)()

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_LRG_Professor_Pup_FaceAcc_AnimBP_AnimGraphNode_LayeredBoneBlend_60AC983B43BA86BFC0695FB524784DCB();
	void ExecuteUbergraph_M_LRG_Professor_Pup_FaceAcc_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"M_LRG_Professor_Pup_FaceAcc_AnimBP_C">();
	}
	static class UM_LRG_Professor_Pup_FaceAcc_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UM_LRG_Professor_Pup_FaceAcc_AnimBP_C>();
	}
};
static_assert(alignof(UM_LRG_Professor_Pup_FaceAcc_AnimBP_C) == 0x000010, "Wrong alignment on UM_LRG_Professor_Pup_FaceAcc_AnimBP_C");
static_assert(sizeof(UM_LRG_Professor_Pup_FaceAcc_AnimBP_C) == 0x000FD0, "Wrong size on UM_LRG_Professor_Pup_FaceAcc_AnimBP_C");
static_assert(offsetof(UM_LRG_Professor_Pup_FaceAcc_AnimBP_C, UberGraphFrame) == 0x000450, "Member 'UM_LRG_Professor_Pup_FaceAcc_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_FaceAcc_AnimBP_C, AnimGraphNode_Root) == 0x000458, "Member 'UM_LRG_Professor_Pup_FaceAcc_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_FaceAcc_AnimBP_C, AnimGraphNode_AnimDynamics_1) == 0x000490, "Member 'UM_LRG_Professor_Pup_FaceAcc_AnimBP_C::AnimGraphNode_AnimDynamics_1' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_FaceAcc_AnimBP_C, AnimGraphNode_AnimDynamics) == 0x0008D0, "Member 'UM_LRG_Professor_Pup_FaceAcc_AnimBP_C::AnimGraphNode_AnimDynamics' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_FaceAcc_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x000D10, "Member 'UM_LRG_Professor_Pup_FaceAcc_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_FaceAcc_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000D30, "Member 'UM_LRG_Professor_Pup_FaceAcc_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_FaceAcc_AnimBP_C, AnimGraphNode_LayeredBoneBlend) == 0x000D50, "Member 'UM_LRG_Professor_Pup_FaceAcc_AnimBP_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_FaceAcc_AnimBP_C, AnimGraphNode_CopyPoseFromMesh) == 0x000E10, "Member 'UM_LRG_Professor_Pup_FaceAcc_AnimBP_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(UM_LRG_Professor_Pup_FaceAcc_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x000F50, "Member 'UM_LRG_Professor_Pup_FaceAcc_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");

}
