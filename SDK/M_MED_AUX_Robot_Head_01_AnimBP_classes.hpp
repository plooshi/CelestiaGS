#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M_MED_AUX_Robot_Head_01_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass M_MED_AUX_Robot_Head_01_AnimBP.M_MED_AUX_Robot_Head_01_AnimBP_C
// 0x0180 (0x05D0 - 0x0450)
class UM_MED_AUX_Robot_Head_01_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                         Pad_689A[0x8];                                     // 0x0448(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0458(0x0030)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x0488(0x0140)(ContainsInstancedReference)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void ExecuteUbergraph_M_MED_AUX_Robot_Head_01_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"M_MED_AUX_Robot_Head_01_AnimBP_C">();
	}
	static class UM_MED_AUX_Robot_Head_01_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UM_MED_AUX_Robot_Head_01_AnimBP_C>();
	}
};
static_assert(alignof(UM_MED_AUX_Robot_Head_01_AnimBP_C) == 0x000010, "Wrong alignment on UM_MED_AUX_Robot_Head_01_AnimBP_C");
static_assert(sizeof(UM_MED_AUX_Robot_Head_01_AnimBP_C) == 0x0005D0, "Wrong size on UM_MED_AUX_Robot_Head_01_AnimBP_C");
static_assert(offsetof(UM_MED_AUX_Robot_Head_01_AnimBP_C, UberGraphFrame) == 0x000450, "Member 'UM_MED_AUX_Robot_Head_01_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UM_MED_AUX_Robot_Head_01_AnimBP_C, AnimGraphNode_Root) == 0x000458, "Member 'UM_MED_AUX_Robot_Head_01_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UM_MED_AUX_Robot_Head_01_AnimBP_C, AnimGraphNode_CopyPoseFromMesh) == 0x000488, "Member 'UM_MED_AUX_Robot_Head_01_AnimBP_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");

}
