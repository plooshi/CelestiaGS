#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_MED_Mechanical_Engineer_FaceAcc_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass F_MED_Mechanical_Engineer_FaceAcc_AnimBP.F_MED_Mechanical_Engineer_FaceAcc_AnimBP_C
// 0x2350 (0x27B0 - 0x0460)
class UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C final : public UCustomCharacterPartAnimInstance_MechEngineerHead
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0468(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0488(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_10;                       // 0x04A8(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_9;                        // 0x05B0(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_8;                        // 0x06B8(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_7;                        // 0x07C0(0x0108)()
	uint8                                         Pad_4AF8[0x8];                                     // 0x08C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_2;                         // 0x08D0(0x0650)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_6;                        // 0x0F20(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_5;                        // 0x1028(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_4;                        // 0x1130(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x1238(0x0108)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_1;                  // 0x1340(0x0140)(ContainsInstancedReference)
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x1480(0x0140)(ContainsInstancedReference)
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x15C0(0x00C0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x1680(0x0108)()
	uint8                                         Pad_4AF9[0x8];                                     // 0x1788(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_1;                         // 0x1790(0x0650)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x1DE0(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x1EE8(0x0108)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x1FF0(0x0650)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x2640(0x0030)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint;                          // 0x2670(0x0108)()
	class USkeletalMeshComponent*                 Body_Mesh;                                         // 0x2778(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                   Pawn_Owner;                                        // 0x2780(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 MeshToCopy;                                        // 0x2788(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                  PlayerPawn;                                        // 0x2790(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Head_MESH;                                         // 0x2798(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTransferBoneVelocity_b;                           // 0x27A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_MED_Mechanical_Engineer_FaceAcc_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"F_MED_Mechanical_Engineer_FaceAcc_AnimBP_C">();
	}
	static class UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C>();
	}
};
static_assert(alignof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C) == 0x000010, "Wrong alignment on UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C");
static_assert(sizeof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C) == 0x0027B0, "Wrong size on UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, UberGraphFrame) == 0x000460, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x000468, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000488, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, AnimGraphNode_ModifyBone_10) == 0x0004A8, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::AnimGraphNode_ModifyBone_10' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, AnimGraphNode_ModifyBone_9) == 0x0005B0, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::AnimGraphNode_ModifyBone_9' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, AnimGraphNode_ModifyBone_8) == 0x0006B8, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::AnimGraphNode_ModifyBone_8' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, AnimGraphNode_ModifyBone_7) == 0x0007C0, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::AnimGraphNode_ModifyBone_7' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, AnimGraphNode_RigidBody_2) == 0x0008D0, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::AnimGraphNode_RigidBody_2' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, AnimGraphNode_ModifyBone_6) == 0x000F20, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::AnimGraphNode_ModifyBone_6' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, AnimGraphNode_ModifyBone_5) == 0x001028, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::AnimGraphNode_ModifyBone_5' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, AnimGraphNode_ModifyBone_4) == 0x001130, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, AnimGraphNode_ModifyBone_3) == 0x001238, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, AnimGraphNode_CopyPoseFromMesh_1) == 0x001340, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::AnimGraphNode_CopyPoseFromMesh_1' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, AnimGraphNode_CopyPoseFromMesh) == 0x001480, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, AnimGraphNode_LayeredBoneBlend) == 0x0015C0, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, AnimGraphNode_ModifyBone_2) == 0x001680, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, AnimGraphNode_RigidBody_1) == 0x001790, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::AnimGraphNode_RigidBody_1' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x001DE0, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, AnimGraphNode_ModifyBone) == 0x001EE8, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, AnimGraphNode_RigidBody) == 0x001FF0, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, AnimGraphNode_Root) == 0x002640, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, AnimGraphNode_Constraint) == 0x002670, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::AnimGraphNode_Constraint' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, Body_Mesh) == 0x002778, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::Body_Mesh' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, Pawn_Owner) == 0x002780, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::Pawn_Owner' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, MeshToCopy) == 0x002788, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::MeshToCopy' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, PlayerPawn) == 0x002790, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, Head_MESH) == 0x002798, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::Head_MESH' has a wrong offset!");
static_assert(offsetof(UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C, bTransferBoneVelocity_b) == 0x0027A0, "Member 'UF_MED_Mechanical_Engineer_FaceAcc_AnimBP_C::bTransferBoneVelocity_b' has a wrong offset!");

}
