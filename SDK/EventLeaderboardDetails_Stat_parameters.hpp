#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventLeaderboardDetails_Stat

#include "Basic.hpp"


namespace SDK::Params
{

// Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.SetStatData
// 0x0038 (0x0038 - 0x0000)
struct EventLeaderboardDetails_Stat_C_SetStatData final
{
public:
	class FText                                   Param_Name;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                         Value;                                             // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumFractionalDigits;                               // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0020(0x0018)()
};
static_assert(alignof(EventLeaderboardDetails_Stat_C_SetStatData) == 0x000008, "Wrong alignment on EventLeaderboardDetails_Stat_C_SetStatData");
static_assert(sizeof(EventLeaderboardDetails_Stat_C_SetStatData) == 0x000038, "Wrong size on EventLeaderboardDetails_Stat_C_SetStatData");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_SetStatData, Param_Name) == 0x000000, "Member 'EventLeaderboardDetails_Stat_C_SetStatData::Param_Name' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_SetStatData, Value) == 0x000018, "Member 'EventLeaderboardDetails_Stat_C_SetStatData::Value' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_SetStatData, NumFractionalDigits) == 0x00001C, "Member 'EventLeaderboardDetails_Stat_C_SetStatData::NumFractionalDigits' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_SetStatData, CallFunc_Conv_FloatToText_ReturnValue) == 0x000020, "Member 'EventLeaderboardDetails_Stat_C_SetStatData::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");

// Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.ExecuteUbergraph_EventLeaderboardDetails_Stat
// 0x0040 (0x0040 - 0x0000)
struct EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52B2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52B3[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52B4[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationTimeRange_ReturnValue;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat) == 0x000008, "Wrong alignment on EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat");
static_assert(sizeof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat) == 0x000040, "Wrong size on EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, EntryPoint) == 0x000000, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, CallFunc_IsUsingGamepad_ReturnValue) == 0x000010, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, Temp_float_Variable) == 0x000014, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, Temp_float_Variable_1) == 0x000018, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, CallFunc_Multiply_IntFloat_ReturnValue) == 0x00001C, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, CallFunc_PlayAnimationForward_ReturnValue) == 0x000020, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, CallFunc_GetEndTime_ReturnValue) == 0x000028, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, Temp_bool_Variable) == 0x00002C, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, CallFunc_PlayAnimationTimeRange_ReturnValue) == 0x000030, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::CallFunc_PlayAnimationTimeRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, K2Node_Select_Default) == 0x000038, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, CallFunc_Add_FloatFloat_ReturnValue) == 0x00003C, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

}
