#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Athena_Item_SuperDingo_Spawned

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Athena_Item_SuperDingo_Spawned.GCN_Athena_Item_SuperDingo_Spawned_C
// 0x0008 (0x01C0 - 0x01B8)
class UGCN_Athena_Item_SuperDingo_Spawned_C final : public UFortGameplayCueNotify_Burst
{
public:
	bool                                          Debug;                                             // 0x01B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Athena_Item_SuperDingo_Spawned_C">();
	}
	static class UGCN_Athena_Item_SuperDingo_Spawned_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Athena_Item_SuperDingo_Spawned_C>();
	}
};
static_assert(alignof(UGCN_Athena_Item_SuperDingo_Spawned_C) == 0x000008, "Wrong alignment on UGCN_Athena_Item_SuperDingo_Spawned_C");
static_assert(sizeof(UGCN_Athena_Item_SuperDingo_Spawned_C) == 0x0001C0, "Wrong size on UGCN_Athena_Item_SuperDingo_Spawned_C");
static_assert(offsetof(UGCN_Athena_Item_SuperDingo_Spawned_C, Debug) == 0x0001B8, "Member 'UGCN_Athena_Item_SuperDingo_Spawned_C::Debug' has a wrong offset!");

}

