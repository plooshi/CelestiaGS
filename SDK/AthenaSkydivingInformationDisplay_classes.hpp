#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSkydivingInformationDisplay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaSkydivingInformationDisplay.AthenaSkydivingInformationDisplay_C
// 0x0088 (0x0350 - 0x02C8)
class UAthenaSkydivingInformationDisplay_C final : public UAthenaSkydivingInformation
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BottomAnchor;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                CommonNumericTextBlock_128;                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                CurrentAltitudeDisplay;                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           CurrentHeightBar;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                DeployAltitudeDisplay;                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         DeployAtBox;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           DeployHeightBar;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         DeployInBox;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                DropSpeedTextBlock;                                // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           GroundHeightBar;                                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GroundMarker;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                HorizSpeedValue;                                   // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerMarker;                                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RightAnchor;                                       // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               PlayerMarkerMID;                                   // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsGliding;                                         // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnNewAltitude(float NewAltitude);
	void OnNewDuration(float NewDuration);
	void Construct();
	void OnStartSkydive();
	void OnExitSkydive();
	void OnNewCurrentAltitude(float NewCurrentAltitude);
	void OnNewNormalizedGroundAltitude(float NormalizedGroundAltitude);
	void OnNewNormalizedOpeningAltitude(float NormalizedOpeningAltitude);
	void OnNewNormalizedPlayerAltitude(float NormalizedPlayerAltitude);
	void OnNewVerticalSpeed(float NewVerticalSpeed);
	void OnEnterGlider();
	void OnNewHorizontalSpeed(float NewHorizontalSpeed);
	void ExecuteUbergraph_AthenaSkydivingInformationDisplay(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaSkydivingInformationDisplay_C">();
	}
	static class UAthenaSkydivingInformationDisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaSkydivingInformationDisplay_C>();
	}
};
static_assert(alignof(UAthenaSkydivingInformationDisplay_C) == 0x000008, "Wrong alignment on UAthenaSkydivingInformationDisplay_C");
static_assert(sizeof(UAthenaSkydivingInformationDisplay_C) == 0x000350, "Wrong size on UAthenaSkydivingInformationDisplay_C");
static_assert(offsetof(UAthenaSkydivingInformationDisplay_C, UberGraphFrame) == 0x0002C8, "Member 'UAthenaSkydivingInformationDisplay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaSkydivingInformationDisplay_C, BottomAnchor) == 0x0002D0, "Member 'UAthenaSkydivingInformationDisplay_C::BottomAnchor' has a wrong offset!");
static_assert(offsetof(UAthenaSkydivingInformationDisplay_C, CommonNumericTextBlock_128) == 0x0002D8, "Member 'UAthenaSkydivingInformationDisplay_C::CommonNumericTextBlock_128' has a wrong offset!");
static_assert(offsetof(UAthenaSkydivingInformationDisplay_C, CurrentAltitudeDisplay) == 0x0002E0, "Member 'UAthenaSkydivingInformationDisplay_C::CurrentAltitudeDisplay' has a wrong offset!");
static_assert(offsetof(UAthenaSkydivingInformationDisplay_C, CurrentHeightBar) == 0x0002E8, "Member 'UAthenaSkydivingInformationDisplay_C::CurrentHeightBar' has a wrong offset!");
static_assert(offsetof(UAthenaSkydivingInformationDisplay_C, DeployAltitudeDisplay) == 0x0002F0, "Member 'UAthenaSkydivingInformationDisplay_C::DeployAltitudeDisplay' has a wrong offset!");
static_assert(offsetof(UAthenaSkydivingInformationDisplay_C, DeployAtBox) == 0x0002F8, "Member 'UAthenaSkydivingInformationDisplay_C::DeployAtBox' has a wrong offset!");
static_assert(offsetof(UAthenaSkydivingInformationDisplay_C, DeployHeightBar) == 0x000300, "Member 'UAthenaSkydivingInformationDisplay_C::DeployHeightBar' has a wrong offset!");
static_assert(offsetof(UAthenaSkydivingInformationDisplay_C, DeployInBox) == 0x000308, "Member 'UAthenaSkydivingInformationDisplay_C::DeployInBox' has a wrong offset!");
static_assert(offsetof(UAthenaSkydivingInformationDisplay_C, DropSpeedTextBlock) == 0x000310, "Member 'UAthenaSkydivingInformationDisplay_C::DropSpeedTextBlock' has a wrong offset!");
static_assert(offsetof(UAthenaSkydivingInformationDisplay_C, GroundHeightBar) == 0x000318, "Member 'UAthenaSkydivingInformationDisplay_C::GroundHeightBar' has a wrong offset!");
static_assert(offsetof(UAthenaSkydivingInformationDisplay_C, GroundMarker) == 0x000320, "Member 'UAthenaSkydivingInformationDisplay_C::GroundMarker' has a wrong offset!");
static_assert(offsetof(UAthenaSkydivingInformationDisplay_C, HorizSpeedValue) == 0x000328, "Member 'UAthenaSkydivingInformationDisplay_C::HorizSpeedValue' has a wrong offset!");
static_assert(offsetof(UAthenaSkydivingInformationDisplay_C, PlayerMarker) == 0x000330, "Member 'UAthenaSkydivingInformationDisplay_C::PlayerMarker' has a wrong offset!");
static_assert(offsetof(UAthenaSkydivingInformationDisplay_C, RightAnchor) == 0x000338, "Member 'UAthenaSkydivingInformationDisplay_C::RightAnchor' has a wrong offset!");
static_assert(offsetof(UAthenaSkydivingInformationDisplay_C, PlayerMarkerMID) == 0x000340, "Member 'UAthenaSkydivingInformationDisplay_C::PlayerMarkerMID' has a wrong offset!");
static_assert(offsetof(UAthenaSkydivingInformationDisplay_C, IsGliding) == 0x000348, "Member 'UAthenaSkydivingInformationDisplay_C::IsGliding' has a wrong offset!");

}
