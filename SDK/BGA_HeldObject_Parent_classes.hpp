#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_HeldObject_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Enum_HeldObject_GenericWeights_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BGA_HeldObject_Parent.BGA_HeldObject_Parent_C
// 0x01E0 (0x0990 - 0x07B0)
#pragma pack(push, 0x1)
class alignas(0x10) ABGA_HeldObject_Parent_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortWaterInteractionComponent*         FortWaterInteraction;                              // 0x07B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortLinkToActorComponent*              FortLinkToActor;                                   // 0x07C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortHeldObjectComponent*               FortHeldObject;                                    // 0x07C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortProjectileMovementComponent*       FortProjectileMovement;                            // 0x07D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x07D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         RepStartMoving;                                    // 0x07E0(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FGameplayTag                           GC_HitPlayer;                                      // 0x07E4(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_HitWorld;                                       // 0x07EC(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Throw;                                          // 0x07F4(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_EnterWater;                                     // 0x07FC(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Pickup;                                         // 0x0804(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Death;                                          // 0x080C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayDeathGC;                                       // 0x0814(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RepHideActor;                                      // 0x0815(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, AdvancedDisplay)
	bool                                          SetHideActorOnDeath;                               // 0x0816(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsDestructable;                                    // 0x0817(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                           GC_GenericDeath;                                   // 0x0818(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         WorldStopSlop;                                     // 0x0820(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AttachToWallsAndCeilings;                          // 0x0824(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62D0[0x3];                                     // 0x0825(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<ELinkToDirection, struct FVector>        Map_DirectionToRelativeVector;                     // 0x0828(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	ELinkToDirection                              DirectionToAttach;                                 // 0x0878(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_62D1[0x7];                                     // 0x0879(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 EmptyAttachLinkActor;                              // 0x0880(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_62D2[0x8];                                     // 0x0888(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             AttachRelativeTrans;                               // 0x0890(0x0030)(Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, AdvancedDisplay)
	struct FTransform                             AttachTransform;                                   // 0x08C0(0x0030)(Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor)
	class FText                                   FirstInteractString;                               // 0x08F0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   SecondInteractString;                              // 0x0908(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         SecondInteractTime;                                // 0x0920(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FirstInteractTime;                                 // 0x0924(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EverBeenThrownPlaced;                              // 0x0928(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                          AutoEnableInteractionsOnStop;                      // 0x0929(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AlreadySavedDefaultTransform;                      // 0x092A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, AdvancedDisplay)
	Enum_HeldObject_GenericWeights                ObjectWeights;                                     // 0x092B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StopOnFlatSurface;                                 // 0x092C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62D3[0x3];                                     // 0x092D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  ThrownQuestCreditTargetTag;                        // 0x0930(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_BlockPickup;                                    // 0x0950(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Hit_Velocity_Threshold;                            // 0x0970(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldKillWhenSpawningUnderwater;                  // 0x0974(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62D4[0x3];                                     // 0x0975(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    HitComponentToAttachTo;                            // 0x0978(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionResponse                            CapsuleDefaultCollisionResponseToPawn;             // 0x0980(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RestoreDefaultPawnCollisionOnInteract;             // 0x0981(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BGA_HeldObject_Parent(int32 EntryPoint);
	void ReceiveDestroyed();
	void OnSecondInteract(class AFortPawn* InteractingPawn);
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectPlaced__DelegateSignature();
	void OnFirstInteract(class AFortPawn* Interacting_Pawn);
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ResetRelativeTransformOnAttach();
	void ReceiveBeginPlay();
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_6_OnHeldObjectPickedUp__DelegateSignature();
	void AttachSetup(const struct FVector& Location, const struct FVector& HitNormal, bool NewParam);
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_2_OnHeldObjectThrown__DelegateSignature();
	void BlueprintOnInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted);
	void BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void PlayGenericDeath();
	void HideActor();
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnReady_BC2B03BE47B5044C184341970EAD7AAB(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void OnRep_RepStartMoving();
	void OnRep_RepHideActor();
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);
	void FindAttachAngle(const struct FVector& HitLoc);
	void GetAttachComponent(class USceneComponent** Component);
	void SetAttachDefaultTransform();
	void OnRep_AttachTransform();
	void SetBeenThrownPlaced();

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const;
	class FText BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	bool BlueprintGetInteractionTime(const class AFortPawn* InteractingPawn, float* OutInteractionTime, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	void GetCanFirstInteract(class AFortPawn* InteractingPawn, bool* Return) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_HeldObject_Parent_C">();
	}
	static class ABGA_HeldObject_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_HeldObject_Parent_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABGA_HeldObject_Parent_C) == 0x000010, "Wrong alignment on ABGA_HeldObject_Parent_C");
