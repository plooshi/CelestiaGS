#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StayTogetherButton

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function StayTogetherButton.StayTogetherButton_C.ExecuteUbergraph_StayTogetherButton
// 0x0090 (0x0090 - 0x0000)
struct StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	bool                                          K2Node_Event_bPreserveSquad;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5137[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0060(0x0028)()
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton) == 0x000008, "Wrong alignment on StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton");
static_assert(sizeof(StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton) == 0x000090, "Wrong size on StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton");
static_assert(offsetof(StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton, EntryPoint) == 0x000000, "Member 'StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton, Temp_bool_Variable) == 0x000004, "Member 'StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton, Temp_byte_Variable) == 0x000005, "Member 'StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton, Temp_byte_Variable_1) == 0x000006, "Member 'StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton, Temp_bool_Variable_1) == 0x000007, "Member 'StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton, K2Node_Event_bPreserveSquad) == 0x000058, "Member 'StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton::K2Node_Event_bPreserveSquad' has a wrong offset!");
static_assert(offsetof(StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton, K2Node_Select_Default) == 0x000060, "Member 'StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton, K2Node_Select_Default_1) == 0x000088, "Member 'StayTogetherButton_C_ExecuteUbergraph_StayTogetherButton::K2Node_Select_Default_1' has a wrong offset!");

// Function StayTogetherButton.StayTogetherButton_C.BP_HandlePreserveSquadChanged
// 0x0001 (0x0001 - 0x0000)
struct StayTogetherButton_C_BP_HandlePreserveSquadChanged final
{
public:
	bool                                          bPreserveSquad;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StayTogetherButton_C_BP_HandlePreserveSquadChanged) == 0x000001, "Wrong alignment on StayTogetherButton_C_BP_HandlePreserveSquadChanged");
static_assert(sizeof(StayTogetherButton_C_BP_HandlePreserveSquadChanged) == 0x000001, "Wrong size on StayTogetherButton_C_BP_HandlePreserveSquadChanged");
static_assert(offsetof(StayTogetherButton_C_BP_HandlePreserveSquadChanged, bPreserveSquad) == 0x000000, "Member 'StayTogetherButton_C_BP_HandlePreserveSquadChanged::bPreserveSquad' has a wrong offset!");

}
