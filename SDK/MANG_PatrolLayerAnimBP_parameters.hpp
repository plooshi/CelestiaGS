#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MANG_PatrolLayerAnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.ExecuteUbergraph_MANG_PatrolLayerAnimBP
// 0x0004 (0x0004 - 0x0000)
struct MANG_PatrolLayerAnimBP_C_ExecuteUbergraph_MANG_PatrolLayerAnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MANG_PatrolLayerAnimBP_C_ExecuteUbergraph_MANG_PatrolLayerAnimBP) == 0x000004, "Wrong alignment on MANG_PatrolLayerAnimBP_C_ExecuteUbergraph_MANG_PatrolLayerAnimBP");
static_assert(sizeof(MANG_PatrolLayerAnimBP_C_ExecuteUbergraph_MANG_PatrolLayerAnimBP) == 0x000004, "Wrong size on MANG_PatrolLayerAnimBP_C_ExecuteUbergraph_MANG_PatrolLayerAnimBP");
static_assert(offsetof(MANG_PatrolLayerAnimBP_C_ExecuteUbergraph_MANG_PatrolLayerAnimBP, EntryPoint) == 0x000000, "Member 'MANG_PatrolLayerAnimBP_C_ExecuteUbergraph_MANG_PatrolLayerAnimBP::EntryPoint' has a wrong offset!");

// Function MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct MANG_PatrolLayerAnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(MANG_PatrolLayerAnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on MANG_PatrolLayerAnimBP_C_AnimGraph");
static_assert(sizeof(MANG_PatrolLayerAnimBP_C_AnimGraph) == 0x000010, "Wrong size on MANG_PatrolLayerAnimBP_C_AnimGraph");
static_assert(offsetof(MANG_PatrolLayerAnimBP_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'MANG_PatrolLayerAnimBP_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.FullBodyOverride
// 0x0020 (0x0020 - 0x0000)
struct MANG_PatrolLayerAnimBP_C_FullBodyOverride final
{
public:
	struct FPoseLink                              PassThroughFullBodyPose;                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Param_FullBodyOverride;                            // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(MANG_PatrolLayerAnimBP_C_FullBodyOverride) == 0x000008, "Wrong alignment on MANG_PatrolLayerAnimBP_C_FullBodyOverride");
static_assert(sizeof(MANG_PatrolLayerAnimBP_C_FullBodyOverride) == 0x000020, "Wrong size on MANG_PatrolLayerAnimBP_C_FullBodyOverride");
static_assert(offsetof(MANG_PatrolLayerAnimBP_C_FullBodyOverride, PassThroughFullBodyPose) == 0x000000, "Member 'MANG_PatrolLayerAnimBP_C_FullBodyOverride::PassThroughFullBodyPose' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP_C_FullBodyOverride, Param_FullBodyOverride) == 0x000010, "Member 'MANG_PatrolLayerAnimBP_C_FullBodyOverride::Param_FullBodyOverride' has a wrong offset!");

// Function MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.CharacterSkeletalControlPostLegIK
// 0x0020 (0x0020 - 0x0000)
struct MANG_PatrolLayerAnimBP_C_CharacterSkeletalControlPostLegIK final
{
public:
	struct FPoseLink                              InPosePostLegIK;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Param_CharacterSkeletalControlPostLegIK;           // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(MANG_PatrolLayerAnimBP_C_CharacterSkeletalControlPostLegIK) == 0x000008, "Wrong alignment on MANG_PatrolLayerAnimBP_C_CharacterSkeletalControlPostLegIK");
static_assert(sizeof(MANG_PatrolLayerAnimBP_C_CharacterSkeletalControlPostLegIK) == 0x000020, "Wrong size on MANG_PatrolLayerAnimBP_C_CharacterSkeletalControlPostLegIK");
static_assert(offsetof(MANG_PatrolLayerAnimBP_C_CharacterSkeletalControlPostLegIK, InPosePostLegIK) == 0x000000, "Member 'MANG_PatrolLayerAnimBP_C_CharacterSkeletalControlPostLegIK::InPosePostLegIK' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP_C_CharacterSkeletalControlPostLegIK, Param_CharacterSkeletalControlPostLegIK) == 0x000010, "Member 'MANG_PatrolLayerAnimBP_C_CharacterSkeletalControlPostLegIK::Param_CharacterSkeletalControlPostLegIK' has a wrong offset!");

}
