#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreAlertToast

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function StoreAlertToast.StoreAlertToast_C.ExecuteUbergraph_StoreAlertToast
// 0x00C8 (0x00C8 - 0x0000)
struct StoreAlertToast_C_ExecuteUbergraph_StoreAlertToast final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6BA8[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UStoreToastRequest*                     K2Node_Event_NewStoreUpdatedRequest;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRequestReady_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ShouldBeginRequest_ReturnValue;           // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BA9[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStoreCallout                          CallFunc_GetToast_ReturnValue;                     // 0x0030(0x0090)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StoreAlertToast_C_ExecuteUbergraph_StoreAlertToast) == 0x000008, "Wrong alignment on StoreAlertToast_C_ExecuteUbergraph_StoreAlertToast");
static_assert(sizeof(StoreAlertToast_C_ExecuteUbergraph_StoreAlertToast) == 0x0000C8, "Wrong size on StoreAlertToast_C_ExecuteUbergraph_StoreAlertToast");
static_assert(offsetof(StoreAlertToast_C_ExecuteUbergraph_StoreAlertToast, EntryPoint) == 0x000000, "Member 'StoreAlertToast_C_ExecuteUbergraph_StoreAlertToast::EntryPoint' has a wrong offset!");
static_assert(offsetof(StoreAlertToast_C_ExecuteUbergraph_StoreAlertToast, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'StoreAlertToast_C_ExecuteUbergraph_StoreAlertToast::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(StoreAlertToast_C_ExecuteUbergraph_StoreAlertToast, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'StoreAlertToast_C_ExecuteUbergraph_StoreAlertToast::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreAlertToast_C_ExecuteUbergraph_StoreAlertToast, K2Node_Event_NewStoreUpdatedRequest) == 0x000020, "Member 'StoreAlertToast_C_ExecuteUbergraph_StoreAlertToast::K2Node_Event_NewStoreUpdatedRequest' has a wrong offset!");
static_assert(offsetof(StoreAlertToast_C_ExecuteUbergraph_StoreAlertToast, CallFunc_IsRequestReady_ReturnValue) == 0x000028, "Member 'StoreAlertToast_C_ExecuteUbergraph_StoreAlertToast::CallFunc_IsRequestReady_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreAlertToast_C_ExecuteUbergraph_StoreAlertToast, CallFunc_ShouldBeginRequest_ReturnValue) == 0x000029, "Member 'StoreAlertToast_C_ExecuteUbergraph_StoreAlertToast::CallFunc_ShouldBeginRequest_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreAlertToast_C_ExecuteUbergraph_StoreAlertToast, CallFunc_GetToast_ReturnValue) == 0x000030, "Member 'StoreAlertToast_C_ExecuteUbergraph_StoreAlertToast::CallFunc_GetToast_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreAlertToast_C_ExecuteUbergraph_StoreAlertToast, CallFunc_IsValid_ReturnValue) == 0x0000C0, "Member 'StoreAlertToast_C_ExecuteUbergraph_StoreAlertToast::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function StoreAlertToast.StoreAlertToast_C.DisplayStoreUpdated
// 0x0008 (0x0008 - 0x0000)
struct StoreAlertToast_C_DisplayStoreUpdated final
{
public:
	class UStoreToastRequest*                     NewStoreUpdatedRequest;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StoreAlertToast_C_DisplayStoreUpdated) == 0x000008, "Wrong alignment on StoreAlertToast_C_DisplayStoreUpdated");
static_assert(sizeof(StoreAlertToast_C_DisplayStoreUpdated) == 0x000008, "Wrong size on StoreAlertToast_C_DisplayStoreUpdated");
static_assert(offsetof(StoreAlertToast_C_DisplayStoreUpdated, NewStoreUpdatedRequest) == 0x000000, "Member 'StoreAlertToast_C_DisplayStoreUpdated::NewStoreUpdatedRequest' has a wrong offset!");

}

