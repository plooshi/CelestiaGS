#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemAlterationsListDetailWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C
// 0x0010 (0x02C0 - 0x02B0)
class UItemAlterationsListDetailWidget_C final : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAlterationsWidget_C*                   AlterationsWidget;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetState(EFortAlterationWidgetState State);
	void HandlePostDifferentItemToDetailSet();
	void HandlePostDifferentItemToCompareWithSet();
	void ExecuteUbergraph_ItemAlterationsListDetailWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemAlterationsListDetailWidget_C">();
	}
	static class UItemAlterationsListDetailWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemAlterationsListDetailWidget_C>();
	}
};
static_assert(alignof(UItemAlterationsListDetailWidget_C) == 0x000008, "Wrong alignment on UItemAlterationsListDetailWidget_C");
static_assert(sizeof(UItemAlterationsListDetailWidget_C) == 0x0002C0, "Wrong size on UItemAlterationsListDetailWidget_C");
static_assert(offsetof(UItemAlterationsListDetailWidget_C, UberGraphFrame) == 0x0002B0, "Member 'UItemAlterationsListDetailWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemAlterationsListDetailWidget_C, AlterationsWidget) == 0x0002B8, "Member 'UItemAlterationsListDetailWidget_C::AlterationsWidget' has a wrong offset!");

}
