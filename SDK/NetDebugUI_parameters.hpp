#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NetDebugUI

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function NetDebugUI.NetDebugUI_C.ExecuteUbergraph_NetDebugUI
// 0x0018 (0x0018 - 0x0000)
struct NetDebugUI_C_ExecuteUbergraph_NetDebugUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMobileGame_ReturnValue;                 // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A88[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UCommonTextBlock*>               K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};
static_assert(alignof(NetDebugUI_C_ExecuteUbergraph_NetDebugUI) == 0x000008, "Wrong alignment on NetDebugUI_C_ExecuteUbergraph_NetDebugUI");
static_assert(sizeof(NetDebugUI_C_ExecuteUbergraph_NetDebugUI) == 0x000018, "Wrong size on NetDebugUI_C_ExecuteUbergraph_NetDebugUI");
static_assert(offsetof(NetDebugUI_C_ExecuteUbergraph_NetDebugUI, EntryPoint) == 0x000000, "Member 'NetDebugUI_C_ExecuteUbergraph_NetDebugUI::EntryPoint' has a wrong offset!");
static_assert(offsetof(NetDebugUI_C_ExecuteUbergraph_NetDebugUI, Temp_bool_Variable) == 0x000004, "Member 'NetDebugUI_C_ExecuteUbergraph_NetDebugUI::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NetDebugUI_C_ExecuteUbergraph_NetDebugUI, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'NetDebugUI_C_ExecuteUbergraph_NetDebugUI::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NetDebugUI_C_ExecuteUbergraph_NetDebugUI, CallFunc_IsMobileGame_ReturnValue) == 0x000006, "Member 'NetDebugUI_C_ExecuteUbergraph_NetDebugUI::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(NetDebugUI_C_ExecuteUbergraph_NetDebugUI, K2Node_MakeArray_Array) == 0x000008, "Member 'NetDebugUI_C_ExecuteUbergraph_NetDebugUI::K2Node_MakeArray_Array' has a wrong offset!");

// Function NetDebugUI.NetDebugUI_C.SetTextStyleForMobile
// 0x0080 (0x0080 - 0x0000)
struct NetDebugUI_C_SetTextStyleForMobile final
{
public:
	bool                                          bIsMobile;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A89[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A8A[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0028(0x0050)(HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NetDebugUI_C_SetTextStyleForMobile) == 0x000008, "Wrong alignment on NetDebugUI_C_SetTextStyleForMobile");
static_assert(sizeof(NetDebugUI_C_SetTextStyleForMobile) == 0x000080, "Wrong size on NetDebugUI_C_SetTextStyleForMobile");
static_assert(offsetof(NetDebugUI_C_SetTextStyleForMobile, bIsMobile) == 0x000000, "Member 'NetDebugUI_C_SetTextStyleForMobile::bIsMobile' has a wrong offset!");
static_assert(offsetof(NetDebugUI_C_SetTextStyleForMobile, Temp_bool_Variable) == 0x000001, "Member 'NetDebugUI_C_SetTextStyleForMobile::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NetDebugUI_C_SetTextStyleForMobile, Temp_int_Variable) == 0x000004, "Member 'NetDebugUI_C_SetTextStyleForMobile::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(NetDebugUI_C_SetTextStyleForMobile, Temp_int_Variable_1) == 0x000008, "Member 'NetDebugUI_C_SetTextStyleForMobile::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(NetDebugUI_C_SetTextStyleForMobile, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'NetDebugUI_C_SetTextStyleForMobile::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(NetDebugUI_C_SetTextStyleForMobile, K2Node_Select_Default) == 0x000010, "Member 'NetDebugUI_C_SetTextStyleForMobile::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(NetDebugUI_C_SetTextStyleForMobile, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'NetDebugUI_C_SetTextStyleForMobile::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(NetDebugUI_C_SetTextStyleForMobile, CallFunc_Array_Get_Item) == 0x000018, "Member 'NetDebugUI_C_SetTextStyleForMobile::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(NetDebugUI_C_SetTextStyleForMobile, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'NetDebugUI_C_SetTextStyleForMobile::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(NetDebugUI_C_SetTextStyleForMobile, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'NetDebugUI_C_SetTextStyleForMobile::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NetDebugUI_C_SetTextStyleForMobile, K2Node_MakeStruct_SlateFontInfo) == 0x000028, "Member 'NetDebugUI_C_SetTextStyleForMobile::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(NetDebugUI_C_SetTextStyleForMobile, CallFunc_Add_IntInt_ReturnValue) == 0x000078, "Member 'NetDebugUI_C_SetTextStyleForMobile::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}
