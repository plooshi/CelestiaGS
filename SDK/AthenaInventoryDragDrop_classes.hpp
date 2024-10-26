#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaInventoryDragDrop

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "AthenaDragDropAction_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AthenaInventoryDragDrop.AthenaInventoryDragDrop_C
// 0x0008 (0x0090 - 0x0088)
class UAthenaInventoryDragDrop_C final : public UDragDropOperation
{
public:
	bool                                          SplitTheStack;                                     // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bIsFromCreativeInventory;                          // 0x0089(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_7A02[0x2];                                     // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InstigatorSlotIndex;                               // 0x008C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ShowDropIcon(EAthenaDragDropAction Drop_Action);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaInventoryDragDrop_C">();
	}
	static class UAthenaInventoryDragDrop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaInventoryDragDrop_C>();
	}
};
static_assert(alignof(UAthenaInventoryDragDrop_C) == 0x000008, "Wrong alignment on UAthenaInventoryDragDrop_C");
static_assert(sizeof(UAthenaInventoryDragDrop_C) == 0x000090, "Wrong size on UAthenaInventoryDragDrop_C");
static_assert(offsetof(UAthenaInventoryDragDrop_C, SplitTheStack) == 0x000088, "Member 'UAthenaInventoryDragDrop_C::SplitTheStack' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryDragDrop_C, bIsFromCreativeInventory) == 0x000089, "Member 'UAthenaInventoryDragDrop_C::bIsFromCreativeInventory' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryDragDrop_C, InstigatorSlotIndex) == 0x00008C, "Member 'UAthenaInventoryDragDrop_C::InstigatorSlotIndex' has a wrong offset!");

}

