#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaBroadcastFollowedPlayerInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaBroadcastFollowedPlayerInfo.AthenaBroadcastFollowedPlayerInfo_C
// 0x0018 (0x02D8 - 0x02C0)
class UAthenaBroadcastFollowedPlayerInfo_C final : public UAthenaBroadcastFollowedPlayerInfoBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                               LoadoutSB;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               VehicleHealthSB;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaBroadcastFollowedPlayerInfo(int32 EntryPoint);
	void OnPipModeChanged(bool bPipModeEnabled);
	void OnEliminatedStateChanged(class UAthenaRemotePlayerViewData* PlayerData, bool bIsEliminated);
	void OnVehicleStateChanged(class AActor* NewVehicle, class AActor* OldVehicle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaBroadcastFollowedPlayerInfo_C">();
	}
	static class UAthenaBroadcastFollowedPlayerInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaBroadcastFollowedPlayerInfo_C>();
	}
};
static_assert(alignof(UAthenaBroadcastFollowedPlayerInfo_C) == 0x000008, "Wrong alignment on UAthenaBroadcastFollowedPlayerInfo_C");
static_assert(sizeof(UAthenaBroadcastFollowedPlayerInfo_C) == 0x0002D8, "Wrong size on UAthenaBroadcastFollowedPlayerInfo_C");
static_assert(offsetof(UAthenaBroadcastFollowedPlayerInfo_C, UberGraphFrame) == 0x0002C0, "Member 'UAthenaBroadcastFollowedPlayerInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastFollowedPlayerInfo_C, LoadoutSB) == 0x0002C8, "Member 'UAthenaBroadcastFollowedPlayerInfo_C::LoadoutSB' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastFollowedPlayerInfo_C, VehicleHealthSB) == 0x0002D0, "Member 'UAthenaBroadcastFollowedPlayerInfo_C::VehicleHealthSB' has a wrong offset!");

}

