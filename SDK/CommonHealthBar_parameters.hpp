#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonHealthBar

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function CommonHealthBar.CommonHealthBar_C.ExecuteUbergraph_CommonHealthBar
// 0x0008 (0x0008 - 0x0000)
struct CommonHealthBar_C_ExecuteUbergraph_CommonHealthBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonHealthBar_C_ExecuteUbergraph_CommonHealthBar) == 0x000004, "Wrong alignment on CommonHealthBar_C_ExecuteUbergraph_CommonHealthBar");
static_assert(sizeof(CommonHealthBar_C_ExecuteUbergraph_CommonHealthBar) == 0x000008, "Wrong size on CommonHealthBar_C_ExecuteUbergraph_CommonHealthBar");
static_assert(offsetof(CommonHealthBar_C_ExecuteUbergraph_CommonHealthBar, EntryPoint) == 0x000000, "Member 'CommonHealthBar_C_ExecuteUbergraph_CommonHealthBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonHealthBar_C_ExecuteUbergraph_CommonHealthBar, K2Node_Event_IsDesignTime) == 0x000004, "Member 'CommonHealthBar_C_ExecuteUbergraph_CommonHealthBar::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function CommonHealthBar.CommonHealthBar_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommonHealthBar_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonHealthBar_C_PreConstruct) == 0x000001, "Wrong alignment on CommonHealthBar_C_PreConstruct");
static_assert(sizeof(CommonHealthBar_C_PreConstruct) == 0x000001, "Wrong size on CommonHealthBar_C_PreConstruct");
static_assert(offsetof(CommonHealthBar_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommonHealthBar_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CommonHealthBar.CommonHealthBar_C.Update Max HP Value
// 0x0090 (0x0090 - 0x0000)
struct CommonHealthBar_C_Update_Max_HP_Value final
{
public:
	float                                         Max;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0020(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0060(0x0010)(ReferenceParm, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0070(0x0018)()
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonHealthBar_C_Update_Max_HP_Value) == 0x000008, "Wrong alignment on CommonHealthBar_C_Update_Max_HP_Value");
static_assert(sizeof(CommonHealthBar_C_Update_Max_HP_Value) == 0x000090, "Wrong size on CommonHealthBar_C_Update_Max_HP_Value");
static_assert(offsetof(CommonHealthBar_C_Update_Max_HP_Value, Max) == 0x000000, "Member 'CommonHealthBar_C_Update_Max_HP_Value::Max' has a wrong offset!");
static_assert(offsetof(CommonHealthBar_C_Update_Max_HP_Value, CallFunc_FCeil_ReturnValue) == 0x000004, "Member 'CommonHealthBar_C_Update_Max_HP_Value::CallFunc_FCeil_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonHealthBar_C_Update_Max_HP_Value, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'CommonHealthBar_C_Update_Max_HP_Value::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonHealthBar_C_Update_Max_HP_Value, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'CommonHealthBar_C_Update_Max_HP_Value::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CommonHealthBar_C_Update_Max_HP_Value, K2Node_MakeArray_Array) == 0x000060, "Member 'CommonHealthBar_C_Update_Max_HP_Value::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommonHealthBar_C_Update_Max_HP_Value, CallFunc_Format_ReturnValue) == 0x000070, "Member 'CommonHealthBar_C_Update_Max_HP_Value::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonHealthBar_C_Update_Max_HP_Value, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000088, "Member 'CommonHealthBar_C_Update_Max_HP_Value::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function CommonHealthBar.CommonHealthBar_C.Update Current HP Value
// 0x0030 (0x0030 - 0x0000)
struct CommonHealthBar_C_Update_Current_HP_Value final
{
public:
	float                                         Current;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A23[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonHealthBar_C_Update_Current_HP_Value) == 0x000008, "Wrong alignment on CommonHealthBar_C_Update_Current_HP_Value");
static_assert(sizeof(CommonHealthBar_C_Update_Current_HP_Value) == 0x000030, "Wrong size on CommonHealthBar_C_Update_Current_HP_Value");
static_assert(offsetof(CommonHealthBar_C_Update_Current_HP_Value, Current) == 0x000000, "Member 'CommonHealthBar_C_Update_Current_HP_Value::Current' has a wrong offset!");
static_assert(offsetof(CommonHealthBar_C_Update_Current_HP_Value, CallFunc_FCeil_ReturnValue) == 0x000004, "Member 'CommonHealthBar_C_Update_Current_HP_Value::CallFunc_FCeil_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonHealthBar_C_Update_Current_HP_Value, CallFunc_Max_ReturnValue) == 0x000008, "Member 'CommonHealthBar_C_Update_Current_HP_Value::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonHealthBar_C_Update_Current_HP_Value, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'CommonHealthBar_C_Update_Current_HP_Value::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonHealthBar_C_Update_Current_HP_Value, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000028, "Member 'CommonHealthBar_C_Update_Current_HP_Value::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function CommonHealthBar.CommonHealthBar_C.Update HP Fill Bar
// 0x0008 (0x0008 - 0x0000)
struct CommonHealthBar_C_Update_HP_Fill_Bar final
{
public:
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonHealthBar_C_Update_HP_Fill_Bar) == 0x000004, "Wrong alignment on CommonHealthBar_C_Update_HP_Fill_Bar");
static_assert(sizeof(CommonHealthBar_C_Update_HP_Fill_Bar) == 0x000008, "Wrong size on CommonHealthBar_C_Update_HP_Fill_Bar");
static_assert(offsetof(CommonHealthBar_C_Update_HP_Fill_Bar, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000000, "Member 'CommonHealthBar_C_Update_HP_Fill_Bar::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonHealthBar_C_Update_HP_Fill_Bar, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000004, "Member 'CommonHealthBar_C_Update_HP_Fill_Bar::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

// Function CommonHealthBar.CommonHealthBar_C.Update HP Delta Bar
// 0x0008 (0x0008 - 0x0000)
struct CommonHealthBar_C_Update_HP_Delta_Bar final
{
public:
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonHealthBar_C_Update_HP_Delta_Bar) == 0x000004, "Wrong alignment on CommonHealthBar_C_Update_HP_Delta_Bar");
static_assert(sizeof(CommonHealthBar_C_Update_HP_Delta_Bar) == 0x000008, "Wrong size on CommonHealthBar_C_Update_HP_Delta_Bar");
static_assert(offsetof(CommonHealthBar_C_Update_HP_Delta_Bar, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000000, "Member 'CommonHealthBar_C_Update_HP_Delta_Bar::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonHealthBar_C_Update_HP_Delta_Bar, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000004, "Member 'CommonHealthBar_C_Update_HP_Delta_Bar::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

// Function CommonHealthBar.CommonHealthBar_C.Update
// 0x0008 (0x0008 - 0x0000)
struct CommonHealthBar_C_Update final
{
public:
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A24[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonHealthBar_C_Update) == 0x000004, "Wrong alignment on CommonHealthBar_C_Update");
static_assert(sizeof(CommonHealthBar_C_Update) == 0x000008, "Wrong size on CommonHealthBar_C_Update");
static_assert(offsetof(CommonHealthBar_C_Update, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000000, "Member 'CommonHealthBar_C_Update::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonHealthBar_C_Update, CallFunc_Lerp_ReturnValue) == 0x000004, "Member 'CommonHealthBar_C_Update::CallFunc_Lerp_ReturnValue' has a wrong offset!");

// Function CommonHealthBar.CommonHealthBar_C.Set Timer
// 0x0020 (0x0020 - 0x0000)
struct CommonHealthBar_C_Set_Timer final
{
public:
	bool                                          InEnabled;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A25[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A26[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonHealthBar_C_Set_Timer) == 0x000008, "Wrong alignment on CommonHealthBar_C_Set_Timer");
static_assert(sizeof(CommonHealthBar_C_Set_Timer) == 0x000020, "Wrong size on CommonHealthBar_C_Set_Timer");
static_assert(offsetof(CommonHealthBar_C_Set_Timer, InEnabled) == 0x000000, "Member 'CommonHealthBar_C_Set_Timer::InEnabled' has a wrong offset!");
static_assert(offsetof(CommonHealthBar_C_Set_Timer, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'CommonHealthBar_C_Set_Timer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CommonHealthBar_C_Set_Timer, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000014, "Member 'CommonHealthBar_C_Set_Timer::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonHealthBar_C_Set_Timer, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'CommonHealthBar_C_Set_Timer::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function CommonHealthBar.CommonHealthBar_C.SetSwitcherTextIndex
// 0x0004 (0x0004 - 0x0000)
struct CommonHealthBar_C_SetSwitcherTextIndex final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonHealthBar_C_SetSwitcherTextIndex) == 0x000004, "Wrong alignment on CommonHealthBar_C_SetSwitcherTextIndex");
static_assert(sizeof(CommonHealthBar_C_SetSwitcherTextIndex) == 0x000004, "Wrong size on CommonHealthBar_C_SetSwitcherTextIndex");
static_assert(offsetof(CommonHealthBar_C_SetSwitcherTextIndex, Param_Index) == 0x000000, "Member 'CommonHealthBar_C_SetSwitcherTextIndex::Param_Index' has a wrong offset!");

// Function CommonHealthBar.CommonHealthBar_C.SetDeltaVisibility
// 0x0001 (0x0001 - 0x0000)
struct CommonHealthBar_C_SetDeltaVisibility final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonHealthBar_C_SetDeltaVisibility) == 0x000001, "Wrong alignment on CommonHealthBar_C_SetDeltaVisibility");
static_assert(sizeof(CommonHealthBar_C_SetDeltaVisibility) == 0x000001, "Wrong size on CommonHealthBar_C_SetDeltaVisibility");
static_assert(offsetof(CommonHealthBar_C_SetDeltaVisibility, InVisibility) == 0x000000, "Member 'CommonHealthBar_C_SetDeltaVisibility::InVisibility' has a wrong offset!");

// Function CommonHealthBar.CommonHealthBar_C.SetColors
// 0x0030 (0x0030 - 0x0000)
struct CommonHealthBar_C_SetColors final
{
public:
	struct FLinearColor                           Color_A;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color_B;                                           // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Baseplate_Color;                                   // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonHealthBar_C_SetColors) == 0x000004, "Wrong alignment on CommonHealthBar_C_SetColors");
static_assert(sizeof(CommonHealthBar_C_SetColors) == 0x000030, "Wrong size on CommonHealthBar_C_SetColors");
static_assert(offsetof(CommonHealthBar_C_SetColors, Color_A) == 0x000000, "Member 'CommonHealthBar_C_SetColors::Color_A' has a wrong offset!");
static_assert(offsetof(CommonHealthBar_C_SetColors, Color_B) == 0x000010, "Member 'CommonHealthBar_C_SetColors::Color_B' has a wrong offset!");
static_assert(offsetof(CommonHealthBar_C_SetColors, Baseplate_Color) == 0x000020, "Member 'CommonHealthBar_C_SetColors::Baseplate_Color' has a wrong offset!");

}
