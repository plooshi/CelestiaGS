#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Transylvania_FireLight_Master

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Curie_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Transylvania_LightMaster_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Transylvania_FireLight_Master.Transylvania_FireLight_Master_C
// 0x0080 (0x0D28 - 0x0CA8)
class ATransylvania_FireLight_Master_C : public ATransylvania_LightMaster_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Transylvania_FireLight_Master_C;    // 0x0CA8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Fire_CollisionVolume;                              // 0x0CB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Fire_Sound;                                        // 0x0CB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Brazier_Fire;                                      // 0x0CC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BloomPlane;                                        // 0x0CC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Turn_Off;                                          // 0x0CD0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74D5[0x7];                                     // 0x0CD1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class AActor*, struct FCurieInteractHandle> InteractHandleMap;                                 // 0x0CD8(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Transylvania_FireLight_Master(int32 EntryPoint);
	void ReceiveDestroyed();
	void BndEvt__Fire_CollisionVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__Fire_CollisionVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void CheckInitialOverlappingActors();
	void ReceiveBeginPlay();
	void Call_Animation_Curve_Again();
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnReady_F28DABB3426DBD6BC5FECD8F7077AF93(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void UserConstructionScript();

	void ShouldPlayNativeCurieFX(EFortCurieNativeFXType FXType, struct FFortNativeCurieFXResponse* OutResponse) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Transylvania_FireLight_Master_C">();
	}
	static class ATransylvania_FireLight_Master_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATransylvania_FireLight_Master_C>();
	}
};
static_assert(alignof(ATransylvania_FireLight_Master_C) == 0x000008, "Wrong alignment on ATransylvania_FireLight_Master_C");
static_assert(sizeof(ATransylvania_FireLight_Master_C) == 0x000D28, "Wrong size on ATransylvania_FireLight_Master_C");
static_assert(offsetof(ATransylvania_FireLight_Master_C, UberGraphFrame_Transylvania_FireLight_Master_C) == 0x000CA8, "Member 'ATransylvania_FireLight_Master_C::UberGraphFrame_Transylvania_FireLight_Master_C' has a wrong offset!");
static_assert(offsetof(ATransylvania_FireLight_Master_C, Fire_CollisionVolume) == 0x000CB0, "Member 'ATransylvania_FireLight_Master_C::Fire_CollisionVolume' has a wrong offset!");
static_assert(offsetof(ATransylvania_FireLight_Master_C, Fire_Sound) == 0x000CB8, "Member 'ATransylvania_FireLight_Master_C::Fire_Sound' has a wrong offset!");
static_assert(offsetof(ATransylvania_FireLight_Master_C, Brazier_Fire) == 0x000CC0, "Member 'ATransylvania_FireLight_Master_C::Brazier_Fire' has a wrong offset!");
static_assert(offsetof(ATransylvania_FireLight_Master_C, BloomPlane) == 0x000CC8, "Member 'ATransylvania_FireLight_Master_C::BloomPlane' has a wrong offset!");
static_assert(offsetof(ATransylvania_FireLight_Master_C, Turn_Off) == 0x000CD0, "Member 'ATransylvania_FireLight_Master_C::Turn_Off' has a wrong offset!");
static_assert(offsetof(ATransylvania_FireLight_Master_C, InteractHandleMap) == 0x000CD8, "Member 'ATransylvania_FireLight_Master_C::InteractHandleMap' has a wrong offset!");

}

