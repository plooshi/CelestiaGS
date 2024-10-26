#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M_MED_Sandcastle_FaceAcc_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function M_MED_Sandcastle_FaceAcc_AnimBP.M_MED_Sandcastle_FaceAcc_AnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct M_MED_Sandcastle_FaceAcc_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(M_MED_Sandcastle_FaceAcc_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on M_MED_Sandcastle_FaceAcc_AnimBP_C_AnimGraph");
static_assert(sizeof(M_MED_Sandcastle_FaceAcc_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on M_MED_Sandcastle_FaceAcc_AnimBP_C_AnimGraph");
static_assert(offsetof(M_MED_Sandcastle_FaceAcc_AnimBP_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'M_MED_Sandcastle_FaceAcc_AnimBP_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function M_MED_Sandcastle_FaceAcc_AnimBP.M_MED_Sandcastle_FaceAcc_AnimBP_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct M_MED_Sandcastle_FaceAcc_AnimBP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(M_MED_Sandcastle_FaceAcc_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on M_MED_Sandcastle_FaceAcc_AnimBP_C_BlueprintUpdateAnimation");
static_assert(sizeof(M_MED_Sandcastle_FaceAcc_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on M_MED_Sandcastle_FaceAcc_AnimBP_C_BlueprintUpdateAnimation");
static_assert(offsetof(M_MED_Sandcastle_FaceAcc_AnimBP_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'M_MED_Sandcastle_FaceAcc_AnimBP_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function M_MED_Sandcastle_FaceAcc_AnimBP.M_MED_Sandcastle_FaceAcc_AnimBP_C.ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP
// 0x0050 (0x0050 - 0x0000)
struct M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetPartSkeletalMeshComponent_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput; // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput; // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_1;                // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Montage_IsPlaying_ReturnValue;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BFA[0x2];                                     // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue_2;                // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP) == 0x000008, "Wrong alignment on M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP");
static_assert(sizeof(M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP) == 0x000050, "Wrong size on M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP");
static_assert(offsetof(M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP, EntryPoint) == 0x000000, "Member 'M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000004, "Member 'M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP, CallFunc_GetPartSkeletalMeshComponent_ReturnValue) == 0x000010, "Member 'M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP::CallFunc_GetPartSkeletalMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP, CallFunc_SelectVector_ReturnValue) == 0x000018, "Member 'M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP, CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput) == 0x000024, "Member 'M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP::CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput' has a wrong offset!");
static_assert(offsetof(M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP, CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput) == 0x000028, "Member 'M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP::CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput' has a wrong offset!");
static_assert(offsetof(M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP, CallFunc_SelectFloat_ReturnValue) == 0x00002C, "Member 'M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP, CallFunc_SelectFloat_ReturnValue_1) == 0x000030, "Member 'M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP, K2Node_Event_DeltaTimeX) == 0x000034, "Member 'M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP, CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue) == 0x000038, "Member 'M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP::CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP, CallFunc_GetAnimInstance_ReturnValue) == 0x000040, "Member 'M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP, CallFunc_Montage_IsPlaying_ReturnValue) == 0x000048, "Member 'M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP::CallFunc_Montage_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP, CallFunc_SelectFloat_ReturnValue_2) == 0x00004C, "Member 'M_MED_Sandcastle_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_FaceAcc_AnimBP::CallFunc_SelectFloat_ReturnValue_2' has a wrong offset!");

}

