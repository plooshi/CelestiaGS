#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaHUDMinusPickupItemWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaHUD-PickupItemWidget.AthenaHUD-PickupItemWidget_C
// 0x0038 (0x0290 - 0x0258)
class UAthenaHUDMinusPickupItemWidget_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaItemDetailsHeader_C*             ItemDetailsHeader;                                 // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFortPickup*                            Pickup;                                            // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UFortItem*                              PickupItem;                                        // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             InteractionFailureText;                            // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void InteractionFailureText__DelegateSignature(class AFortPickup* Param_Pickup);
	void ExecuteUbergraph_AthenaHUDMinusPickupItemWidget(int32 EntryPoint);
	void Construct();
	void InitializeItemData();
	void InitializeInteractionFailureText();
	void SetPickup(class AFortPickup* NewPickup);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaHUD-PickupItemWidget_C">();
	}
	static class UAthenaHUDMinusPickupItemWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaHUDMinusPickupItemWidget_C>();
	}
};
static_assert(alignof(UAthenaHUDMinusPickupItemWidget_C) == 0x000008, "Wrong alignment on UAthenaHUDMinusPickupItemWidget_C");
static_assert(sizeof(UAthenaHUDMinusPickupItemWidget_C) == 0x000290, "Wrong size on UAthenaHUDMinusPickupItemWidget_C");
static_assert(offsetof(UAthenaHUDMinusPickupItemWidget_C, UberGraphFrame) == 0x000258, "Member 'UAthenaHUDMinusPickupItemWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaHUDMinusPickupItemWidget_C, ItemDetailsHeader) == 0x000260, "Member 'UAthenaHUDMinusPickupItemWidget_C::ItemDetailsHeader' has a wrong offset!");
static_assert(offsetof(UAthenaHUDMinusPickupItemWidget_C, RetainerBox_0) == 0x000268, "Member 'UAthenaHUDMinusPickupItemWidget_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UAthenaHUDMinusPickupItemWidget_C, Pickup) == 0x000270, "Member 'UAthenaHUDMinusPickupItemWidget_C::Pickup' has a wrong offset!");
static_assert(offsetof(UAthenaHUDMinusPickupItemWidget_C, PickupItem) == 0x000278, "Member 'UAthenaHUDMinusPickupItemWidget_C::PickupItem' has a wrong offset!");
static_assert(offsetof(UAthenaHUDMinusPickupItemWidget_C, InteractionFailureText) == 0x000280, "Member 'UAthenaHUDMinusPickupItemWidget_C::InteractionFailureText' has a wrong offset!");

}
