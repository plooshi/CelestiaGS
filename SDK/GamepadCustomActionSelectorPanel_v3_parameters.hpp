#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GamepadCustomActionSelectorPanel_v3

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomActionSelected__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct GamepadCustomActionSelectorPanel_v3_C_CustomActionSelected__DelegateSignature final
{
public:
	int32                                         SelectedIndex;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ActionName;                                        // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GamepadCustomActionSelectorPanel_v3_C_CustomActionSelected__DelegateSignature) == 0x000004, "Wrong alignment on GamepadCustomActionSelectorPanel_v3_C_CustomActionSelected__DelegateSignature");
static_assert(sizeof(GamepadCustomActionSelectorPanel_v3_C_CustomActionSelected__DelegateSignature) == 0x00000C, "Wrong size on GamepadCustomActionSelectorPanel_v3_C_CustomActionSelected__DelegateSignature");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_CustomActionSelected__DelegateSignature, SelectedIndex) == 0x000000, "Member 'GamepadCustomActionSelectorPanel_v3_C_CustomActionSelected__DelegateSignature::SelectedIndex' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_CustomActionSelected__DelegateSignature, ActionName) == 0x000004, "Member 'GamepadCustomActionSelectorPanel_v3_C_CustomActionSelected__DelegateSignature::ActionName' has a wrong offset!");

// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3
// 0x0098 (0x0098 - 0x0000)
struct GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortOptionsMenuInputData*>      K2Node_CustomEvent_InputData;                      // 0x0008(0x0010)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Item)>          K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	class UGamepadKeyTextButton_C*                K2Node_DynamicCast_AsGamepad_Key_Text_Button;      // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73D8[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate_1;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73D9[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73DA[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_BP_GetSelectedItem_ReturnValue;           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortOptionsMenuInputData*              CallFunc_Array_Get_Item;                           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIndexForItem_ReturnValue;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortInputActionGroup                         CallFunc_GetInputActionGroup_ReturnValue;          // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73DB[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGamepadKeyTextButton_C*                CallFunc_CreateCustomListItem_ReturnItem;          // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73DC[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate_2;            // 0x0084(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3) == 0x000008, "Wrong alignment on GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3");
static_assert(sizeof(GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3) == 0x000098, "Wrong size on GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3, EntryPoint) == 0x000000, "Member 'GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3::EntryPoint' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3, K2Node_CustomEvent_InputData) == 0x000008, "Member 'GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3::K2Node_CustomEvent_InputData' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3, K2Node_CustomEvent_Item) == 0x000018, "Member 'GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3, K2Node_DynamicCast_AsGamepad_Key_Text_Button) == 0x000030, "Member 'GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3::K2Node_DynamicCast_AsGamepad_Key_Text_Button' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3, K2Node_CreateDelegate_OutputDelegate_1) == 0x000040, "Member 'GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3, Temp_int_Array_Index_Variable) == 0x000058, "Member 'GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3, CallFunc_BP_GetSelectedItem_ReturnValue) == 0x000060, "Member 'GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3::CallFunc_BP_GetSelectedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3, CallFunc_Array_Get_Item) == 0x000068, "Member 'GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3, CallFunc_GetIndexForItem_ReturnValue) == 0x000070, "Member 'GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3::CallFunc_GetIndexForItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3, CallFunc_GetInputActionGroup_ReturnValue) == 0x000074, "Member 'GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3::CallFunc_GetInputActionGroup_ReturnValue' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3, CallFunc_CreateCustomListItem_ReturnItem) == 0x000078, "Member 'GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3::CallFunc_CreateCustomListItem_ReturnItem' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3, K2Node_CreateDelegate_OutputDelegate_2) == 0x000084, "Member 'GamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.BP_OnItemClicked_Bind
// 0x0008 (0x0008 - 0x0000)
struct GamepadCustomActionSelectorPanel_v3_C_BP_OnItemClicked_Bind final
{
public:
	class UObject*                                Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GamepadCustomActionSelectorPanel_v3_C_BP_OnItemClicked_Bind) == 0x000008, "Wrong alignment on GamepadCustomActionSelectorPanel_v3_C_BP_OnItemClicked_Bind");
static_assert(sizeof(GamepadCustomActionSelectorPanel_v3_C_BP_OnItemClicked_Bind) == 0x000008, "Wrong size on GamepadCustomActionSelectorPanel_v3_C_BP_OnItemClicked_Bind");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_BP_OnItemClicked_Bind, Item) == 0x000000, "Member 'GamepadCustomActionSelectorPanel_v3_C_BP_OnItemClicked_Bind::Item' has a wrong offset!");

// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.UpdatePanel
// 0x0010 (0x0010 - 0x0000)
struct GamepadCustomActionSelectorPanel_v3_C_UpdatePanel final
{
public:
	TArray<class UFortOptionsMenuInputData*>      InputData;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(GamepadCustomActionSelectorPanel_v3_C_UpdatePanel) == 0x000008, "Wrong alignment on GamepadCustomActionSelectorPanel_v3_C_UpdatePanel");
