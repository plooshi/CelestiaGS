#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_HeldObjectSocket

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_HeldObjectSocket.B_HeldObjectSocket_C
// 0x0058 (0x0808 - 0x07B0)
class AB_HeldObjectSocket_C final : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        SocketLocation;                                    // 0x07B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x07C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          HasSocketedHeldObject;                             // 0x07C8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_6657[0x7];                                     // 0x07C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_HeldObject_Parent_C*                 HeldObject;                                        // 0x07D0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  RequiredHeldObjectTags;                            // 0x07D8(0x0020)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          RequireExactTagMatch;                              // 0x07F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_6658[0x7];                                     // 0x07F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_HeldObjectSocketManager_C*           HeldObjectSocketManager;                           // 0x0800(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_HeldObjectSocket(int32 EntryPoint);
	void EventOnSocketEmptied();
	void EventOnSocketFilled();
	void OnHitHeldObject(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void OnRep_SocketIsFilled();
	void ValidateHeldObject(class AB_HeldObject_Parent_C* HeldObject_Input, class AB_HeldObject_Parent_C** HeldObject_Output, bool* IsValid);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_HeldObjectSocket_C">();
	}
	static class AB_HeldObjectSocket_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_HeldObjectSocket_C>();
	}
};
static_assert(alignof(AB_HeldObjectSocket_C) == 0x000008, "Wrong alignment on AB_HeldObjectSocket_C");
static_assert(sizeof(AB_HeldObjectSocket_C) == 0x000808, "Wrong size on AB_HeldObjectSocket_C");
static_assert(offsetof(AB_HeldObjectSocket_C, UberGraphFrame) == 0x0007B0, "Member 'AB_HeldObjectSocket_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_HeldObjectSocket_C, SocketLocation) == 0x0007B8, "Member 'AB_HeldObjectSocket_C::SocketLocation' has a wrong offset!");
static_assert(offsetof(AB_HeldObjectSocket_C, Sphere) == 0x0007C0, "Member 'AB_HeldObjectSocket_C::Sphere' has a wrong offset!");
static_assert(offsetof(AB_HeldObjectSocket_C, HasSocketedHeldObject) == 0x0007C8, "Member 'AB_HeldObjectSocket_C::HasSocketedHeldObject' has a wrong offset!");
static_assert(offsetof(AB_HeldObjectSocket_C, HeldObject) == 0x0007D0, "Member 'AB_HeldObjectSocket_C::HeldObject' has a wrong offset!");
static_assert(offsetof(AB_HeldObjectSocket_C, RequiredHeldObjectTags) == 0x0007D8, "Member 'AB_HeldObjectSocket_C::RequiredHeldObjectTags' has a wrong offset!");
static_assert(offsetof(AB_HeldObjectSocket_C, RequireExactTagMatch) == 0x0007F8, "Member 'AB_HeldObjectSocket_C::RequireExactTagMatch' has a wrong offset!");
static_assert(offsetof(AB_HeldObjectSocket_C, HeldObjectSocketManager) == 0x000800, "Member 'AB_HeldObjectSocket_C::HeldObjectSocketManager' has a wrong offset!");

}
