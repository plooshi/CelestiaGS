#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInspectionMainItemDetailsHostPanel

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemInspectionMainItemDetailsHostPanel.ItemInspectionMainItemDetailsHostPanel_C
// 0x0038 (0x0358 - 0x0320)
class UItemInspectionMainItemDetailsHostPanel_C final : public UFortItemDetailsHostPanel
{
public:
	class UCommonBorder*                          Border_Details;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDetailsHeader_C*                   HeaderWidget;                                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemAttributesDetailWidget_C*          ItemAttributesDetailWidget;                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemCalledOutAttributesDetailWidget_C* ItemCalledOutAttributesDetailWidget;               // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDescriptionDetailWidget_C*         ItemDescriptionDetailWidget;                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMiniItemCraftingIngredientsDetailWidget_C* MiniItemCraftingIngredientsDetailWidget;           // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_0;                                       // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetItemsDetailsVisibility(bool DoNotShow, bool HideInsteadOfCollapse, bool UseTransitionAnimation);
	void GetItemDetailsVisibility(bool* Param_IsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemInspectionMainItemDetailsHostPanel_C">();
	}
	static class UItemInspectionMainItemDetailsHostPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemInspectionMainItemDetailsHostPanel_C>();
	}
};
static_assert(alignof(UItemInspectionMainItemDetailsHostPanel_C) == 0x000008, "Wrong alignment on UItemInspectionMainItemDetailsHostPanel_C");
static_assert(sizeof(UItemInspectionMainItemDetailsHostPanel_C) == 0x000358, "Wrong size on UItemInspectionMainItemDetailsHostPanel_C");
static_assert(offsetof(UItemInspectionMainItemDetailsHostPanel_C, Border_Details) == 0x000320, "Member 'UItemInspectionMainItemDetailsHostPanel_C::Border_Details' has a wrong offset!");
static_assert(offsetof(UItemInspectionMainItemDetailsHostPanel_C, HeaderWidget) == 0x000328, "Member 'UItemInspectionMainItemDetailsHostPanel_C::HeaderWidget' has a wrong offset!");
static_assert(offsetof(UItemInspectionMainItemDetailsHostPanel_C, ItemAttributesDetailWidget) == 0x000330, "Member 'UItemInspectionMainItemDetailsHostPanel_C::ItemAttributesDetailWidget' has a wrong offset!");
static_assert(offsetof(UItemInspectionMainItemDetailsHostPanel_C, ItemCalledOutAttributesDetailWidget) == 0x000338, "Member 'UItemInspectionMainItemDetailsHostPanel_C::ItemCalledOutAttributesDetailWidget' has a wrong offset!");
static_assert(offsetof(UItemInspectionMainItemDetailsHostPanel_C, ItemDescriptionDetailWidget) == 0x000340, "Member 'UItemInspectionMainItemDetailsHostPanel_C::ItemDescriptionDetailWidget' has a wrong offset!");
static_assert(offsetof(UItemInspectionMainItemDetailsHostPanel_C, MiniItemCraftingIngredientsDetailWidget) == 0x000348, "Member 'UItemInspectionMainItemDetailsHostPanel_C::MiniItemCraftingIngredientsDetailWidget' has a wrong offset!");
static_assert(offsetof(UItemInspectionMainItemDetailsHostPanel_C, ScrollBox_0) == 0x000350, "Member 'UItemInspectionMainItemDetailsHostPanel_C::ScrollBox_0' has a wrong offset!");

}

