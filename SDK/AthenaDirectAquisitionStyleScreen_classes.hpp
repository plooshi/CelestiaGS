#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDirectAquisitionStyleScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C
// 0x0068 (0x0728 - 0x06C0)
class UAthenaDirectAquisitionStyleScreen_C final : public UFortStoreFrontOfferDetailsWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPanelButton_C*                         Button_Next;                                       // 0x06C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         Button_Previous;                                   // 0x06D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               CameraFramingWidget;                               // 0x06D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCloseButton_C*                         CloseButton;                                       // 0x06E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInfoHeaderWidget_C*                ItemInfoHeader;                                    // 0x06E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaLockedStyleNotification_C*       LockedNotification;                                // 0x06F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       StyleDisclaimer;                                   // 0x06F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          OfferSet;                                          // 0x0700(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73E2[0x3];                                     // 0x0701(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         IndexIntoOffersWithVariantsList;                   // 0x0704(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 OfferSubIndicesWithVariants;                       // 0x0708(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UFortItemDefinition*                    InitialTriggeringItemDef;                          // 0x0718(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              CharacterItem;                                     // 0x0720(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ViewVaultItemWithBackpack(class UFortItemDefinition* Param_ItemToRepresent);
	void SetupCharacterItem();
	class UFortAccountItemDefinition* GetOfferGrantedItemDef();
	void RebuildStylesFromOffer();
	void SwitchToNextItemInOffer(int32 Direction);
	void ScanOfferForVariants();
	void UpdateFromVariant(const struct FGameplayTag& VariantChannelTag, const struct FGameplayTag& VariantTag, bool IsOwned);
	class UWidget* GetWidgetForFramingViewedItem();
	void HandleBack(bool* bPassThrough);
	void OnOfferSet();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void BndEvt__Button_Previous_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnVariantChanged(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& VariantTag, bool IsOwned);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaDirectAquisitionStyleScreen(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaDirectAquisitionStyleScreen_C">();
	}
	static class UAthenaDirectAquisitionStyleScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaDirectAquisitionStyleScreen_C>();
	}
};
static_assert(alignof(UAthenaDirectAquisitionStyleScreen_C) == 0x000008, "Wrong alignment on UAthenaDirectAquisitionStyleScreen_C");
static_assert(sizeof(UAthenaDirectAquisitionStyleScreen_C) == 0x000728, "Wrong size on UAthenaDirectAquisitionStyleScreen_C");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, UberGraphFrame) == 0x0006C0, "Member 'UAthenaDirectAquisitionStyleScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, Button_Next) == 0x0006C8, "Member 'UAthenaDirectAquisitionStyleScreen_C::Button_Next' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, Button_Previous) == 0x0006D0, "Member 'UAthenaDirectAquisitionStyleScreen_C::Button_Previous' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, CameraFramingWidget) == 0x0006D8, "Member 'UAthenaDirectAquisitionStyleScreen_C::CameraFramingWidget' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, CloseButton) == 0x0006E0, "Member 'UAthenaDirectAquisitionStyleScreen_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, ItemInfoHeader) == 0x0006E8, "Member 'UAthenaDirectAquisitionStyleScreen_C::ItemInfoHeader' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, LockedNotification) == 0x0006F0, "Member 'UAthenaDirectAquisitionStyleScreen_C::LockedNotification' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, StyleDisclaimer) == 0x0006F8, "Member 'UAthenaDirectAquisitionStyleScreen_C::StyleDisclaimer' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, OfferSet) == 0x000700, "Member 'UAthenaDirectAquisitionStyleScreen_C::OfferSet' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, IndexIntoOffersWithVariantsList) == 0x000704, "Member 'UAthenaDirectAquisitionStyleScreen_C::IndexIntoOffersWithVariantsList' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, OfferSubIndicesWithVariants) == 0x000708, "Member 'UAthenaDirectAquisitionStyleScreen_C::OfferSubIndicesWithVariants' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, InitialTriggeringItemDef) == 0x000718, "Member 'UAthenaDirectAquisitionStyleScreen_C::InitialTriggeringItemDef' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, CharacterItem) == 0x000720, "Member 'UAthenaDirectAquisitionStyleScreen_C::CharacterItem' has a wrong offset!");

}
