#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaBroadcastHUDMenuStatus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaBroadcastHUDMenuStatus.AthenaBroadcastHUDMenuStatus_C
// 0x0028 (0x0300 - 0x02D8)
class UAthenaBroadcastHUDMenuStatus_C final : public UAthenaBroadcastHUDMenuStatusBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                          Background;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             MapIcon;                                           // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             InventoryIcon;                                     // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaBroadcastHUDMenuStatus(int32 EntryPoint);
	void MapActivated();
	void InventoryActivated();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaBroadcastHUDMenuStatus_C">();
	}
	static class UAthenaBroadcastHUDMenuStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaBroadcastHUDMenuStatus_C>();
	}
};
static_assert(alignof(UAthenaBroadcastHUDMenuStatus_C) == 0x000008, "Wrong alignment on UAthenaBroadcastHUDMenuStatus_C");
static_assert(sizeof(UAthenaBroadcastHUDMenuStatus_C) == 0x000300, "Wrong size on UAthenaBroadcastHUDMenuStatus_C");
static_assert(offsetof(UAthenaBroadcastHUDMenuStatus_C, UberGraphFrame) == 0x0002D8, "Member 'UAthenaBroadcastHUDMenuStatus_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastHUDMenuStatus_C, Background) == 0x0002E0, "Member 'UAthenaBroadcastHUDMenuStatus_C::Background' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastHUDMenuStatus_C, Image_0) == 0x0002E8, "Member 'UAthenaBroadcastHUDMenuStatus_C::Image_0' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastHUDMenuStatus_C, MapIcon) == 0x0002F0, "Member 'UAthenaBroadcastHUDMenuStatus_C::MapIcon' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastHUDMenuStatus_C, InventoryIcon) == 0x0002F8, "Member 'UAthenaBroadcastHUDMenuStatus_C::InventoryIcon' has a wrong offset!");

}

