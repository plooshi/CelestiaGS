#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M_MED_Racer_Zero_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass M_MED_Racer_Zero_AnimBP.M_MED_Racer_Zero_AnimBP_C
// 0x18E0 (0x1D30 - 0x0450)
class M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C final : public UCustomCharacterPartAnimInstance_RacerZeroBody
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0458(0x0030)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x0488(0x0140)(ContainsInstancedReference)
	uint8                                         Pad_7BFE[0x8];                                     // 0x05C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_2;                         // 0x05D0(0x0650)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0C20(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0C40(0x0020)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_1;                         // 0x0C60(0x0650)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x12B0(0x0650)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x1900(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x1A08(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x1B10(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x1C18(0x0108)()
	class USkeletalMeshComponent*                 Skel_mesh;                                         // 0x1D20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_M_MED_Racer_Zero_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimBlueprintGeneratedClass M_MED_Racer_Zero_AnimBP.M_MED_Racer_Zero_AnimBP_C", true, "M_MED_Racer_Zero_AnimBP_C">();
	}
	static class M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C>();
	}
};
static_assert(alignof(M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C) == 0x000010, "Wrong alignment on M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C");
static_assert(sizeof(M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C) == 0x001D30, "Wrong size on M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C");
static_assert(offsetof(M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C, UberGraphFrame) == 0x000450, "Member 'M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C, AnimGraphNode_Root) == 0x000458, "Member 'M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C, AnimGraphNode_CopyPoseFromMesh) == 0x000488, "Member 'M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C, AnimGraphNode_RigidBody_2) == 0x0005D0, "Member 'M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C::AnimGraphNode_RigidBody_2' has a wrong offset!");
static_assert(offsetof(M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x000C20, "Member 'M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000C40, "Member 'M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C, AnimGraphNode_RigidBody_1) == 0x000C60, "Member 'M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C::AnimGraphNode_RigidBody_1' has a wrong offset!");
static_assert(offsetof(M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C, AnimGraphNode_RigidBody) == 0x0012B0, "Member 'M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C, AnimGraphNode_ModifyBone_3) == 0x001900, "Member 'M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C, AnimGraphNode_ModifyBone_2) == 0x001A08, "Member 'M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x001B10, "Member 'M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C, AnimGraphNode_ModifyBone) == 0x001C18, "Member 'M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C, Skel_mesh) == 0x001D20, "Member 'M_MED_Racer_Zero_AnimBP::UM_MED_Racer_Zero_AnimBP_C::Skel_mesh' has a wrong offset!");

}
