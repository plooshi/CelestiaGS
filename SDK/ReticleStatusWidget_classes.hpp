#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReticleStatusWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ReticleStatusWidget.ReticleStatusWidget_C
// 0x0090 (0x0328 - 0x0298)
class UReticleStatusWidget_C final : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         _Horizontal_Box__Edit;                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_quickedit;                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_QuickEditPreview;                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidgetDark_C*                   KeybindEdit;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ReticleStatusText;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_EditContext;                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         StatusDisplayDuration;                             // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54CB[0x4];                                     // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, class UMaterialInstance*> QuickEditMap;                                      // 0x02D8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Construct();
	void OnUnableToPerformAction(const struct FGameplayTagContainer& FailedReason, const class FText& FailureText);
	void ExecuteUbergraph_ReticleStatusWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ReticleStatusWidget_C">();
	}
	static class UReticleStatusWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReticleStatusWidget_C>();
	}
};
static_assert(alignof(UReticleStatusWidget_C) == 0x000008, "Wrong alignment on UReticleStatusWidget_C");
static_assert(sizeof(UReticleStatusWidget_C) == 0x000328, "Wrong size on UReticleStatusWidget_C");
static_assert(offsetof(UReticleStatusWidget_C, UberGraphFrame) == 0x000298, "Member 'UReticleStatusWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UReticleStatusWidget_C, _Horizontal_Box__Edit) == 0x0002A0, "Member 'UReticleStatusWidget_C::_Horizontal_Box__Edit' has a wrong offset!");
static_assert(offsetof(UReticleStatusWidget_C, CommonTextBlock_quickedit) == 0x0002A8, "Member 'UReticleStatusWidget_C::CommonTextBlock_quickedit' has a wrong offset!");
static_assert(offsetof(UReticleStatusWidget_C, Image_QuickEditPreview) == 0x0002B0, "Member 'UReticleStatusWidget_C::Image_QuickEditPreview' has a wrong offset!");
static_assert(offsetof(UReticleStatusWidget_C, KeybindEdit) == 0x0002B8, "Member 'UReticleStatusWidget_C::KeybindEdit' has a wrong offset!");
static_assert(offsetof(UReticleStatusWidget_C, ReticleStatusText) == 0x0002C0, "Member 'UReticleStatusWidget_C::ReticleStatusText' has a wrong offset!");
static_assert(offsetof(UReticleStatusWidget_C, WidgetSwitcher_EditContext) == 0x0002C8, "Member 'UReticleStatusWidget_C::WidgetSwitcher_EditContext' has a wrong offset!");
static_assert(offsetof(UReticleStatusWidget_C, StatusDisplayDuration) == 0x0002D0, "Member 'UReticleStatusWidget_C::StatusDisplayDuration' has a wrong offset!");
static_assert(offsetof(UReticleStatusWidget_C, QuickEditMap) == 0x0002D8, "Member 'UReticleStatusWidget_C::QuickEditMap' has a wrong offset!");

}

