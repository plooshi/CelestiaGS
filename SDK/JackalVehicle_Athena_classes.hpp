#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JackalVehicle_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass JackalVehicle_Athena.JackalVehicle_Athena_C
// 0x0160 (0x19D0 - 0x1870)
class AJackalVehicle_Athena_C final : public AFortAthenaJackalVehicle
{
public:
	uint8                                         Pad_863C[0x8];                                     // 0x1868(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1870(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortVehicleAudioVoice*                 AudioWind;                                         // 0x1878(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        AudioLand;                                         // 0x1880(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortVehicleAudioVoice*                 AudioBoost;                                        // 0x1888(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortVehicleAudioVoice*                 AudioMovement;                                     // 0x1890(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        AudioJump;                                         // 0x1898(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Hoverboard_Lightbeams;                          // 0x18A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               LoopingFX;                                         // 0x18A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               BoostFX;                                           // 0x18B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    BackLight;                                         // 0x18B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    FrontLight;                                        // 0x18C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortCollisionAudioComponent*           FortCollisionAudioImpacts;                         // 0x18C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          OverlapVolume;                                     // 0x18D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        DriverPawn;                                        // 0x18D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      DrivingPlayerController;                           // 0x18E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        LocalPlayerPawn;                                   // 0x18E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         Delta;                                             // 0x18F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bJumpCharging;                                     // 0x18F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_863D[0x3];                                     // 0x18F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             MountSound;                                        // 0x18F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               InWaterFX;                                         // 0x1900(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        InWaterLoop;                                       // 0x1908(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CheckWaterTimer;                                   // 0x1910(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         RumbleIntensity;                                   // 0x1918(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug_NoCameraShake;                               // 0x191C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_863E[0x3];                                     // 0x191D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCameraShake*                           DriverCameraShake;                                 // 0x1920(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EngineSoundMaxDistance;                            // 0x1928(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Jumped;                                            // 0x192C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_863F[0x3];                                     // 0x192D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               BoostMeterMID;                                     // 0x1930(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BoostTImelineAlpha;                                // 0x1938(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FXBoostEnd_0;                                      // 0x193C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             DismountSound;                                     // 0x1948(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FXFrontSpringOffset;                               // 0x1950(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FXRearSpringOffset;                                // 0x195C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FXSurfaceType;                                     // 0x1968(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SavedDamageValueForMID;                            // 0x196C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxSpeedToDestroy;                                 // 0x1970(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxHealthToDestroy;                                // 0x1974(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SavedHeadlightValueForMID;                         // 0x1978(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BoostTimeValueForMID;                              // 0x197C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 VehicleHitActor;                                   // 0x1980(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DestructionAngle;                                  // 0x1988(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LandingFXImpactThreshold;                          // 0x198C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        LandingFX;                                         // 0x1990(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             OnDeathSound;                                      // 0x1998(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BumpForceAngle;                                    // 0x19A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8640[0x4];                                     // 0x19A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 JumpCameraShake;                                   // 0x19A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MovementVisualUpdate;                              // 0x19B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8641[0x4];                                     // 0x19B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           MovementVisualTimer;                               // 0x19B8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         SlipStreamImpulseForce;                            // 0x19C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8642[0x4];                                     // 0x19C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     WrapBaseMaterial;                                  // 0x19C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_JackalVehicle_Athena(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void HideQuickBarForSecondaryAbility(bool Hide);
	void OnHoldExitStopped(class AFortPawn* ExitingPawn);
	void OnHoldExitStarted(class AFortPawn* ExitingPawn, const float ExitDuration);
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnStopTick();
	void ChangeOutMaterials();
	void K2_ApplyCosmeticWrap(const class UAthenaItemWrapDefinition* LoadedWrap);
	void OnIsSprintingChanged();
	void StartDriverCameraShake();
	void StopDriverCameraShake();
	void CheckWaterEvent();
	void OnExitedWaterVolume(const struct FVector& WaterSurfacePoint);
	void OnEnteredWaterVolume(const struct FVector& WaterSurfacePoint);
	void OnCollisionHitEffects(const struct FVector& HitLocation, const struct FVector& HitNormalImpulse, const struct FVector& HitFrictionImpulse, const struct FVector& HitNormal, class AActor* HitActor, EPhysicalSurface HitSurfaceType);
	void OnJumped(float Charge);
	void OnJumpChargeEnd(float Charge);
	void OnJumpChargeBegin();
	void OnBoostEnd();
	void OnBoostBegin();
	void ReceiveBeginPlay();
	void SetupCosmetics();
	void OnPawnExitVehicle(class AFortPlayerPawn* PlayerPawn, class FName ExitSocketName);
	void OnPawnEnterVehicle(class AFortPlayerPawn* PlayerPawn, const int32 SeatIdx);
	void UserConstructionScript();
	void DeactivateComponents();
	void CurrentBoostCharge(float* Charge_Value);
	void IsBoostCharging(bool* Is_Charging);
	void HapticsOnHit(float HitMagnitude);
	void SendDamageValueToMaterials(float ParameterValue);
	void SendHeadlightValueToMaterials(float ParameterValue);
	void SendBoostTimeToMaterials(float ParameterValue);
	void UpdateSurfaceType(EPhysicalSurface Surface, int32* Output);
	void DestroyBuildingPiece(class ABuildingActor* BuildingActor, float DestroyThreshold);
	bool ShouldDestroyProp_(const struct FVector& HitNormal);
	void ShouldBump(const struct FVector& Hit_Normal, class AFortPlayerPawn* PlayerPawn, bool* Bump);
	void GetMaxAudibleDistance(float* Max_Distance);
	void SlipStreamCheck();

