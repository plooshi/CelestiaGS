#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_SquadDirective

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Athena_SquadDirective.Athena_SquadDirective_C
// 0x00C8 (0x0378 - 0x02B0)
class UAthena_SquadDirective_C final : public UAthenaRebootChipDirective
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OutroAnim;                                         // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UpdateTime;                                        // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_IconType;                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ChipCarried;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ChipDropped;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_FXParticles;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Glow;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Reboot;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_RebootGlow;                                  // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   RichText_DisplayedMessage;                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Time;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EAthenaSquadListUpdateType                    CurrentDirective;                                  // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAthenaSquadListUpdateType                    PendingDirective;                                  // 0x0319(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F62[0x6];                                     // 0x031A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           OutroTimerHandle;                                  // 0x0320(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	EAthenaSquadListUpdateType                    Test;                                              // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F63[0x3];                                     // 0x0329(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ChipDespawnTime;                                   // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurDespawnTime;                                    // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F64[0x4];                                     // 0x0334(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           TimerCountdown;                                    // 0x0338(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                   CanResurrectText;                                  // 0x0340(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   FindResurrectChipText;                             // 0x0358(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWidgetAnimation*                       NewAnimation_1_0;                                  // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateCountdown();
	void Cleanup_Directive_State_Anim_Event();
	void EventIntro(EAthenaSquadListUpdateType UpdateType);
	void ExecutePendingDirective();
	void UpdateSquadListDisplay(EAthenaSquadListUpdateType UpdateType, class AFortPlayerStateAthena* PS);
	void Outro();
	void TestChipUI();
	void UpdateChipCountdown();
	void ExecuteUbergraph_Athena_SquadDirective(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_SquadDirective_C">();
	}
	static class UAthena_SquadDirective_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthena_SquadDirective_C>();
	}
};
static_assert(alignof(UAthena_SquadDirective_C) == 0x000008, "Wrong alignment on UAthena_SquadDirective_C");
static_assert(sizeof(UAthena_SquadDirective_C) == 0x000378, "Wrong size on UAthena_SquadDirective_C");
static_assert(offsetof(UAthena_SquadDirective_C, UberGraphFrame) == 0x0002B0, "Member 'UAthena_SquadDirective_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, OutroAnim) == 0x0002B8, "Member 'UAthena_SquadDirective_C::OutroAnim' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, UpdateTime) == 0x0002C0, "Member 'UAthena_SquadDirective_C::UpdateTime' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, Intro) == 0x0002C8, "Member 'UAthena_SquadDirective_C::Intro' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, CommonWidgetSwitcher_IconType) == 0x0002D0, "Member 'UAthena_SquadDirective_C::CommonWidgetSwitcher_IconType' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, Image_ChipCarried) == 0x0002D8, "Member 'UAthena_SquadDirective_C::Image_ChipCarried' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, Image_ChipDropped) == 0x0002E0, "Member 'UAthena_SquadDirective_C::Image_ChipDropped' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, Image_FXParticles) == 0x0002E8, "Member 'UAthena_SquadDirective_C::Image_FXParticles' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, Image_Glow) == 0x0002F0, "Member 'UAthena_SquadDirective_C::Image_Glow' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, Image_Reboot) == 0x0002F8, "Member 'UAthena_SquadDirective_C::Image_Reboot' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, Image_RebootGlow) == 0x000300, "Member 'UAthena_SquadDirective_C::Image_RebootGlow' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, RichText_DisplayedMessage) == 0x000308, "Member 'UAthena_SquadDirective_C::RichText_DisplayedMessage' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, Text_Time) == 0x000310, "Member 'UAthena_SquadDirective_C::Text_Time' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, CurrentDirective) == 0x000318, "Member 'UAthena_SquadDirective_C::CurrentDirective' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, PendingDirective) == 0x000319, "Member 'UAthena_SquadDirective_C::PendingDirective' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, OutroTimerHandle) == 0x000320, "Member 'UAthena_SquadDirective_C::OutroTimerHandle' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, Test) == 0x000328, "Member 'UAthena_SquadDirective_C::Test' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, ChipDespawnTime) == 0x00032C, "Member 'UAthena_SquadDirective_C::ChipDespawnTime' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, CurDespawnTime) == 0x000330, "Member 'UAthena_SquadDirective_C::CurDespawnTime' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, TimerCountdown) == 0x000338, "Member 'UAthena_SquadDirective_C::TimerCountdown' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, CanResurrectText) == 0x000340, "Member 'UAthena_SquadDirective_C::CanResurrectText' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, FindResurrectChipText) == 0x000358, "Member 'UAthena_SquadDirective_C::FindResurrectChipText' has a wrong offset!");
static_assert(offsetof(UAthena_SquadDirective_C, NewAnimation_1_0) == 0x000370, "Member 'UAthena_SquadDirective_C::NewAnimation_1_0' has a wrong offset!");

}
