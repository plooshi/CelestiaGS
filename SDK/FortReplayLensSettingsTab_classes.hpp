#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortReplayLensSettingsTab

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FortReplayLensSettingsTab.FortReplayLensSettingsTab_C
// 0x0070 (0x04B0 - 0x0440)
class UFortReplayLensSettingsTab_C final : public UFortSpectatorLensSettingsTab
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0440(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URotatorSelectorReplaySettings_C*       ApertureSelector;                                  // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*       AutoFocusSelector;                                 // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSliderReplay_C*             ExposureSlider;                                    // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*       FocalLengthSelector;                               // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSliderReplay_C*             FocusDistanceSlider;                               // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox;                                       // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_DOFSettings;                           // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   OnText;                                            // 0x0480(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   OffText;                                           // 0x0498(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_FortReplayLensSettingsTab(int32 EntryPoint);
	void BP_OnActivated();
	void OnAutoExposureEnabledChanged(bool bAutoExposureEnabled);
	void OnManualExposureBiasChanged(float ManualExposureBias);
	void OnFocalLengthChanged(const TArray<class FText>& FocalLengthTexts, int32 PresetFocalLengthIdx);
	void OnApertureChanged(int32 PresetApertureIdx);
	void OnAutoFocusEnabledChanged(bool bAutoFocusEnabled);
	void OnManualFocusDistanceChanged(float ManualFocusDistance);
	void BndEvt__ExposureSlider_K2Node_ComponentBoundEvent_4_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__FocusDistanceSlider_K2Node_ComponentBoundEvent_1_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__AutoFocusSelector_K2Node_ComponentBoundEvent_8_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__ApertureSelector_K2Node_ComponentBoundEvent_7_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__FocalLengthSelector_K2Node_ComponentBoundEvent_3_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__AutoExposureSelector_K2Node_ComponentBoundEvent_0_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void PreConstruct(bool IsDesignTime);
	void CenterOnTab();
	void InitializeWidgets();
	void RefreshDOFSettings();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortReplayLensSettingsTab_C">();
	}
	static class UFortReplayLensSettingsTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortReplayLensSettingsTab_C>();
	}
};
static_assert(alignof(UFortReplayLensSettingsTab_C) == 0x000008, "Wrong alignment on UFortReplayLensSettingsTab_C");
static_assert(sizeof(UFortReplayLensSettingsTab_C) == 0x0004B0, "Wrong size on UFortReplayLensSettingsTab_C");
static_assert(offsetof(UFortReplayLensSettingsTab_C, UberGraphFrame) == 0x000440, "Member 'UFortReplayLensSettingsTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFortReplayLensSettingsTab_C, ApertureSelector) == 0x000448, "Member 'UFortReplayLensSettingsTab_C::ApertureSelector' has a wrong offset!");
static_assert(offsetof(UFortReplayLensSettingsTab_C, AutoFocusSelector) == 0x000450, "Member 'UFortReplayLensSettingsTab_C::AutoFocusSelector' has a wrong offset!");
static_assert(offsetof(UFortReplayLensSettingsTab_C, ExposureSlider) == 0x000458, "Member 'UFortReplayLensSettingsTab_C::ExposureSlider' has a wrong offset!");
static_assert(offsetof(UFortReplayLensSettingsTab_C, FocalLengthSelector) == 0x000460, "Member 'UFortReplayLensSettingsTab_C::FocalLengthSelector' has a wrong offset!");
static_assert(offsetof(UFortReplayLensSettingsTab_C, FocusDistanceSlider) == 0x000468, "Member 'UFortReplayLensSettingsTab_C::FocusDistanceSlider' has a wrong offset!");
static_assert(offsetof(UFortReplayLensSettingsTab_C, VerticalBox) == 0x000470, "Member 'UFortReplayLensSettingsTab_C::VerticalBox' has a wrong offset!");
static_assert(offsetof(UFortReplayLensSettingsTab_C, VerticalBox_DOFSettings) == 0x000478, "Member 'UFortReplayLensSettingsTab_C::VerticalBox_DOFSettings' has a wrong offset!");
static_assert(offsetof(UFortReplayLensSettingsTab_C, OnText) == 0x000480, "Member 'UFortReplayLensSettingsTab_C::OnText' has a wrong offset!");
static_assert(offsetof(UFortReplayLensSettingsTab_C, OffText) == 0x000498, "Member 'UFortReplayLensSettingsTab_C::OffText' has a wrong offset!");

}
