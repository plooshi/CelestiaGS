#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventLeaderboardHeader

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventLeaderboardHeader.EventLeaderboardHeader_C
// 0x0018 (0x0628 - 0x0610)
class UEventLeaderboardHeader_C final : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0610(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                          CommonBorder_ScoringTitleBG;                       // 0x0618(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_RoundTitle;                                   // 0x0620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void RefreshDataBP();
	void ExecuteUbergraph_EventLeaderboardHeader(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventLeaderboardHeader_C">();
	}
	static class UEventLeaderboardHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventLeaderboardHeader_C>();
	}
};
static_assert(alignof(UEventLeaderboardHeader_C) == 0x000008, "Wrong alignment on UEventLeaderboardHeader_C");
static_assert(sizeof(UEventLeaderboardHeader_C) == 0x000628, "Wrong size on UEventLeaderboardHeader_C");
static_assert(offsetof(UEventLeaderboardHeader_C, UberGraphFrame) == 0x000610, "Member 'UEventLeaderboardHeader_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardHeader_C, CommonBorder_ScoringTitleBG) == 0x000618, "Member 'UEventLeaderboardHeader_C::CommonBorder_ScoringTitleBG' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardHeader_C, Text_RoundTitle) == 0x000620, "Member 'UEventLeaderboardHeader_C::Text_RoundTitle' has a wrong offset!");

}
