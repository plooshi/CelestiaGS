#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FloatingInteraction_Indicator_S13_Umbrella

#include "Basic.hpp"


namespace SDK::Params
{

// Function FloatingInteraction_Indicator_S13_Umbrella.FloatingInteraction_Indicator_S13_Umbrella_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct FloatingInteraction_Indicator_S13_Umbrella_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FloatingInteraction_Indicator_S13_Umbrella_C_PreConstruct) == 0x000001, "Wrong alignment on FloatingInteraction_Indicator_S13_Umbrella_C_PreConstruct");
static_assert(sizeof(FloatingInteraction_Indicator_S13_Umbrella_C_PreConstruct) == 0x000001, "Wrong size on FloatingInteraction_Indicator_S13_Umbrella_C_PreConstruct");
static_assert(offsetof(FloatingInteraction_Indicator_S13_Umbrella_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'FloatingInteraction_Indicator_S13_Umbrella_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function FloatingInteraction_Indicator_S13_Umbrella.FloatingInteraction_Indicator_S13_Umbrella_C.SetBangState
// 0x0001 (0x0001 - 0x0000)
struct FloatingInteraction_Indicator_S13_Umbrella_C_SetBangState final
{
public:
	bool                                          bShowBang;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FloatingInteraction_Indicator_S13_Umbrella_C_SetBangState) == 0x000001, "Wrong alignment on FloatingInteraction_Indicator_S13_Umbrella_C_SetBangState");
static_assert(sizeof(FloatingInteraction_Indicator_S13_Umbrella_C_SetBangState) == 0x000001, "Wrong size on FloatingInteraction_Indicator_S13_Umbrella_C_SetBangState");
static_assert(offsetof(FloatingInteraction_Indicator_S13_Umbrella_C_SetBangState, bShowBang) == 0x000000, "Member 'FloatingInteraction_Indicator_S13_Umbrella_C_SetBangState::bShowBang' has a wrong offset!");

// Function FloatingInteraction_Indicator_S13_Umbrella.FloatingInteraction_Indicator_S13_Umbrella_C.ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella
// 0x0078 (0x0078 - 0x0000)
struct FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C36[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C37[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bShowBang;                            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C38[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_2;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_3;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_4;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_5;         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_6;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella) == 0x000008, "Wrong alignment on FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella");
static_assert(sizeof(FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella) == 0x000078, "Wrong size on FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella");
static_assert(offsetof(FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella, EntryPoint) == 0x000000, "Member 'FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella::EntryPoint' has a wrong offset!");
static_assert(offsetof(FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000020, "Member 'FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella, K2Node_Event_IsDesignTime) == 0x000028, "Member 'FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella, CallFunc_PlayAnimation_ReturnValue_1) == 0x000038, "Member 'FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella, CallFunc_PlayAnimation_ReturnValue_2) == 0x000040, "Member 'FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella, K2Node_Event_bShowBang) == 0x000048, "Member 'FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella::K2Node_Event_bShowBang' has a wrong offset!");
static_assert(offsetof(FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella, CallFunc_GetDynamicMaterial_ReturnValue_2) == 0x000050, "Member 'FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella::CallFunc_GetDynamicMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella, CallFunc_GetDynamicMaterial_ReturnValue_3) == 0x000058, "Member 'FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella::CallFunc_GetDynamicMaterial_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella, CallFunc_GetDynamicMaterial_ReturnValue_4) == 0x000060, "Member 'FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella::CallFunc_GetDynamicMaterial_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella, CallFunc_GetDynamicMaterial_ReturnValue_5) == 0x000068, "Member 'FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella::CallFunc_GetDynamicMaterial_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella, CallFunc_GetDynamicMaterial_ReturnValue_6) == 0x000070, "Member 'FloatingInteraction_Indicator_S13_Umbrella_C_ExecuteUbergraph_FloatingInteraction_Indicator_S13_Umbrella::CallFunc_GetDynamicMaterial_ReturnValue_6' has a wrong offset!");

}
