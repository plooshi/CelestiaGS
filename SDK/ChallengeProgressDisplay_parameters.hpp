#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengeProgressDisplay

#include "Basic.hpp"


namespace SDK::Params
{

// Function ChallengeProgressDisplay.ChallengeProgressDisplay_C.ExecuteUbergraph_ChallengeProgressDisplay
// 0x0008 (0x0008 - 0x0000)
struct ChallengeProgressDisplay_C_ExecuteUbergraph_ChallengeProgressDisplay final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChallengeProgressDisplay_C_ExecuteUbergraph_ChallengeProgressDisplay) == 0x000004, "Wrong alignment on ChallengeProgressDisplay_C_ExecuteUbergraph_ChallengeProgressDisplay");
static_assert(sizeof(ChallengeProgressDisplay_C_ExecuteUbergraph_ChallengeProgressDisplay) == 0x000008, "Wrong size on ChallengeProgressDisplay_C_ExecuteUbergraph_ChallengeProgressDisplay");
static_assert(offsetof(ChallengeProgressDisplay_C_ExecuteUbergraph_ChallengeProgressDisplay, EntryPoint) == 0x000000, "Member 'ChallengeProgressDisplay_C_ExecuteUbergraph_ChallengeProgressDisplay::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChallengeProgressDisplay_C_ExecuteUbergraph_ChallengeProgressDisplay, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ChallengeProgressDisplay_C_ExecuteUbergraph_ChallengeProgressDisplay::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function ChallengeProgressDisplay.ChallengeProgressDisplay_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ChallengeProgressDisplay_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChallengeProgressDisplay_C_PreConstruct) == 0x000001, "Wrong alignment on ChallengeProgressDisplay_C_PreConstruct");
static_assert(sizeof(ChallengeProgressDisplay_C_PreConstruct) == 0x000001, "Wrong size on ChallengeProgressDisplay_C_PreConstruct");
static_assert(offsetof(ChallengeProgressDisplay_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ChallengeProgressDisplay_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ChallengeProgressDisplay.ChallengeProgressDisplay_C.SelectedHoveredFunc
// 0x0008 (0x0008 - 0x0000)
struct ChallengeProgressDisplay_C_SelectedHoveredFunc final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChallengeProgressDisplay_C_SelectedHoveredFunc) == 0x000008, "Wrong alignment on ChallengeProgressDisplay_C_SelectedHoveredFunc");
static_assert(sizeof(ChallengeProgressDisplay_C_SelectedHoveredFunc) == 0x000008, "Wrong size on ChallengeProgressDisplay_C_SelectedHoveredFunc");
static_assert(offsetof(ChallengeProgressDisplay_C_SelectedHoveredFunc, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ChallengeProgressDisplay_C_SelectedHoveredFunc::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}
