#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Apollo_SnowSmoke

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Apollo_SnowSmoke.BP_Apollo_SnowSmoke_C
// 0x00A0 (0x02C0 - 0x0220)
class ABP_Apollo_SnowSmoke_C final : public AActor
{
public:
	class UStaticMeshComponent*                   SM_NoTickHaze;                                     // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               HazeMID;                                           // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ContactColor;                                      // 0x0238(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BaseColor;                                         // 0x0248(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeDistance;                                      // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OffsetX;                                           // 0x025C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OffsetY;                                           // 0x026C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OffsetZ;                                           // 0x027C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpriteScaleNear;                                   // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpriteScaleFar;                                    // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Slow;                                              // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScaleOffset;                                       // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Opacity;                                           // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseCustomMID;                                      // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_77A7[0x7];                                     // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     HazeCustomMID;                                     // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CustomMID;                                         // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxDrawDistanceOverride;                           // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Apollo_SnowSmoke_C">();
	}
	static class ABP_Apollo_SnowSmoke_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Apollo_SnowSmoke_C>();
	}
};
static_assert(alignof(ABP_Apollo_SnowSmoke_C) == 0x000008, "Wrong alignment on ABP_Apollo_SnowSmoke_C");
static_assert(sizeof(ABP_Apollo_SnowSmoke_C) == 0x0002C0, "Wrong size on ABP_Apollo_SnowSmoke_C");
static_assert(offsetof(ABP_Apollo_SnowSmoke_C, SM_NoTickHaze) == 0x000220, "Member 'ABP_Apollo_SnowSmoke_C::SM_NoTickHaze' has a wrong offset!");
static_assert(offsetof(ABP_Apollo_SnowSmoke_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_Apollo_SnowSmoke_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Apollo_SnowSmoke_C, HazeMID) == 0x000230, "Member 'ABP_Apollo_SnowSmoke_C::HazeMID' has a wrong offset!");
static_assert(offsetof(ABP_Apollo_SnowSmoke_C, ContactColor) == 0x000238, "Member 'ABP_Apollo_SnowSmoke_C::ContactColor' has a wrong offset!");
static_assert(offsetof(ABP_Apollo_SnowSmoke_C, BaseColor) == 0x000248, "Member 'ABP_Apollo_SnowSmoke_C::BaseColor' has a wrong offset!");
static_assert(offsetof(ABP_Apollo_SnowSmoke_C, FadeDistance) == 0x000258, "Member 'ABP_Apollo_SnowSmoke_C::FadeDistance' has a wrong offset!");
static_assert(offsetof(ABP_Apollo_SnowSmoke_C, OffsetX) == 0x00025C, "Member 'ABP_Apollo_SnowSmoke_C::OffsetX' has a wrong offset!");
static_assert(offsetof(ABP_Apollo_SnowSmoke_C, OffsetY) == 0x00026C, "Member 'ABP_Apollo_SnowSmoke_C::OffsetY' has a wrong offset!");
static_assert(offsetof(ABP_Apollo_SnowSmoke_C, OffsetZ) == 0x00027C, "Member 'ABP_Apollo_SnowSmoke_C::OffsetZ' has a wrong offset!");
static_assert(offsetof(ABP_Apollo_SnowSmoke_C, SpriteScaleNear) == 0x00028C, "Member 'ABP_Apollo_SnowSmoke_C::SpriteScaleNear' has a wrong offset!");
static_assert(offsetof(ABP_Apollo_SnowSmoke_C, SpriteScaleFar) == 0x000290, "Member 'ABP_Apollo_SnowSmoke_C::SpriteScaleFar' has a wrong offset!");
static_assert(offsetof(ABP_Apollo_SnowSmoke_C, Slow) == 0x000294, "Member 'ABP_Apollo_SnowSmoke_C::Slow' has a wrong offset!");
static_assert(offsetof(ABP_Apollo_SnowSmoke_C, ScaleOffset) == 0x000298, "Member 'ABP_Apollo_SnowSmoke_C::ScaleOffset' has a wrong offset!");
static_assert(offsetof(ABP_Apollo_SnowSmoke_C, Opacity) == 0x00029C, "Member 'ABP_Apollo_SnowSmoke_C::Opacity' has a wrong offset!");
static_assert(offsetof(ABP_Apollo_SnowSmoke_C, UseCustomMID) == 0x0002A0, "Member 'ABP_Apollo_SnowSmoke_C::UseCustomMID' has a wrong offset!");
static_assert(offsetof(ABP_Apollo_SnowSmoke_C, HazeCustomMID) == 0x0002A8, "Member 'ABP_Apollo_SnowSmoke_C::HazeCustomMID' has a wrong offset!");
static_assert(offsetof(ABP_Apollo_SnowSmoke_C, CustomMID) == 0x0002B0, "Member 'ABP_Apollo_SnowSmoke_C::CustomMID' has a wrong offset!");
static_assert(offsetof(ABP_Apollo_SnowSmoke_C, MaxDrawDistanceOverride) == 0x0002B8, "Member 'ABP_Apollo_SnowSmoke_C::MaxDrawDistanceOverride' has a wrong offset!");

}

