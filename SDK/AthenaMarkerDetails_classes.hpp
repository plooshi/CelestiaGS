#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaMarkerDetails

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaMarkerDetails.AthenaMarkerDetails_C
// 0x0188 (0x0430 - 0x02A8)
class UAthenaMarkerDetails_C final : public UAthenaMarkerDetails
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnHover;                                           // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       ActionText;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ActionTextContainer;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ContentBox;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DangerIcon;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        DetailSwitcher;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemIcon;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemName;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindWidget;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LocationIcon;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Reboot;                                            // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Seperator;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_IndicatorIcon;                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortWorldMarkerData                   MyMarkerData;                                      // 0x0320(0x0100)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*               LineMaterial;                                      // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ColorReduction;                                    // 0x0428(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Show(bool Param_Show);
	void SetDisplayText(const class FText& NewText);
	void GetMarkedItemDetails(class FText* DisplayName, TSoftObjectPtr<class UTexture2D>* SmallPreviewImage, struct FLinearColor* RarityColor);
	void OnLoaded_2801580E4D1C0BB88FD9D4B09B65ACAE(class UObject* Loaded);
	void TryHandleItemMarker();
	void FinishMarkedItemSetup();
	void SetupLocationMarker();
	void SetupEnemyMarker();
	void UpdateMarkerData(const struct FFortWorldMarkerData& MarkerData);
	void PreConstruct(bool IsDesignTime);
	void UpdateMarkerAction(EFortMarkerActions MarkerAction);
	void ExecuteUbergraph_AthenaMarkerDetails(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMarkerDetails_C">();
	}
	static class UAthenaMarkerDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMarkerDetails_C>();
	}
};
static_assert(alignof(UAthenaMarkerDetails_C) == 0x000008, "Wrong alignment on UAthenaMarkerDetails_C");
static_assert(sizeof(UAthenaMarkerDetails_C) == 0x000430, "Wrong size on UAthenaMarkerDetails_C");
static_assert(offsetof(UAthenaMarkerDetails_C, UberGraphFrame) == 0x0002A8, "Member 'UAthenaMarkerDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaMarkerDetails_C, OnHover) == 0x0002B0, "Member 'UAthenaMarkerDetails_C::OnHover' has a wrong offset!");
static_assert(offsetof(UAthenaMarkerDetails_C, ActionText) == 0x0002B8, "Member 'UAthenaMarkerDetails_C::ActionText' has a wrong offset!");
static_assert(offsetof(UAthenaMarkerDetails_C, ActionTextContainer) == 0x0002C0, "Member 'UAthenaMarkerDetails_C::ActionTextContainer' has a wrong offset!");
static_assert(offsetof(UAthenaMarkerDetails_C, ContentBox) == 0x0002C8, "Member 'UAthenaMarkerDetails_C::ContentBox' has a wrong offset!");
static_assert(offsetof(UAthenaMarkerDetails_C, DangerIcon) == 0x0002D0, "Member 'UAthenaMarkerDetails_C::DangerIcon' has a wrong offset!");
static_assert(offsetof(UAthenaMarkerDetails_C, DetailSwitcher) == 0x0002D8, "Member 'UAthenaMarkerDetails_C::DetailSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaMarkerDetails_C, ItemIcon) == 0x0002E0, "Member 'UAthenaMarkerDetails_C::ItemIcon' has a wrong offset!");
static_assert(offsetof(UAthenaMarkerDetails_C, ItemName) == 0x0002E8, "Member 'UAthenaMarkerDetails_C::ItemName' has a wrong offset!");
static_assert(offsetof(UAthenaMarkerDetails_C, KeybindWidget) == 0x0002F0, "Member 'UAthenaMarkerDetails_C::KeybindWidget' has a wrong offset!");
static_assert(offsetof(UAthenaMarkerDetails_C, LocationIcon) == 0x0002F8, "Member 'UAthenaMarkerDetails_C::LocationIcon' has a wrong offset!");
static_assert(offsetof(UAthenaMarkerDetails_C, Reboot) == 0x000300, "Member 'UAthenaMarkerDetails_C::Reboot' has a wrong offset!");
static_assert(offsetof(UAthenaMarkerDetails_C, Seperator) == 0x000308, "Member 'UAthenaMarkerDetails_C::Seperator' has a wrong offset!");
static_assert(offsetof(UAthenaMarkerDetails_C, Switcher_IndicatorIcon) == 0x000310, "Member 'UAthenaMarkerDetails_C::Switcher_IndicatorIcon' has a wrong offset!");
static_assert(offsetof(UAthenaMarkerDetails_C, TextBlock_0) == 0x000318, "Member 'UAthenaMarkerDetails_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UAthenaMarkerDetails_C, MyMarkerData) == 0x000320, "Member 'UAthenaMarkerDetails_C::MyMarkerData' has a wrong offset!");
static_assert(offsetof(UAthenaMarkerDetails_C, LineMaterial) == 0x000420, "Member 'UAthenaMarkerDetails_C::LineMaterial' has a wrong offset!");
static_assert(offsetof(UAthenaMarkerDetails_C, ColorReduction) == 0x000428, "Member 'UAthenaMarkerDetails_C::ColorReduction' has a wrong offset!");

}
