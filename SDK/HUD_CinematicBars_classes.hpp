#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_CinematicBars

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HUD_CinematicBars.HUD_CinematicBars_C
// 0x0048 (0x0278 - 0x0230)
class UHUD_CinematicBars_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       BGBlur;                                            // 0x0238(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0240(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_bottombar;                                   // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_topbar;                                      // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Container;                                 // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone;                                          // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_194;                                      // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsBlurred;                                         // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_HUD_CinematicBars(int32 EntryPoint);
	void EventToggleBlur();
	void EventIntro();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUD_CinematicBars_C">();
	}
	static class UHUD_CinematicBars_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUD_CinematicBars_C>();
	}
};
static_assert(alignof(UHUD_CinematicBars_C) == 0x000008, "Wrong alignment on UHUD_CinematicBars_C");
static_assert(sizeof(UHUD_CinematicBars_C) == 0x000278, "Wrong size on UHUD_CinematicBars_C");
static_assert(offsetof(UHUD_CinematicBars_C, UberGraphFrame) == 0x000230, "Member 'UHUD_CinematicBars_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHUD_CinematicBars_C, BGBlur) == 0x000238, "Member 'UHUD_CinematicBars_C::BGBlur' has a wrong offset!");
static_assert(offsetof(UHUD_CinematicBars_C, Intro) == 0x000240, "Member 'UHUD_CinematicBars_C::Intro' has a wrong offset!");
static_assert(offsetof(UHUD_CinematicBars_C, Image_bottombar) == 0x000248, "Member 'UHUD_CinematicBars_C::Image_bottombar' has a wrong offset!");
static_assert(offsetof(UHUD_CinematicBars_C, Image_topbar) == 0x000250, "Member 'UHUD_CinematicBars_C::Image_topbar' has a wrong offset!");
static_assert(offsetof(UHUD_CinematicBars_C, Overlay_Container) == 0x000258, "Member 'UHUD_CinematicBars_C::Overlay_Container' has a wrong offset!");
static_assert(offsetof(UHUD_CinematicBars_C, SafeZone) == 0x000260, "Member 'UHUD_CinematicBars_C::SafeZone' has a wrong offset!");
static_assert(offsetof(UHUD_CinematicBars_C, SafeZone_194) == 0x000268, "Member 'UHUD_CinematicBars_C::SafeZone_194' has a wrong offset!");
static_assert(offsetof(UHUD_CinematicBars_C, IsBlurred) == 0x000270, "Member 'UHUD_CinematicBars_C::IsBlurred' has a wrong offset!");

}

