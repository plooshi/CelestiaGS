#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_C4_Detonate

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_C4_Detonate.GA_Athena_C4_Detonate_C.ExecuteUbergraph_GA_Athena_C4_Detonate
// 0x0268 (0x0268 - 0x0000)
struct GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_80AF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBuildingStructuralSupportSystem*       CallFunc_GetBuildingStructuralSupportSystem_BuildingStructuralSupportSystem; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_3;                   // 0x0010(0x0028)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_3;               // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_2;                   // 0x0040(0x0028)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_2;               // 0x0068(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0080(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable_1;                            // 0x0088(0x0028)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyGameplayEffectContainer_ReturnValue; // 0x00B0(0x0010)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_1;                   // 0x00C0(0x0028)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_1;               // 0x00E8(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00F0(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x0100(0x0028)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x0128(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0130(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           Temp_struct_Variable_2;                            // 0x0140(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable_3;                            // 0x0148(0x0028)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyGameplayEffectContainer_ReturnValue_1; // 0x0170(0x0010)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	class UFortAbilityTask_WaitTargetSelection*   CallFunc_WaitTargetSelection_ReturnValue;          // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80B0[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0190(0x00B0)(ConstParm)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80B1[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilityTask_WaitTargetSelection*   CallFunc_WaitTargetSelection_ReturnValue_1;        // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80B2[0x3];                                     // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0254(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate) == 0x000008, "Wrong alignment on GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate");
static_assert(sizeof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate) == 0x000268, "Wrong size on GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, EntryPoint) == 0x000000, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, CallFunc_GetBuildingStructuralSupportSystem_BuildingStructuralSupportSystem) == 0x000008, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::CallFunc_GetBuildingStructuralSupportSystem_BuildingStructuralSupportSystem' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, K2Node_CustomEvent_TargetData_3) == 0x000010, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::K2Node_CustomEvent_TargetData_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, K2Node_CustomEvent_ApplicationTag_3) == 0x000038, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::K2Node_CustomEvent_ApplicationTag_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, K2Node_CustomEvent_TargetData_2) == 0x000040, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::K2Node_CustomEvent_TargetData_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, K2Node_CustomEvent_ApplicationTag_2) == 0x000068, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::K2Node_CustomEvent_ApplicationTag_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, K2Node_CreateDelegate_OutputDelegate) == 0x000070, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, Temp_struct_Variable) == 0x000080, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, Temp_struct_Variable_1) == 0x000088, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, CallFunc_ApplyGameplayEffectContainer_ReturnValue) == 0x0000B0, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::CallFunc_ApplyGameplayEffectContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, K2Node_CustomEvent_TargetData_1) == 0x0000C0, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::K2Node_CustomEvent_TargetData_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, K2Node_CustomEvent_ApplicationTag_1) == 0x0000E8, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::K2Node_CustomEvent_ApplicationTag_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000F0, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, K2Node_CustomEvent_TargetData) == 0x000100, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, K2Node_CustomEvent_ApplicationTag) == 0x000128, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, K2Node_CreateDelegate_OutputDelegate_2) == 0x000130, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, Temp_struct_Variable_2) == 0x000140, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, Temp_struct_Variable_3) == 0x000148, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, CallFunc_ApplyGameplayEffectContainer_ReturnValue_1) == 0x000170, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::CallFunc_ApplyGameplayEffectContainer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, CallFunc_WaitTargetSelection_ReturnValue) == 0x000180, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::CallFunc_WaitTargetSelection_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, CallFunc_IsValid_ReturnValue) == 0x000188, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, K2Node_Event_EventData) == 0x000190, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, CallFunc_K2_CommitAbility_ReturnValue) == 0x000240, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, CallFunc_WaitTargetSelection_ReturnValue_1) == 0x000248, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::CallFunc_WaitTargetSelection_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, CallFunc_IsValid_ReturnValue_1) == 0x000250, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate, K2Node_CreateDelegate_OutputDelegate_3) == 0x000254, "Member 'GA_Athena_C4_Detonate_C_ExecuteUbergraph_GA_Athena_C4_Detonate::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");

