#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaHUDBottomBar

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaHUDBottomBar.AthenaHUDBottomBar_C
// 0x0028 (0x0280 - 0x0258)
class UAthenaHUDBottomBar_C final : public UCommonUserWidget
{
public:
	class UBorder*                                Border_BottomBorder;                               // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBoundActionBar*                  BoundActionBar;                                    // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_1;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                                DefaultButtonMargin;                               // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaHUDBottomBar_C">();
	}
	static class UAthenaHUDBottomBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaHUDBottomBar_C>();
	}
};
static_assert(alignof(UAthenaHUDBottomBar_C) == 0x000008, "Wrong alignment on UAthenaHUDBottomBar_C");
static_assert(sizeof(UAthenaHUDBottomBar_C) == 0x000280, "Wrong size on UAthenaHUDBottomBar_C");
static_assert(offsetof(UAthenaHUDBottomBar_C, Border_BottomBorder) == 0x000258, "Member 'UAthenaHUDBottomBar_C::Border_BottomBorder' has a wrong offset!");
static_assert(offsetof(UAthenaHUDBottomBar_C, BoundActionBar) == 0x000260, "Member 'UAthenaHUDBottomBar_C::BoundActionBar' has a wrong offset!");
static_assert(offsetof(UAthenaHUDBottomBar_C, SafeZone_1) == 0x000268, "Member 'UAthenaHUDBottomBar_C::SafeZone_1' has a wrong offset!");
static_assert(offsetof(UAthenaHUDBottomBar_C, DefaultButtonMargin) == 0x000270, "Member 'UAthenaHUDBottomBar_C::DefaultButtonMargin' has a wrong offset!");

}
