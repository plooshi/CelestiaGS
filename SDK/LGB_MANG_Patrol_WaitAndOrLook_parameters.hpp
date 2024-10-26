#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LGB_MANG_Patrol_WaitAndOrLook

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function LGB_MANG_Patrol_WaitAndOrLook.LGB_MANG_Patrol_WaitAndOrLook_C.ExecuteUbergraph_LGB_MANG_Patrol_WaitAndOrLook
// 0x0030 (0x0030 - 0x0000)
struct LGB_MANG_Patrol_WaitAndOrLook_C_ExecuteUbergraph_LGB_MANG_Patrol_WaitAndOrLook final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8196[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_Activator;                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAthenaAIBotController*             K2Node_DynamicCast_AsFort_Athena_AIBot_Controller; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8197[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LGB_MANG_Patrol_WaitAndOrLook_C_ExecuteUbergraph_LGB_MANG_Patrol_WaitAndOrLook) == 0x000008, "Wrong alignment on LGB_MANG_Patrol_WaitAndOrLook_C_ExecuteUbergraph_LGB_MANG_Patrol_WaitAndOrLook");
static_assert(sizeof(LGB_MANG_Patrol_WaitAndOrLook_C_ExecuteUbergraph_LGB_MANG_Patrol_WaitAndOrLook) == 0x000030, "Wrong size on LGB_MANG_Patrol_WaitAndOrLook_C_ExecuteUbergraph_LGB_MANG_Patrol_WaitAndOrLook");
static_assert(offsetof(LGB_MANG_Patrol_WaitAndOrLook_C_ExecuteUbergraph_LGB_MANG_Patrol_WaitAndOrLook, EntryPoint) == 0x000000, "Member 'LGB_MANG_Patrol_WaitAndOrLook_C_ExecuteUbergraph_LGB_MANG_Patrol_WaitAndOrLook::EntryPoint' has a wrong offset!");
static_assert(offsetof(LGB_MANG_Patrol_WaitAndOrLook_C_ExecuteUbergraph_LGB_MANG_Patrol_WaitAndOrLook, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'LGB_MANG_Patrol_WaitAndOrLook_C_ExecuteUbergraph_LGB_MANG_Patrol_WaitAndOrLook::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LGB_MANG_Patrol_WaitAndOrLook_C_ExecuteUbergraph_LGB_MANG_Patrol_WaitAndOrLook, K2Node_Event_Activator) == 0x000008, "Member 'LGB_MANG_Patrol_WaitAndOrLook_C_ExecuteUbergraph_LGB_MANG_Patrol_WaitAndOrLook::K2Node_Event_Activator' has a wrong offset!");
static_assert(offsetof(LGB_MANG_Patrol_WaitAndOrLook_C_ExecuteUbergraph_LGB_MANG_Patrol_WaitAndOrLook, K2Node_DynamicCast_AsFort_Athena_AIBot_Controller) == 0x000010, "Member 'LGB_MANG_Patrol_WaitAndOrLook_C_ExecuteUbergraph_LGB_MANG_Patrol_WaitAndOrLook::K2Node_DynamicCast_AsFort_Athena_AIBot_Controller' has a wrong offset!");
static_assert(offsetof(LGB_MANG_Patrol_WaitAndOrLook_C_ExecuteUbergraph_LGB_MANG_Patrol_WaitAndOrLook, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'LGB_MANG_Patrol_WaitAndOrLook_C_ExecuteUbergraph_LGB_MANG_Patrol_WaitAndOrLook::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LGB_MANG_Patrol_WaitAndOrLook_C_ExecuteUbergraph_LGB_MANG_Patrol_WaitAndOrLook, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x00001C, "Member 'LGB_MANG_Patrol_WaitAndOrLook_C_ExecuteUbergraph_LGB_MANG_Patrol_WaitAndOrLook::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LGB_MANG_Patrol_WaitAndOrLook_C_ExecuteUbergraph_LGB_MANG_Patrol_WaitAndOrLook, CallFunc_RandomFloatInRange_ReturnValue) == 0x000028, "Member 'LGB_MANG_Patrol_WaitAndOrLook_C_ExecuteUbergraph_LGB_MANG_Patrol_WaitAndOrLook::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");

// Function LGB_MANG_Patrol_WaitAndOrLook.LGB_MANG_Patrol_WaitAndOrLook_C.OnExecute
// 0x0008 (0x0008 - 0x0000)
struct LGB_MANG_Patrol_WaitAndOrLook_C_OnExecute final
{
public:
	class AActor*                                 Activator;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LGB_MANG_Patrol_WaitAndOrLook_C_OnExecute) == 0x000008, "Wrong alignment on LGB_MANG_Patrol_WaitAndOrLook_C_OnExecute");
static_assert(sizeof(LGB_MANG_Patrol_WaitAndOrLook_C_OnExecute) == 0x000008, "Wrong size on LGB_MANG_Patrol_WaitAndOrLook_C_OnExecute");
static_assert(offsetof(LGB_MANG_Patrol_WaitAndOrLook_C_OnExecute, Activator) == 0x000000, "Member 'LGB_MANG_Patrol_WaitAndOrLook_C_OnExecute::Activator' has a wrong offset!");

// Function LGB_MANG_Patrol_WaitAndOrLook.LGB_MANG_Patrol_WaitAndOrLook_C.UserConstructionScript
// 0x0028 (0x0028 - 0x0000)
struct LGB_MANG_Patrol_WaitAndOrLook_C_UserConstructionScript final
{
public:
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LGB_MANG_Patrol_WaitAndOrLook_C_UserConstructionScript) == 0x000004, "Wrong alignment on LGB_MANG_Patrol_WaitAndOrLook_C_UserConstructionScript");
static_assert(sizeof(LGB_MANG_Patrol_WaitAndOrLook_C_UserConstructionScript) == 0x000028, "Wrong size on LGB_MANG_Patrol_WaitAndOrLook_C_UserConstructionScript");
static_assert(offsetof(LGB_MANG_Patrol_WaitAndOrLook_C_UserConstructionScript, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000000, "Member 'LGB_MANG_Patrol_WaitAndOrLook_C_UserConstructionScript::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LGB_MANG_Patrol_WaitAndOrLook_C_UserConstructionScript, CallFunc_BreakRotator_Roll) == 0x00000C, "Member 'LGB_MANG_Patrol_WaitAndOrLook_C_UserConstructionScript::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(LGB_MANG_Patrol_WaitAndOrLook_C_UserConstructionScript, CallFunc_BreakRotator_Pitch) == 0x000010, "Member 'LGB_MANG_Patrol_WaitAndOrLook_C_UserConstructionScript::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(LGB_MANG_Patrol_WaitAndOrLook_C_UserConstructionScript, CallFunc_BreakRotator_Yaw) == 0x000014, "Member 'LGB_MANG_Patrol_WaitAndOrLook_C_UserConstructionScript::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(LGB_MANG_Patrol_WaitAndOrLook_C_UserConstructionScript, CallFunc_MakeRotator_ReturnValue) == 0x000018, "Member 'LGB_MANG_Patrol_WaitAndOrLook_C_UserConstructionScript::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(LGB_MANG_Patrol_WaitAndOrLook_C_UserConstructionScript, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000024, "Member 'LGB_MANG_Patrol_WaitAndOrLook_C_UserConstructionScript::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");

}