// Function GA_Athena_C4_Detonate.GA_Athena_C4_Detonate_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Athena_C4_Detonate_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Athena_C4_Detonate_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_Athena_C4_Detonate_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Athena_C4_Detonate_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_Athena_C4_Detonate_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Athena_C4_Detonate_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_Athena_C4_Detonate_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GA_Athena_C4_Detonate.GA_Athena_C4_Detonate_C.Targeted_A2588DDA41FC64FD22FCD0910567410A
// 0x0030 (0x0030 - 0x0000)
struct GA_Athena_C4_Detonate_C_Targeted_A2588DDA41FC64FD22FCD0910567410A final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_C4_Detonate_C_Targeted_A2588DDA41FC64FD22FCD0910567410A) == 0x000008, "Wrong alignment on GA_Athena_C4_Detonate_C_Targeted_A2588DDA41FC64FD22FCD0910567410A");
static_assert(sizeof(GA_Athena_C4_Detonate_C_Targeted_A2588DDA41FC64FD22FCD0910567410A) == 0x000030, "Wrong size on GA_Athena_C4_Detonate_C_Targeted_A2588DDA41FC64FD22FCD0910567410A");
static_assert(offsetof(GA_Athena_C4_Detonate_C_Targeted_A2588DDA41FC64FD22FCD0910567410A, TargetData) == 0x000000, "Member 'GA_Athena_C4_Detonate_C_Targeted_A2588DDA41FC64FD22FCD0910567410A::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_Targeted_A2588DDA41FC64FD22FCD0910567410A, ApplicationTag) == 0x000028, "Member 'GA_Athena_C4_Detonate_C_Targeted_A2588DDA41FC64FD22FCD0910567410A::ApplicationTag' has a wrong offset!");

// Function GA_Athena_C4_Detonate.GA_Athena_C4_Detonate_C.Cancelled_A2588DDA41FC64FD22FCD0910567410A
// 0x0030 (0x0030 - 0x0000)
struct GA_Athena_C4_Detonate_C_Cancelled_A2588DDA41FC64FD22FCD0910567410A final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_C4_Detonate_C_Cancelled_A2588DDA41FC64FD22FCD0910567410A) == 0x000008, "Wrong alignment on GA_Athena_C4_Detonate_C_Cancelled_A2588DDA41FC64FD22FCD0910567410A");
static_assert(sizeof(GA_Athena_C4_Detonate_C_Cancelled_A2588DDA41FC64FD22FCD0910567410A) == 0x000030, "Wrong size on GA_Athena_C4_Detonate_C_Cancelled_A2588DDA41FC64FD22FCD0910567410A");
static_assert(offsetof(GA_Athena_C4_Detonate_C_Cancelled_A2588DDA41FC64FD22FCD0910567410A, TargetData) == 0x000000, "Member 'GA_Athena_C4_Detonate_C_Cancelled_A2588DDA41FC64FD22FCD0910567410A::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_Cancelled_A2588DDA41FC64FD22FCD0910567410A, ApplicationTag) == 0x000028, "Member 'GA_Athena_C4_Detonate_C_Cancelled_A2588DDA41FC64FD22FCD0910567410A::ApplicationTag' has a wrong offset!");

// Function GA_Athena_C4_Detonate.GA_Athena_C4_Detonate_C.Targeted_0FC6F3A9476E143A48E14F9AC0AF6604
// 0x0030 (0x0030 - 0x0000)
struct GA_Athena_C4_Detonate_C_Targeted_0FC6F3A9476E143A48E14F9AC0AF6604 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_C4_Detonate_C_Targeted_0FC6F3A9476E143A48E14F9AC0AF6604) == 0x000008, "Wrong alignment on GA_Athena_C4_Detonate_C_Targeted_0FC6F3A9476E143A48E14F9AC0AF6604");
static_assert(sizeof(GA_Athena_C4_Detonate_C_Targeted_0FC6F3A9476E143A48E14F9AC0AF6604) == 0x000030, "Wrong size on GA_Athena_C4_Detonate_C_Targeted_0FC6F3A9476E143A48E14F9AC0AF6604");
static_assert(offsetof(GA_Athena_C4_Detonate_C_Targeted_0FC6F3A9476E143A48E14F9AC0AF6604, TargetData) == 0x000000, "Member 'GA_Athena_C4_Detonate_C_Targeted_0FC6F3A9476E143A48E14F9AC0AF6604::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_Targeted_0FC6F3A9476E143A48E14F9AC0AF6604, ApplicationTag) == 0x000028, "Member 'GA_Athena_C4_Detonate_C_Targeted_0FC6F3A9476E143A48E14F9AC0AF6604::ApplicationTag' has a wrong offset!");

// Function GA_Athena_C4_Detonate.GA_Athena_C4_Detonate_C.Cancelled_0FC6F3A9476E143A48E14F9AC0AF6604
// 0x0030 (0x0030 - 0x0000)
struct GA_Athena_C4_Detonate_C_Cancelled_0FC6F3A9476E143A48E14F9AC0AF6604 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_C4_Detonate_C_Cancelled_0FC6F3A9476E143A48E14F9AC0AF6604) == 0x000008, "Wrong alignment on GA_Athena_C4_Detonate_C_Cancelled_0FC6F3A9476E143A48E14F9AC0AF6604");
static_assert(sizeof(GA_Athena_C4_Detonate_C_Cancelled_0FC6F3A9476E143A48E14F9AC0AF6604) == 0x000030, "Wrong size on GA_Athena_C4_Detonate_C_Cancelled_0FC6F3A9476E143A48E14F9AC0AF6604");
static_assert(offsetof(GA_Athena_C4_Detonate_C_Cancelled_0FC6F3A9476E143A48E14F9AC0AF6604, TargetData) == 0x000000, "Member 'GA_Athena_C4_Detonate_C_Cancelled_0FC6F3A9476E143A48E14F9AC0AF6604::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_Detonate_C_Cancelled_0FC6F3A9476E143A48E14F9AC0AF6604, ApplicationTag) == 0x000028, "Member 'GA_Athena_C4_Detonate_C_Cancelled_0FC6F3A9476E143A48E14F9AC0AF6604::ApplicationTag' has a wrong offset!");

}
