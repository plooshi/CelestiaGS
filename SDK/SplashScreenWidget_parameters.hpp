#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SplashScreenWidget

#include "Basic.hpp"

#include "CommonInput_structs.hpp"


namespace SDK::Params
{

// Function SplashScreenWidget.SplashScreenWidget_C.OnInputMethodChanged
// 0x0001 (0x0001 - 0x0000)
struct SplashScreenWidget_C_OnInputMethodChanged final
{
public:
	ECommonInputType                              InputType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SplashScreenWidget_C_OnInputMethodChanged) == 0x000001, "Wrong alignment on SplashScreenWidget_C_OnInputMethodChanged");
static_assert(sizeof(SplashScreenWidget_C_OnInputMethodChanged) == 0x000001, "Wrong size on SplashScreenWidget_C_OnInputMethodChanged");
static_assert(offsetof(SplashScreenWidget_C_OnInputMethodChanged, InputType) == 0x000000, "Member 'SplashScreenWidget_C_OnInputMethodChanged::InputType' has a wrong offset!");

// Function SplashScreenWidget.SplashScreenWidget_C.ExecuteUbergraph_SplashScreenWidget
// 0x0030 (0x0030 - 0x0000)
struct SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              K2Node_Event_InputType;                            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B9B[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMobileApp_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B9C[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B9D[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget) == 0x000008, "Wrong alignment on SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget");
static_assert(sizeof(SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget) == 0x000030, "Wrong size on SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget");
static_assert(offsetof(SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget, EntryPoint) == 0x000000, "Member 'SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget, K2Node_Event_InputType) == 0x000004, "Member 'SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget::K2Node_Event_InputType' has a wrong offset!");
static_assert(offsetof(SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget, CallFunc_IsMobileApp_ReturnValue) == 0x000011, "Member 'SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget::CallFunc_IsMobileApp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget, Temp_bool_Variable) == 0x000020, "Member 'SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget, K2Node_Select_Default) == 0x000028, "Member 'SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget::K2Node_Select_Default' has a wrong offset!");

}
