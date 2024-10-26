#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MangPlayerController_Parent

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function BP_MangPlayerController_Parent.BP_MangPlayerController_Parent_C.ExecuteUbergraph_BP_MangPlayerController_Parent
// 0x0030 (0x0030 - 0x0000)
struct BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DDF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MangPlayerPawn_Parent_C*            K2Node_DynamicCast_AsBP_Mang_Player_Pawn_Parent;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DE0[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue;   // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EAlertLevel                                   K2Node_Event_OldAlertLevel;                        // 0x0023(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlertLevel                                   K2Node_Event_NewAlertLevel;                        // 0x0024(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DE1[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent) == 0x000008, "Wrong alignment on BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent");
static_assert(sizeof(BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent) == 0x000030, "Wrong size on BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent");
static_assert(offsetof(BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent, EntryPoint) == 0x000000, "Member 'BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent, K2Node_DynamicCast_AsBP_Mang_Player_Pawn_Parent) == 0x000008, "Member 'BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent::K2Node_DynamicCast_AsBP_Mang_Player_Pawn_Parent' has a wrong offset!");
static_assert(offsetof(BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000018, "Member 'BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent, CallFunc_RemoveActiveGameplayEffect_ReturnValue) == 0x000022, "Member 'BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent::CallFunc_RemoveActiveGameplayEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent, K2Node_Event_OldAlertLevel) == 0x000023, "Member 'BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent::K2Node_Event_OldAlertLevel' has a wrong offset!");
static_assert(offsetof(BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent, K2Node_Event_NewAlertLevel) == 0x000024, "Member 'BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent::K2Node_Event_NewAlertLevel' has a wrong offset!");
static_assert(offsetof(BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000028, "Member 'BP_MangPlayerController_Parent_C_ExecuteUbergraph_BP_MangPlayerController_Parent::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");

// Function BP_MangPlayerController_Parent.BP_MangPlayerController_Parent_C.OnAlertLevelChanged
// 0x0002 (0x0002 - 0x0000)
struct BP_MangPlayerController_Parent_C_OnAlertLevelChanged final
{
public:
	EAlertLevel                                   OldAlertLevel;                                     // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlertLevel                                   NewAlertLevel;                                     // 0x0001(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MangPlayerController_Parent_C_OnAlertLevelChanged) == 0x000001, "Wrong alignment on BP_MangPlayerController_Parent_C_OnAlertLevelChanged");
static_assert(sizeof(BP_MangPlayerController_Parent_C_OnAlertLevelChanged) == 0x000002, "Wrong size on BP_MangPlayerController_Parent_C_OnAlertLevelChanged");
static_assert(offsetof(BP_MangPlayerController_Parent_C_OnAlertLevelChanged, OldAlertLevel) == 0x000000, "Member 'BP_MangPlayerController_Parent_C_OnAlertLevelChanged::OldAlertLevel' has a wrong offset!");
static_assert(offsetof(BP_MangPlayerController_Parent_C_OnAlertLevelChanged, NewAlertLevel) == 0x000001, "Member 'BP_MangPlayerController_Parent_C_OnAlertLevelChanged::NewAlertLevel' has a wrong offset!");

}

