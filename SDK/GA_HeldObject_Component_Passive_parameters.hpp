#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_HeldObject_Component_Passive

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C.ExecuteUbergraph_GA_HeldObject_Component_Passive
// 0x0200 (0x0200 - 0x0000)
struct GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_522B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0008(0x00B0)()
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;              // 0x00B8(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00C8(0x00B0)()
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_522C[0x3];                                     // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x017C(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_522D[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_522E[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHeldObjectComponent*               CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue; // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue;           // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_522F[0x6];                                     // 0x01B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;           // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5230[0x3];                                     // 0x01C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x01CC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5231[0x4];                                     // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHeldObjectComponent*               CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue_1; // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5232[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive) == 0x000008, "Wrong alignment on GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive");
static_assert(sizeof(GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive) == 0x000200, "Wrong size on GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive");
static_assert(offsetof(GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive, EntryPoint) == 0x000000, "Member 'GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive, K2Node_CustomEvent_Payload) == 0x000008, "Member 'GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive, K2Node_CreateDelegate_OutputDelegate) == 0x0000B8, "Member 'GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive, Temp_struct_Variable) == 0x0000C8, "Member 'GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive, K2Node_Event_bWasCancelled) == 0x000178, "Member 'GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x00017C, "Member 'GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000188, "Member 'GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000190, "Member 'GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive, K2Node_DynamicCast_bSuccess) == 0x000198, "Member 'GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive, CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue) == 0x0001A0, "Member 'GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive::CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive, CallFunc_WaitGameplayTagAdd_ReturnValue) == 0x0001A8, "Member 'GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive::CallFunc_WaitGameplayTagAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive, CallFunc_IsValid_ReturnValue) == 0x0001B0, "Member 'GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive, CallFunc_IsValid_ReturnValue_1) == 0x0001B1, "Member 'GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x0001B8, "Member 'GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x0001C0, "Member 'GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive, K2Node_DynamicCast_bSuccess_1) == 0x0001C8, "Member 'GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001CC, "Member 'GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive, CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue_1) == 0x0001E0, "Member 'GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive::CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive, CallFunc_IsValid_ReturnValue_2) == 0x0001E8, "Member 'GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive, CallFunc_WaitGameplayEvent_ReturnValue) == 0x0001F0, "Member 'GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive, CallFunc_IsValid_ReturnValue_3) == 0x0001F8, "Member 'GA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_HeldObject_Component_Passive_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_HeldObject_Component_Passive_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_HeldObject_Component_Passive_C_K2_OnEndAbility");
static_assert(sizeof(GA_HeldObject_Component_Passive_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_HeldObject_Component_Passive_C_K2_OnEndAbility");
static_assert(offsetof(GA_HeldObject_Component_Passive_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_HeldObject_Component_Passive_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C.EventReceived_DD24550D4856E973AC41D9BDAECD0498
// 0x00B0 (0x00B0 - 0x0000)
struct GA_HeldObject_Component_Passive_C_EventReceived_DD24550D4856E973AC41D9BDAECD0498 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_HeldObject_Component_Passive_C_EventReceived_DD24550D4856E973AC41D9BDAECD0498) == 0x000008, "Wrong alignment on GA_HeldObject_Component_Passive_C_EventReceived_DD24550D4856E973AC41D9BDAECD0498");
static_assert(sizeof(GA_HeldObject_Component_Passive_C_EventReceived_DD24550D4856E973AC41D9BDAECD0498) == 0x0000B0, "Wrong size on GA_HeldObject_Component_Passive_C_EventReceived_DD24550D4856E973AC41D9BDAECD0498");
static_assert(offsetof(GA_HeldObject_Component_Passive_C_EventReceived_DD24550D4856E973AC41D9BDAECD0498, Payload) == 0x000000, "Member 'GA_HeldObject_Component_Passive_C_EventReceived_DD24550D4856E973AC41D9BDAECD0498::Payload' has a wrong offset!");

}
