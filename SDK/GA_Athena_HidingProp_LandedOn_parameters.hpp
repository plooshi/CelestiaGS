#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_HidingProp_LandedOn

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_HidingProp_LandedOn.GA_Athena_HidingProp_LandedOn_C.ExecuteUbergraph_GA_Athena_HidingProp_LandedOn
// 0x0178 (0x0178 - 0x0000)
struct GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5578[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0008(0x00B0)(ConstParm)
	float                                         CallFunc_GetValueAtLevel_ReturnValue;              // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5579[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x00C0(0x00B0)()
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn) == 0x000008, "Wrong alignment on GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn");
static_assert(sizeof(GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn) == 0x000178, "Wrong size on GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn");
static_assert(offsetof(GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn, EntryPoint) == 0x000000, "Member 'GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn, CallFunc_IsServer_ReturnValue) == 0x000004, "Member 'GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn, K2Node_Event_EventData) == 0x000008, "Member 'GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn, CallFunc_GetValueAtLevel_ReturnValue) == 0x0000B8, "Member 'GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn, K2Node_MakeStruct_GameplayEventData) == 0x0000C0, "Member 'GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000170, "Member 'GA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function GA_Athena_HidingProp_LandedOn.GA_Athena_HidingProp_LandedOn_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Athena_HidingProp_LandedOn_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Athena_HidingProp_LandedOn_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_Athena_HidingProp_LandedOn_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Athena_HidingProp_LandedOn_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_Athena_HidingProp_LandedOn_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Athena_HidingProp_LandedOn_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_Athena_HidingProp_LandedOn_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}
