#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LevelUpVisuals

#include "Basic.hpp"


namespace SDK::Params
{

// Function LevelUpVisuals.LevelUpVisuals_C.ExecuteUbergraph_LevelUpVisuals
// 0x0078 (0x0078 - 0x0000)
struct LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B63[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class USoundBase*                             Temp_object_Variable;                              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_1;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B64[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B65[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             K2Node_Select_Default;                             // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals) == 0x000008, "Wrong alignment on LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals");
static_assert(sizeof(LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals) == 0x000078, "Wrong size on LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals");
static_assert(offsetof(LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals, EntryPoint) == 0x000000, "Member 'LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals::EntryPoint' has a wrong offset!");
static_assert(offsetof(LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals, Temp_bool_Variable) == 0x000024, "Member 'LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals, Temp_object_Variable) == 0x000038, "Member 'LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals, Temp_object_Variable_1) == 0x000040, "Member 'LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals, CallFunc_PlayAnimation_ReturnValue) == 0x000048, "Member 'LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals, CallFunc_PlayAnimation_ReturnValue_1) == 0x000050, "Member 'LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals, CallFunc_Greater_IntInt_ReturnValue) == 0x000058, "Member 'LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals, CallFunc_PlayAnimation_ReturnValue_2) == 0x000060, "Member 'LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000068, "Member 'LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals, K2Node_Select_Default) == 0x000070, "Member 'LevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals::K2Node_Select_Default' has a wrong offset!");

}

