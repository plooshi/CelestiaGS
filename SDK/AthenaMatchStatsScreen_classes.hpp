#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaMatchStatsScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaMatchStatsScreen.AthenaMatchStatsScreen_C
// 0x0018 (0x0460 - 0x0448)
class UAthenaMatchStatsScreen_C final : public UFortMatchStatsScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0448(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaMatchStatsPartial_C*             AthenaMatchStatsPartial;                           // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          BorderTouchZone;                                   // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaMatchStatsScreen(int32 EntryPoint);
	void EventUpdateStats();
	void Construct();
	void BP_OnActivated();
	void RegisterBack();
	void HandleBack(bool* PassThrough);
	void InputSetup();
	void InputRefresh();
	struct FEventReply On_BorderTouchZone_MouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMatchStatsScreen_C">();
	}
	static class UAthenaMatchStatsScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMatchStatsScreen_C>();
	}
};
static_assert(alignof(UAthenaMatchStatsScreen_C) == 0x000008, "Wrong alignment on UAthenaMatchStatsScreen_C");
static_assert(sizeof(UAthenaMatchStatsScreen_C) == 0x000460, "Wrong size on UAthenaMatchStatsScreen_C");
static_assert(offsetof(UAthenaMatchStatsScreen_C, UberGraphFrame) == 0x000448, "Member 'UAthenaMatchStatsScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaMatchStatsScreen_C, AthenaMatchStatsPartial) == 0x000450, "Member 'UAthenaMatchStatsScreen_C::AthenaMatchStatsPartial' has a wrong offset!");
static_assert(offsetof(UAthenaMatchStatsScreen_C, BorderTouchZone) == 0x000458, "Member 'UAthenaMatchStatsScreen_C::BorderTouchZone' has a wrong offset!");

}