	void GetIconPlacement(const class AActor* SelfActor, const class AActor* ViewingActor, struct FVector* OutLocation, struct FVector* OutExtents) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"JackalVehicle_Athena_C">();
	}
	static class AJackalVehicle_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AJackalVehicle_Athena_C>();
	}
};
static_assert(alignof(AJackalVehicle_Athena_C) == 0x000010, "Wrong alignment on AJackalVehicle_Athena_C");
static_assert(sizeof(AJackalVehicle_Athena_C) == 0x0019D0, "Wrong size on AJackalVehicle_Athena_C");
static_assert(offsetof(AJackalVehicle_Athena_C, UberGraphFrame) == 0x001870, "Member 'AJackalVehicle_Athena_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, AudioWind) == 0x001878, "Member 'AJackalVehicle_Athena_C::AudioWind' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, AudioLand) == 0x001880, "Member 'AJackalVehicle_Athena_C::AudioLand' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, AudioBoost) == 0x001888, "Member 'AJackalVehicle_Athena_C::AudioBoost' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, AudioMovement) == 0x001890, "Member 'AJackalVehicle_Athena_C::AudioMovement' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, AudioJump) == 0x001898, "Member 'AJackalVehicle_Athena_C::AudioJump' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, SM_Hoverboard_Lightbeams) == 0x0018A0, "Member 'AJackalVehicle_Athena_C::SM_Hoverboard_Lightbeams' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, LoopingFX) == 0x0018A8, "Member 'AJackalVehicle_Athena_C::LoopingFX' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, BoostFX) == 0x0018B0, "Member 'AJackalVehicle_Athena_C::BoostFX' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, BackLight) == 0x0018B8, "Member 'AJackalVehicle_Athena_C::BackLight' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, FrontLight) == 0x0018C0, "Member 'AJackalVehicle_Athena_C::FrontLight' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, FortCollisionAudioImpacts) == 0x0018C8, "Member 'AJackalVehicle_Athena_C::FortCollisionAudioImpacts' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, OverlapVolume) == 0x0018D0, "Member 'AJackalVehicle_Athena_C::OverlapVolume' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, DriverPawn) == 0x0018D8, "Member 'AJackalVehicle_Athena_C::DriverPawn' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, DrivingPlayerController) == 0x0018E0, "Member 'AJackalVehicle_Athena_C::DrivingPlayerController' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, LocalPlayerPawn) == 0x0018E8, "Member 'AJackalVehicle_Athena_C::LocalPlayerPawn' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, Delta) == 0x0018F0, "Member 'AJackalVehicle_Athena_C::Delta' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, bJumpCharging) == 0x0018F4, "Member 'AJackalVehicle_Athena_C::bJumpCharging' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, MountSound) == 0x0018F8, "Member 'AJackalVehicle_Athena_C::MountSound' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, InWaterFX) == 0x001900, "Member 'AJackalVehicle_Athena_C::InWaterFX' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, InWaterLoop) == 0x001908, "Member 'AJackalVehicle_Athena_C::InWaterLoop' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, CheckWaterTimer) == 0x001910, "Member 'AJackalVehicle_Athena_C::CheckWaterTimer' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, RumbleIntensity) == 0x001918, "Member 'AJackalVehicle_Athena_C::RumbleIntensity' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, Debug_NoCameraShake) == 0x00191C, "Member 'AJackalVehicle_Athena_C::Debug_NoCameraShake' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, DriverCameraShake) == 0x001920, "Member 'AJackalVehicle_Athena_C::DriverCameraShake' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, EngineSoundMaxDistance) == 0x001928, "Member 'AJackalVehicle_Athena_C::EngineSoundMaxDistance' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, Jumped) == 0x00192C, "Member 'AJackalVehicle_Athena_C::Jumped' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, BoostMeterMID) == 0x001930, "Member 'AJackalVehicle_Athena_C::BoostMeterMID' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, BoostTImelineAlpha) == 0x001938, "Member 'AJackalVehicle_Athena_C::BoostTImelineAlpha' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, FXBoostEnd_0) == 0x00193C, "Member 'AJackalVehicle_Athena_C::FXBoostEnd_0' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, DismountSound) == 0x001948, "Member 'AJackalVehicle_Athena_C::DismountSound' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, FXFrontSpringOffset) == 0x001950, "Member 'AJackalVehicle_Athena_C::FXFrontSpringOffset' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, FXRearSpringOffset) == 0x00195C, "Member 'AJackalVehicle_Athena_C::FXRearSpringOffset' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, FXSurfaceType) == 0x001968, "Member 'AJackalVehicle_Athena_C::FXSurfaceType' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, SavedDamageValueForMID) == 0x00196C, "Member 'AJackalVehicle_Athena_C::SavedDamageValueForMID' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, MaxSpeedToDestroy) == 0x001970, "Member 'AJackalVehicle_Athena_C::MaxSpeedToDestroy' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, MaxHealthToDestroy) == 0x001974, "Member 'AJackalVehicle_Athena_C::MaxHealthToDestroy' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, SavedHeadlightValueForMID) == 0x001978, "Member 'AJackalVehicle_Athena_C::SavedHeadlightValueForMID' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, BoostTimeValueForMID) == 0x00197C, "Member 'AJackalVehicle_Athena_C::BoostTimeValueForMID' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, VehicleHitActor) == 0x001980, "Member 'AJackalVehicle_Athena_C::VehicleHitActor' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, DestructionAngle) == 0x001988, "Member 'AJackalVehicle_Athena_C::DestructionAngle' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, LandingFXImpactThreshold) == 0x00198C, "Member 'AJackalVehicle_Athena_C::LandingFXImpactThreshold' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, LandingFX) == 0x001990, "Member 'AJackalVehicle_Athena_C::LandingFX' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, OnDeathSound) == 0x001998, "Member 'AJackalVehicle_Athena_C::OnDeathSound' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, BumpForceAngle) == 0x0019A0, "Member 'AJackalVehicle_Athena_C::BumpForceAngle' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, JumpCameraShake) == 0x0019A8, "Member 'AJackalVehicle_Athena_C::JumpCameraShake' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, MovementVisualUpdate) == 0x0019B0, "Member 'AJackalVehicle_Athena_C::MovementVisualUpdate' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, MovementVisualTimer) == 0x0019B8, "Member 'AJackalVehicle_Athena_C::MovementVisualTimer' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, SlipStreamImpulseForce) == 0x0019C0, "Member 'AJackalVehicle_Athena_C::SlipStreamImpulseForce' has a wrong offset!");
static_assert(offsetof(AJackalVehicle_Athena_C, WrapBaseMaterial) == 0x0019C8, "Member 'AJackalVehicle_Athena_C::WrapBaseMaterial' has a wrong offset!");

}
