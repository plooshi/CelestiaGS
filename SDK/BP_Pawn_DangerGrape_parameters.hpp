#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Pawn_DangerGrape

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Pawn_DangerGrape.BP_Pawn_DangerGrape_C.ExecuteUbergraph_BP_Pawn_DangerGrape
// 0x0108 (0x0108 - 0x0000)
struct BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMobilePlatform_ReturnValue;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A6E[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_Damage;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A6F[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  K2Node_Event_DamageTags;                           // 0x0010(0x0020)(ConstParm)
	struct FVector                                K2Node_Event_Momentum;                             // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_HitInfo;                              // 0x003C(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPawn*                              K2Node_Event_InstigatedBy;                         // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_DamageCauser;                         // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext;                        // 0x00D8(0x0018)()
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape) == 0x000008, "Wrong alignment on BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape");
static_assert(sizeof(BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape) == 0x000108, "Wrong size on BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape");
static_assert(offsetof(BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape, EntryPoint) == 0x000000, "Member 'BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape, CallFunc_IsMobilePlatform_ReturnValue) == 0x000004, "Member 'BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape::CallFunc_IsMobilePlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape, K2Node_Event_Damage) == 0x000008, "Member 'BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape, K2Node_Event_DamageTags) == 0x000010, "Member 'BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape::K2Node_Event_DamageTags' has a wrong offset!");
static_assert(offsetof(BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape, K2Node_Event_Momentum) == 0x000030, "Member 'BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape::K2Node_Event_Momentum' has a wrong offset!");
static_assert(offsetof(BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape, K2Node_Event_HitInfo) == 0x00003C, "Member 'BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape::K2Node_Event_HitInfo' has a wrong offset!");
static_assert(offsetof(BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape, K2Node_Event_InstigatedBy) == 0x0000C8, "Member 'BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape::K2Node_Event_InstigatedBy' has a wrong offset!");
static_assert(offsetof(BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape, K2Node_Event_DamageCauser) == 0x0000D0, "Member 'BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape::K2Node_Event_DamageCauser' has a wrong offset!");
static_assert(offsetof(BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape, K2Node_Event_EffectContext) == 0x0000D8, "Member 'BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape::K2Node_Event_EffectContext' has a wrong offset!");
static_assert(offsetof(BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x0000F0, "Member 'BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000F8, "Member 'BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

// Function BP_Pawn_DangerGrape.BP_Pawn_DangerGrape_C.OnDeathPlayEffects
// 0x00E8 (0x00E8 - 0x0000)
struct BP_Pawn_DangerGrape_C_OnDeathPlayEffects final
{
public:
	float                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A70[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  DamageTags;                                        // 0x0008(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                Momentum;                                          // 0x0028(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             HitInfo;                                           // 0x0034(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPawn*                              InstigatedBy;                                      // 0x00C0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageCauser;                                      // 0x00C8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           EffectContext;                                     // 0x00D0(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_Pawn_DangerGrape_C_OnDeathPlayEffects) == 0x000008, "Wrong alignment on BP_Pawn_DangerGrape_C_OnDeathPlayEffects");
static_assert(sizeof(BP_Pawn_DangerGrape_C_OnDeathPlayEffects) == 0x0000E8, "Wrong size on BP_Pawn_DangerGrape_C_OnDeathPlayEffects");
static_assert(offsetof(BP_Pawn_DangerGrape_C_OnDeathPlayEffects, Damage) == 0x000000, "Member 'BP_Pawn_DangerGrape_C_OnDeathPlayEffects::Damage' has a wrong offset!");
static_assert(offsetof(BP_Pawn_DangerGrape_C_OnDeathPlayEffects, DamageTags) == 0x000008, "Member 'BP_Pawn_DangerGrape_C_OnDeathPlayEffects::DamageTags' has a wrong offset!");
static_assert(offsetof(BP_Pawn_DangerGrape_C_OnDeathPlayEffects, Momentum) == 0x000028, "Member 'BP_Pawn_DangerGrape_C_OnDeathPlayEffects::Momentum' has a wrong offset!");
static_assert(offsetof(BP_Pawn_DangerGrape_C_OnDeathPlayEffects, HitInfo) == 0x000034, "Member 'BP_Pawn_DangerGrape_C_OnDeathPlayEffects::HitInfo' has a wrong offset!");
static_assert(offsetof(BP_Pawn_DangerGrape_C_OnDeathPlayEffects, InstigatedBy) == 0x0000C0, "Member 'BP_Pawn_DangerGrape_C_OnDeathPlayEffects::InstigatedBy' has a wrong offset!");
static_assert(offsetof(BP_Pawn_DangerGrape_C_OnDeathPlayEffects, DamageCauser) == 0x0000C8, "Member 'BP_Pawn_DangerGrape_C_OnDeathPlayEffects::DamageCauser' has a wrong offset!");
static_assert(offsetof(BP_Pawn_DangerGrape_C_OnDeathPlayEffects, EffectContext) == 0x0000D0, "Member 'BP_Pawn_DangerGrape_C_OnDeathPlayEffects::EffectContext' has a wrong offset!");

}
