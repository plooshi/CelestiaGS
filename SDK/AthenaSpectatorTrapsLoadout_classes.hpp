#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSpectatorTrapsLoadout

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaSpectatorTrapsLoadout.AthenaSpectatorTrapsLoadout_C
// 0x0038 (0x02E0 - 0x02A8)
class UAthenaSpectatorTrapsLoadout_C final : public UAthenaSpectatorTrapsLoadoutBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaSpectatorInventorySlot_C*        Slot1;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSpectatorInventorySlot_C*        Slot2;                                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSpectatorInventorySlot_C*        Slot3;                                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSpectatorInventorySlot_C*        Slot4;                                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSpectatorInventorySlot_C*        Slot5;                                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSpectatorInventorySlot_C*        Slot6;                                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaSpectatorTrapsLoadout(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaSpectatorTrapsLoadout_C">();
	}
	static class UAthenaSpectatorTrapsLoadout_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaSpectatorTrapsLoadout_C>();
	}
};
static_assert(alignof(UAthenaSpectatorTrapsLoadout_C) == 0x000008, "Wrong alignment on UAthenaSpectatorTrapsLoadout_C");
static_assert(sizeof(UAthenaSpectatorTrapsLoadout_C) == 0x0002E0, "Wrong size on UAthenaSpectatorTrapsLoadout_C");
static_assert(offsetof(UAthenaSpectatorTrapsLoadout_C, UberGraphFrame) == 0x0002A8, "Member 'UAthenaSpectatorTrapsLoadout_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorTrapsLoadout_C, Slot1) == 0x0002B0, "Member 'UAthenaSpectatorTrapsLoadout_C::Slot1' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorTrapsLoadout_C, Slot2) == 0x0002B8, "Member 'UAthenaSpectatorTrapsLoadout_C::Slot2' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorTrapsLoadout_C, Slot3) == 0x0002C0, "Member 'UAthenaSpectatorTrapsLoadout_C::Slot3' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorTrapsLoadout_C, Slot4) == 0x0002C8, "Member 'UAthenaSpectatorTrapsLoadout_C::Slot4' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorTrapsLoadout_C, Slot5) == 0x0002D0, "Member 'UAthenaSpectatorTrapsLoadout_C::Slot5' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorTrapsLoadout_C, Slot6) == 0x0002D8, "Member 'UAthenaSpectatorTrapsLoadout_C::Slot6' has a wrong offset!");

}
