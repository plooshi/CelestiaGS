#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_Athena_PurpleMouse_Jumper

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "BGA_Athena_WithGravity_Parent_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C
// 0x0230 (0x0B10 - 0x08E0)
class ABGA_Athena_PurpleMouse_Jumper_C final : public ABGA_Athena_WithGravity_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BGA_Athena_PurpleMouse_Jumper_C;    // 0x08E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Proximity_Spin_Sound;                              // 0x08E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Cylinder_Beam;                                  // 0x08F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   VisibleMesh;                                       // 0x08F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        MeshPivot;                                         // 0x0900(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        AmbientHumAudio;                                   // 0x0908(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       BeepBlinkTrigger;                                  // 0x0910(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       ExplosionTrigger;                                  // 0x0918(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         JumpOut_Rotation_X_2F05E8C8489AA60C8C830FAFF1B78CA0; // 0x0920(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         JumpOut_Rotation_Z_2F05E8C8489AA60C8C830FAFF1B78CA0; // 0x0924(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         JumpOut_Lifetime_2F05E8C8489AA60C8C830FAFF1B78CA0; // 0x0928(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         JumpOut_SpawnRate_2F05E8C8489AA60C8C830FAFF1B78CA0; // 0x092C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            JumpOut__Direction_2F05E8C8489AA60C8C830FAFF1B78CA0; // 0x0930(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_680A[0x7];                                     // 0x0931(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     JumpOut;                                           // 0x0938(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         BeepTriggerRadius;                                 // 0x0940(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         TriggerRadius;                                     // 0x0960(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         DamageRadius;                                      // 0x0980(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         MarkPlayers;                                       // 0x09A0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         MarkDuration;                                      // 0x09C0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         TimeToArm;                                         // 0x09E0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         PlayBeepSoundOnArm;                                // 0x0A00(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   InteractText;                                      // 0x0A20(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsExlode_;                                         // 0x0A38(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_680B[0x3];                                     // 0x0A39(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           CameraShakeGC;                                     // 0x0A3C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_680C[0x4];                                     // 0x0A44(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         ActorsInBeepRadius;                                // 0x0A48(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsInteract_;                                       // 0x0A58(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_680D[0x7];                                     // 0x0A59(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             ExplodeSound;                                      // 0x0A60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               BeepParticles;                                     // 0x0A68(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             BeepSound;                                         // 0x0A70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*               ItemToPickUpOnDisarm;                              // 0x0A78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ExplosionGE;                                       // 0x0A80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SetMeshMat;                                        // 0x0A88(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_680E[0x3];                                     // 0x0A89(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         JumpHeight;                                        // 0x0A8C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OriginalLocation;                                  // 0x0A90(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           EnemyParticleColor;                                // 0x0A9C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           FriendlyParticleColor;                             // 0x0AAC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_680F[0x4];                                     // 0x0ABC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             PickupSound;                                       // 0x0AC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           EnemyEmissiveColor;                                // 0x0AC8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           FriendlyEmissiveColor;                             // 0x0AD8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanPickUp;                                         // 0x0AE8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         MyTeam;                                            // 0x0AE9(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Jumped;                                            // 0x0AEA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TeamHasBeenSet;                                    // 0x0AEB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6810[0x4];                                     // 0x0AEC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilitySystemComponent*            DamageDealingAbilitySystemComponent;               // 0x0AF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           ExplosionEffectContext;                            // 0x0AF8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BGA_Athena_PurpleMouse_Jumper(int32 EntryPoint);
	void SetMyTeam(uint8 Param_Team);
	void OnInstigatorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void Pushback(const struct FVector& V);
	void StopSim(const struct FHitResult& Hit);
	void BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_4_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void ResetExplosionTimer();
	void Damaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void StopBeep();
	void BndEvt__BeepBlinkTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BeepBlinkTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Destroyed(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void TriggerJumpTimeline();
	void Explode();
	void DetachAndLaunch();
	void TriggerBeep();
	void Beep(class FName EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
	void BndEvt__ExplosionTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void SpawnFXSounds();
	void BlueprintOnInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted);
	void OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void JumpIntoExplosion();
	void BndEvt__ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveBeginPlay();
	void JumpOut__UpdateFunc();
	void JumpOut__FinishedFunc();
	void UserConstructionScript();
	void Launch(const struct FVector& LaunchSource, float Amount);
	void CheckLOSAgain(class AActor* ActorToCheckLOSAgainst);
	void FilterByLOS(TArray<class AActor*>& _Array, TArray<class AActor*>* _Result);
	void Init(const struct FVector& Param_GravHitNormal);
	bool Is_in_Infiltration_Mode();
	void GetAllPawns(TArray<class AActor*>& _Array, TArray<class AActor*>* _Result);

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const;
	class FText BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	bool BlueprintGetInteractionTime(const class AFortPawn* InteractingPawn, float* OutInteractionTime, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	bool CanBeSavedToCreativeVolume() const;
	struct FVector GetFocusedSocketLocation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_Athena_PurpleMouse_Jumper_C">();
	}
	static class ABGA_Athena_PurpleMouse_Jumper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_Athena_PurpleMouse_Jumper_C>();
	}
};
static_assert(alignof(ABGA_Athena_PurpleMouse_Jumper_C) == 0x000008, "Wrong alignment on ABGA_Athena_PurpleMouse_Jumper_C");
static_assert(sizeof(ABGA_Athena_PurpleMouse_Jumper_C) == 0x000B10, "Wrong size on ABGA_Athena_PurpleMouse_Jumper_C");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, UberGraphFrame_BGA_Athena_PurpleMouse_Jumper_C) == 0x0008E0, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::UberGraphFrame_BGA_Athena_PurpleMouse_Jumper_C' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, Proximity_Spin_Sound) == 0x0008E8, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::Proximity_Spin_Sound' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, SM_Cylinder_Beam) == 0x0008F0, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::SM_Cylinder_Beam' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, VisibleMesh) == 0x0008F8, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::VisibleMesh' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, MeshPivot) == 0x000900, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::MeshPivot' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, AmbientHumAudio) == 0x000908, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::AmbientHumAudio' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, BeepBlinkTrigger) == 0x000910, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::BeepBlinkTrigger' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, ExplosionTrigger) == 0x000918, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::ExplosionTrigger' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, JumpOut_Rotation_X_2F05E8C8489AA60C8C830FAFF1B78CA0) == 0x000920, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::JumpOut_Rotation_X_2F05E8C8489AA60C8C830FAFF1B78CA0' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, JumpOut_Rotation_Z_2F05E8C8489AA60C8C830FAFF1B78CA0) == 0x000924, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::JumpOut_Rotation_Z_2F05E8C8489AA60C8C830FAFF1B78CA0' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, JumpOut_Lifetime_2F05E8C8489AA60C8C830FAFF1B78CA0) == 0x000928, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::JumpOut_Lifetime_2F05E8C8489AA60C8C830FAFF1B78CA0' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, JumpOut_SpawnRate_2F05E8C8489AA60C8C830FAFF1B78CA0) == 0x00092C, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::JumpOut_SpawnRate_2F05E8C8489AA60C8C830FAFF1B78CA0' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, JumpOut__Direction_2F05E8C8489AA60C8C830FAFF1B78CA0) == 0x000930, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::JumpOut__Direction_2F05E8C8489AA60C8C830FAFF1B78CA0' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, JumpOut) == 0x000938, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::JumpOut' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, BeepTriggerRadius) == 0x000940, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::BeepTriggerRadius' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, TriggerRadius) == 0x000960, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::TriggerRadius' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, DamageRadius) == 0x000980, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::DamageRadius' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, MarkPlayers) == 0x0009A0, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::MarkPlayers' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, MarkDuration) == 0x0009C0, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::MarkDuration' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, TimeToArm) == 0x0009E0, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::TimeToArm' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, PlayBeepSoundOnArm) == 0x000A00, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::PlayBeepSoundOnArm' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, InteractText) == 0x000A20, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::InteractText' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, IsExlode_) == 0x000A38, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::IsExlode_' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, CameraShakeGC) == 0x000A3C, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::CameraShakeGC' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, ActorsInBeepRadius) == 0x000A48, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::ActorsInBeepRadius' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, IsInteract_) == 0x000A58, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::IsInteract_' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, ExplodeSound) == 0x000A60, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::ExplodeSound' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, BeepParticles) == 0x000A68, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::BeepParticles' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, BeepSound) == 0x000A70, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::BeepSound' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, ItemToPickUpOnDisarm) == 0x000A78, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::ItemToPickUpOnDisarm' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, ExplosionGE) == 0x000A80, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::ExplosionGE' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, SetMeshMat) == 0x000A88, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::SetMeshMat' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, JumpHeight) == 0x000A8C, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::JumpHeight' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, OriginalLocation) == 0x000A90, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::OriginalLocation' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, EnemyParticleColor) == 0x000A9C, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::EnemyParticleColor' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, FriendlyParticleColor) == 0x000AAC, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::FriendlyParticleColor' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, PickupSound) == 0x000AC0, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::PickupSound' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, EnemyEmissiveColor) == 0x000AC8, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::EnemyEmissiveColor' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, FriendlyEmissiveColor) == 0x000AD8, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::FriendlyEmissiveColor' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, CanPickUp) == 0x000AE8, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::CanPickUp' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, MyTeam) == 0x000AE9, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::MyTeam' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, Jumped) == 0x000AEA, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::Jumped' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, TeamHasBeenSet) == 0x000AEB, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::TeamHasBeenSet' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, DamageDealingAbilitySystemComponent) == 0x000AF0, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::DamageDealingAbilitySystemComponent' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_PurpleMouse_Jumper_C, ExplosionEffectContext) == 0x000AF8, "Member 'ABGA_Athena_PurpleMouse_Jumper_C::ExplosionEffectContext' has a wrong offset!");

}
