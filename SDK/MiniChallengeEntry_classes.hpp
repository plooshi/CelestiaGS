#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MiniChallengeEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniChallengeEntry.MiniChallengeEntry_C
// 0x0108 (0x03D0 - 0x02C8)
class UMiniChallengeEntry_C final : public UAthenaMiniChallengeEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnDeltaProgressFilledToCompleteToast;              // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       TransientXPBoostedBurst;                           // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnCompleteRefreshToNew;                            // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnDeltaProgressFilledToComplete;                   // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnDeltaProgressFilled;                             // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                AnimBoundCompleteBorder;                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BoostGlow;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BoostGlowList;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BoostTriangles;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BoostTrianglesList;                                // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 burst;                                             // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ChallengeDescription;                              // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ChallengeProgressBar;                              // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CompleteCheck;                                     // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   CountText;                                         // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Ovr;                                 // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               IconSB;                                            // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ProgressBarSB;                                     // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               RewardOvr;                                         // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           RewardVB;                                          // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           RightSideInfoVB;                                   // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       XPAmountText;                                      // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       XPAmountTextList;                                  // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       XPText;                                            // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       XPTextList;                                        // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         LastKnownCount;                                    // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         GoalCount;                                         // 0x039C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AchivedCount;                                      // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NotificationDisplay;                               // 0x03A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AF2[0x3];                                     // 0x03A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             ToastFinished;                                     // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             TriggerXpToast;                                    // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          ProgressBarUpdated;                                // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ToastFinished__DelegateSignature();
	void TriggerXpToast__DelegateSignature();
	void ExecuteUbergraph_MiniChallengeEntry(int32 EntryPoint);
	void Play_Refresh_to_New();
	void Play_Complete();
	void Play_Fill_to_Complete_Post();
	void ResetProgressData();
	void UpdateQuestDescription(const class FText& Description);
	void SequenceEvent_0();
	void FadeToastAway();
	void OnToastFinished();
	void CompetionToast();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnDeltaProgressToCompleteFinished();
	void OnDeltaProgressFinished();
	void SetXpValue(int32 XpRewardValue);
	void TriggerNewQuestGranted();
	void UpdateProgressBar(int32 Param_LastKnownCount, int32 Param_AchivedCount, int32 Param_GoalCount);
	void QuestCompletedFinishFill();
	void StyleAsFirstTimeBoosted();
	void StyleAsNormal();
	void SequenceEvent__ENTRYPOINTMiniChallengeEntry_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniChallengeEntry_C">();
	}
	static class UMiniChallengeEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniChallengeEntry_C>();
	}
};
static_assert(alignof(UMiniChallengeEntry_C) == 0x000008, "Wrong alignment on UMiniChallengeEntry_C");
static_assert(sizeof(UMiniChallengeEntry_C) == 0x0003D0, "Wrong size on UMiniChallengeEntry_C");
static_assert(offsetof(UMiniChallengeEntry_C, UberGraphFrame) == 0x0002C8, "Member 'UMiniChallengeEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, OnDeltaProgressFilledToCompleteToast) == 0x0002D0, "Member 'UMiniChallengeEntry_C::OnDeltaProgressFilledToCompleteToast' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, TransientXPBoostedBurst) == 0x0002D8, "Member 'UMiniChallengeEntry_C::TransientXPBoostedBurst' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, OnCompleteRefreshToNew) == 0x0002E0, "Member 'UMiniChallengeEntry_C::OnCompleteRefreshToNew' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, OnDeltaProgressFilledToComplete) == 0x0002E8, "Member 'UMiniChallengeEntry_C::OnDeltaProgressFilledToComplete' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, OnDeltaProgressFilled) == 0x0002F0, "Member 'UMiniChallengeEntry_C::OnDeltaProgressFilled' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, AnimBoundCompleteBorder) == 0x0002F8, "Member 'UMiniChallengeEntry_C::AnimBoundCompleteBorder' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, BoostGlow) == 0x000300, "Member 'UMiniChallengeEntry_C::BoostGlow' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, BoostGlowList) == 0x000308, "Member 'UMiniChallengeEntry_C::BoostGlowList' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, BoostTriangles) == 0x000310, "Member 'UMiniChallengeEntry_C::BoostTriangles' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, BoostTrianglesList) == 0x000318, "Member 'UMiniChallengeEntry_C::BoostTrianglesList' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, burst) == 0x000320, "Member 'UMiniChallengeEntry_C::burst' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, ChallengeDescription) == 0x000328, "Member 'UMiniChallengeEntry_C::ChallengeDescription' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, ChallengeProgressBar) == 0x000330, "Member 'UMiniChallengeEntry_C::ChallengeProgressBar' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, CompleteCheck) == 0x000338, "Member 'UMiniChallengeEntry_C::CompleteCheck' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, CountText) == 0x000340, "Member 'UMiniChallengeEntry_C::CountText' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, HorizontalBox_Ovr) == 0x000348, "Member 'UMiniChallengeEntry_C::HorizontalBox_Ovr' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, IconSB) == 0x000350, "Member 'UMiniChallengeEntry_C::IconSB' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, ProgressBarSB) == 0x000358, "Member 'UMiniChallengeEntry_C::ProgressBarSB' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, RewardOvr) == 0x000360, "Member 'UMiniChallengeEntry_C::RewardOvr' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, RewardVB) == 0x000368, "Member 'UMiniChallengeEntry_C::RewardVB' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, RightSideInfoVB) == 0x000370, "Member 'UMiniChallengeEntry_C::RightSideInfoVB' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, XPAmountText) == 0x000378, "Member 'UMiniChallengeEntry_C::XPAmountText' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, XPAmountTextList) == 0x000380, "Member 'UMiniChallengeEntry_C::XPAmountTextList' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, XPText) == 0x000388, "Member 'UMiniChallengeEntry_C::XPText' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, XPTextList) == 0x000390, "Member 'UMiniChallengeEntry_C::XPTextList' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, LastKnownCount) == 0x000398, "Member 'UMiniChallengeEntry_C::LastKnownCount' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, GoalCount) == 0x00039C, "Member 'UMiniChallengeEntry_C::GoalCount' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, AchivedCount) == 0x0003A0, "Member 'UMiniChallengeEntry_C::AchivedCount' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, NotificationDisplay) == 0x0003A4, "Member 'UMiniChallengeEntry_C::NotificationDisplay' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, ToastFinished) == 0x0003A8, "Member 'UMiniChallengeEntry_C::ToastFinished' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, TriggerXpToast) == 0x0003B8, "Member 'UMiniChallengeEntry_C::TriggerXpToast' has a wrong offset!");
static_assert(offsetof(UMiniChallengeEntry_C, ProgressBarUpdated) == 0x0003C8, "Member 'UMiniChallengeEntry_C::ProgressBarUpdated' has a wrong offset!");

}

