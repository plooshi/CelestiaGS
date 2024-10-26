#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_MED_Rebirth_Soldier_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass F_MED_Rebirth_Soldier_AnimBP.F_MED_Rebirth_Soldier_AnimBP_C
// 0x1070 (0x14C0 - 0x0450)
class UF_MED_Rebirth_Soldier_AnimBP_C final : public UCustomCharacterPartAnimInstance_Rebirth_Soldier_F
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	uint8                                         Pad_6E8A[0x8];                                     // 0x0458(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_1;                         // 0x0460(0x0650)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0AB0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0AD0(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0AF0(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0BF8(0x0108)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x0D00(0x0650)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x1350(0x0140)(ContainsInstancedReference)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1490(0x0030)()

public:
	void ExecuteUbergraph_F_MED_Rebirth_Soldier_AnimBP(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"F_MED_Rebirth_Soldier_AnimBP_C">();
	}
	static class UF_MED_Rebirth_Soldier_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_MED_Rebirth_Soldier_AnimBP_C>();
	}
};
static_assert(alignof(UF_MED_Rebirth_Soldier_AnimBP_C) == 0x000010, "Wrong alignment on UF_MED_Rebirth_Soldier_AnimBP_C");
static_assert(sizeof(UF_MED_Rebirth_Soldier_AnimBP_C) == 0x0014C0, "Wrong size on UF_MED_Rebirth_Soldier_AnimBP_C");
static_assert(offsetof(UF_MED_Rebirth_Soldier_AnimBP_C, UberGraphFrame) == 0x000450, "Member 'UF_MED_Rebirth_Soldier_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UF_MED_Rebirth_Soldier_AnimBP_C, AnimGraphNode_RigidBody_1) == 0x000460, "Member 'UF_MED_Rebirth_Soldier_AnimBP_C::AnimGraphNode_RigidBody_1' has a wrong offset!");
static_assert(offsetof(UF_MED_Rebirth_Soldier_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x000AB0, "Member 'UF_MED_Rebirth_Soldier_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UF_MED_Rebirth_Soldier_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000AD0, "Member 'UF_MED_Rebirth_Soldier_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UF_MED_Rebirth_Soldier_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x000AF0, "Member 'UF_MED_Rebirth_Soldier_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UF_MED_Rebirth_Soldier_AnimBP_C, AnimGraphNode_ModifyBone) == 0x000BF8, "Member 'UF_MED_Rebirth_Soldier_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UF_MED_Rebirth_Soldier_AnimBP_C, AnimGraphNode_RigidBody) == 0x000D00, "Member 'UF_MED_Rebirth_Soldier_AnimBP_C::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(UF_MED_Rebirth_Soldier_AnimBP_C, AnimGraphNode_CopyPoseFromMesh) == 0x001350, "Member 'UF_MED_Rebirth_Soldier_AnimBP_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(UF_MED_Rebirth_Soldier_AnimBP_C, AnimGraphNode_Root) == 0x001490, "Member 'UF_MED_Rebirth_Soldier_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");

}

