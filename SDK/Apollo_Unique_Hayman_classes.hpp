#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_Unique_Hayman

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Apollo_Unique_Hayman.Apollo_Unique_Hayman_C
// 0x00D0 (0x0C90 - 0x0BC0)
class AApollo_Unique_Hayman_C final : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BC0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      CollisionLArm1;                                    // 0x0BC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      CollisionRArm1;                                    // 0x0BD0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      CollisionRLeg;                                     // 0x0BD8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      CollisionLLeg;                                     // 0x0BE0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      CollisionLArm;                                     // 0x0BE8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      CollisionRArm;                                     // 0x0BF0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      CollisionUpper;                                    // 0x0BF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Foot_l;                                            // 0x0C00(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Calf_l;                                            // 0x0C08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Thigh_l;                                           // 0x0C10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Foot_r;                                            // 0x0C18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Calf_r;                                            // 0x0C20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Thigh_r;                                           // 0x0C28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Pelvis;                                            // 0x0C30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Fist_L;                                            // 0x0C38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Forearm_L;                                         // 0x0C40(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Bicep_L;                                           // 0x0C48(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Shoulder_L;                                        // 0x0C50(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Fist_R;                                            // 0x0C58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Forearm_R;                                         // 0x0C60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Bicep_R;                                           // 0x0C68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Shoulder_R;                                        // 0x0C70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Lower_Torso;                                       // 0x0C78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Head;                                              // 0x0C80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Torso;                                             // 0x0C88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Apollo_Unique_Hayman(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Apollo_Unique_Hayman_C">();
	}
	static class AApollo_Unique_Hayman_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AApollo_Unique_Hayman_C>();
	}
};
static_assert(alignof(AApollo_Unique_Hayman_C) == 0x000008, "Wrong alignment on AApollo_Unique_Hayman_C");
static_assert(sizeof(AApollo_Unique_Hayman_C) == 0x000C90, "Wrong size on AApollo_Unique_Hayman_C");
static_assert(offsetof(AApollo_Unique_Hayman_C, UberGraphFrame) == 0x000BC0, "Member 'AApollo_Unique_Hayman_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, CollisionLArm1) == 0x000BC8, "Member 'AApollo_Unique_Hayman_C::CollisionLArm1' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, CollisionRArm1) == 0x000BD0, "Member 'AApollo_Unique_Hayman_C::CollisionRArm1' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, CollisionRLeg) == 0x000BD8, "Member 'AApollo_Unique_Hayman_C::CollisionRLeg' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, CollisionLLeg) == 0x000BE0, "Member 'AApollo_Unique_Hayman_C::CollisionLLeg' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, CollisionLArm) == 0x000BE8, "Member 'AApollo_Unique_Hayman_C::CollisionLArm' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, CollisionRArm) == 0x000BF0, "Member 'AApollo_Unique_Hayman_C::CollisionRArm' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, CollisionUpper) == 0x000BF8, "Member 'AApollo_Unique_Hayman_C::CollisionUpper' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, Foot_l) == 0x000C00, "Member 'AApollo_Unique_Hayman_C::Foot_l' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, Calf_l) == 0x000C08, "Member 'AApollo_Unique_Hayman_C::Calf_l' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, Thigh_l) == 0x000C10, "Member 'AApollo_Unique_Hayman_C::Thigh_l' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, Foot_r) == 0x000C18, "Member 'AApollo_Unique_Hayman_C::Foot_r' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, Calf_r) == 0x000C20, "Member 'AApollo_Unique_Hayman_C::Calf_r' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, Thigh_r) == 0x000C28, "Member 'AApollo_Unique_Hayman_C::Thigh_r' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, Pelvis) == 0x000C30, "Member 'AApollo_Unique_Hayman_C::Pelvis' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, Fist_L) == 0x000C38, "Member 'AApollo_Unique_Hayman_C::Fist_L' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, Forearm_L) == 0x000C40, "Member 'AApollo_Unique_Hayman_C::Forearm_L' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, Bicep_L) == 0x000C48, "Member 'AApollo_Unique_Hayman_C::Bicep_L' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, Shoulder_L) == 0x000C50, "Member 'AApollo_Unique_Hayman_C::Shoulder_L' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, Fist_R) == 0x000C58, "Member 'AApollo_Unique_Hayman_C::Fist_R' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, Forearm_R) == 0x000C60, "Member 'AApollo_Unique_Hayman_C::Forearm_R' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, Bicep_R) == 0x000C68, "Member 'AApollo_Unique_Hayman_C::Bicep_R' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, Shoulder_R) == 0x000C70, "Member 'AApollo_Unique_Hayman_C::Shoulder_R' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, Lower_Torso) == 0x000C78, "Member 'AApollo_Unique_Hayman_C::Lower_Torso' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, Head) == 0x000C80, "Member 'AApollo_Unique_Hayman_C::Head' has a wrong offset!");
static_assert(offsetof(AApollo_Unique_Hayman_C, Torso) == 0x000C88, "Member 'AApollo_Unique_Hayman_C::Torso' has a wrong offset!");

}
