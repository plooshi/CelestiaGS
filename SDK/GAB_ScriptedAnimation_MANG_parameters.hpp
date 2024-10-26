#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_ScriptedAnimation_MANG

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GAB_ScriptedAnimation_MANG.GAB_ScriptedAnimation_MANG_C.ExecuteUbergraph_GAB_ScriptedAnimation_MANG
// 0x01F0 (0x01F0 - 0x0000)
struct GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_637C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_1;                   // 0x0008(0x0028)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_1;               // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x0048(0x0028)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x0070(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0088(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable_1;                            // 0x0090(0x0028)()
	bool                                          Temp_bool_Variable;                                // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_637D[0x5];                                     // 0x00BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x00C0(0x00B0)(ConstParm)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_637E[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_2;                   // 0x0178(0x0028)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_2;               // 0x01A0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;            // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MangPlayerPawn_Parent_C*            K2Node_DynamicCast_AsBP_Mang_Player_Pawn_Parent;   // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_637F[0x3];                                     // 0x01B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x01BC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6380[0x4];                                     // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           K2Node_Select_Default;                             // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6381[0x3];                                     // 0x01DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue;        // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG) == 0x000008, "Wrong alignment on GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG");
static_assert(sizeof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG) == 0x0001F0, "Wrong size on GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, EntryPoint) == 0x000000, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, K2Node_CustomEvent_TargetData_1) == 0x000008, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::K2Node_CustomEvent_TargetData_1' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, K2Node_CustomEvent_ApplicationTag_1) == 0x000030, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::K2Node_CustomEvent_ApplicationTag_1' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, K2Node_CustomEvent_TargetData) == 0x000048, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, K2Node_CustomEvent_ApplicationTag) == 0x000070, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, K2Node_CreateDelegate_OutputDelegate_1) == 0x000078, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, Temp_struct_Variable) == 0x000088, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, Temp_struct_Variable_1) == 0x000090, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, Temp_bool_Variable) == 0x0000B8, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, Temp_bool_Variable_1) == 0x0000B9, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, K2Node_Event_bWasCancelled) == 0x0000BA, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, K2Node_Event_EventData) == 0x0000C0, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x000170, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, K2Node_CustomEvent_TargetData_2) == 0x000178, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::K2Node_CustomEvent_TargetData_2' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, K2Node_CustomEvent_ApplicationTag_2) == 0x0001A0, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::K2Node_CustomEvent_ApplicationTag_2' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, CallFunc_GetActivatingPawn_ReturnValue) == 0x0001A8, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, K2Node_DynamicCast_AsBP_Mang_Player_Pawn_Parent) == 0x0001B0, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::K2Node_DynamicCast_AsBP_Mang_Player_Pawn_Parent' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, K2Node_DynamicCast_bSuccess) == 0x0001B8, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, K2Node_CreateDelegate_OutputDelegate_2) == 0x0001BC, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, K2Node_Select_Default) == 0x0001D0, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, CallFunc_SelectFloat_ReturnValue) == 0x0001D8, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, CallFunc_IsValid_ReturnValue) == 0x0001DC, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, CallFunc_PlayMontageWaitTarget_ReturnValue) == 0x0001E0, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::CallFunc_PlayMontageWaitTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG, CallFunc_IsValid_ReturnValue_1) == 0x0001E8, "Member 'GAB_ScriptedAnimation_MANG_C_ExecuteUbergraph_GAB_ScriptedAnimation_MANG::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function GAB_ScriptedAnimation_MANG.GAB_ScriptedAnimation_MANG_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GAB_ScriptedAnimation_MANG_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GAB_ScriptedAnimation_MANG_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAB_ScriptedAnimation_MANG_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAB_ScriptedAnimation_MANG_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GAB_ScriptedAnimation_MANG_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAB_ScriptedAnimation_MANG_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GAB_ScriptedAnimation_MANG.GAB_ScriptedAnimation_MANG_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GAB_ScriptedAnimation_MANG_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_ScriptedAnimation_MANG_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GAB_ScriptedAnimation_MANG_C_K2_OnEndAbility");
static_assert(sizeof(GAB_ScriptedAnimation_MANG_C_K2_OnEndAbility) == 0x000001, "Wrong size on GAB_ScriptedAnimation_MANG_C_K2_OnEndAbility");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GAB_ScriptedAnimation_MANG_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GAB_ScriptedAnimation_MANG.GAB_ScriptedAnimation_MANG_C.Triggered_B846A1B544379356B454C590EF50AC75
// 0x0030 (0x0030 - 0x0000)
struct GAB_ScriptedAnimation_MANG_C_Triggered_B846A1B544379356B454C590EF50AC75 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_ScriptedAnimation_MANG_C_Triggered_B846A1B544379356B454C590EF50AC75) == 0x000008, "Wrong alignment on GAB_ScriptedAnimation_MANG_C_Triggered_B846A1B544379356B454C590EF50AC75");
static_assert(sizeof(GAB_ScriptedAnimation_MANG_C_Triggered_B846A1B544379356B454C590EF50AC75) == 0x000030, "Wrong size on GAB_ScriptedAnimation_MANG_C_Triggered_B846A1B544379356B454C590EF50AC75");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_Triggered_B846A1B544379356B454C590EF50AC75, TargetData) == 0x000000, "Member 'GAB_ScriptedAnimation_MANG_C_Triggered_B846A1B544379356B454C590EF50AC75::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_Triggered_B846A1B544379356B454C590EF50AC75, ApplicationTag) == 0x000028, "Member 'GAB_ScriptedAnimation_MANG_C_Triggered_B846A1B544379356B454C590EF50AC75::ApplicationTag' has a wrong offset!");

