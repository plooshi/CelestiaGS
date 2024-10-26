#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Sedan_Veh_Skeleton_AnimBP_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Sedan_Veh_Skeleton_AnimBP_Base.Sedan_Veh_Skeleton_AnimBP_Base_C
// 0x0AE0 (0x0E80 - 0x03A0)
class USedan_Veh_Skeleton_AnimBP_Base_C final : public UFortGoatVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_9;                        // 0x03A8(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_8;                        // 0x04B0(0x0108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x05B8(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_7;                        // 0x05D8(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_6;                        // 0x06E0(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_5;                        // 0x07E8(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_4;                        // 0x08F0(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x09F8(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x0B00(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0C08(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0D10(0x0108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0E18(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0E38(0x0030)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x0E68(0x0018)()

public:
	void ExecuteUbergraph_Sedan_Veh_Skeleton_AnimBP_Base(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Sedan_Veh_Skeleton_AnimBP_Base_C">();
	}
	static class USedan_Veh_Skeleton_AnimBP_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USedan_Veh_Skeleton_AnimBP_Base_C>();
	}
};
static_assert(alignof(USedan_Veh_Skeleton_AnimBP_Base_C) == 0x000010, "Wrong alignment on USedan_Veh_Skeleton_AnimBP_Base_C");
static_assert(sizeof(USedan_Veh_Skeleton_AnimBP_Base_C) == 0x000E80, "Wrong size on USedan_Veh_Skeleton_AnimBP_Base_C");
static_assert(offsetof(USedan_Veh_Skeleton_AnimBP_Base_C, UberGraphFrame) == 0x0003A0, "Member 'USedan_Veh_Skeleton_AnimBP_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USedan_Veh_Skeleton_AnimBP_Base_C, AnimGraphNode_ModifyBone_9) == 0x0003A8, "Member 'USedan_Veh_Skeleton_AnimBP_Base_C::AnimGraphNode_ModifyBone_9' has a wrong offset!");
static_assert(offsetof(USedan_Veh_Skeleton_AnimBP_Base_C, AnimGraphNode_ModifyBone_8) == 0x0004B0, "Member 'USedan_Veh_Skeleton_AnimBP_Base_C::AnimGraphNode_ModifyBone_8' has a wrong offset!");
static_assert(offsetof(USedan_Veh_Skeleton_AnimBP_Base_C, AnimGraphNode_LocalToComponentSpace) == 0x0005B8, "Member 'USedan_Veh_Skeleton_AnimBP_Base_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(USedan_Veh_Skeleton_AnimBP_Base_C, AnimGraphNode_ModifyBone_7) == 0x0005D8, "Member 'USedan_Veh_Skeleton_AnimBP_Base_C::AnimGraphNode_ModifyBone_7' has a wrong offset!");
static_assert(offsetof(USedan_Veh_Skeleton_AnimBP_Base_C, AnimGraphNode_ModifyBone_6) == 0x0006E0, "Member 'USedan_Veh_Skeleton_AnimBP_Base_C::AnimGraphNode_ModifyBone_6' has a wrong offset!");
static_assert(offsetof(USedan_Veh_Skeleton_AnimBP_Base_C, AnimGraphNode_ModifyBone_5) == 0x0007E8, "Member 'USedan_Veh_Skeleton_AnimBP_Base_C::AnimGraphNode_ModifyBone_5' has a wrong offset!");
static_assert(offsetof(USedan_Veh_Skeleton_AnimBP_Base_C, AnimGraphNode_ModifyBone_4) == 0x0008F0, "Member 'USedan_Veh_Skeleton_AnimBP_Base_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(USedan_Veh_Skeleton_AnimBP_Base_C, AnimGraphNode_ModifyBone_3) == 0x0009F8, "Member 'USedan_Veh_Skeleton_AnimBP_Base_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(USedan_Veh_Skeleton_AnimBP_Base_C, AnimGraphNode_ModifyBone_2) == 0x000B00, "Member 'USedan_Veh_Skeleton_AnimBP_Base_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(USedan_Veh_Skeleton_AnimBP_Base_C, AnimGraphNode_ModifyBone_1) == 0x000C08, "Member 'USedan_Veh_Skeleton_AnimBP_Base_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(USedan_Veh_Skeleton_AnimBP_Base_C, AnimGraphNode_ModifyBone) == 0x000D10, "Member 'USedan_Veh_Skeleton_AnimBP_Base_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(USedan_Veh_Skeleton_AnimBP_Base_C, AnimGraphNode_ComponentToLocalSpace) == 0x000E18, "Member 'USedan_Veh_Skeleton_AnimBP_Base_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(USedan_Veh_Skeleton_AnimBP_Base_C, AnimGraphNode_Root) == 0x000E38, "Member 'USedan_Veh_Skeleton_AnimBP_Base_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(USedan_Veh_Skeleton_AnimBP_Base_C, AnimGraphNode_LocalRefPose) == 0x000E68, "Member 'USedan_Veh_Skeleton_AnimBP_Base_C::AnimGraphNode_LocalRefPose' has a wrong offset!");

}

