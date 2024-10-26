#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaEventMatchScoreboardScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C
// 0x0038 (0x04D8 - 0x04A0)
class UAthenaEventMatchScoreboardScreen_C final : public UAthenaEventMatchScoreboardScreenBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                               EliminationsSB;                                    // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               HealthSB;                                          // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               MaterialsSB;                                       // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PlaceSB;                                           // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PlayerNameSB;                                      // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SquadIdSB;                                         // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaEventMatchScoreboardScreen(int32 EntryPoint);
	void SetSquadIdsVisible_BP(bool bSquadIdsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaEventMatchScoreboardScreen_C">();
	}
	static class UAthenaEventMatchScoreboardScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaEventMatchScoreboardScreen_C>();
	}
};
static_assert(alignof(UAthenaEventMatchScoreboardScreen_C) == 0x000008, "Wrong alignment on UAthenaEventMatchScoreboardScreen_C");
static_assert(sizeof(UAthenaEventMatchScoreboardScreen_C) == 0x0004D8, "Wrong size on UAthenaEventMatchScoreboardScreen_C");
static_assert(offsetof(UAthenaEventMatchScoreboardScreen_C, UberGraphFrame) == 0x0004A0, "Member 'UAthenaEventMatchScoreboardScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaEventMatchScoreboardScreen_C, EliminationsSB) == 0x0004A8, "Member 'UAthenaEventMatchScoreboardScreen_C::EliminationsSB' has a wrong offset!");
static_assert(offsetof(UAthenaEventMatchScoreboardScreen_C, HealthSB) == 0x0004B0, "Member 'UAthenaEventMatchScoreboardScreen_C::HealthSB' has a wrong offset!");
static_assert(offsetof(UAthenaEventMatchScoreboardScreen_C, MaterialsSB) == 0x0004B8, "Member 'UAthenaEventMatchScoreboardScreen_C::MaterialsSB' has a wrong offset!");
static_assert(offsetof(UAthenaEventMatchScoreboardScreen_C, PlaceSB) == 0x0004C0, "Member 'UAthenaEventMatchScoreboardScreen_C::PlaceSB' has a wrong offset!");
static_assert(offsetof(UAthenaEventMatchScoreboardScreen_C, PlayerNameSB) == 0x0004C8, "Member 'UAthenaEventMatchScoreboardScreen_C::PlayerNameSB' has a wrong offset!");
static_assert(offsetof(UAthenaEventMatchScoreboardScreen_C, SquadIdSB) == 0x0004D0, "Member 'UAthenaEventMatchScoreboardScreen_C::SquadIdSB' has a wrong offset!");

}

