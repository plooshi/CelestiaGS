#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaBroadcastHUDMenuStatusLayer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaBroadcastHUDMenuStatusLayer.AthenaBroadcastHUDMenuStatusLayer_C
// 0x0010 (0x02B8 - 0x02A8)
class UAthenaBroadcastHUDMenuStatusLayer_C final : public UAthenaBroadcastHUDMenuStatusLayerBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortActorCanvas*                       HUDMenuStatusCanvas;                               // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaBroadcastHUDMenuStatusLayer(int32 EntryPoint);
	void RemoveHUDMenuStatus(class UAthenaBroadcastHUDMenuStatusBase* HUDMenuStatusWidget);
	void AddHUDMenuStatus(class UAthenaBroadcastHUDMenuStatusBase* HUDMenuStatusWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaBroadcastHUDMenuStatusLayer_C">();
	}
	static class UAthenaBroadcastHUDMenuStatusLayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaBroadcastHUDMenuStatusLayer_C>();
	}
};
static_assert(alignof(UAthenaBroadcastHUDMenuStatusLayer_C) == 0x000008, "Wrong alignment on UAthenaBroadcastHUDMenuStatusLayer_C");
static_assert(sizeof(UAthenaBroadcastHUDMenuStatusLayer_C) == 0x0002B8, "Wrong size on UAthenaBroadcastHUDMenuStatusLayer_C");
static_assert(offsetof(UAthenaBroadcastHUDMenuStatusLayer_C, UberGraphFrame) == 0x0002A8, "Member 'UAthenaBroadcastHUDMenuStatusLayer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastHUDMenuStatusLayer_C, HUDMenuStatusCanvas) == 0x0002B0, "Member 'UAthenaBroadcastHUDMenuStatusLayer_C::HUDMenuStatusCanvas' has a wrong offset!");

}
