#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeroLoadoutPerksDetailWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C
// 0x00A0 (0x0350 - 0x02B0)
class UHeroLoadoutPerksDetailWidget_C final : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                          Border_Warning;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ClassPerkDetailRowsBox;                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          ClassPerksBorder;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommanderPerkBorder;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHeroLoadoutPerkDetailRow_C*            CommanderPerkDetailRow;                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_ClassPerks;                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_CommanderPerk;                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_StandardPerk;                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorderFlavortextMinus01;                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorderFlavortextMinus02;                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       LazyImage_Warning;                                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          NormalPerkBorder;                                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               RootVisibilityBox;                                 // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHeroLoadoutPerkDetailRow_C*            StandardPerkDetailRow;                             // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Warning;                                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortCampaignHeroLoadoutItem*           LoadoutContext;                                    // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SlotNameContext;                                   // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHeroLoadOutMinusTooltip;                         // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bShouldShowClassPerks;                             // 0x0349(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void IsValidHeroSlot(bool* Result);
	void UpdateCommanderSlotPerkVisibility();
	void UpdateHeroLoadoutSlotWarning();
	void UpdateRootVisibility();
	void HandleDifferentLoadoutSlotContextSet();
	void ClearLoadoutSlotContext();
	void SetLoadoutSlotContext(class UFortCampaignHeroLoadoutItem* HeroLoadout, class FName SlotName);
	void HandlePostDifferentItemToDetailSet();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HeroLoadoutPerksDetailWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HeroLoadoutPerksDetailWidget_C">();
	}
	static class UHeroLoadoutPerksDetailWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHeroLoadoutPerksDetailWidget_C>();
	}
};
static_assert(alignof(UHeroLoadoutPerksDetailWidget_C) == 0x000008, "Wrong alignment on UHeroLoadoutPerksDetailWidget_C");
static_assert(sizeof(UHeroLoadoutPerksDetailWidget_C) == 0x000350, "Wrong size on UHeroLoadoutPerksDetailWidget_C");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, UberGraphFrame) == 0x0002B0, "Member 'UHeroLoadoutPerksDetailWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, Border_Warning) == 0x0002B8, "Member 'UHeroLoadoutPerksDetailWidget_C::Border_Warning' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, ClassPerkDetailRowsBox) == 0x0002C0, "Member 'UHeroLoadoutPerksDetailWidget_C::ClassPerkDetailRowsBox' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, ClassPerksBorder) == 0x0002C8, "Member 'UHeroLoadoutPerksDetailWidget_C::ClassPerksBorder' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, CommanderPerkBorder) == 0x0002D0, "Member 'UHeroLoadoutPerksDetailWidget_C::CommanderPerkBorder' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, CommanderPerkDetailRow) == 0x0002D8, "Member 'UHeroLoadoutPerksDetailWidget_C::CommanderPerkDetailRow' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, CommonBorder_ClassPerks) == 0x0002E0, "Member 'UHeroLoadoutPerksDetailWidget_C::CommonBorder_ClassPerks' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, CommonBorder_CommanderPerk) == 0x0002E8, "Member 'UHeroLoadoutPerksDetailWidget_C::CommonBorder_CommanderPerk' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, CommonBorder_StandardPerk) == 0x0002F0, "Member 'UHeroLoadoutPerksDetailWidget_C::CommonBorder_StandardPerk' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, CommonBorderFlavortextMinus01) == 0x0002F8, "Member 'UHeroLoadoutPerksDetailWidget_C::CommonBorderFlavortextMinus01' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, CommonBorderFlavortextMinus02) == 0x000300, "Member 'UHeroLoadoutPerksDetailWidget_C::CommonBorderFlavortextMinus02' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, Image_1) == 0x000308, "Member 'UHeroLoadoutPerksDetailWidget_C::Image_1' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, LazyImage_Warning) == 0x000310, "Member 'UHeroLoadoutPerksDetailWidget_C::LazyImage_Warning' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, NormalPerkBorder) == 0x000318, "Member 'UHeroLoadoutPerksDetailWidget_C::NormalPerkBorder' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, RootVisibilityBox) == 0x000320, "Member 'UHeroLoadoutPerksDetailWidget_C::RootVisibilityBox' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, StandardPerkDetailRow) == 0x000328, "Member 'UHeroLoadoutPerksDetailWidget_C::StandardPerkDetailRow' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, Text_Warning) == 0x000330, "Member 'UHeroLoadoutPerksDetailWidget_C::Text_Warning' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, LoadoutContext) == 0x000338, "Member 'UHeroLoadoutPerksDetailWidget_C::LoadoutContext' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, SlotNameContext) == 0x000340, "Member 'UHeroLoadoutPerksDetailWidget_C::SlotNameContext' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, IsHeroLoadOutMinusTooltip) == 0x000348, "Member 'UHeroLoadoutPerksDetailWidget_C::IsHeroLoadOutMinusTooltip' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, bShouldShowClassPerks) == 0x000349, "Member 'UHeroLoadoutPerksDetailWidget_C::bShouldShowClassPerks' has a wrong offset!");

}
