#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShadowPrompt

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function ShadowPrompt.ShadowPrompt_C.ExecuteUbergraph_ShadowPrompt
// 0x0158 (0x0158 - 0x0000)
struct ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A82[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A83[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0020(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0038(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortHUDTagPromptData                  K2Node_Event_PrompData;                            // 0x0068(0x0048)(ConstParm)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00B0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A84[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x00C8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_LeftS;                              // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_RightS;                             // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Split_ReturnValue;                        // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A85[0x6];                                     // 0x0112(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0118(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0130(0x0018)()
	class UMaterialInterface*                     K2Node_Select_Default_1;                           // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt) == 0x000008, "Wrong alignment on ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt");
static_assert(sizeof(ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt) == 0x000158, "Wrong size on ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt");
static_assert(offsetof(ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt, EntryPoint) == 0x000000, "Member 'ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt, Temp_object_Variable) == 0x000008, "Member 'ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt, Temp_object_Variable_1) == 0x000010, "Member 'ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt, Temp_bool_Variable) == 0x000018, "Member 'ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt, Temp_text_Variable) == 0x000020, "Member 'ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt, Temp_text_Variable_1) == 0x000038, "Member 'ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt, CallFunc_PlayAnimation_ReturnValue) == 0x000060, "Member 'ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt, K2Node_Event_PrompData) == 0x000068, "Member 'ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt::K2Node_Event_PrompData' has a wrong offset!");
static_assert(offsetof(ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000B0, "Member 'ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt, K2Node_Event_IsDesignTime) == 0x0000C0, "Member 'ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt, K2Node_Select_Default) == 0x0000C8, "Member 'ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt, CallFunc_Conv_TextToString_ReturnValue) == 0x0000E0, "Member 'ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt, CallFunc_Split_LeftS) == 0x0000F0, "Member 'ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt::CallFunc_Split_LeftS' has a wrong offset!");
static_assert(offsetof(ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt, CallFunc_Split_RightS) == 0x000100, "Member 'ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt::CallFunc_Split_RightS' has a wrong offset!");
static_assert(offsetof(ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt, CallFunc_Split_ReturnValue) == 0x000110, "Member 'ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt::CallFunc_Split_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt, Temp_bool_Variable_1) == 0x000111, "Member 'ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt, CallFunc_Conv_StringToText_ReturnValue) == 0x000118, "Member 'ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000130, "Member 'ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt, K2Node_Select_Default_1) == 0x000148, "Member 'ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt, CallFunc_PlayAnimationForward_ReturnValue) == 0x000150, "Member 'ShadowPrompt_C_ExecuteUbergraph_ShadowPrompt::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function ShadowPrompt.ShadowPrompt_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ShadowPrompt_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShadowPrompt_C_PreConstruct) == 0x000001, "Wrong alignment on ShadowPrompt_C_PreConstruct");
static_assert(sizeof(ShadowPrompt_C_PreConstruct) == 0x000001, "Wrong size on ShadowPrompt_C_PreConstruct");
static_assert(offsetof(ShadowPrompt_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ShadowPrompt_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ShadowPrompt.ShadowPrompt_C.OpenWidget
// 0x0048 (0x0048 - 0x0000)
struct ShadowPrompt_C_OpenWidget final
{
public:
	struct FFortHUDTagPromptData                  PrompData;                                         // 0x0000(0x0048)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ShadowPrompt_C_OpenWidget) == 0x000008, "Wrong alignment on ShadowPrompt_C_OpenWidget");
static_assert(sizeof(ShadowPrompt_C_OpenWidget) == 0x000048, "Wrong size on ShadowPrompt_C_OpenWidget");
static_assert(offsetof(ShadowPrompt_C_OpenWidget, PrompData) == 0x000000, "Member 'ShadowPrompt_C_OpenWidget::PrompData' has a wrong offset!");

}
