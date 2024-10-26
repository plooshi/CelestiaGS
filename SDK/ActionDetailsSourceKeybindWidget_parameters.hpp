#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActionDetailsSourceKeybindWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.HandleActionSourceValueChange
// 0x0008 (0x0008 - 0x0000)
struct ActionDetailsSourceKeybindWidget_C_HandleActionSourceValueChange final
{
public:
	class UObject*                                Source;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ActionDetailsSourceKeybindWidget_C_HandleActionSourceValueChange) == 0x000008, "Wrong alignment on ActionDetailsSourceKeybindWidget_C_HandleActionSourceValueChange");
static_assert(sizeof(ActionDetailsSourceKeybindWidget_C_HandleActionSourceValueChange) == 0x000008, "Wrong size on ActionDetailsSourceKeybindWidget_C_HandleActionSourceValueChange");
static_assert(offsetof(ActionDetailsSourceKeybindWidget_C_HandleActionSourceValueChange, Source) == 0x000000, "Member 'ActionDetailsSourceKeybindWidget_C_HandleActionSourceValueChange::Source' has a wrong offset!");

// Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.BindActionSourceEvents
// 0x0020 (0x0020 - 0x0000)
struct ActionDetailsSourceKeybindWidget_C_BindActionSourceEvents final
{
public:
	TDelegate<void(class UObject* Source)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ActionDetailsSourceKeybindWidget_C_BindActionSourceEvents) == 0x000008, "Wrong alignment on ActionDetailsSourceKeybindWidget_C_BindActionSourceEvents");
