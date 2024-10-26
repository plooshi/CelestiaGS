#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestNotification

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestNotification.QuestNotification_C
// 0x0098 (0x0368 - 0x02D0)
class UQuestNotification_C final : public UFortNotificationEntry_Quest
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Outro;                                             // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ResetQuestComplete;                                // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       QuestComplete;                                     // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FillProgress;                                      // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                          BorderXPBar;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Check;                                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GreenFill;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLazyImage*                         IconMinusMission;                                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Glow;                                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Spark;                                       // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          MissionMinusHeader;                                // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProgressFill;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProgressFill_Current;                              // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Missions;                                  // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   Text_AssistBlock;                                  // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextMissionType;                                   // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_MissionHeader;                                 // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateProgress();
	void Construct();
	void StartNotificationIntro();
	void StartNotificationOutro();
	void PreConstruct(bool IsDesignTime);
	void UpdateQuestVisuals(const struct FFortChallengeSetStyle& DisplayStyle);
	void UpdateDefaultObjectiveVisuals();
	void OnInitialized();
	void EventFillComplete();
	void EventCompleteAnim();
	void EventReset();
	void SetAssistData(bool bWasAssisted, const class FString& OtherPlayersName);
	void ExecuteUbergraph_QuestNotification(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestNotification_C">();
	}
	static class UQuestNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestNotification_C>();
	}
};
static_assert(alignof(UQuestNotification_C) == 0x000008, "Wrong alignment on UQuestNotification_C");
static_assert(sizeof(UQuestNotification_C) == 0x000368, "Wrong size on UQuestNotification_C");
static_assert(offsetof(UQuestNotification_C, UberGraphFrame) == 0x0002D0, "Member 'UQuestNotification_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, Outro) == 0x0002D8, "Member 'UQuestNotification_C::Outro' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, Intro) == 0x0002E0, "Member 'UQuestNotification_C::Intro' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, ResetQuestComplete) == 0x0002E8, "Member 'UQuestNotification_C::ResetQuestComplete' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, QuestComplete) == 0x0002F0, "Member 'UQuestNotification_C::QuestComplete' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, FillProgress) == 0x0002F8, "Member 'UQuestNotification_C::FillProgress' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, BorderXPBar) == 0x000300, "Member 'UQuestNotification_C::BorderXPBar' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, Check) == 0x000308, "Member 'UQuestNotification_C::Check' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, GreenFill) == 0x000310, "Member 'UQuestNotification_C::GreenFill' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, IconMinusMission) == 0x000318, "Member 'UQuestNotification_C::IconMinusMission' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, Image_Glow) == 0x000320, "Member 'UQuestNotification_C::Image_Glow' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, Image_Spark) == 0x000328, "Member 'UQuestNotification_C::Image_Spark' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, MissionMinusHeader) == 0x000330, "Member 'UQuestNotification_C::MissionMinusHeader' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, ProgressFill) == 0x000338, "Member 'UQuestNotification_C::ProgressFill' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, ProgressFill_Current) == 0x000340, "Member 'UQuestNotification_C::ProgressFill_Current' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, SizeBox_Missions) == 0x000348, "Member 'UQuestNotification_C::SizeBox_Missions' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, Text_AssistBlock) == 0x000350, "Member 'UQuestNotification_C::Text_AssistBlock' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, TextMissionType) == 0x000358, "Member 'UQuestNotification_C::TextMissionType' has a wrong offset!");
static_assert(offsetof(UQuestNotification_C, MID_MissionHeader) == 0x000360, "Member 'UQuestNotification_C::MID_MissionHeader' has a wrong offset!");

}

