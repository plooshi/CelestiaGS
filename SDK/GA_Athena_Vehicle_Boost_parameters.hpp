#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Vehicle_Boost

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_Vehicle_Boost.GA_Athena_Vehicle_Boost_C.ExecuteUbergraph_GA_Athena_Vehicle_Boost
// 0x02D8 (0x02D8 - 0x0000)
struct GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84F1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x0008(0x00B0)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x00C0(0x00B8)(ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84F2[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0180(0x0048)(ContainsInstancedReference)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84F3[0x6];                                     // 0x01D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x01D8(0x0028)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x0200(0x0010)(ReferenceParm, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0210(0x00B0)()
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;              // 0x02C0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost) == 0x000008, "Wrong alignment on GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost");
static_assert(sizeof(GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost) == 0x0002D8, "Wrong size on GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost");
static_assert(offsetof(GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost, EntryPoint) == 0x000000, "Member 'GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost, Temp_struct_Variable) == 0x000008, "Member 'GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost, CallFunc_WaitGameplayEvent_ReturnValue) == 0x0000B8, "Member 'GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x0000C0, "Member 'GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost, CallFunc_IsValid_ReturnValue) == 0x000178, "Member 'GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost, CallFunc_GetActorInfo_ReturnValue) == 0x000180, "Member 'GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0001C8, "Member 'GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost, K2Node_DynamicCast_bSuccess) == 0x0001D0, "Member 'GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost, CallFunc_K2_CommitAbility_ReturnValue) == 0x0001D1, "Member 'GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x0001D8, "Member 'GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000200, "Member 'GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost, K2Node_CustomEvent_Payload) == 0x000210, "Member 'GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost, K2Node_CreateDelegate_OutputDelegate) == 0x0002C0, "Member 'GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost, K2Node_Event_bWasCancelled) == 0x0002D0, "Member 'GA_Athena_Vehicle_Boost_C_ExecuteUbergraph_GA_Athena_Vehicle_Boost::K2Node_Event_bWasCancelled' has a wrong offset!");

// Function GA_Athena_Vehicle_Boost.GA_Athena_Vehicle_Boost_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Athena_Vehicle_Boost_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Athena_Vehicle_Boost_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Athena_Vehicle_Boost_C_K2_OnEndAbility");
static_assert(sizeof(GA_Athena_Vehicle_Boost_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Athena_Vehicle_Boost_C_K2_OnEndAbility");
static_assert(offsetof(GA_Athena_Vehicle_Boost_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Athena_Vehicle_Boost_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Athena_Vehicle_Boost.GA_Athena_Vehicle_Boost_C.EventReceived_E4232094451482BC683CB7B08344D26A
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Athena_Vehicle_Boost_C_EventReceived_E4232094451482BC683CB7B08344D26A final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Athena_Vehicle_Boost_C_EventReceived_E4232094451482BC683CB7B08344D26A) == 0x000008, "Wrong alignment on GA_Athena_Vehicle_Boost_C_EventReceived_E4232094451482BC683CB7B08344D26A");
static_assert(sizeof(GA_Athena_Vehicle_Boost_C_EventReceived_E4232094451482BC683CB7B08344D26A) == 0x0000B0, "Wrong size on GA_Athena_Vehicle_Boost_C_EventReceived_E4232094451482BC683CB7B08344D26A");
static_assert(offsetof(GA_Athena_Vehicle_Boost_C_EventReceived_E4232094451482BC683CB7B08344D26A, Payload) == 0x000000, "Member 'GA_Athena_Vehicle_Boost_C_EventReceived_E4232094451482BC683CB7B08344D26A::Payload' has a wrong offset!");

}
