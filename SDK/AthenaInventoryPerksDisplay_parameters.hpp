#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaInventoryPerksDisplay

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function AthenaInventoryPerksDisplay.AthenaInventoryPerksDisplay_C.EventShowPerkDetails__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct AthenaInventoryPerksDisplay_C_EventShowPerkDetails__DelegateSignature final
{
public:
	bool                                          Param_Show;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaInventoryPerksDisplay_C_EventShowPerkDetails__DelegateSignature) == 0x000001, "Wrong alignment on AthenaInventoryPerksDisplay_C_EventShowPerkDetails__DelegateSignature");
static_assert(sizeof(AthenaInventoryPerksDisplay_C_EventShowPerkDetails__DelegateSignature) == 0x000001, "Wrong size on AthenaInventoryPerksDisplay_C_EventShowPerkDetails__DelegateSignature");
static_assert(offsetof(AthenaInventoryPerksDisplay_C_EventShowPerkDetails__DelegateSignature, Param_Show) == 0x000000, "Member 'AthenaInventoryPerksDisplay_C_EventShowPerkDetails__DelegateSignature::Param_Show' has a wrong offset!");

// Function AthenaInventoryPerksDisplay.AthenaInventoryPerksDisplay_C.GetItems
// 0x0020 (0x0020 - 0x0000)
struct AthenaInventoryPerksDisplay_C_GetItems final
{
public:
	TArray<class UFortSpyTechItemDefinition*>     SpyTechItemDefs;                                   // 0x0000(0x0010)(Parm, OutParm, HasGetValueTypeHash)
	TArray<class UFortSpyTechItemDefinition*>     CallFunc_GetItems_SpyTechItemDefs;                 // 0x0010(0x0010)(ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(AthenaInventoryPerksDisplay_C_GetItems) == 0x000008, "Wrong alignment on AthenaInventoryPerksDisplay_C_GetItems");
static_assert(sizeof(AthenaInventoryPerksDisplay_C_GetItems) == 0x000020, "Wrong size on AthenaInventoryPerksDisplay_C_GetItems");
static_assert(offsetof(AthenaInventoryPerksDisplay_C_GetItems, SpyTechItemDefs) == 0x000000, "Member 'AthenaInventoryPerksDisplay_C_GetItems::SpyTechItemDefs' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPerksDisplay_C_GetItems, CallFunc_GetItems_SpyTechItemDefs) == 0x000010, "Member 'AthenaInventoryPerksDisplay_C_GetItems::CallFunc_GetItems_SpyTechItemDefs' has a wrong offset!");

// Function AthenaInventoryPerksDisplay.AthenaInventoryPerksDisplay_C.UpdateVisibility
// 0x000C (0x000C - 0x0000)
struct AthenaInventoryPerksDisplay_C_UpdateVisibility final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A01[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetActiveCount_Count;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaInventoryPerksDisplay_C_UpdateVisibility) == 0x000004, "Wrong alignment on AthenaInventoryPerksDisplay_C_UpdateVisibility");
static_assert(sizeof(AthenaInventoryPerksDisplay_C_UpdateVisibility) == 0x00000C, "Wrong size on AthenaInventoryPerksDisplay_C_UpdateVisibility");
static_assert(offsetof(AthenaInventoryPerksDisplay_C_UpdateVisibility, Temp_bool_Variable) == 0x000000, "Member 'AthenaInventoryPerksDisplay_C_UpdateVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPerksDisplay_C_UpdateVisibility, Temp_byte_Variable) == 0x000001, "Member 'AthenaInventoryPerksDisplay_C_UpdateVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPerksDisplay_C_UpdateVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'AthenaInventoryPerksDisplay_C_UpdateVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPerksDisplay_C_UpdateVisibility, CallFunc_GetActiveCount_Count) == 0x000004, "Member 'AthenaInventoryPerksDisplay_C_UpdateVisibility::CallFunc_GetActiveCount_Count' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPerksDisplay_C_UpdateVisibility, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'AthenaInventoryPerksDisplay_C_UpdateVisibility::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPerksDisplay_C_UpdateVisibility, K2Node_Select_Default) == 0x000009, "Member 'AthenaInventoryPerksDisplay_C_UpdateVisibility::K2Node_Select_Default' has a wrong offset!");

}
