#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemOnPawnPreview

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ItemOnPawnPreview.ItemOnPawnPreview_C
// 0x00A0 (0x0520 - 0x0480)
class AItemOnPawnPreview_C final : public AFortItemPreviewOnPawnActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0480(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow;                                             // 0x0488(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                     SkyLightLowMobile;                                 // 0x0490(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*             DirectionalLightMobile;                            // 0x0498(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    KeyLight_StandaloneForSwitch;                      // 0x04A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    KeyLight5;                                         // 0x04A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    KeyLight6;                                         // 0x04B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    KeyLigh3;                                          // 0x04B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    KeyLight2;                                         // 0x04C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    BounceRear1;                                       // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    RimLowerRight1;                                    // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    RimLeft1;                                          // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    RimTopRight1;                                      // 0x04E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    RimBottomLeft1;                                    // 0x04E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    Bounce1;                                           // 0x04F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        LightTransform;                                    // 0x04F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Plane;                                             // 0x0500(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Sample_Mesh;                                       // 0x0508(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          AlwaysOn;                                          // 0x0510(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsActive;                                          // 0x0511(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DebugConstructionLighting;                         // 0x0512(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D36[0x5];                                     // 0x0513(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               ObscuringLoopEmitter;                              // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SwitchErebusLighting(bool Visibility);
	void SetFloorEnabled(bool Show_Floor);
	void LightControl(bool Active);
	void SwitchPCLighting(bool Visibility);
	void SwitchMobileLighting(bool NewParam);
	void OnPreviewVisualsSpawned();
	void UpdateSettings();
	void OnSetFloorMaterial(class UMaterialInterface* InMaterialInstance);
	void OnAllLODStreamingComplete();
	void OnCurrentVisualsCleanedUp();
	void ExecuteUbergraph_ItemOnPawnPreview(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemOnPawnPreview_C">();
	}
	static class AItemOnPawnPreview_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AItemOnPawnPreview_C>();
	}
};
static_assert(alignof(AItemOnPawnPreview_C) == 0x000010, "Wrong alignment on AItemOnPawnPreview_C");
static_assert(sizeof(AItemOnPawnPreview_C) == 0x000520, "Wrong size on AItemOnPawnPreview_C");
static_assert(offsetof(AItemOnPawnPreview_C, UberGraphFrame) == 0x000480, "Member 'AItemOnPawnPreview_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, Arrow) == 0x000488, "Member 'AItemOnPawnPreview_C::Arrow' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, SkyLightLowMobile) == 0x000490, "Member 'AItemOnPawnPreview_C::SkyLightLowMobile' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, DirectionalLightMobile) == 0x000498, "Member 'AItemOnPawnPreview_C::DirectionalLightMobile' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, KeyLight_StandaloneForSwitch) == 0x0004A0, "Member 'AItemOnPawnPreview_C::KeyLight_StandaloneForSwitch' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, KeyLight5) == 0x0004A8, "Member 'AItemOnPawnPreview_C::KeyLight5' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, KeyLight6) == 0x0004B0, "Member 'AItemOnPawnPreview_C::KeyLight6' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, KeyLigh3) == 0x0004B8, "Member 'AItemOnPawnPreview_C::KeyLigh3' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, KeyLight2) == 0x0004C0, "Member 'AItemOnPawnPreview_C::KeyLight2' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, BounceRear1) == 0x0004C8, "Member 'AItemOnPawnPreview_C::BounceRear1' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, RimLowerRight1) == 0x0004D0, "Member 'AItemOnPawnPreview_C::RimLowerRight1' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, RimLeft1) == 0x0004D8, "Member 'AItemOnPawnPreview_C::RimLeft1' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, RimTopRight1) == 0x0004E0, "Member 'AItemOnPawnPreview_C::RimTopRight1' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, RimBottomLeft1) == 0x0004E8, "Member 'AItemOnPawnPreview_C::RimBottomLeft1' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, Bounce1) == 0x0004F0, "Member 'AItemOnPawnPreview_C::Bounce1' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, LightTransform) == 0x0004F8, "Member 'AItemOnPawnPreview_C::LightTransform' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, Plane) == 0x000500, "Member 'AItemOnPawnPreview_C::Plane' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, Sample_Mesh) == 0x000508, "Member 'AItemOnPawnPreview_C::Sample_Mesh' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, AlwaysOn) == 0x000510, "Member 'AItemOnPawnPreview_C::AlwaysOn' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, IsActive) == 0x000511, "Member 'AItemOnPawnPreview_C::IsActive' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, DebugConstructionLighting) == 0x000512, "Member 'AItemOnPawnPreview_C::DebugConstructionLighting' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, ObscuringLoopEmitter) == 0x000518, "Member 'AItemOnPawnPreview_C::ObscuringLoopEmitter' has a wrong offset!");

}