static_assert(sizeof(ABGA_HeldObject_Parent_C) == 0x000990, "Wrong size on ABGA_HeldObject_Parent_C");
static_assert(offsetof(ABGA_HeldObject_Parent_C, UberGraphFrame) == 0x0007B0, "Member 'ABGA_HeldObject_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, FortWaterInteraction) == 0x0007B8, "Member 'ABGA_HeldObject_Parent_C::FortWaterInteraction' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, FortLinkToActor) == 0x0007C0, "Member 'ABGA_HeldObject_Parent_C::FortLinkToActor' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, FortHeldObject) == 0x0007C8, "Member 'ABGA_HeldObject_Parent_C::FortHeldObject' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, FortProjectileMovement) == 0x0007D0, "Member 'ABGA_HeldObject_Parent_C::FortProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, Capsule) == 0x0007D8, "Member 'ABGA_HeldObject_Parent_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, RepStartMoving) == 0x0007E0, "Member 'ABGA_HeldObject_Parent_C::RepStartMoving' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, GC_HitPlayer) == 0x0007E4, "Member 'ABGA_HeldObject_Parent_C::GC_HitPlayer' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, GC_HitWorld) == 0x0007EC, "Member 'ABGA_HeldObject_Parent_C::GC_HitWorld' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, GC_Throw) == 0x0007F4, "Member 'ABGA_HeldObject_Parent_C::GC_Throw' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, GC_EnterWater) == 0x0007FC, "Member 'ABGA_HeldObject_Parent_C::GC_EnterWater' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, GC_Pickup) == 0x000804, "Member 'ABGA_HeldObject_Parent_C::GC_Pickup' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, GC_Death) == 0x00080C, "Member 'ABGA_HeldObject_Parent_C::GC_Death' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, PlayDeathGC) == 0x000814, "Member 'ABGA_HeldObject_Parent_C::PlayDeathGC' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, RepHideActor) == 0x000815, "Member 'ABGA_HeldObject_Parent_C::RepHideActor' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, SetHideActorOnDeath) == 0x000816, "Member 'ABGA_HeldObject_Parent_C::SetHideActorOnDeath' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, IsDestructable) == 0x000817, "Member 'ABGA_HeldObject_Parent_C::IsDestructable' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, GC_GenericDeath) == 0x000818, "Member 'ABGA_HeldObject_Parent_C::GC_GenericDeath' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, WorldStopSlop) == 0x000820, "Member 'ABGA_HeldObject_Parent_C::WorldStopSlop' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, AttachToWallsAndCeilings) == 0x000824, "Member 'ABGA_HeldObject_Parent_C::AttachToWallsAndCeilings' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, Map_DirectionToRelativeVector) == 0x000828, "Member 'ABGA_HeldObject_Parent_C::Map_DirectionToRelativeVector' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, DirectionToAttach) == 0x000878, "Member 'ABGA_HeldObject_Parent_C::DirectionToAttach' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, EmptyAttachLinkActor) == 0x000880, "Member 'ABGA_HeldObject_Parent_C::EmptyAttachLinkActor' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, AttachRelativeTrans) == 0x000890, "Member 'ABGA_HeldObject_Parent_C::AttachRelativeTrans' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, AttachTransform) == 0x0008C0, "Member 'ABGA_HeldObject_Parent_C::AttachTransform' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, FirstInteractString) == 0x0008F0, "Member 'ABGA_HeldObject_Parent_C::FirstInteractString' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, SecondInteractString) == 0x000908, "Member 'ABGA_HeldObject_Parent_C::SecondInteractString' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, SecondInteractTime) == 0x000920, "Member 'ABGA_HeldObject_Parent_C::SecondInteractTime' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, FirstInteractTime) == 0x000924, "Member 'ABGA_HeldObject_Parent_C::FirstInteractTime' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, EverBeenThrownPlaced) == 0x000928, "Member 'ABGA_HeldObject_Parent_C::EverBeenThrownPlaced' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, AutoEnableInteractionsOnStop) == 0x000929, "Member 'ABGA_HeldObject_Parent_C::AutoEnableInteractionsOnStop' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, AlreadySavedDefaultTransform) == 0x00092A, "Member 'ABGA_HeldObject_Parent_C::AlreadySavedDefaultTransform' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, ObjectWeights) == 0x00092B, "Member 'ABGA_HeldObject_Parent_C::ObjectWeights' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, StopOnFlatSurface) == 0x00092C, "Member 'ABGA_HeldObject_Parent_C::StopOnFlatSurface' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, ThrownQuestCreditTargetTag) == 0x000930, "Member 'ABGA_HeldObject_Parent_C::ThrownQuestCreditTargetTag' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, TC_BlockPickup) == 0x000950, "Member 'ABGA_HeldObject_Parent_C::TC_BlockPickup' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, Hit_Velocity_Threshold) == 0x000970, "Member 'ABGA_HeldObject_Parent_C::Hit_Velocity_Threshold' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, ShouldKillWhenSpawningUnderwater) == 0x000974, "Member 'ABGA_HeldObject_Parent_C::ShouldKillWhenSpawningUnderwater' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, HitComponentToAttachTo) == 0x000978, "Member 'ABGA_HeldObject_Parent_C::HitComponentToAttachTo' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, CapsuleDefaultCollisionResponseToPawn) == 0x000980, "Member 'ABGA_HeldObject_Parent_C::CapsuleDefaultCollisionResponseToPawn' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, RestoreDefaultPawnCollisionOnInteract) == 0x000981, "Member 'ABGA_HeldObject_Parent_C::RestoreDefaultPawnCollisionOnInteract' has a wrong offset!");

}

