#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaPickupMessageItem

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaPickupMessageItem.AthenaPickupMessageItem_C
// 0x0030 (0x0260 - 0x0230)
class UAthenaPickupMessageItem_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       Outro;                                             // 0x0230(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0238(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UItemStackCounter_C*                    _Stack_Counter__Count;                             // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Glow;                                        // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemIcon;                                          // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                              Picked_Up_Item;                                    // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Setup(TSoftObjectPtr<class UTexture2D> Icon, int32 Count);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaPickupMessageItem_C">();
	}
	static class UAthenaPickupMessageItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaPickupMessageItem_C>();
	}
};
static_assert(alignof(UAthenaPickupMessageItem_C) == 0x000008, "Wrong alignment on UAthenaPickupMessageItem_C");
static_assert(sizeof(UAthenaPickupMessageItem_C) == 0x000260, "Wrong size on UAthenaPickupMessageItem_C");
static_assert(offsetof(UAthenaPickupMessageItem_C, Outro) == 0x000230, "Member 'UAthenaPickupMessageItem_C::Outro' has a wrong offset!");
static_assert(offsetof(UAthenaPickupMessageItem_C, Intro) == 0x000238, "Member 'UAthenaPickupMessageItem_C::Intro' has a wrong offset!");
static_assert(offsetof(UAthenaPickupMessageItem_C, _Stack_Counter__Count) == 0x000240, "Member 'UAthenaPickupMessageItem_C::_Stack_Counter__Count' has a wrong offset!");
static_assert(offsetof(UAthenaPickupMessageItem_C, Image_Glow) == 0x000248, "Member 'UAthenaPickupMessageItem_C::Image_Glow' has a wrong offset!");
static_assert(offsetof(UAthenaPickupMessageItem_C, ItemIcon) == 0x000250, "Member 'UAthenaPickupMessageItem_C::ItemIcon' has a wrong offset!");
static_assert(offsetof(UAthenaPickupMessageItem_C, Picked_Up_Item) == 0x000258, "Member 'UAthenaPickupMessageItem_C::Picked_Up_Item' has a wrong offset!");

}
