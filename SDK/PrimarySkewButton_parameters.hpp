#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PrimarySkewButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function PrimarySkewButton.PrimarySkewButton_C.OnMouseButtonUp
// 0x0258 (0x0258 - 0x0000)
struct PrimarySkewButton_C_OnMouseButtonUp final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	float                                         Temp_float_Variable;                               // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6344[0x3];                                     // 0x0165(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0168(0x00B8)()
	float                                         CallFunc_PauseAnimation_ReturnValue;               // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetStartTime_ReturnValue;                 // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PauseAnimation_ReturnValue_1;             // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6345[0x3];                                     // 0x022D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6346[0x4];                                     // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0244(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6347[0x4];                                     // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PrimarySkewButton_C_OnMouseButtonUp) == 0x000008, "Wrong alignment on PrimarySkewButton_C_OnMouseButtonUp");
static_assert(sizeof(PrimarySkewButton_C_OnMouseButtonUp) == 0x000258, "Wrong size on PrimarySkewButton_C_OnMouseButtonUp");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonUp, MyGeometry) == 0x000000, "Member 'PrimarySkewButton_C_OnMouseButtonUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonUp, MouseEvent) == 0x000038, "Member 'PrimarySkewButton_C_OnMouseButtonUp::MouseEvent' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonUp, ReturnValue) == 0x0000A8, "Member 'PrimarySkewButton_C_OnMouseButtonUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonUp, Temp_float_Variable) == 0x000160, "Member 'PrimarySkewButton_C_OnMouseButtonUp::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonUp, Temp_bool_Variable) == 0x000164, "Member 'PrimarySkewButton_C_OnMouseButtonUp::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonUp, CallFunc_Unhandled_ReturnValue) == 0x000168, "Member 'PrimarySkewButton_C_OnMouseButtonUp::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonUp, CallFunc_PauseAnimation_ReturnValue) == 0x000220, "Member 'PrimarySkewButton_C_OnMouseButtonUp::CallFunc_PauseAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonUp, CallFunc_GetStartTime_ReturnValue) == 0x000224, "Member 'PrimarySkewButton_C_OnMouseButtonUp::CallFunc_GetStartTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonUp, CallFunc_PauseAnimation_ReturnValue_1) == 0x000228, "Member 'PrimarySkewButton_C_OnMouseButtonUp::CallFunc_PauseAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonUp, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00022C, "Member 'PrimarySkewButton_C_OnMouseButtonUp::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonUp, CallFunc_Add_FloatFloat_ReturnValue) == 0x000230, "Member 'PrimarySkewButton_C_OnMouseButtonUp::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonUp, CallFunc_PlayAnimation_ReturnValue) == 0x000238, "Member 'PrimarySkewButton_C_OnMouseButtonUp::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonUp, CallFunc_GetEndTime_ReturnValue) == 0x000240, "Member 'PrimarySkewButton_C_OnMouseButtonUp::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonUp, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000244, "Member 'PrimarySkewButton_C_OnMouseButtonUp::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonUp, K2Node_Select_Default) == 0x000248, "Member 'PrimarySkewButton_C_OnMouseButtonUp::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonUp, CallFunc_PlayAnimation_ReturnValue_1) == 0x000250, "Member 'PrimarySkewButton_C_OnMouseButtonUp::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function PrimarySkewButton.PrimarySkewButton_C.OnMouseButtonDown
// 0x0258 (0x0258 - 0x0000)
struct PrimarySkewButton_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	float                                         Temp_float_Variable;                               // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6348[0x3];                                     // 0x0165(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0168(0x00B8)()
	float                                         CallFunc_PauseAnimation_ReturnValue;               // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetStartTime_ReturnValue;                 // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PauseAnimation_ReturnValue_1;             // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6349[0x3];                                     // 0x022D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_634A[0x4];                                     // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0244(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_634B[0x4];                                     // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PrimarySkewButton_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on PrimarySkewButton_C_OnMouseButtonDown");
static_assert(sizeof(PrimarySkewButton_C_OnMouseButtonDown) == 0x000258, "Wrong size on PrimarySkewButton_C_OnMouseButtonDown");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'PrimarySkewButton_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'PrimarySkewButton_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'PrimarySkewButton_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonDown, Temp_float_Variable) == 0x000160, "Member 'PrimarySkewButton_C_OnMouseButtonDown::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonDown, Temp_bool_Variable) == 0x000164, "Member 'PrimarySkewButton_C_OnMouseButtonDown::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x000168, "Member 'PrimarySkewButton_C_OnMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonDown, CallFunc_PauseAnimation_ReturnValue) == 0x000220, "Member 'PrimarySkewButton_C_OnMouseButtonDown::CallFunc_PauseAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonDown, CallFunc_GetStartTime_ReturnValue) == 0x000224, "Member 'PrimarySkewButton_C_OnMouseButtonDown::CallFunc_GetStartTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonDown, CallFunc_PauseAnimation_ReturnValue_1) == 0x000228, "Member 'PrimarySkewButton_C_OnMouseButtonDown::CallFunc_PauseAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonDown, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00022C, "Member 'PrimarySkewButton_C_OnMouseButtonDown::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonDown, CallFunc_Add_FloatFloat_ReturnValue) == 0x000230, "Member 'PrimarySkewButton_C_OnMouseButtonDown::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonDown, CallFunc_PlayAnimation_ReturnValue) == 0x000238, "Member 'PrimarySkewButton_C_OnMouseButtonDown::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonDown, CallFunc_GetEndTime_ReturnValue) == 0x000240, "Member 'PrimarySkewButton_C_OnMouseButtonDown::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonDown, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000244, "Member 'PrimarySkewButton_C_OnMouseButtonDown::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonDown, K2Node_Select_Default) == 0x000248, "Member 'PrimarySkewButton_C_OnMouseButtonDown::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_OnMouseButtonDown, CallFunc_PlayAnimation_ReturnValue_1) == 0x000250, "Member 'PrimarySkewButton_C_OnMouseButtonDown::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function PrimarySkewButton.PrimarySkewButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct PrimarySkewButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature final
{
public:
	bool                                          bUsingGamepad;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PrimarySkewButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature) == 0x000001, "Wrong alignment on PrimarySkewButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");
