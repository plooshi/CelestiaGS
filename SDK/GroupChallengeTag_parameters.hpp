#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GroupChallengeTag

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function GroupChallengeTag.GroupChallengeTag_C.ExecuteUbergraph_GroupChallengeTag
// 0x0048 (0x0048 - 0x0000)
struct GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_739D[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_739E[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_Select_Default;                             // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag) == 0x000008, "Wrong alignment on GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag");
static_assert(sizeof(GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag) == 0x000048, "Wrong size on GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag");
static_assert(offsetof(GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag, EntryPoint) == 0x000000, "Member 'GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag::EntryPoint' has a wrong offset!");
static_assert(offsetof(GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag, K2Node_MakeStruct_Margin) == 0x000004, "Member 'GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag, K2Node_Event_IsDesignTime) == 0x000014, "Member 'GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag, Temp_bool_Variable) == 0x000020, "Member 'GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag, K2Node_MakeStruct_Margin_1) == 0x000024, "Member 'GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag, K2Node_Select_Default) == 0x000034, "Member 'GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag::K2Node_Select_Default' has a wrong offset!");

// Function GroupChallengeTag.GroupChallengeTag_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct GroupChallengeTag_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GroupChallengeTag_C_PreConstruct) == 0x000001, "Wrong alignment on GroupChallengeTag_C_PreConstruct");
static_assert(sizeof(GroupChallengeTag_C_PreConstruct) == 0x000001, "Wrong size on GroupChallengeTag_C_PreConstruct");
static_assert(offsetof(GroupChallengeTag_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'GroupChallengeTag_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

