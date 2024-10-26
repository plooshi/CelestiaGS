#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAPPHUD_Radio

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GAPPHUD_Radio.GAPPHUD_Radio_C
// 0x0100 (0x0358 - 0x0258)
class UGAPPHUD_Radio_C final : public UAthenaWinnerDialogCN
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Countdown;                                         // 0x0260(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AngryStyle;                                        // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       TalkAnim;                                          // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Delay;                                             // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Outro;                                             // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 button_bg;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 button_bg_1;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Contiue;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Esc;                                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Radio;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Container;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Dialog;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_timer;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichTextBlock_Message;                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                Time_remaining;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Timer_bg;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          CanStartMessage;                                   // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_704E[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAthenaGameMessageData>         QueuedMessages;                                    // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FAthenaGameMessageData                 QueuedMsg;                                         // 0x0300(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UCommonTextBlock*                       NewVar_0;                                          // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Time;                                              // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Current_Time;                                      // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enable_keyinput;                                   // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void HUDToggle(bool Hide);
	void Construct();
	void Update_Timer();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnOpenMessage();
	void OutroComplete();
	void ExecuteUbergraph_GAPPHUD_Radio(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAPPHUD_Radio_C">();
	}
	static class UGAPPHUD_Radio_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAPPHUD_Radio_C>();
	}
};
static_assert(alignof(UGAPPHUD_Radio_C) == 0x000008, "Wrong alignment on UGAPPHUD_Radio_C");
static_assert(sizeof(UGAPPHUD_Radio_C) == 0x000358, "Wrong size on UGAPPHUD_Radio_C");
static_assert(offsetof(UGAPPHUD_Radio_C, UberGraphFrame) == 0x000258, "Member 'UGAPPHUD_Radio_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAPPHUD_Radio_C, Countdown) == 0x000260, "Member 'UGAPPHUD_Radio_C::Countdown' has a wrong offset!");
static_assert(offsetof(UGAPPHUD_Radio_C, AngryStyle) == 0x000268, "Member 'UGAPPHUD_Radio_C::AngryStyle' has a wrong offset!");
static_assert(offsetof(UGAPPHUD_Radio_C, TalkAnim) == 0x000270, "Member 'UGAPPHUD_Radio_C::TalkAnim' has a wrong offset!");
static_assert(offsetof(UGAPPHUD_Radio_C, Delay) == 0x000278, "Member 'UGAPPHUD_Radio_C::Delay' has a wrong offset!");
static_assert(offsetof(UGAPPHUD_Radio_C, Outro) == 0x000280, "Member 'UGAPPHUD_Radio_C::Outro' has a wrong offset!");
static_assert(offsetof(UGAPPHUD_Radio_C, Intro) == 0x000288, "Member 'UGAPPHUD_Radio_C::Intro' has a wrong offset!");
static_assert(offsetof(UGAPPHUD_Radio_C, button_bg) == 0x000290, "Member 'UGAPPHUD_Radio_C::button_bg' has a wrong offset!");
static_assert(offsetof(UGAPPHUD_Radio_C, button_bg_1) == 0x000298, "Member 'UGAPPHUD_Radio_C::button_bg_1' has a wrong offset!");
static_assert(offsetof(UGAPPHUD_Radio_C, Contiue) == 0x0002A0, "Member 'UGAPPHUD_Radio_C::Contiue' has a wrong offset!");
static_assert(offsetof(UGAPPHUD_Radio_C, Esc) == 0x0002A8, "Member 'UGAPPHUD_Radio_C::Esc' has a wrong offset!");
static_assert(offsetof(UGAPPHUD_Radio_C, Image_Radio) == 0x0002B0, "Member 'UGAPPHUD_Radio_C::Image_Radio' has a wrong offset!");
static_assert(offsetof(UGAPPHUD_Radio_C, Overlay_Container) == 0x0002B8, "Member 'UGAPPHUD_Radio_C::Overlay_Container' has a wrong offset!");
static_assert(offsetof(UGAPPHUD_Radio_C, Overlay_Dialog) == 0x0002C0, "Member 'UGAPPHUD_Radio_C::Overlay_Dialog' has a wrong offset!");
static_assert(offsetof(UGAPPHUD_Radio_C, Overlay_timer) == 0x0002C8, "Member 'UGAPPHUD_Radio_C::Overlay_timer' has a wrong offset!");
static_assert(offsetof(UGAPPHUD_Radio_C, RichTextBlock_Message) == 0x0002D0, "Member 'UGAPPHUD_Radio_C::RichTextBlock_Message' has a wrong offset!");
static_assert(offsetof(UGAPPHUD_Radio_C, Time_remaining) == 0x0002D8, "Member 'UGAPPHUD_Radio_C::Time_remaining' has a wrong offset!");
static_assert(offsetof(UGAPPHUD_Radio_C, Timer_bg) == 0x0002E0, "Member 'UGAPPHUD_Radio_C::Timer_bg' has a wrong offset!");
static_assert(offsetof(UGAPPHUD_Radio_C, CanStartMessage) == 0x0002E8, "Member 'UGAPPHUD_Radio_C::CanStartMessage' has a wrong offset!");
static_assert(offsetof(UGAPPHUD_Radio_C, QueuedMessages) == 0x0002F0, "Member 'UGAPPHUD_Radio_C::QueuedMessages' has a wrong offset!");
static_assert(offsetof(UGAPPHUD_Radio_C, QueuedMsg) == 0x000300, "Member 'UGAPPHUD_Radio_C::QueuedMsg' has a wrong offset!");
static_assert(offsetof(UGAPPHUD_Radio_C, NewVar_0) == 0x000340, "Member 'UGAPPHUD_Radio_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UGAPPHUD_Radio_C, Time) == 0x000348, "Member 'UGAPPHUD_Radio_C::Time' has a wrong offset!");
static_assert(offsetof(UGAPPHUD_Radio_C, Current_Time) == 0x00034C, "Member 'UGAPPHUD_Radio_C::Current_Time' has a wrong offset!");
static_assert(offsetof(UGAPPHUD_Radio_C, Enable_keyinput) == 0x000350, "Member 'UGAPPHUD_Radio_C::Enable_keyinput' has a wrong offset!");

}

