#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaEquippedItemWidget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaEquippedItemWidget.AthenaEquippedItemWidget_C
// 0x0050 (0x0558 - 0x0508)
class UAthenaEquippedItemWidget_C final : public UAthenaEquippedItemBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0508(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NameOutro;                                         // 0x0510(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       NameIntro;                                         // 0x0518(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Split1;                                            // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           SwitchPopUp;                                       // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SwitchPopUpText;                                   // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           OutOfAmmoColor;                                    // 0x0538(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              SmallBrushSize;                                    // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              LargeBrushSize;                                    // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaEquippedItemWidget(int32 EntryPoint);
	void BP_HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void BP_HandleResourceTypeChanged(const class UFortResourceItemDefinition* Item, int32 ResourceCount);
	void BP_HandleAmmoCountChanged(int32 MagazineAmmoCount, int32 SurplusAmmoCount, int32 TotalRemaining);
	void BP_HandleHasAmmoChanged(bool bHasAmmo);
	void BP_HandleHasBulletsPerClipChanged(bool bHasBulletsPerClip);
	void OnPopUpOnSwitchDone();
	void Construct();
	void UpdateWidgetColor(bool HasAmmo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaEquippedItemWidget_C">();
	}
	static class UAthenaEquippedItemWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaEquippedItemWidget_C>();
	}
};
static_assert(alignof(UAthenaEquippedItemWidget_C) == 0x000008, "Wrong alignment on UAthenaEquippedItemWidget_C");
static_assert(sizeof(UAthenaEquippedItemWidget_C) == 0x000558, "Wrong size on UAthenaEquippedItemWidget_C");
static_assert(offsetof(UAthenaEquippedItemWidget_C, UberGraphFrame) == 0x000508, "Member 'UAthenaEquippedItemWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, NameOutro) == 0x000510, "Member 'UAthenaEquippedItemWidget_C::NameOutro' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, NameIntro) == 0x000518, "Member 'UAthenaEquippedItemWidget_C::NameIntro' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, Split1) == 0x000520, "Member 'UAthenaEquippedItemWidget_C::Split1' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, SwitchPopUp) == 0x000528, "Member 'UAthenaEquippedItemWidget_C::SwitchPopUp' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, SwitchPopUpText) == 0x000530, "Member 'UAthenaEquippedItemWidget_C::SwitchPopUpText' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, OutOfAmmoColor) == 0x000538, "Member 'UAthenaEquippedItemWidget_C::OutOfAmmoColor' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, SmallBrushSize) == 0x000548, "Member 'UAthenaEquippedItemWidget_C::SmallBrushSize' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, LargeBrushSize) == 0x000550, "Member 'UAthenaEquippedItemWidget_C::LargeBrushSize' has a wrong offset!");

}
