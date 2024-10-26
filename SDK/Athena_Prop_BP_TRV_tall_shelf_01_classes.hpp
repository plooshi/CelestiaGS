#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Prop_BP_TRV_tall_shelf_01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Athena_Prop_BP_TRV_tall_shelf_01.Athena_Prop_BP_TRV_tall_shelf_01_C
// 0x0018 (0x0BD8 - 0x0BC0)
class AAthena_Prop_BP_TRV_tall_shelf_01_C final : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BC0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Sound_Flies;                                       // 0x0BC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Flies;                                             // 0x0BD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Athena_Prop_BP_TRV_tall_shelf_01(int32 EntryPoint);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_Prop_BP_TRV_tall_shelf_01_C">();
	}
	static class AAthena_Prop_BP_TRV_tall_shelf_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthena_Prop_BP_TRV_tall_shelf_01_C>();
	}
};
static_assert(alignof(AAthena_Prop_BP_TRV_tall_shelf_01_C) == 0x000008, "Wrong alignment on AAthena_Prop_BP_TRV_tall_shelf_01_C");
static_assert(sizeof(AAthena_Prop_BP_TRV_tall_shelf_01_C) == 0x000BD8, "Wrong size on AAthena_Prop_BP_TRV_tall_shelf_01_C");
static_assert(offsetof(AAthena_Prop_BP_TRV_tall_shelf_01_C, UberGraphFrame) == 0x000BC0, "Member 'AAthena_Prop_BP_TRV_tall_shelf_01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_BP_TRV_tall_shelf_01_C, Sound_Flies) == 0x000BC8, "Member 'AAthena_Prop_BP_TRV_tall_shelf_01_C::Sound_Flies' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_BP_TRV_tall_shelf_01_C, Flies) == 0x000BD0, "Member 'AAthena_Prop_BP_TRV_tall_shelf_01_C::Flies' has a wrong offset!");

}