// Function GAB_ScriptedAnimation_MANG.GAB_ScriptedAnimation_MANG_C.Cancelled_B846A1B544379356B454C590EF50AC75
// 0x0030 (0x0030 - 0x0000)
struct GAB_ScriptedAnimation_MANG_C_Cancelled_B846A1B544379356B454C590EF50AC75 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_ScriptedAnimation_MANG_C_Cancelled_B846A1B544379356B454C590EF50AC75) == 0x000008, "Wrong alignment on GAB_ScriptedAnimation_MANG_C_Cancelled_B846A1B544379356B454C590EF50AC75");
static_assert(sizeof(GAB_ScriptedAnimation_MANG_C_Cancelled_B846A1B544379356B454C590EF50AC75) == 0x000030, "Wrong size on GAB_ScriptedAnimation_MANG_C_Cancelled_B846A1B544379356B454C590EF50AC75");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_Cancelled_B846A1B544379356B454C590EF50AC75, TargetData) == 0x000000, "Member 'GAB_ScriptedAnimation_MANG_C_Cancelled_B846A1B544379356B454C590EF50AC75::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_Cancelled_B846A1B544379356B454C590EF50AC75, ApplicationTag) == 0x000028, "Member 'GAB_ScriptedAnimation_MANG_C_Cancelled_B846A1B544379356B454C590EF50AC75::ApplicationTag' has a wrong offset!");

// Function GAB_ScriptedAnimation_MANG.GAB_ScriptedAnimation_MANG_C.Completed_B846A1B544379356B454C590EF50AC75
// 0x0030 (0x0030 - 0x0000)
struct GAB_ScriptedAnimation_MANG_C_Completed_B846A1B544379356B454C590EF50AC75 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_ScriptedAnimation_MANG_C_Completed_B846A1B544379356B454C590EF50AC75) == 0x000008, "Wrong alignment on GAB_ScriptedAnimation_MANG_C_Completed_B846A1B544379356B454C590EF50AC75");
static_assert(sizeof(GAB_ScriptedAnimation_MANG_C_Completed_B846A1B544379356B454C590EF50AC75) == 0x000030, "Wrong size on GAB_ScriptedAnimation_MANG_C_Completed_B846A1B544379356B454C590EF50AC75");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_Completed_B846A1B544379356B454C590EF50AC75, TargetData) == 0x000000, "Member 'GAB_ScriptedAnimation_MANG_C_Completed_B846A1B544379356B454C590EF50AC75::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_ScriptedAnimation_MANG_C_Completed_B846A1B544379356B454C590EF50AC75, ApplicationTag) == 0x000028, "Member 'GAB_ScriptedAnimation_MANG_C_Completed_B846A1B544379356B454C590EF50AC75::ApplicationTag' has a wrong offset!");

}

