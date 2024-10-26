#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_Athena_Sentry_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C
// 0x01B0 (0x0AC0 - 0x0910)
class ABGA_Athena_Sentry_Parent_C : public ABuildingGameplayActorSentry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0910(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Rotation_Audio;                                    // 0x0918(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      HitBox;                                            // 0x0920(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortLinkToActorComponent*              FortLinkToActor;                                   // 0x0928(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       PawnActivationVolume;                              // 0x0930(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TL_ScaleRays_Alpha_0131847C4194FDF20B5930855C58BE4F; // 0x0938(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_ScaleRays__Direction_0131847C4194FDF20B5930855C58BE4F; // 0x093C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4951[0x3];                                     // 0x093D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_ScaleRays;                                      // 0x0940(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TargetingInterval;                                 // 0x0948(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4952[0x4];                                     // 0x094C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Timer_DoTargeting;                                 // 0x0950(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Timer_Tracking;                                    // 0x0958(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Time_StartAggro;                                   // 0x0960(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4953[0x4];                                     // 0x0964(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Timer_BeginAggro;                                  // 0x0968(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         TargetRate;                                        // 0x0970(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UsesIgnoreTargetTags;                              // 0x0974(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4954[0x3];                                     // 0x0975(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  TC_IgnoreTargetingTags;                            // 0x0978(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           GC_Tracked;                                        // 0x0998(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Deactivated;                                    // 0x09A0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Aggroed;                                        // 0x09A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Death;                                          // 0x09B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_LostTarget;                                     // 0x09B8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_IgnoreActivationVolTags;                        // 0x09C0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Delay_NoRotateReset;                               // 0x09E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RepDeath;                                          // 0x09E4(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_4955[0x3];                                     // 0x09E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           GC_Damaged;                                        // 0x09E8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         TargetingConeAngle;                                // 0x09F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartingScaleRays;                                 // 0x09F4(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RightLookIdle;                                     // 0x0A00(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                LeftLookIdle;                                      // 0x0A0C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FScalableFloat                         Row_LostTargetDelay;                               // 0x0A18(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                LastKnownTargetLocation;                           // 0x0A38(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4956[0x4];                                     // 0x0A44(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Timer_LostTarget;                                  // 0x0A48(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Rotation_Stop_Sound;                               // 0x0A50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxRaySize;                                        // 0x0A58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4957[0x4];                                     // 0x0A5C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Lost_Target_Sound;                                 // 0x0A60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Rotation_Sound_Start;                              // 0x0A68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<EBuildingGameplayActorSentry_State, struct FGameplayTag> StateTagMap;                                       // 0x0A70(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BGA_Athena_Sentry_Parent(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void TrackedPawnWasSet();
	void BPOnSentryStateChanged();
	void Play_Lost_Target_Sound();
	void PlayStartedIdleRotationAudio();
	void PlayStoppedIdleRotationAudio();
	void ActivateRays();
	void BP_Stop_Rotation_Sound();
	void PostLostTargetDelay();
	void DeactivateRays();
	void OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_2_OnLinkedActorDestroyed__DelegateSignature();
	void HideAndKill();
	void Deactivate();
	void LostTarget();
	void BeginTargeting();
	void BndEvt__ActivationVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__ActivationVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void DoTargeting();
	void ReceiveBeginPlay();
	void TL_ScaleRays__UpdateFunc();
	void TL_ScaleRays__FinishedFunc();
	void UserConstructionScript();
	bool CanTargetPawn(class AFortPawn* Pawn);
	void OnRep_RepDeath();
	void CanDoTargeting(bool* Return);
	float Scale_Pos_Yaw_Camera(float YawIn);
	void SetTargetLastLoc();
	bool IsUpsideDown();
	struct FRotator LookLocationToWorldRotation(const struct FVector& Location);
	void SelectClosestIdleRotation();
	void AttemptToRegisterWithDataTrackerManager();
	void GetStateTagFromEnumValue(struct FGameplayTag* StateTag, bool* bFoundValidData);

	bool IsValidAutoFireTarget(const class AActor* Attacker) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_Athena_Sentry_Parent_C">();
	}
	static class ABGA_Athena_Sentry_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_Athena_Sentry_Parent_C>();
	}
};
static_assert(alignof(ABGA_Athena_Sentry_Parent_C) == 0x000008, "Wrong alignment on ABGA_Athena_Sentry_Parent_C");
static_assert(sizeof(ABGA_Athena_Sentry_Parent_C) == 0x000AC0, "Wrong size on ABGA_Athena_Sentry_Parent_C");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, UberGraphFrame) == 0x000910, "Member 'ABGA_Athena_Sentry_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, Rotation_Audio) == 0x000918, "Member 'ABGA_Athena_Sentry_Parent_C::Rotation_Audio' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, HitBox) == 0x000920, "Member 'ABGA_Athena_Sentry_Parent_C::HitBox' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, FortLinkToActor) == 0x000928, "Member 'ABGA_Athena_Sentry_Parent_C::FortLinkToActor' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, PawnActivationVolume) == 0x000930, "Member 'ABGA_Athena_Sentry_Parent_C::PawnActivationVolume' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, TL_ScaleRays_Alpha_0131847C4194FDF20B5930855C58BE4F) == 0x000938, "Member 'ABGA_Athena_Sentry_Parent_C::TL_ScaleRays_Alpha_0131847C4194FDF20B5930855C58BE4F' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, TL_ScaleRays__Direction_0131847C4194FDF20B5930855C58BE4F) == 0x00093C, "Member 'ABGA_Athena_Sentry_Parent_C::TL_ScaleRays__Direction_0131847C4194FDF20B5930855C58BE4F' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, TL_ScaleRays) == 0x000940, "Member 'ABGA_Athena_Sentry_Parent_C::TL_ScaleRays' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, TargetingInterval) == 0x000948, "Member 'ABGA_Athena_Sentry_Parent_C::TargetingInterval' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, Timer_DoTargeting) == 0x000950, "Member 'ABGA_Athena_Sentry_Parent_C::Timer_DoTargeting' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, Timer_Tracking) == 0x000958, "Member 'ABGA_Athena_Sentry_Parent_C::Timer_Tracking' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, Time_StartAggro) == 0x000960, "Member 'ABGA_Athena_Sentry_Parent_C::Time_StartAggro' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, Timer_BeginAggro) == 0x000968, "Member 'ABGA_Athena_Sentry_Parent_C::Timer_BeginAggro' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, TargetRate) == 0x000970, "Member 'ABGA_Athena_Sentry_Parent_C::TargetRate' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, UsesIgnoreTargetTags) == 0x000974, "Member 'ABGA_Athena_Sentry_Parent_C::UsesIgnoreTargetTags' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, TC_IgnoreTargetingTags) == 0x000978, "Member 'ABGA_Athena_Sentry_Parent_C::TC_IgnoreTargetingTags' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, GC_Tracked) == 0x000998, "Member 'ABGA_Athena_Sentry_Parent_C::GC_Tracked' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, GC_Deactivated) == 0x0009A0, "Member 'ABGA_Athena_Sentry_Parent_C::GC_Deactivated' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, GC_Aggroed) == 0x0009A8, "Member 'ABGA_Athena_Sentry_Parent_C::GC_Aggroed' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, GC_Death) == 0x0009B0, "Member 'ABGA_Athena_Sentry_Parent_C::GC_Death' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, GC_LostTarget) == 0x0009B8, "Member 'ABGA_Athena_Sentry_Parent_C::GC_LostTarget' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, TC_IgnoreActivationVolTags) == 0x0009C0, "Member 'ABGA_Athena_Sentry_Parent_C::TC_IgnoreActivationVolTags' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, Delay_NoRotateReset) == 0x0009E0, "Member 'ABGA_Athena_Sentry_Parent_C::Delay_NoRotateReset' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, RepDeath) == 0x0009E4, "Member 'ABGA_Athena_Sentry_Parent_C::RepDeath' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, GC_Damaged) == 0x0009E8, "Member 'ABGA_Athena_Sentry_Parent_C::GC_Damaged' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, TargetingConeAngle) == 0x0009F0, "Member 'ABGA_Athena_Sentry_Parent_C::TargetingConeAngle' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, StartingScaleRays) == 0x0009F4, "Member 'ABGA_Athena_Sentry_Parent_C::StartingScaleRays' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, RightLookIdle) == 0x000A00, "Member 'ABGA_Athena_Sentry_Parent_C::RightLookIdle' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, LeftLookIdle) == 0x000A0C, "Member 'ABGA_Athena_Sentry_Parent_C::LeftLookIdle' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, Row_LostTargetDelay) == 0x000A18, "Member 'ABGA_Athena_Sentry_Parent_C::Row_LostTargetDelay' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, LastKnownTargetLocation) == 0x000A38, "Member 'ABGA_Athena_Sentry_Parent_C::LastKnownTargetLocation' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, Timer_LostTarget) == 0x000A48, "Member 'ABGA_Athena_Sentry_Parent_C::Timer_LostTarget' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, Rotation_Stop_Sound) == 0x000A50, "Member 'ABGA_Athena_Sentry_Parent_C::Rotation_Stop_Sound' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, MaxRaySize) == 0x000A58, "Member 'ABGA_Athena_Sentry_Parent_C::MaxRaySize' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, Lost_Target_Sound) == 0x000A60, "Member 'ABGA_Athena_Sentry_Parent_C::Lost_Target_Sound' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, Rotation_Sound_Start) == 0x000A68, "Member 'ABGA_Athena_Sentry_Parent_C::Rotation_Sound_Start' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Sentry_Parent_C, StateTagMap) == 0x000A70, "Member 'ABGA_Athena_Sentry_Parent_C::StateTagMap' has a wrong offset!");

}

