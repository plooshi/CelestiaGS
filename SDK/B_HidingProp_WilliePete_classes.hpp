#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_HidingProp_WilliePete

#include "Basic.hpp"

#include "B_HidingProp_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_HidingProp_WilliePete.B_HidingProp_WilliePete_C
// 0x01D8 (0x1060 - 0x0E88)
class AB_HidingProp_WilliePete_C final : public AB_HidingProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_HidingProp_WilliePete_C;          // 0x0E88(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   OverlapCylinder;                                   // 0x0E90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        WilliePete_Ambient_Loop;                           // 0x0E98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Geyser;                                            // 0x0EA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_Whirlpool_01;                                    // 0x0EA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_WilliePete_SurfaceVerticalSplash;                // 0x0EB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortProjectileMovementComponent*       OverlappedFortProjectileMovementComponent;         // 0x0EB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           OverlappedStandardProjectileMovementComponent;     // 0x0EC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TeleportingNonPawn;                                // 0x0EC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             SphereOverlapResult;                               // 0x0ED0(0x008C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         LaunchDelay;                                       // 0x0F5C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCurveTableRowHandle                   OverrideExitSpeed;                                 // 0x0F60(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         ProjectileSpeedCeiling;                            // 0x0F70(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ProjectileExitFVectorRotation;                     // 0x0F74(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTimerHandle                           TH_SuctionLoop;                                    // 0x0F80(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         WaterLevel;                                        // 0x0F88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Exit;                                           // 0x0F8C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Enter;                                          // 0x0F94(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EDB[0x4];                                     // 0x0F9C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         EnabledValue;                                      // 0x0FA0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         LaunchHeightValue;                                 // 0x0FC0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawnAthena*                  LaunchPawn;                                        // 0x0FE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            LaunchGrantedEffectHandle;                         // 0x0FE8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  T_Quest;                                           // 0x0FF0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 SpawnedWaterBody;                                  // 0x1010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_ScreenFX;                                       // 0x1018(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOnTestMap;                                       // 0x1020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EDC[0x7];                                     // 0x1021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Launch_Sound;                                      // 0x1028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                AdjustedLocation;                                  // 0x1030(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          SkipAnimForLaunch;                                 // 0x103C(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EDD[0x3];                                     // 0x103D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawnAthena*                  ExitingPawn;                                       // 0x1040(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMovementComponent*                     OverlappedMovementComponent;                       // 0x1048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ProjectileSpeedMult;                               // 0x1050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PickupSpeedMult;                                   // 0x1054(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSetSilentDie;                                     // 0x1058(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          bSetSpawnedWaterBody;                              // 0x1059(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

