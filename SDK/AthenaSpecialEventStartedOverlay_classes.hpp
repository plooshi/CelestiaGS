#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSpecialEventStartedOverlay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaSpecialEventStartedOverlay.AthenaSpecialEventStartedOverlay_C
// 0x0050 (0x0338 - 0x02E8)
class UAthenaSpecialEventStartedOverlay_C final : public UAthenaSpecialEventStartedOverlay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro;                                             // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_BulletLeft;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BulletRight;                                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           MainBox;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Container;                                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortSimpleWidgetAnimationsPanel*       SimpleAnimations;                                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   IntroAnim;                                         // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FadeAnim;                                          // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimerHandle;                                       // 0x0330(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ClearActiveContent();
	void OnPrioitizedActivated();
	void OnPrioitizedFinished();
	void ExecuteUbergraph_AthenaSpecialEventStartedOverlay(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaSpecialEventStartedOverlay_C">();
	}
	static class UAthenaSpecialEventStartedOverlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaSpecialEventStartedOverlay_C>();
	}
};
static_assert(alignof(UAthenaSpecialEventStartedOverlay_C) == 0x000008, "Wrong alignment on UAthenaSpecialEventStartedOverlay_C");
static_assert(sizeof(UAthenaSpecialEventStartedOverlay_C) == 0x000338, "Wrong size on UAthenaSpecialEventStartedOverlay_C");
static_assert(offsetof(UAthenaSpecialEventStartedOverlay_C, UberGraphFrame) == 0x0002E8, "Member 'UAthenaSpecialEventStartedOverlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaSpecialEventStartedOverlay_C, Intro) == 0x0002F0, "Member 'UAthenaSpecialEventStartedOverlay_C::Intro' has a wrong offset!");
static_assert(offsetof(UAthenaSpecialEventStartedOverlay_C, Image_BulletLeft) == 0x0002F8, "Member 'UAthenaSpecialEventStartedOverlay_C::Image_BulletLeft' has a wrong offset!");
static_assert(offsetof(UAthenaSpecialEventStartedOverlay_C, Image_BulletRight) == 0x000300, "Member 'UAthenaSpecialEventStartedOverlay_C::Image_BulletRight' has a wrong offset!");
static_assert(offsetof(UAthenaSpecialEventStartedOverlay_C, MainBox) == 0x000308, "Member 'UAthenaSpecialEventStartedOverlay_C::MainBox' has a wrong offset!");
static_assert(offsetof(UAthenaSpecialEventStartedOverlay_C, Overlay_Container) == 0x000310, "Member 'UAthenaSpecialEventStartedOverlay_C::Overlay_Container' has a wrong offset!");
static_assert(offsetof(UAthenaSpecialEventStartedOverlay_C, SimpleAnimations) == 0x000318, "Member 'UAthenaSpecialEventStartedOverlay_C::SimpleAnimations' has a wrong offset!");
static_assert(offsetof(UAthenaSpecialEventStartedOverlay_C, IntroAnim) == 0x000320, "Member 'UAthenaSpecialEventStartedOverlay_C::IntroAnim' has a wrong offset!");
static_assert(offsetof(UAthenaSpecialEventStartedOverlay_C, FadeAnim) == 0x000328, "Member 'UAthenaSpecialEventStartedOverlay_C::FadeAnim' has a wrong offset!");
static_assert(offsetof(UAthenaSpecialEventStartedOverlay_C, TimerHandle) == 0x000330, "Member 'UAthenaSpecialEventStartedOverlay_C::TimerHandle' has a wrong offset!");

}