static_assert(sizeof(GamepadCustomActionSelectorPanel_v3_C_UpdatePanel) == 0x000010, "Wrong size on GamepadCustomActionSelectorPanel_v3_C_UpdatePanel");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_UpdatePanel, InputData) == 0x000000, "Member 'GamepadCustomActionSelectorPanel_v3_C_UpdatePanel::InputData' has a wrong offset!");

// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.HandleBack
// 0x0001 (0x0001 - 0x0000)
struct GamepadCustomActionSelectorPanel_v3_C_HandleBack final
{
public:
	bool                                          PassThrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GamepadCustomActionSelectorPanel_v3_C_HandleBack) == 0x000001, "Wrong alignment on GamepadCustomActionSelectorPanel_v3_C_HandleBack");
static_assert(sizeof(GamepadCustomActionSelectorPanel_v3_C_HandleBack) == 0x000001, "Wrong size on GamepadCustomActionSelectorPanel_v3_C_HandleBack");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_HandleBack, PassThrough) == 0x000000, "Member 'GamepadCustomActionSelectorPanel_v3_C_HandleBack::PassThrough' has a wrong offset!");

// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CreateCustomListItem
// 0x00B8 (0x00B8 - 0x0000)
struct GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem final
{
public:
	class FName                                   ActionName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortInputActionGroup                         InputActionGroup;                                  // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73DD[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGamepadKeyTextButton_C*                ReturnItem;                                        // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ActionName_Local;                                  // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortInputActionGroup                         InputActionGroup_Local;                            // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73DE[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CustomPresetName_Local;                            // 0x0024(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73DF[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGamepadKeyTextButton_C*                ReturnItem_Local;                                  // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73E0[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue_1;                 // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73E1[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCustomGamepadInputPresetName_ReturnValue; // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                         CallFunc_GetFortInputDataForBlueprint_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGamepadKeyTextButton_C*                CallFunc_Create_ReturnValue;                       // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetScreenLabel_ReturnValue;               // 0x0080(0x0018)()
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue_2;                 // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   CallFunc_GetKeyForAction_ReturnValue;              // 0x00A0(0x0018)(HasGetValueTypeHash)
};
static_assert(alignof(GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem) == 0x000008, "Wrong alignment on GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem");
static_assert(sizeof(GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem) == 0x0000B8, "Wrong size on GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem, ActionName) == 0x000000, "Member 'GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem::ActionName' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem, InputActionGroup) == 0x000008, "Member 'GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem::InputActionGroup' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem, ReturnItem) == 0x000010, "Member 'GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem::ReturnItem' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem, ActionName_Local) == 0x000018, "Member 'GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem::ActionName_Local' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem, InputActionGroup_Local) == 0x000020, "Member 'GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem::InputActionGroup_Local' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem, CustomPresetName_Local) == 0x000024, "Member 'GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem::CustomPresetName_Local' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem, ReturnItem_Local) == 0x000030, "Member 'GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem::ReturnItem_Local' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem, K2Node_SwitchEnum_CmpSuccess) == 0x000038, "Member 'GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem, CallFunc_GetContext_ReturnValue) == 0x000040, "Member 'GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem, CallFunc_GetContext_ReturnValue_1) == 0x000048, "Member 'GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem, CallFunc_GetCustomGamepadInputPresetName_ReturnValue) == 0x000058, "Member 'GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem::CallFunc_GetCustomGamepadInputPresetName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem, CallFunc_Conv_StringToName_ReturnValue) == 0x000068, "Member 'GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem, CallFunc_GetFortInputDataForBlueprint_ReturnValue) == 0x000070, "Member 'GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem::CallFunc_GetFortInputDataForBlueprint_ReturnValue' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem, CallFunc_Create_ReturnValue) == 0x000078, "Member 'GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem, CallFunc_GetScreenLabel_ReturnValue) == 0x000080, "Member 'GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem::CallFunc_GetScreenLabel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem, CallFunc_GetContext_ReturnValue_2) == 0x000098, "Member 'GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem::CallFunc_GetContext_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem, CallFunc_GetKeyForAction_ReturnValue) == 0x0000A0, "Member 'GamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem::CallFunc_GetKeyForAction_ReturnValue' has a wrong offset!");

// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.HandleClear
// 0x0001 (0x0001 - 0x0000)
struct GamepadCustomActionSelectorPanel_v3_C_HandleClear final
{
public:
	bool                                          PassThrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GamepadCustomActionSelectorPanel_v3_C_HandleClear) == 0x000001, "Wrong alignment on GamepadCustomActionSelectorPanel_v3_C_HandleClear");
static_assert(sizeof(GamepadCustomActionSelectorPanel_v3_C_HandleClear) == 0x000001, "Wrong size on GamepadCustomActionSelectorPanel_v3_C_HandleClear");
static_assert(offsetof(GamepadCustomActionSelectorPanel_v3_C_HandleClear, PassThrough) == 0x000000, "Member 'GamepadCustomActionSelectorPanel_v3_C_HandleClear::PassThrough' has a wrong offset!");

}
