#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemShopScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemShopScreen.ItemShopScreen_C
// 0x0060 (0x0668 - 0x0608)
class UItemShopScreen_C final : public UAthenaItemShopScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0608(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       DonutDrop;                                         // 0x0610(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         AffilateInfo;                                      // 0x0618(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    CommonActionWidget_0;                              // 0x0620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    CommonActionWidget_1;                              // 0x0628(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_CosmeticWarning;                      // 0x0630(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          NoOffersBox;                                       // 0x0638(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProgressSpinner;                                   // 0x0640(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_4;                                        // 0x0648(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_3;                                        // 0x0650(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_Sections;                                 // 0x0658(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Sections;                              // 0x0660(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void OnSectionsEstablished(bool bEmpty);
	void OnEstablishingSections();
	void BPSetupForDonutSequence(bool bEventEnabled);
	void BPPlayDonutAnimation();
	void Construct();
	void PostDonutDrop();
	void ExecuteUbergraph_ItemShopScreen(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemShopScreen_C">();
	}
	static class UItemShopScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemShopScreen_C>();
	}
};
static_assert(alignof(UItemShopScreen_C) == 0x000008, "Wrong alignment on UItemShopScreen_C");
static_assert(sizeof(UItemShopScreen_C) == 0x000668, "Wrong size on UItemShopScreen_C");
static_assert(offsetof(UItemShopScreen_C, UberGraphFrame) == 0x000608, "Member 'UItemShopScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, DonutDrop) == 0x000610, "Member 'UItemShopScreen_C::DonutDrop' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, AffilateInfo) == 0x000618, "Member 'UItemShopScreen_C::AffilateInfo' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, CommonActionWidget_0) == 0x000620, "Member 'UItemShopScreen_C::CommonActionWidget_0' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, CommonActionWidget_1) == 0x000628, "Member 'UItemShopScreen_C::CommonActionWidget_1' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, CommonBorder_CosmeticWarning) == 0x000630, "Member 'UItemShopScreen_C::CommonBorder_CosmeticWarning' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, NoOffersBox) == 0x000638, "Member 'UItemShopScreen_C::NoOffersBox' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, ProgressSpinner) == 0x000640, "Member 'UItemShopScreen_C::ProgressSpinner' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, SafeZone_4) == 0x000648, "Member 'UItemShopScreen_C::SafeZone_4' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, ScaleBox_3) == 0x000650, "Member 'UItemShopScreen_C::ScaleBox_3' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, Switcher_Sections) == 0x000658, "Member 'UItemShopScreen_C::Switcher_Sections' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, VerticalBox_Sections) == 0x000660, "Member 'UItemShopScreen_C::VerticalBox_Sections' has a wrong offset!");

}

