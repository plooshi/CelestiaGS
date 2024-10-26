#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Athena_Wumba_AttachedAssetForAnimation

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Athena_Wumba_AttachedAssetForAnimation.B_Athena_Wumba_AttachedAssetForAnimation_C
// 0x0010 (0x0230 - 0x0220)
class AB_Athena_Wumba_AttachedAssetForAnimation_C final : public AActor
{
public:
	class USkeletalMeshComponent*                 Wumba_Gadget_Item_Wumba_Quad_LOD0;                 // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Athena_Wumba_AttachedAssetForAnimation_C">();
	}
	static class AB_Athena_Wumba_AttachedAssetForAnimation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Athena_Wumba_AttachedAssetForAnimation_C>();
	}
};
static_assert(alignof(AB_Athena_Wumba_AttachedAssetForAnimation_C) == 0x000008, "Wrong alignment on AB_Athena_Wumba_AttachedAssetForAnimation_C");
static_assert(sizeof(AB_Athena_Wumba_AttachedAssetForAnimation_C) == 0x000230, "Wrong size on AB_Athena_Wumba_AttachedAssetForAnimation_C");
static_assert(offsetof(AB_Athena_Wumba_AttachedAssetForAnimation_C, Wumba_Gadget_Item_Wumba_Quad_LOD0) == 0x000220, "Member 'AB_Athena_Wumba_AttachedAssetForAnimation_C::Wumba_Gadget_Item_Wumba_Quad_LOD0' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_AttachedAssetForAnimation_C, DefaultSceneRoot) == 0x000228, "Member 'AB_Athena_Wumba_AttachedAssetForAnimation_C::DefaultSceneRoot' has a wrong offset!");

}

