#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Quad_Base_AnimBP_Dyn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Quad_Base_AnimBP_Dyn.Quad_Base_AnimBP_Dyn_C
// 0x1300 (0x1590 - 0x0290)
class UQuad_Base_AnimBP_Dyn_C final : public UFortVehicleDynAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0298(0x0030)()
	uint8                                         Pad_46D1[0x8];                                     // 0x02C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x02D0(0x0650)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0920(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0940(0x0020)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_1;                      // 0x0960(0x0440)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x0DA0(0x0108)()
	uint8                                         Pad_46D2[0x8];                                     // 0x0EA8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics;                        // 0x0EB0(0x0440)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x12F0(0x0108)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_SubInput;                            // 0x13F8(0x0088)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x1480(0x0108)()

public:
	void ExecuteUbergraph_Quad_Base_AnimBP_Dyn(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Quad_Base_AnimBP_Dyn_AnimGraphNode_ModifyBone_A1DEF3624674323357722A8036F54532();
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Quad_Base_AnimBP_Dyn_C">();
	}
	static class UQuad_Base_AnimBP_Dyn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuad_Base_AnimBP_Dyn_C>();
	}
};
static_assert(alignof(UQuad_Base_AnimBP_Dyn_C) == 0x000010, "Wrong alignment on UQuad_Base_AnimBP_Dyn_C");
static_assert(sizeof(UQuad_Base_AnimBP_Dyn_C) == 0x001590, "Wrong size on UQuad_Base_AnimBP_Dyn_C");
static_assert(offsetof(UQuad_Base_AnimBP_Dyn_C, UberGraphFrame) == 0x000290, "Member 'UQuad_Base_AnimBP_Dyn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuad_Base_AnimBP_Dyn_C, AnimGraphNode_Root) == 0x000298, "Member 'UQuad_Base_AnimBP_Dyn_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UQuad_Base_AnimBP_Dyn_C, AnimGraphNode_RigidBody) == 0x0002D0, "Member 'UQuad_Base_AnimBP_Dyn_C::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(UQuad_Base_AnimBP_Dyn_C, AnimGraphNode_ComponentToLocalSpace) == 0x000920, "Member 'UQuad_Base_AnimBP_Dyn_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UQuad_Base_AnimBP_Dyn_C, AnimGraphNode_LocalToComponentSpace) == 0x000940, "Member 'UQuad_Base_AnimBP_Dyn_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UQuad_Base_AnimBP_Dyn_C, AnimGraphNode_AnimDynamics_1) == 0x000960, "Member 'UQuad_Base_AnimBP_Dyn_C::AnimGraphNode_AnimDynamics_1' has a wrong offset!");
static_assert(offsetof(UQuad_Base_AnimBP_Dyn_C, AnimGraphNode_ModifyBone_2) == 0x000DA0, "Member 'UQuad_Base_AnimBP_Dyn_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UQuad_Base_AnimBP_Dyn_C, AnimGraphNode_AnimDynamics) == 0x000EB0, "Member 'UQuad_Base_AnimBP_Dyn_C::AnimGraphNode_AnimDynamics' has a wrong offset!");
static_assert(offsetof(UQuad_Base_AnimBP_Dyn_C, AnimGraphNode_ModifyBone_1) == 0x0012F0, "Member 'UQuad_Base_AnimBP_Dyn_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UQuad_Base_AnimBP_Dyn_C, AnimGraphNode_SubInput) == 0x0013F8, "Member 'UQuad_Base_AnimBP_Dyn_C::AnimGraphNode_SubInput' has a wrong offset!");
static_assert(offsetof(UQuad_Base_AnimBP_Dyn_C, AnimGraphNode_ModifyBone) == 0x001480, "Member 'UQuad_Base_AnimBP_Dyn_C::AnimGraphNode_ModifyBone' has a wrong offset!");

}
