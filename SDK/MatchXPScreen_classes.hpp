#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MatchXPScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MatchXPScreen.MatchXPScreen_C
// 0x0028 (0x0430 - 0x0408)
class UMatchXPScreen_C final : public UAthenaMatchXPScreenWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               BottomBarOverlay;                                  // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Stats;                                        // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_XP;                                           // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               StayTogetherContainer;                             // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MatchXPScreen(int32 EntryPoint);
	void SetStatButtonText(const class FText& InText);
	void OnToggleDetailsRecap();
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MatchXPScreen_C">();
	}
	static class UMatchXPScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMatchXPScreen_C>();
	}
};
static_assert(alignof(UMatchXPScreen_C) == 0x000008, "Wrong alignment on UMatchXPScreen_C");
static_assert(sizeof(UMatchXPScreen_C) == 0x000430, "Wrong size on UMatchXPScreen_C");
static_assert(offsetof(UMatchXPScreen_C, UberGraphFrame) == 0x000408, "Member 'UMatchXPScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMatchXPScreen_C, BottomBarOverlay) == 0x000410, "Member 'UMatchXPScreen_C::BottomBarOverlay' has a wrong offset!");
static_assert(offsetof(UMatchXPScreen_C, Icon_Stats) == 0x000418, "Member 'UMatchXPScreen_C::Icon_Stats' has a wrong offset!");
static_assert(offsetof(UMatchXPScreen_C, Icon_XP) == 0x000420, "Member 'UMatchXPScreen_C::Icon_XP' has a wrong offset!");
static_assert(offsetof(UMatchXPScreen_C, StayTogetherContainer) == 0x000428, "Member 'UMatchXPScreen_C::StayTogetherContainer' has a wrong offset!");

}
