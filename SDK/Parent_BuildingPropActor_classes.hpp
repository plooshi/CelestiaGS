#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Parent_BuildingPropActor

#include "Basic.hpp"

#include "BuildingProp_4LayerMaterial_Struct_structs.hpp"
#include "DayPhaseFloats_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Parent_BuildingPropActor.Parent_BuildingPropActor_C
// 0x00E0 (0x0CA0 - 0x0BC0)
class AParent_BuildingPropActor_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BC0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          DebugWind;                                         // 0x0BC8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F6C[0x7];                                     // 0x0BC9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             IntenseWindMaterialsForPreview;                    // 0x0BD0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             OriginalMaterials;                                 // 0x0BE0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wind_Intensity_Debug_Mesh;                         // 0x0BF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Debug_TempMaterial;                                // 0x0BF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Debug_Wind_Intensity;                              // 0x0C00(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebugWindYaw;                                      // 0x0C04(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDayPhaseFloats                        Light_Intensity_Over_Time_of_Day_;                 // 0x0C08(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FDayPhaseFloats                        Emissive_Intensity_Over_Time_of_Day;               // 0x0C18(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CodeControlled_NumberOfMaterials;                  // 0x0C28(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F6D[0x4];                                     // 0x0C2C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FLinearColor>                   CodeControlled_EmissiveColor;                      // 0x0C30(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<float>                                 CodeControlled_LightConeOpacity;                   // 0x0C40(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Animate_Emissive_and_Lights_Over_Time;             // 0x0C50(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_5F6E[0x3];                                     // 0x0C51(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Day_Phase_Transition_Length;                       // 0x0C54(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Disable_TOD_Lights_and_Material_Emissive_Values;   // 0x0C58(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Disable_Static_Mesh_Shadow_Casting_When_Lights_Are_Active; // 0x0C59(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F6F[0x6];                                     // 0x0C5A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            AlternateShadowStaticMesh;                         // 0x0C60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_An_Alternate_Shadow_Mesh_When_The_Light_is_Off_; // 0x0C68(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F70[0x3];                                     // 0x0C69(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Volumetric_Light_Scattering_Intensity;             // 0x0C6C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Cast_Volumetric_Shadows;                           // 0x0C70(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Animate_Lights_With_A_Curve_Minus_Disables_time_of_day_light_controls; // 0x0C71(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F71[0x6];                                     // 0x0C72(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            LightAnimationCurve;                               // 0x0C78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CodeControlled_Animation_Curve_Animation_Length;   // 0x0C80(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Animate_Mesh_MID_Emissive_Value_with_a_Curve_Minus_Disables_time_of_day_light_controls; // 0x0C84(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F72[0x3];                                     // 0x0C85(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Random_Time_Scale_Percent;                         // 0x0C88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CodeControlled_CurrentTimeLength;                  // 0x0C8C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBuildingProp_4LayerMaterial_Struct> FourLayerColorInfo;                                // 0x0C90(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Parent_BuildingPropActor(int32 EntryPoint);
	void Loop_Animation_Curve();
	void OnBounceAnimationUpdate(const struct FFortBounceData& Data);
	void ReceiveBeginPlay();
	void OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void UserConstructionScript();
	void Set_Light_parameters(float Previous_to_Current_Day_Phase_Alpha);
	void OLD_Set__MID_Values_For_Lights();
	void Add_to_TOD_Light_Array(class ULightComponent*& NewItem);
	void Call_Animation_Curve_Again();
	void GetTimeOfDayBlueprintDefaultVariables(struct FTimeOfDayBlueprintDefaultVariables* OutVariables);
	void HandleBaseSimple4LayerMaterials(class UMaterialInstanceDynamic* Mid, float Duration, float Start, float End);
	void Init_4LayerMaterials();
	void Validate_MID_Values_For_Lights_4Layer();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Parent_BuildingPropActor_C">();
	}
	static class AParent_BuildingPropActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AParent_BuildingPropActor_C>();
	}
};
static_assert(alignof(AParent_BuildingPropActor_C) == 0x000008, "Wrong alignment on AParent_BuildingPropActor_C");
static_assert(sizeof(AParent_BuildingPropActor_C) == 0x000CA0, "Wrong size on AParent_BuildingPropActor_C");
static_assert(offsetof(AParent_BuildingPropActor_C, UberGraphFrame) == 0x000BC0, "Member 'AParent_BuildingPropActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, DebugWind) == 0x000BC8, "Member 'AParent_BuildingPropActor_C::DebugWind' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, IntenseWindMaterialsForPreview) == 0x000BD0, "Member 'AParent_BuildingPropActor_C::IntenseWindMaterialsForPreview' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, OriginalMaterials) == 0x000BE0, "Member 'AParent_BuildingPropActor_C::OriginalMaterials' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, Wind_Intensity_Debug_Mesh) == 0x000BF0, "Member 'AParent_BuildingPropActor_C::Wind_Intensity_Debug_Mesh' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, Debug_TempMaterial) == 0x000BF8, "Member 'AParent_BuildingPropActor_C::Debug_TempMaterial' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, Debug_Wind_Intensity) == 0x000C00, "Member 'AParent_BuildingPropActor_C::Debug_Wind_Intensity' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, DebugWindYaw) == 0x000C04, "Member 'AParent_BuildingPropActor_C::DebugWindYaw' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, Light_Intensity_Over_Time_of_Day_) == 0x000C08, "Member 'AParent_BuildingPropActor_C::Light_Intensity_Over_Time_of_Day_' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, Emissive_Intensity_Over_Time_of_Day) == 0x000C18, "Member 'AParent_BuildingPropActor_C::Emissive_Intensity_Over_Time_of_Day' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, CodeControlled_NumberOfMaterials) == 0x000C28, "Member 'AParent_BuildingPropActor_C::CodeControlled_NumberOfMaterials' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, CodeControlled_EmissiveColor) == 0x000C30, "Member 'AParent_BuildingPropActor_C::CodeControlled_EmissiveColor' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, CodeControlled_LightConeOpacity) == 0x000C40, "Member 'AParent_BuildingPropActor_C::CodeControlled_LightConeOpacity' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, Animate_Emissive_and_Lights_Over_Time) == 0x000C50, "Member 'AParent_BuildingPropActor_C::Animate_Emissive_and_Lights_Over_Time' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, Day_Phase_Transition_Length) == 0x000C54, "Member 'AParent_BuildingPropActor_C::Day_Phase_Transition_Length' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, Disable_TOD_Lights_and_Material_Emissive_Values) == 0x000C58, "Member 'AParent_BuildingPropActor_C::Disable_TOD_Lights_and_Material_Emissive_Values' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, Disable_Static_Mesh_Shadow_Casting_When_Lights_Are_Active) == 0x000C59, "Member 'AParent_BuildingPropActor_C::Disable_Static_Mesh_Shadow_Casting_When_Lights_Are_Active' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, AlternateShadowStaticMesh) == 0x000C60, "Member 'AParent_BuildingPropActor_C::AlternateShadowStaticMesh' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, Use_An_Alternate_Shadow_Mesh_When_The_Light_is_Off_) == 0x000C68, "Member 'AParent_BuildingPropActor_C::Use_An_Alternate_Shadow_Mesh_When_The_Light_is_Off_' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, Volumetric_Light_Scattering_Intensity) == 0x000C6C, "Member 'AParent_BuildingPropActor_C::Volumetric_Light_Scattering_Intensity' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, Cast_Volumetric_Shadows) == 0x000C70, "Member 'AParent_BuildingPropActor_C::Cast_Volumetric_Shadows' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, Animate_Lights_With_A_Curve_Minus_Disables_time_of_day_light_controls) == 0x000C71, "Member 'AParent_BuildingPropActor_C::Animate_Lights_With_A_Curve_Minus_Disables_time_of_day_light_controls' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, LightAnimationCurve) == 0x000C78, "Member 'AParent_BuildingPropActor_C::LightAnimationCurve' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, CodeControlled_Animation_Curve_Animation_Length) == 0x000C80, "Member 'AParent_BuildingPropActor_C::CodeControlled_Animation_Curve_Animation_Length' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, Animate_Mesh_MID_Emissive_Value_with_a_Curve_Minus_Disables_time_of_day_light_controls) == 0x000C84, "Member 'AParent_BuildingPropActor_C::Animate_Mesh_MID_Emissive_Value_with_a_Curve_Minus_Disables_time_of_day_light_controls' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, Random_Time_Scale_Percent) == 0x000C88, "Member 'AParent_BuildingPropActor_C::Random_Time_Scale_Percent' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, CodeControlled_CurrentTimeLength) == 0x000C8C, "Member 'AParent_BuildingPropActor_C::CodeControlled_CurrentTimeLength' has a wrong offset!");
static_assert(offsetof(AParent_BuildingPropActor_C, FourLayerColorInfo) == 0x000C90, "Member 'AParent_BuildingPropActor_C::FourLayerColorInfo' has a wrong offset!");

}
