#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SettingsListEntry_Action

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SettingsListEntry_Action.SettingsListEntry_Action_C
// 0x0010 (0x02B8 - 0x02A8)
class USettingsListEntry_Action_C final : public UFortSettingsListEntrySetting_Action
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnHover;                                           // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SettingsListEntry_Action(int32 EntryPoint);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnSettingAssigned(const class FText& ActionText);
	class UWidget* GetPrimaryGamepadFocusWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SettingsListEntry_Action_C">();
	}
	static class USettingsListEntry_Action_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USettingsListEntry_Action_C>();
	}
};
static_assert(alignof(USettingsListEntry_Action_C) == 0x000008, "Wrong alignment on USettingsListEntry_Action_C");
static_assert(sizeof(USettingsListEntry_Action_C) == 0x0002B8, "Wrong size on USettingsListEntry_Action_C");
static_assert(offsetof(USettingsListEntry_Action_C, UberGraphFrame) == 0x0002A8, "Member 'USettingsListEntry_Action_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USettingsListEntry_Action_C, OnHover) == 0x0002B0, "Member 'USettingsListEntry_Action_C::OnHover' has a wrong offset!");

}
