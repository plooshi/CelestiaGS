#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Sentry_Targeting

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_Sentry_Targeting.GA_Athena_Sentry_Targeting_C
// 0x0060 (0x0AD8 - 0x0A78)
class UGA_Athena_Sentry_Targeting_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABGA_Athena_Sentry_Parent_C*            SelfSentryRef;                                     // 0x0A80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LostTarget;                                        // 0x0A88(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_713A[0x3];                                     // 0x0A89(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SpyLTMPlaylist;                                    // 0x0A8C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SpyLTM;                                            // 0x0A94(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortTeam                                     SpyLTMDefenderTeam;                                // 0x0A98(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_713B[0x7];                                     // 0x0A99(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  TC_DefaultIgnoreTags;                              // 0x0AA0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         ConeRadius;                                        // 0x0AC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ConeDistance;                                      // 0x0AC4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseLos;                                            // 0x0AC8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_713C[0x3];                                     // 0x0AC9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FColor                                 NewVar_0;                                          // 0x0ACC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 NewVar_1;                                          // 0x0AD0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 NewVar_2;                                          // 0x0AD4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_Sentry_Targeting(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	bool CanTarget(class AFortPawn* Target);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Sentry_Targeting_C">();
	}
	static class UGA_Athena_Sentry_Targeting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Sentry_Targeting_C>();
	}
};
static_assert(alignof(UGA_Athena_Sentry_Targeting_C) == 0x000008, "Wrong alignment on UGA_Athena_Sentry_Targeting_C");
static_assert(sizeof(UGA_Athena_Sentry_Targeting_C) == 0x000AD8, "Wrong size on UGA_Athena_Sentry_Targeting_C");
static_assert(offsetof(UGA_Athena_Sentry_Targeting_C, UberGraphFrame) == 0x000A78, "Member 'UGA_Athena_Sentry_Targeting_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Sentry_Targeting_C, SelfSentryRef) == 0x000A80, "Member 'UGA_Athena_Sentry_Targeting_C::SelfSentryRef' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Sentry_Targeting_C, LostTarget) == 0x000A88, "Member 'UGA_Athena_Sentry_Targeting_C::LostTarget' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Sentry_Targeting_C, SpyLTMPlaylist) == 0x000A8C, "Member 'UGA_Athena_Sentry_Targeting_C::SpyLTMPlaylist' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Sentry_Targeting_C, SpyLTM) == 0x000A94, "Member 'UGA_Athena_Sentry_Targeting_C::SpyLTM' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Sentry_Targeting_C, SpyLTMDefenderTeam) == 0x000A98, "Member 'UGA_Athena_Sentry_Targeting_C::SpyLTMDefenderTeam' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Sentry_Targeting_C, TC_DefaultIgnoreTags) == 0x000AA0, "Member 'UGA_Athena_Sentry_Targeting_C::TC_DefaultIgnoreTags' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Sentry_Targeting_C, ConeRadius) == 0x000AC0, "Member 'UGA_Athena_Sentry_Targeting_C::ConeRadius' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Sentry_Targeting_C, ConeDistance) == 0x000AC4, "Member 'UGA_Athena_Sentry_Targeting_C::ConeDistance' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Sentry_Targeting_C, UseLos) == 0x000AC8, "Member 'UGA_Athena_Sentry_Targeting_C::UseLos' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Sentry_Targeting_C, NewVar_0) == 0x000ACC, "Member 'UGA_Athena_Sentry_Targeting_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Sentry_Targeting_C, NewVar_1) == 0x000AD0, "Member 'UGA_Athena_Sentry_Targeting_C::NewVar_1' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Sentry_Targeting_C, NewVar_2) == 0x000AD4, "Member 'UGA_Athena_Sentry_Targeting_C::NewVar_2' has a wrong offset!");

}