static_assert(sizeof(ActionDetailsSourceKeybindWidget_C_BindActionSourceEvents) == 0x000020, "Wrong size on ActionDetailsSourceKeybindWidget_C_BindActionSourceEvents");
static_assert(offsetof(ActionDetailsSourceKeybindWidget_C_BindActionSourceEvents, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'ActionDetailsSourceKeybindWidget_C_BindActionSourceEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ActionDetailsSourceKeybindWidget_C_BindActionSourceEvents, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000010, "Member 'ActionDetailsSourceKeybindWidget_C_BindActionSourceEvents::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActionDetailsSourceKeybindWidget_C_BindActionSourceEvents, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'ActionDetailsSourceKeybindWidget_C_BindActionSourceEvents::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.UnbindActionSourceEvents
// 0x0020 (0x0020 - 0x0000)
struct ActionDetailsSourceKeybindWidget_C_UnbindActionSourceEvents final
{
public:
	TDelegate<void(class UObject* Source)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ActionDetailsSourceKeybindWidget_C_UnbindActionSourceEvents) == 0x000008, "Wrong alignment on ActionDetailsSourceKeybindWidget_C_UnbindActionSourceEvents");
static_assert(sizeof(ActionDetailsSourceKeybindWidget_C_UnbindActionSourceEvents) == 0x000020, "Wrong size on ActionDetailsSourceKeybindWidget_C_UnbindActionSourceEvents");
static_assert(offsetof(ActionDetailsSourceKeybindWidget_C_UnbindActionSourceEvents, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'ActionDetailsSourceKeybindWidget_C_UnbindActionSourceEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ActionDetailsSourceKeybindWidget_C_UnbindActionSourceEvents, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000010, "Member 'ActionDetailsSourceKeybindWidget_C_UnbindActionSourceEvents::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActionDetailsSourceKeybindWidget_C_UnbindActionSourceEvents, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'ActionDetailsSourceKeybindWidget_C_UnbindActionSourceEvents::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.SetActionSource
// 0x0028 (0x0028 - 0x0000)
struct ActionDetailsSourceKeybindWidget_C_SetActionSource final
{
public:
	TScriptInterface<class IFortGlobalActionDetailsDataSource> Value;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue_1;     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ActionDetailsSourceKeybindWidget_C_SetActionSource) == 0x000008, "Wrong alignment on ActionDetailsSourceKeybindWidget_C_SetActionSource");
static_assert(sizeof(ActionDetailsSourceKeybindWidget_C_SetActionSource) == 0x000028, "Wrong size on ActionDetailsSourceKeybindWidget_C_SetActionSource");
static_assert(offsetof(ActionDetailsSourceKeybindWidget_C_SetActionSource, Value) == 0x000000, "Member 'ActionDetailsSourceKeybindWidget_C_SetActionSource::Value' has a wrong offset!");
static_assert(offsetof(ActionDetailsSourceKeybindWidget_C_SetActionSource, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000010, "Member 'ActionDetailsSourceKeybindWidget_C_SetActionSource::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActionDetailsSourceKeybindWidget_C_SetActionSource, CallFunc_Conv_InterfaceToObject_ReturnValue_1) == 0x000018, "Member 'ActionDetailsSourceKeybindWidget_C_SetActionSource::CallFunc_Conv_InterfaceToObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ActionDetailsSourceKeybindWidget_C_SetActionSource, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000020, "Member 'ActionDetailsSourceKeybindWidget_C_SetActionSource::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.UpdateInputAction
// 0x0030 (0x0030 - 0x0000)
struct ActionDetailsSourceKeybindWidget_C_UpdateInputAction final
{
public:
	struct FFortGlobalActionDetails               ActionDetails;                                     // 0x0000(0x000C)(Edit, BlueprintVisible, NoDestructor)
	EFortKeybindForcedHoldStatus                  Temp_byte_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortKeybindForcedHoldStatus                  Temp_byte_Variable_1;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7081[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortGlobalActionDetails               CallFunc_GetValue_ReturnValue;                     // 0x0010(0x000C)(NoDestructor)
	EFortKeybindForcedHoldStatus                  K2Node_Select_Default;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7082[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ActionDetailsSourceKeybindWidget_C_UpdateInputAction) == 0x000008, "Wrong alignment on ActionDetailsSourceKeybindWidget_C_UpdateInputAction");
static_assert(sizeof(ActionDetailsSourceKeybindWidget_C_UpdateInputAction) == 0x000030, "Wrong size on ActionDetailsSourceKeybindWidget_C_UpdateInputAction");
static_assert(offsetof(ActionDetailsSourceKeybindWidget_C_UpdateInputAction, ActionDetails) == 0x000000, "Member 'ActionDetailsSourceKeybindWidget_C_UpdateInputAction::ActionDetails' has a wrong offset!");
static_assert(offsetof(ActionDetailsSourceKeybindWidget_C_UpdateInputAction, Temp_byte_Variable) == 0x00000C, "Member 'ActionDetailsSourceKeybindWidget_C_UpdateInputAction::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ActionDetailsSourceKeybindWidget_C_UpdateInputAction, Temp_byte_Variable_1) == 0x00000D, "Member 'ActionDetailsSourceKeybindWidget_C_UpdateInputAction::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ActionDetailsSourceKeybindWidget_C_UpdateInputAction, Temp_bool_Variable) == 0x00000E, "Member 'ActionDetailsSourceKeybindWidget_C_UpdateInputAction::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ActionDetailsSourceKeybindWidget_C_UpdateInputAction, CallFunc_GetValue_ReturnValue) == 0x000010, "Member 'ActionDetailsSourceKeybindWidget_C_UpdateInputAction::CallFunc_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActionDetailsSourceKeybindWidget_C_UpdateInputAction, K2Node_Select_Default) == 0x00001C, "Member 'ActionDetailsSourceKeybindWidget_C_UpdateInputAction::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ActionDetailsSourceKeybindWidget_C_UpdateInputAction, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000020, "Member 'ActionDetailsSourceKeybindWidget_C_UpdateInputAction::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActionDetailsSourceKeybindWidget_C_UpdateInputAction, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'ActionDetailsSourceKeybindWidget_C_UpdateInputAction::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

