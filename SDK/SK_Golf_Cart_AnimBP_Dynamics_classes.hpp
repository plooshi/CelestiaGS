#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SK_Golf_Cart_AnimBP_Dynamics

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass SK_Golf_Cart_AnimBP_Dynamics.SK_Golf_Cart_AnimBP_Dynamics_C
// 0x1EC0 (0x2150 - 0x0290)
class USK_Golf_Cart_AnimBP_Dynamics_C final : public UFortVehicleDynAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0298(0x0030)()
	uint8                                         Pad_6815[0x8];                                     // 0x02C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x02D0(0x0650)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0920(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_SubInput;                            // 0x0940(0x0088)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x09C8(0x0020)()
	uint8                                         Pad_6816[0x8];                                     // 0x09E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_4;                      // 0x09F0(0x0440)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_3;                      // 0x0E30(0x0440)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_2;                      // 0x1270(0x0440)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_1;                      // 0x16B0(0x0440)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x1AF0(0x0108)()
	uint8                                         Pad_6817[0x8];                                     // 0x1BF8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics;                        // 0x1C00(0x0440)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x2040(0x0108)()

public:
	void ExecuteUbergraph_SK_Golf_Cart_AnimBP_Dynamics(int32 EntryPoint);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SK_Golf_Cart_AnimBP_Dynamics_C">();
	}
	static class USK_Golf_Cart_AnimBP_Dynamics_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USK_Golf_Cart_AnimBP_Dynamics_C>();
	}
};
static_assert(alignof(USK_Golf_Cart_AnimBP_Dynamics_C) == 0x000010, "Wrong alignment on USK_Golf_Cart_AnimBP_Dynamics_C");
static_assert(sizeof(USK_Golf_Cart_AnimBP_Dynamics_C) == 0x002150, "Wrong size on USK_Golf_Cart_AnimBP_Dynamics_C");
static_assert(offsetof(USK_Golf_Cart_AnimBP_Dynamics_C, UberGraphFrame) == 0x000290, "Member 'USK_Golf_Cart_AnimBP_Dynamics_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USK_Golf_Cart_AnimBP_Dynamics_C, AnimGraphNode_Root) == 0x000298, "Member 'USK_Golf_Cart_AnimBP_Dynamics_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(USK_Golf_Cart_AnimBP_Dynamics_C, AnimGraphNode_RigidBody) == 0x0002D0, "Member 'USK_Golf_Cart_AnimBP_Dynamics_C::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(USK_Golf_Cart_AnimBP_Dynamics_C, AnimGraphNode_ComponentToLocalSpace) == 0x000920, "Member 'USK_Golf_Cart_AnimBP_Dynamics_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(USK_Golf_Cart_AnimBP_Dynamics_C, AnimGraphNode_SubInput) == 0x000940, "Member 'USK_Golf_Cart_AnimBP_Dynamics_C::AnimGraphNode_SubInput' has a wrong offset!");
static_assert(offsetof(USK_Golf_Cart_AnimBP_Dynamics_C, AnimGraphNode_LocalToComponentSpace) == 0x0009C8, "Member 'USK_Golf_Cart_AnimBP_Dynamics_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(USK_Golf_Cart_AnimBP_Dynamics_C, AnimGraphNode_AnimDynamics_4) == 0x0009F0, "Member 'USK_Golf_Cart_AnimBP_Dynamics_C::AnimGraphNode_AnimDynamics_4' has a wrong offset!");
static_assert(offsetof(USK_Golf_Cart_AnimBP_Dynamics_C, AnimGraphNode_AnimDynamics_3) == 0x000E30, "Member 'USK_Golf_Cart_AnimBP_Dynamics_C::AnimGraphNode_AnimDynamics_3' has a wrong offset!");
static_assert(offsetof(USK_Golf_Cart_AnimBP_Dynamics_C, AnimGraphNode_AnimDynamics_2) == 0x001270, "Member 'USK_Golf_Cart_AnimBP_Dynamics_C::AnimGraphNode_AnimDynamics_2' has a wrong offset!");
static_assert(offsetof(USK_Golf_Cart_AnimBP_Dynamics_C, AnimGraphNode_AnimDynamics_1) == 0x0016B0, "Member 'USK_Golf_Cart_AnimBP_Dynamics_C::AnimGraphNode_AnimDynamics_1' has a wrong offset!");
static_assert(offsetof(USK_Golf_Cart_AnimBP_Dynamics_C, AnimGraphNode_ModifyBone_1) == 0x001AF0, "Member 'USK_Golf_Cart_AnimBP_Dynamics_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(USK_Golf_Cart_AnimBP_Dynamics_C, AnimGraphNode_AnimDynamics) == 0x001C00, "Member 'USK_Golf_Cart_AnimBP_Dynamics_C::AnimGraphNode_AnimDynamics' has a wrong offset!");
static_assert(offsetof(USK_Golf_Cart_AnimBP_Dynamics_C, AnimGraphNode_ModifyBone) == 0x002040, "Member 'USK_Golf_Cart_AnimBP_Dynamics_C::AnimGraphNode_ModifyBone' has a wrong offset!");

}

