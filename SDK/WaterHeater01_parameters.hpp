#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WaterHeater01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WaterHeater01.WaterHeater01_C.ExecuteUbergraph_WaterHeater01
// 0x01F0 (0x01F0 - 0x0000)
struct WaterHeater01_C_ExecuteUbergraph_WaterHeater01 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8759[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_Damage_1;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  K2Node_Event_DamageTags_1;                         // 0x0018(0x0020)(ConstParm)
	struct FVector                                K2Node_Event_Momentum_1;                           // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_HitInfo_1;                            // 0x0044(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPawn*                              K2Node_Event_InstigatedBy_1;                       // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_DamageCauser_1;                       // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext_1;                      // 0x00E0(0x0018)()
	float                                         K2Node_Event_Damage;                               // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_875A[0x4];                                     // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  K2Node_Event_DamageTags;                           // 0x0100(0x0020)(ConstParm)
	struct FVector                                K2Node_Event_Momentum;                             // 0x0120(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_HitInfo;                              // 0x012C(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPawn*                              K2Node_Event_InstigatedBy;                         // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_DamageCauser;                         // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext;                        // 0x01C8(0x0018)()
	class FName                                   K2Node_ComponentBoundEvent_EventName;              // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_EmitterTime;            // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_ParticleCount;          // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WaterHeater01_C_ExecuteUbergraph_WaterHeater01) == 0x000008, "Wrong alignment on WaterHeater01_C_ExecuteUbergraph_WaterHeater01");
static_assert(sizeof(WaterHeater01_C_ExecuteUbergraph_WaterHeater01) == 0x0001F0, "Wrong size on WaterHeater01_C_ExecuteUbergraph_WaterHeater01");
static_assert(offsetof(WaterHeater01_C_ExecuteUbergraph_WaterHeater01, EntryPoint) == 0x000000, "Member 'WaterHeater01_C_ExecuteUbergraph_WaterHeater01::EntryPoint' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_ExecuteUbergraph_WaterHeater01, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000004, "Member 'WaterHeater01_C_ExecuteUbergraph_WaterHeater01::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_ExecuteUbergraph_WaterHeater01, Temp_bool_Has_Been_Initd_Variable) == 0x000010, "Member 'WaterHeater01_C_ExecuteUbergraph_WaterHeater01::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_ExecuteUbergraph_WaterHeater01, Temp_bool_IsClosed_Variable) == 0x000011, "Member 'WaterHeater01_C_ExecuteUbergraph_WaterHeater01::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_ExecuteUbergraph_WaterHeater01, K2Node_Event_Damage_1) == 0x000014, "Member 'WaterHeater01_C_ExecuteUbergraph_WaterHeater01::K2Node_Event_Damage_1' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_ExecuteUbergraph_WaterHeater01, K2Node_Event_DamageTags_1) == 0x000018, "Member 'WaterHeater01_C_ExecuteUbergraph_WaterHeater01::K2Node_Event_DamageTags_1' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_ExecuteUbergraph_WaterHeater01, K2Node_Event_Momentum_1) == 0x000038, "Member 'WaterHeater01_C_ExecuteUbergraph_WaterHeater01::K2Node_Event_Momentum_1' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_ExecuteUbergraph_WaterHeater01, K2Node_Event_HitInfo_1) == 0x000044, "Member 'WaterHeater01_C_ExecuteUbergraph_WaterHeater01::K2Node_Event_HitInfo_1' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_ExecuteUbergraph_WaterHeater01, K2Node_Event_InstigatedBy_1) == 0x0000D0, "Member 'WaterHeater01_C_ExecuteUbergraph_WaterHeater01::K2Node_Event_InstigatedBy_1' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_ExecuteUbergraph_WaterHeater01, K2Node_Event_DamageCauser_1) == 0x0000D8, "Member 'WaterHeater01_C_ExecuteUbergraph_WaterHeater01::K2Node_Event_DamageCauser_1' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_ExecuteUbergraph_WaterHeater01, K2Node_Event_EffectContext_1) == 0x0000E0, "Member 'WaterHeater01_C_ExecuteUbergraph_WaterHeater01::K2Node_Event_EffectContext_1' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_ExecuteUbergraph_WaterHeater01, K2Node_Event_Damage) == 0x0000F8, "Member 'WaterHeater01_C_ExecuteUbergraph_WaterHeater01::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_ExecuteUbergraph_WaterHeater01, K2Node_Event_DamageTags) == 0x000100, "Member 'WaterHeater01_C_ExecuteUbergraph_WaterHeater01::K2Node_Event_DamageTags' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_ExecuteUbergraph_WaterHeater01, K2Node_Event_Momentum) == 0x000120, "Member 'WaterHeater01_C_ExecuteUbergraph_WaterHeater01::K2Node_Event_Momentum' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_ExecuteUbergraph_WaterHeater01, K2Node_Event_HitInfo) == 0x00012C, "Member 'WaterHeater01_C_ExecuteUbergraph_WaterHeater01::K2Node_Event_HitInfo' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_ExecuteUbergraph_WaterHeater01, K2Node_Event_InstigatedBy) == 0x0001B8, "Member 'WaterHeater01_C_ExecuteUbergraph_WaterHeater01::K2Node_Event_InstigatedBy' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_ExecuteUbergraph_WaterHeater01, K2Node_Event_DamageCauser) == 0x0001C0, "Member 'WaterHeater01_C_ExecuteUbergraph_WaterHeater01::K2Node_Event_DamageCauser' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_ExecuteUbergraph_WaterHeater01, K2Node_Event_EffectContext) == 0x0001C8, "Member 'WaterHeater01_C_ExecuteUbergraph_WaterHeater01::K2Node_Event_EffectContext' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_ExecuteUbergraph_WaterHeater01, K2Node_ComponentBoundEvent_EventName) == 0x0001E0, "Member 'WaterHeater01_C_ExecuteUbergraph_WaterHeater01::K2Node_ComponentBoundEvent_EventName' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_ExecuteUbergraph_WaterHeater01, K2Node_ComponentBoundEvent_EmitterTime) == 0x0001E8, "Member 'WaterHeater01_C_ExecuteUbergraph_WaterHeater01::K2Node_ComponentBoundEvent_EmitterTime' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_ExecuteUbergraph_WaterHeater01, K2Node_ComponentBoundEvent_ParticleCount) == 0x0001EC, "Member 'WaterHeater01_C_ExecuteUbergraph_WaterHeater01::K2Node_ComponentBoundEvent_ParticleCount' has a wrong offset!");

