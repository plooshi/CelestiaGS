#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TimelineMarker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TimelineMarker.TimelineMarker_C
// 0x0030 (0x0C50 - 0x0C20)
class UTimelineMarker_C final : public UFortReplayTimelineMarker
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C20(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FSlateColor                            HoveredColor;                                      // 0x0C28(0x0028)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_TimelineMarker(int32 EntryPoint);
	void BP_OnUnhovered();
	void BP_OnHovered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TimelineMarker_C">();
	}
	static class UTimelineMarker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTimelineMarker_C>();
	}
};
static_assert(alignof(UTimelineMarker_C) == 0x000008, "Wrong alignment on UTimelineMarker_C");
static_assert(sizeof(UTimelineMarker_C) == 0x000C50, "Wrong size on UTimelineMarker_C");
static_assert(offsetof(UTimelineMarker_C, UberGraphFrame) == 0x000C20, "Member 'UTimelineMarker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTimelineMarker_C, HoveredColor) == 0x000C28, "Member 'UTimelineMarker_C::HoveredColor' has a wrong offset!");

}
