#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SoundIndicator_01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_SoundIndicator_01.B_SoundIndicator_01_C
// 0x03F0 (0x0780 - 0x0390)
class AB_SoundIndicator_01_C final : public AFortSoundCameraLensEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0390(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FRuntimeFloatCurve                     Gunshot_Falloff_Long_Range;                        // 0x0398(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                     Chest_Falloff;                                     // 0x0420(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                     Footsteps_Falloff;                                 // 0x04A8(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                     Gunshot_Falloff_Mid_Range;                         // 0x0530(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                     Gunshot_Falloff_Melee;                             // 0x05B8(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         OppositeFacingGunshotStrength;                     // 0x0640(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FacingGunshotExponentNear;                         // 0x0644(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ForwardFacingGunshotStrength;                      // 0x0648(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FacingGunshotExponentFar;                          // 0x064C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DistanceDivisor;                                   // 0x0650(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4349[0x4];                                     // 0x0654(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRuntimeFloatCurve                     Glider_Falloff;                                    // 0x0658(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                     Plane_Falloff;                                     // 0x06E0(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                DefaultIconLocation;                               // 0x0768(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_SoundIndicator_01(int32 EntryPoint);
	class UTexture* GetDefaultIcon();
	struct FLinearColor GetDefaultTint();

	struct FRuntimeFloatCurve GetWeaponCurve() const;
	struct FRuntimeFloatCurve GetStrengthCurveForActiveType() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_SoundIndicator_01_C">();
	}
	static class AB_SoundIndicator_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_SoundIndicator_01_C>();
	}
};
static_assert(alignof(AB_SoundIndicator_01_C) == 0x000010, "Wrong alignment on AB_SoundIndicator_01_C");
static_assert(sizeof(AB_SoundIndicator_01_C) == 0x000780, "Wrong size on AB_SoundIndicator_01_C");
static_assert(offsetof(AB_SoundIndicator_01_C, UberGraphFrame) == 0x000390, "Member 'AB_SoundIndicator_01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Gunshot_Falloff_Long_Range) == 0x000398, "Member 'AB_SoundIndicator_01_C::Gunshot_Falloff_Long_Range' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Chest_Falloff) == 0x000420, "Member 'AB_SoundIndicator_01_C::Chest_Falloff' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Footsteps_Falloff) == 0x0004A8, "Member 'AB_SoundIndicator_01_C::Footsteps_Falloff' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Gunshot_Falloff_Mid_Range) == 0x000530, "Member 'AB_SoundIndicator_01_C::Gunshot_Falloff_Mid_Range' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Gunshot_Falloff_Melee) == 0x0005B8, "Member 'AB_SoundIndicator_01_C::Gunshot_Falloff_Melee' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, OppositeFacingGunshotStrength) == 0x000640, "Member 'AB_SoundIndicator_01_C::OppositeFacingGunshotStrength' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, FacingGunshotExponentNear) == 0x000644, "Member 'AB_SoundIndicator_01_C::FacingGunshotExponentNear' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, ForwardFacingGunshotStrength) == 0x000648, "Member 'AB_SoundIndicator_01_C::ForwardFacingGunshotStrength' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, FacingGunshotExponentFar) == 0x00064C, "Member 'AB_SoundIndicator_01_C::FacingGunshotExponentFar' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, DistanceDivisor) == 0x000650, "Member 'AB_SoundIndicator_01_C::DistanceDivisor' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Glider_Falloff) == 0x000658, "Member 'AB_SoundIndicator_01_C::Glider_Falloff' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Plane_Falloff) == 0x0006E0, "Member 'AB_SoundIndicator_01_C::Plane_Falloff' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, DefaultIconLocation) == 0x000768, "Member 'AB_SoundIndicator_01_C::DefaultIconLocation' has a wrong offset!");

}