// Function WaterHeater01.WaterHeater01_C.BndEvt__Effect_Damage_Zap_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WaterHeater01_C_BndEvt__Effect_Damage_Zap_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature final
{
public:
	class FName                                   EventName;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EmitterTime;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ParticleCount;                                     // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WaterHeater01_C_BndEvt__Effect_Damage_Zap_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature) == 0x000004, "Wrong alignment on WaterHeater01_C_BndEvt__Effect_Damage_Zap_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature");
static_assert(sizeof(WaterHeater01_C_BndEvt__Effect_Damage_Zap_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature) == 0x000010, "Wrong size on WaterHeater01_C_BndEvt__Effect_Damage_Zap_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature");
static_assert(offsetof(WaterHeater01_C_BndEvt__Effect_Damage_Zap_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature, EventName) == 0x000000, "Member 'WaterHeater01_C_BndEvt__Effect_Damage_Zap_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature::EventName' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_BndEvt__Effect_Damage_Zap_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature, EmitterTime) == 0x000008, "Member 'WaterHeater01_C_BndEvt__Effect_Damage_Zap_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature::EmitterTime' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_BndEvt__Effect_Damage_Zap_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature, ParticleCount) == 0x00000C, "Member 'WaterHeater01_C_BndEvt__Effect_Damage_Zap_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature::ParticleCount' has a wrong offset!");

