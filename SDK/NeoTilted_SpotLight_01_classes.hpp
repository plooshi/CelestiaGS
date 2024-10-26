#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NeoTilted_SpotLight_01

#include "Basic.hpp"

#include "Parent_BuildingPropActor_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass NeoTilted_SpotLight_01.NeoTilted_SpotLight_01_C
// 0x0060 (0x0D00 - 0x0CA0)
class ANeoTilted_SpotLight_01_C : public AParent_BuildingPropActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_NeoTilted_SpotLight_01_C;           // 0x0CA0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Sm_neo_tilted_light_shaft_Flares;                  // 0x0CA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Sm_neo_tilted_light_shaft;                         // 0x0CB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0CB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          ToggleVfx;                                         // 0x0CC0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8768[0x3];                                     // 0x0CC1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           SpotLightColor;                                    // 0x0CC4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Beam_Width_Max;                                    // 0x0CD4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Scale_Base;                                        // 0x0CD8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Scale_Tip;                                         // 0x0CDC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Beam_Height;                                       // 0x0CE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rotation_Max;                                      // 0x0CE4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rotation_Speed;                                    // 0x0CE8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimingOffsetByWPODistanceMult;                     // 0x0CEC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MeshAttached;                                      // 0x0CF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rotation;                                          // 0x0CF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_NeoTilted_SpotLight_01(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void Editor_pushRotationToInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NeoTilted_SpotLight_01_C">();
	}
	static class ANeoTilted_SpotLight_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANeoTilted_SpotLight_01_C>();
	}
};
static_assert(alignof(ANeoTilted_SpotLight_01_C) == 0x000008, "Wrong alignment on ANeoTilted_SpotLight_01_C");
static_assert(sizeof(ANeoTilted_SpotLight_01_C) == 0x000D00, "Wrong size on ANeoTilted_SpotLight_01_C");
static_assert(offsetof(ANeoTilted_SpotLight_01_C, UberGraphFrame_NeoTilted_SpotLight_01_C) == 0x000CA0, "Member 'ANeoTilted_SpotLight_01_C::UberGraphFrame_NeoTilted_SpotLight_01_C' has a wrong offset!");
static_assert(offsetof(ANeoTilted_SpotLight_01_C, Sm_neo_tilted_light_shaft_Flares) == 0x000CA8, "Member 'ANeoTilted_SpotLight_01_C::Sm_neo_tilted_light_shaft_Flares' has a wrong offset!");
static_assert(offsetof(ANeoTilted_SpotLight_01_C, Sm_neo_tilted_light_shaft) == 0x000CB0, "Member 'ANeoTilted_SpotLight_01_C::Sm_neo_tilted_light_shaft' has a wrong offset!");
static_assert(offsetof(ANeoTilted_SpotLight_01_C, PointLight) == 0x000CB8, "Member 'ANeoTilted_SpotLight_01_C::PointLight' has a wrong offset!");
static_assert(offsetof(ANeoTilted_SpotLight_01_C, ToggleVfx) == 0x000CC0, "Member 'ANeoTilted_SpotLight_01_C::ToggleVfx' has a wrong offset!");
static_assert(offsetof(ANeoTilted_SpotLight_01_C, SpotLightColor) == 0x000CC4, "Member 'ANeoTilted_SpotLight_01_C::SpotLightColor' has a wrong offset!");
static_assert(offsetof(ANeoTilted_SpotLight_01_C, Beam_Width_Max) == 0x000CD4, "Member 'ANeoTilted_SpotLight_01_C::Beam_Width_Max' has a wrong offset!");
static_assert(offsetof(ANeoTilted_SpotLight_01_C, Scale_Base) == 0x000CD8, "Member 'ANeoTilted_SpotLight_01_C::Scale_Base' has a wrong offset!");
static_assert(offsetof(ANeoTilted_SpotLight_01_C, Scale_Tip) == 0x000CDC, "Member 'ANeoTilted_SpotLight_01_C::Scale_Tip' has a wrong offset!");
static_assert(offsetof(ANeoTilted_SpotLight_01_C, Beam_Height) == 0x000CE0, "Member 'ANeoTilted_SpotLight_01_C::Beam_Height' has a wrong offset!");
static_assert(offsetof(ANeoTilted_SpotLight_01_C, Rotation_Max) == 0x000CE4, "Member 'ANeoTilted_SpotLight_01_C::Rotation_Max' has a wrong offset!");
static_assert(offsetof(ANeoTilted_SpotLight_01_C, Rotation_Speed) == 0x000CE8, "Member 'ANeoTilted_SpotLight_01_C::Rotation_Speed' has a wrong offset!");
static_assert(offsetof(ANeoTilted_SpotLight_01_C, TimingOffsetByWPODistanceMult) == 0x000CEC, "Member 'ANeoTilted_SpotLight_01_C::TimingOffsetByWPODistanceMult' has a wrong offset!");
static_assert(offsetof(ANeoTilted_SpotLight_01_C, MeshAttached) == 0x000CF0, "Member 'ANeoTilted_SpotLight_01_C::MeshAttached' has a wrong offset!");
static_assert(offsetof(ANeoTilted_SpotLight_01_C, Rotation) == 0x000CF8, "Member 'ANeoTilted_SpotLight_01_C::Rotation' has a wrong offset!");

}