public:
	void ExecuteUbergraph_B_HidingProp_WilliePete(int32 EntryPoint);
	void ResetGravity(const struct FHitResult& Hit);
	void Complete_Setup();
	void BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Remove_GE();
	void Non_Pawn_Teleport(class AActor* TeleportingActor);
	void Non_Pawn_Actor_Destroyed(class AActor* DestroyedActor);
	void OnReady_74044DD44988556292500EB8F289359F(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void TeleportExitSpeed(const struct FVector& ExitFVector, float EnterSpeed, float OverrideSpeed, float MinimumSpeed, bool ForceSpeedOverride, struct FVector* TeleportExitVelocity);
	void OnRep_AdjustedLocation();
	void HelperLocationLogger(const class FString& InString);
	void OnRep_bSetSilentDie();
	void OnRep_bSetSpawnedWaterBody();
	void StopHiding(const class AFortPawn* Pawn);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_HidingProp_WilliePete_C">();
	}
	static class AB_HidingProp_WilliePete_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_HidingProp_WilliePete_C>();
	}
};
static_assert(alignof(AB_HidingProp_WilliePete_C) == 0x000008, "Wrong alignment on AB_HidingProp_WilliePete_C");
static_assert(sizeof(AB_HidingProp_WilliePete_C) == 0x001060, "Wrong size on AB_HidingProp_WilliePete_C");
static_assert(offsetof(AB_HidingProp_WilliePete_C, UberGraphFrame_B_HidingProp_WilliePete_C) == 0x000E88, "Member 'AB_HidingProp_WilliePete_C::UberGraphFrame_B_HidingProp_WilliePete_C' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, OverlapCylinder) == 0x000E90, "Member 'AB_HidingProp_WilliePete_C::OverlapCylinder' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, WilliePete_Ambient_Loop) == 0x000E98, "Member 'AB_HidingProp_WilliePete_C::WilliePete_Ambient_Loop' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, Geyser) == 0x000EA0, "Member 'AB_HidingProp_WilliePete_C::Geyser' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, S_Whirlpool_01) == 0x000EA8, "Member 'AB_HidingProp_WilliePete_C::S_Whirlpool_01' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, P_WilliePete_SurfaceVerticalSplash) == 0x000EB0, "Member 'AB_HidingProp_WilliePete_C::P_WilliePete_SurfaceVerticalSplash' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, OverlappedFortProjectileMovementComponent) == 0x000EB8, "Member 'AB_HidingProp_WilliePete_C::OverlappedFortProjectileMovementComponent' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, OverlappedStandardProjectileMovementComponent) == 0x000EC0, "Member 'AB_HidingProp_WilliePete_C::OverlappedStandardProjectileMovementComponent' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, TeleportingNonPawn) == 0x000EC8, "Member 'AB_HidingProp_WilliePete_C::TeleportingNonPawn' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, SphereOverlapResult) == 0x000ED0, "Member 'AB_HidingProp_WilliePete_C::SphereOverlapResult' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, LaunchDelay) == 0x000F5C, "Member 'AB_HidingProp_WilliePete_C::LaunchDelay' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, OverrideExitSpeed) == 0x000F60, "Member 'AB_HidingProp_WilliePete_C::OverrideExitSpeed' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, ProjectileSpeedCeiling) == 0x000F70, "Member 'AB_HidingProp_WilliePete_C::ProjectileSpeedCeiling' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, ProjectileExitFVectorRotation) == 0x000F74, "Member 'AB_HidingProp_WilliePete_C::ProjectileExitFVectorRotation' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, TH_SuctionLoop) == 0x000F80, "Member 'AB_HidingProp_WilliePete_C::TH_SuctionLoop' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, WaterLevel) == 0x000F88, "Member 'AB_HidingProp_WilliePete_C::WaterLevel' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, GC_Exit) == 0x000F8C, "Member 'AB_HidingProp_WilliePete_C::GC_Exit' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, GC_Enter) == 0x000F94, "Member 'AB_HidingProp_WilliePete_C::GC_Enter' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, EnabledValue) == 0x000FA0, "Member 'AB_HidingProp_WilliePete_C::EnabledValue' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, LaunchHeightValue) == 0x000FC0, "Member 'AB_HidingProp_WilliePete_C::LaunchHeightValue' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, LaunchPawn) == 0x000FE0, "Member 'AB_HidingProp_WilliePete_C::LaunchPawn' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, LaunchGrantedEffectHandle) == 0x000FE8, "Member 'AB_HidingProp_WilliePete_C::LaunchGrantedEffectHandle' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, T_Quest) == 0x000FF0, "Member 'AB_HidingProp_WilliePete_C::T_Quest' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, SpawnedWaterBody) == 0x001010, "Member 'AB_HidingProp_WilliePete_C::SpawnedWaterBody' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, GC_ScreenFX) == 0x001018, "Member 'AB_HidingProp_WilliePete_C::GC_ScreenFX' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, IsOnTestMap) == 0x001020, "Member 'AB_HidingProp_WilliePete_C::IsOnTestMap' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, Launch_Sound) == 0x001028, "Member 'AB_HidingProp_WilliePete_C::Launch_Sound' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, AdjustedLocation) == 0x001030, "Member 'AB_HidingProp_WilliePete_C::AdjustedLocation' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, SkipAnimForLaunch) == 0x00103C, "Member 'AB_HidingProp_WilliePete_C::SkipAnimForLaunch' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, ExitingPawn) == 0x001040, "Member 'AB_HidingProp_WilliePete_C::ExitingPawn' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, OverlappedMovementComponent) == 0x001048, "Member 'AB_HidingProp_WilliePete_C::OverlappedMovementComponent' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, ProjectileSpeedMult) == 0x001050, "Member 'AB_HidingProp_WilliePete_C::ProjectileSpeedMult' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, PickupSpeedMult) == 0x001054, "Member 'AB_HidingProp_WilliePete_C::PickupSpeedMult' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, bSetSilentDie) == 0x001058, "Member 'AB_HidingProp_WilliePete_C::bSetSilentDie' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, bSetSpawnedWaterBody) == 0x001059, "Member 'AB_HidingProp_WilliePete_C::bSetSpawnedWaterBody' has a wrong offset!");

}
