#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_TillLandFallDamageImmunity_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C
// 0x0050 (0x0AC8 - 0x0A78)
class UGA_Athena_TillLandFallDamageImmunity_Parent_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 GE_FallDamageImmunity;                             // 0x0A80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            GEH_FallDamageImmunity;                            // 0x0A88(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Delay_PostLand;                                    // 0x0A90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Tag_SurfaceSwimming;                               // 0x0A94(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BD0[0x4];                                     // 0x0A9C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  TC_IgnoreApplication;                              // 0x0AA0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           Tag_InVehicle;                                     // 0x0AC0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent(int32 EntryPoint);
	void PawnLanded(const struct FHitResult& Hit);
	void SetUpBinds();
	void SetUpWaits();
	void CallEnd();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void Added_15DBA1504E74C72F22BBCBAD8E3CD31E();
	void Added_3DBE819D4ED6A0A0909A7690321F9B09();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_TillLandFallDamageImmunity_Parent_C">();
	}
	static class UGA_Athena_TillLandFallDamageImmunity_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_TillLandFallDamageImmunity_Parent_C>();
	}
};
static_assert(alignof(UGA_Athena_TillLandFallDamageImmunity_Parent_C) == 0x000008, "Wrong alignment on UGA_Athena_TillLandFallDamageImmunity_Parent_C");
static_assert(sizeof(UGA_Athena_TillLandFallDamageImmunity_Parent_C) == 0x000AC8, "Wrong size on UGA_Athena_TillLandFallDamageImmunity_Parent_C");
static_assert(offsetof(UGA_Athena_TillLandFallDamageImmunity_Parent_C, UberGraphFrame) == 0x000A78, "Member 'UGA_Athena_TillLandFallDamageImmunity_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_TillLandFallDamageImmunity_Parent_C, GE_FallDamageImmunity) == 0x000A80, "Member 'UGA_Athena_TillLandFallDamageImmunity_Parent_C::GE_FallDamageImmunity' has a wrong offset!");
static_assert(offsetof(UGA_Athena_TillLandFallDamageImmunity_Parent_C, GEH_FallDamageImmunity) == 0x000A88, "Member 'UGA_Athena_TillLandFallDamageImmunity_Parent_C::GEH_FallDamageImmunity' has a wrong offset!");
static_assert(offsetof(UGA_Athena_TillLandFallDamageImmunity_Parent_C, Delay_PostLand) == 0x000A90, "Member 'UGA_Athena_TillLandFallDamageImmunity_Parent_C::Delay_PostLand' has a wrong offset!");
static_assert(offsetof(UGA_Athena_TillLandFallDamageImmunity_Parent_C, Tag_SurfaceSwimming) == 0x000A94, "Member 'UGA_Athena_TillLandFallDamageImmunity_Parent_C::Tag_SurfaceSwimming' has a wrong offset!");
static_assert(offsetof(UGA_Athena_TillLandFallDamageImmunity_Parent_C, TC_IgnoreApplication) == 0x000AA0, "Member 'UGA_Athena_TillLandFallDamageImmunity_Parent_C::TC_IgnoreApplication' has a wrong offset!");
static_assert(offsetof(UGA_Athena_TillLandFallDamageImmunity_Parent_C, Tag_InVehicle) == 0x000AC0, "Member 'UGA_Athena_TillLandFallDamageImmunity_Parent_C::Tag_InVehicle' has a wrong offset!");

}
