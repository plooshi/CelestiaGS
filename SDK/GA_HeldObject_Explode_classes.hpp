#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_HeldObject_Explode

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_HeldObject_Explode.GA_HeldObject_Explode_C
// 0x0088 (0x0B00 - 0x0A78)
class UGA_HeldObject_Explode_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FScalableFloat                         KnockbackStrength;                                 // 0x0A80(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         VehicleImpulseStrength;                            // 0x0AA0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         VehicleImpulseStrengthZ;                           // 0x0AC0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                 CurrentPlayerToLaunch;                             // 0x0AE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_Explode;                                        // 0x0AE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Instigator;                                        // 0x0AF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAbilitySystemComponent*            InstigatorAbility;                                 // 0x0AF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_HeldObject_Explode(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void Targeted_CB46D31E40DE0E96BD9CEBB5B054252D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_CB46D31E40DE0E96BD9CEBB5B054252D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	struct FGameplayEffectContextHandle MakeEffectContext();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_HeldObject_Explode_C">();
	}
	static class UGA_HeldObject_Explode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_HeldObject_Explode_C>();
	}
};
static_assert(alignof(UGA_HeldObject_Explode_C) == 0x000008, "Wrong alignment on UGA_HeldObject_Explode_C");
static_assert(sizeof(UGA_HeldObject_Explode_C) == 0x000B00, "Wrong size on UGA_HeldObject_Explode_C");
static_assert(offsetof(UGA_HeldObject_Explode_C, UberGraphFrame) == 0x000A78, "Member 'UGA_HeldObject_Explode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_HeldObject_Explode_C, KnockbackStrength) == 0x000A80, "Member 'UGA_HeldObject_Explode_C::KnockbackStrength' has a wrong offset!");
static_assert(offsetof(UGA_HeldObject_Explode_C, VehicleImpulseStrength) == 0x000AA0, "Member 'UGA_HeldObject_Explode_C::VehicleImpulseStrength' has a wrong offset!");
static_assert(offsetof(UGA_HeldObject_Explode_C, VehicleImpulseStrengthZ) == 0x000AC0, "Member 'UGA_HeldObject_Explode_C::VehicleImpulseStrengthZ' has a wrong offset!");
static_assert(offsetof(UGA_HeldObject_Explode_C, CurrentPlayerToLaunch) == 0x000AE0, "Member 'UGA_HeldObject_Explode_C::CurrentPlayerToLaunch' has a wrong offset!");
static_assert(offsetof(UGA_HeldObject_Explode_C, GE_Explode) == 0x000AE8, "Member 'UGA_HeldObject_Explode_C::GE_Explode' has a wrong offset!");
static_assert(offsetof(UGA_HeldObject_Explode_C, Instigator) == 0x000AF0, "Member 'UGA_HeldObject_Explode_C::Instigator' has a wrong offset!");
static_assert(offsetof(UGA_HeldObject_Explode_C, InstigatorAbility) == 0x000AF8, "Member 'UGA_HeldObject_Explode_C::InstigatorAbility' has a wrong offset!");

}