// Function WaterHeater01.WaterHeater01_C.OnDeathPlayEffects
// 0x00E8 (0x00E8 - 0x0000)
struct WaterHeater01_C_OnDeathPlayEffects final
{
public:
	float                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_875B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  DamageTags;                                        // 0x0008(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                Momentum;                                          // 0x0028(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             HitInfo;                                           // 0x0034(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPawn*                              InstigatedBy;                                      // 0x00C0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageCauser;                                      // 0x00C8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           EffectContext;                                     // 0x00D0(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WaterHeater01_C_OnDeathPlayEffects) == 0x000008, "Wrong alignment on WaterHeater01_C_OnDeathPlayEffects");
static_assert(sizeof(WaterHeater01_C_OnDeathPlayEffects) == 0x0000E8, "Wrong size on WaterHeater01_C_OnDeathPlayEffects");
static_assert(offsetof(WaterHeater01_C_OnDeathPlayEffects, Damage) == 0x000000, "Member 'WaterHeater01_C_OnDeathPlayEffects::Damage' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_OnDeathPlayEffects, DamageTags) == 0x000008, "Member 'WaterHeater01_C_OnDeathPlayEffects::DamageTags' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_OnDeathPlayEffects, Momentum) == 0x000028, "Member 'WaterHeater01_C_OnDeathPlayEffects::Momentum' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_OnDeathPlayEffects, HitInfo) == 0x000034, "Member 'WaterHeater01_C_OnDeathPlayEffects::HitInfo' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_OnDeathPlayEffects, InstigatedBy) == 0x0000C0, "Member 'WaterHeater01_C_OnDeathPlayEffects::InstigatedBy' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_OnDeathPlayEffects, DamageCauser) == 0x0000C8, "Member 'WaterHeater01_C_OnDeathPlayEffects::DamageCauser' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_OnDeathPlayEffects, EffectContext) == 0x0000D0, "Member 'WaterHeater01_C_OnDeathPlayEffects::EffectContext' has a wrong offset!");

// Function WaterHeater01.WaterHeater01_C.OnDamagePlayEffects
// 0x00E8 (0x00E8 - 0x0000)
struct WaterHeater01_C_OnDamagePlayEffects final
{
public:
	float                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_875C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  DamageTags;                                        // 0x0008(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                Momentum;                                          // 0x0028(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             HitInfo;                                           // 0x0034(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPawn*                              InstigatedBy;                                      // 0x00C0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageCauser;                                      // 0x00C8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           EffectContext;                                     // 0x00D0(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WaterHeater01_C_OnDamagePlayEffects) == 0x000008, "Wrong alignment on WaterHeater01_C_OnDamagePlayEffects");
static_assert(sizeof(WaterHeater01_C_OnDamagePlayEffects) == 0x0000E8, "Wrong size on WaterHeater01_C_OnDamagePlayEffects");
static_assert(offsetof(WaterHeater01_C_OnDamagePlayEffects, Damage) == 0x000000, "Member 'WaterHeater01_C_OnDamagePlayEffects::Damage' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_OnDamagePlayEffects, DamageTags) == 0x000008, "Member 'WaterHeater01_C_OnDamagePlayEffects::DamageTags' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_OnDamagePlayEffects, Momentum) == 0x000028, "Member 'WaterHeater01_C_OnDamagePlayEffects::Momentum' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_OnDamagePlayEffects, HitInfo) == 0x000034, "Member 'WaterHeater01_C_OnDamagePlayEffects::HitInfo' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_OnDamagePlayEffects, InstigatedBy) == 0x0000C0, "Member 'WaterHeater01_C_OnDamagePlayEffects::InstigatedBy' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_OnDamagePlayEffects, DamageCauser) == 0x0000C8, "Member 'WaterHeater01_C_OnDamagePlayEffects::DamageCauser' has a wrong offset!");
static_assert(offsetof(WaterHeater01_C_OnDamagePlayEffects, EffectContext) == 0x0000D0, "Member 'WaterHeater01_C_OnDamagePlayEffects::EffectContext' has a wrong offset!");

}
