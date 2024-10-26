#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SeasonalFirework

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SeasonalFirework.BP_SeasonalFirework_C
// 0x0040 (0x08A8 - 0x0868)
class ABP_SeasonalFirework_C final : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0868(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NiagaraExplosion;                                  // 0x0870(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Firework;                                          // 0x0878(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x0880(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_FrozenFirework_Sparks;                           // 0x0888(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         HotFixSoundOnOff;                                  // 0x0890(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7615[0x4];                                     // 0x0894(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCurveTableRowHandle                   SoundOffHotfix;                                    // 0x0898(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SeasonalFirework(int32 EntryPoint);
	void Cleanup();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void Kaboom();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SeasonalFirework_C">();
	}
	static class ABP_SeasonalFirework_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SeasonalFirework_C>();
	}
};
static_assert(alignof(ABP_SeasonalFirework_C) == 0x000008, "Wrong alignment on ABP_SeasonalFirework_C");
static_assert(sizeof(ABP_SeasonalFirework_C) == 0x0008A8, "Wrong size on ABP_SeasonalFirework_C");
static_assert(offsetof(ABP_SeasonalFirework_C, UberGraphFrame) == 0x000868, "Member 'ABP_SeasonalFirework_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFirework_C, NiagaraExplosion) == 0x000870, "Member 'ABP_SeasonalFirework_C::NiagaraExplosion' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFirework_C, Firework) == 0x000878, "Member 'ABP_SeasonalFirework_C::Firework' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFirework_C, Audio) == 0x000880, "Member 'ABP_SeasonalFirework_C::Audio' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFirework_C, P_FrozenFirework_Sparks) == 0x000888, "Member 'ABP_SeasonalFirework_C::P_FrozenFirework_Sparks' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFirework_C, HotFixSoundOnOff) == 0x000890, "Member 'ABP_SeasonalFirework_C::HotFixSoundOnOff' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFirework_C, SoundOffHotfix) == 0x000898, "Member 'ABP_SeasonalFirework_C::SoundOffHotfix' has a wrong offset!");

}