static_assert(sizeof(PrimarySkewButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature) == 0x000001, "Wrong size on PrimarySkewButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");
static_assert(offsetof(PrimarySkewButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature, bUsingGamepad) == 0x000000, "Member 'PrimarySkewButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature::bUsingGamepad' has a wrong offset!");

// Function PrimarySkewButton.PrimarySkewButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct PrimarySkewButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PrimarySkewButton_C_PreConstruct) == 0x000001, "Wrong alignment on PrimarySkewButton_C_PreConstruct");
static_assert(sizeof(PrimarySkewButton_C_PreConstruct) == 0x000001, "Wrong size on PrimarySkewButton_C_PreConstruct");
static_assert(offsetof(PrimarySkewButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'PrimarySkewButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function PrimarySkewButton.PrimarySkewButton_C.ExecuteUbergraph_PrimarySkewButton
// 0x01B8 (0x01B8 - 0x0000)
struct PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         Temp_float_Variable;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_634C[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0010(0x0050)(HasGetValueTypeHash)
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo_1;                 // 0x0060(0x0050)(HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_634D[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         K2Node_Select_Default;                             // 0x00B8(0x0050)(HasGetValueTypeHash)
	float                                         CallFunc_GetStartTime_ReturnValue;                 // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetStartTime_ReturnValue_1;               // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue_1;                 // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PauseAnimation_ReturnValue;               // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PauseAnimation_ReturnValue_1;             // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_634E[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PauseAnimation_ReturnValue_2;             // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_634F[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PauseAnimation_ReturnValue_3;             // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6350[0x4];                                     // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bUsingGamepad;          // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6351[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0170(0x0018)()
	float                                         Temp_float_Variable_1;                             // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6352[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_2;                           // 0x0190(0x0018)()
	float                                         K2Node_Select_Default_3;                           // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6353[0x4];                                     // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;              // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton) == 0x000008, "Wrong alignment on PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton");
static_assert(sizeof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton) == 0x0001B8, "Wrong size on PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, EntryPoint) == 0x000000, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, K2Node_Event_IsDesignTime) == 0x000004, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, Temp_bool_Variable) == 0x000005, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, Temp_bool_Variable_1) == 0x000006, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, Temp_bool_Variable_2) == 0x000007, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, Temp_float_Variable) == 0x000008, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, K2Node_MakeStruct_SlateFontInfo) == 0x000010, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, K2Node_MakeStruct_SlateFontInfo_1) == 0x000060, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::K2Node_MakeStruct_SlateFontInfo_1' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, Temp_bool_Variable_3) == 0x0000B0, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, K2Node_Select_Default) == 0x0000B8, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, CallFunc_GetStartTime_ReturnValue) == 0x000108, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::CallFunc_GetStartTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, CallFunc_GetEndTime_ReturnValue) == 0x00010C, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, CallFunc_GetStartTime_ReturnValue_1) == 0x000110, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::CallFunc_GetStartTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, CallFunc_GetEndTime_ReturnValue_1) == 0x000114, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::CallFunc_GetEndTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, CallFunc_PauseAnimation_ReturnValue) == 0x000118, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::CallFunc_PauseAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, CallFunc_PauseAnimation_ReturnValue_1) == 0x00011C, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::CallFunc_PauseAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000120, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, CallFunc_Add_FloatFloat_ReturnValue) == 0x000124, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, CallFunc_PlayAnimation_ReturnValue) == 0x000128, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000130, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, CallFunc_PauseAnimation_ReturnValue_2) == 0x000134, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::CallFunc_PauseAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, K2Node_Select_Default_1) == 0x000138, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, CallFunc_LessEqual_FloatFloat_ReturnValue_1) == 0x00013C, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::CallFunc_LessEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000140, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000148, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, CallFunc_PauseAnimation_ReturnValue_3) == 0x00014C, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::CallFunc_PauseAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000150, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, CallFunc_PlayAnimation_ReturnValue_2) == 0x000158, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, CallFunc_PlayAnimation_ReturnValue_3) == 0x000160, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, K2Node_ComponentBoundEvent_bUsingGamepad) == 0x000168, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::K2Node_ComponentBoundEvent_bUsingGamepad' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, CallFunc_TextToUpper_ReturnValue) == 0x000170, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, Temp_float_Variable_1) == 0x000188, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, K2Node_Select_Default_2) == 0x000190, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, K2Node_Select_Default_3) == 0x0001A8, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton, CallFunc_PlayAnimation_ReturnValue_4) == 0x0001B0, "Member 'PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");

}
