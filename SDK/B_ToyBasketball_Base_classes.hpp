#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ToyBasketball_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "B_PlayerSpawnedBall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_ToyBasketball_Base.B_ToyBasketball_Base_C
// 0x0058 (0x0970 - 0x0918)
class AB_ToyBasketball_Base_C final : public AB_PlayerSpawnedBall_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_ToyBasketball_Base_C;             // 0x0918(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_Emote_BasketBall_Trail;                          // 0x0920(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         LerpIntoGoalTimeline_Scale_7364CBE944F21B3066D27EBD324A1DA9; // 0x0928(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LerpIntoGoalTimeline_Position_7364CBE944F21B3066D27EBD324A1DA9; // 0x092C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            LerpIntoGoalTimeline__Direction_7364CBE944F21B3066D27EBD324A1DA9; // 0x0930(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84BA[0x7];                                     // 0x0931(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     LerpIntoGoalTimeline;                              // 0x0938(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                   CuesForScoreValues;                                // 0x0940(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         BallSerialNumber;                                  // 0x0950(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                IdealLerpStartPos;                                 // 0x0954(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                IdealLerpEndPos;                                   // 0x0960(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                         LerpDuration;                                      // 0x096C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_ToyBasketball_Base(int32 EntryPoint);
	void PlayScoringAnim();
	void InitializeToyInstance(class AFortPlayerController* OwningPC, int32 NumTimesSummoned);
	void LerpIntoGoalTimeline__UpdateFunc();
	void LerpIntoGoalTimeline__FinishedFunc();
	void PlayScoringCueAndDestruct(int32 ScoreAmount, const struct FVector& TargetStartPos, const struct FVector& TargetEndPos);
	void OnRep_IdealLerpEndPos();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_ToyBasketball_Base_C">();
	}
	static class AB_ToyBasketball_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_ToyBasketball_Base_C>();
	}
};
static_assert(alignof(AB_ToyBasketball_Base_C) == 0x000008, "Wrong alignment on AB_ToyBasketball_Base_C");
static_assert(sizeof(AB_ToyBasketball_Base_C) == 0x000970, "Wrong size on AB_ToyBasketball_Base_C");
static_assert(offsetof(AB_ToyBasketball_Base_C, UberGraphFrame_B_ToyBasketball_Base_C) == 0x000918, "Member 'AB_ToyBasketball_Base_C::UberGraphFrame_B_ToyBasketball_Base_C' has a wrong offset!");
static_assert(offsetof(AB_ToyBasketball_Base_C, P_Emote_BasketBall_Trail) == 0x000920, "Member 'AB_ToyBasketball_Base_C::P_Emote_BasketBall_Trail' has a wrong offset!");
static_assert(offsetof(AB_ToyBasketball_Base_C, LerpIntoGoalTimeline_Scale_7364CBE944F21B3066D27EBD324A1DA9) == 0x000928, "Member 'AB_ToyBasketball_Base_C::LerpIntoGoalTimeline_Scale_7364CBE944F21B3066D27EBD324A1DA9' has a wrong offset!");
static_assert(offsetof(AB_ToyBasketball_Base_C, LerpIntoGoalTimeline_Position_7364CBE944F21B3066D27EBD324A1DA9) == 0x00092C, "Member 'AB_ToyBasketball_Base_C::LerpIntoGoalTimeline_Position_7364CBE944F21B3066D27EBD324A1DA9' has a wrong offset!");
static_assert(offsetof(AB_ToyBasketball_Base_C, LerpIntoGoalTimeline__Direction_7364CBE944F21B3066D27EBD324A1DA9) == 0x000930, "Member 'AB_ToyBasketball_Base_C::LerpIntoGoalTimeline__Direction_7364CBE944F21B3066D27EBD324A1DA9' has a wrong offset!");
static_assert(offsetof(AB_ToyBasketball_Base_C, LerpIntoGoalTimeline) == 0x000938, "Member 'AB_ToyBasketball_Base_C::LerpIntoGoalTimeline' has a wrong offset!");
static_assert(offsetof(AB_ToyBasketball_Base_C, CuesForScoreValues) == 0x000940, "Member 'AB_ToyBasketball_Base_C::CuesForScoreValues' has a wrong offset!");
static_assert(offsetof(AB_ToyBasketball_Base_C, BallSerialNumber) == 0x000950, "Member 'AB_ToyBasketball_Base_C::BallSerialNumber' has a wrong offset!");
static_assert(offsetof(AB_ToyBasketball_Base_C, IdealLerpStartPos) == 0x000954, "Member 'AB_ToyBasketball_Base_C::IdealLerpStartPos' has a wrong offset!");
static_assert(offsetof(AB_ToyBasketball_Base_C, IdealLerpEndPos) == 0x000960, "Member 'AB_ToyBasketball_Base_C::IdealLerpEndPos' has a wrong offset!");
static_assert(offsetof(AB_ToyBasketball_Base_C, LerpDuration) == 0x00096C, "Member 'AB_ToyBasketball_Base_C::LerpDuration' has a wrong offset!");

}
