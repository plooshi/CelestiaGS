#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_SquadDirective

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function Athena_SquadDirective.Athena_SquadDirective_C.UpdateCountdown
// 0x0088 (0x0088 - 0x0000)
struct Athena_SquadDirective_C_UpdateCountdown final
{
public:
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F65[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0020(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0060(0x0010)(ReferenceParm, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0070(0x0018)()
};
static_assert(alignof(Athena_SquadDirective_C_UpdateCountdown) == 0x000008, "Wrong alignment on Athena_SquadDirective_C_UpdateCountdown");
static_assert(sizeof(Athena_SquadDirective_C_UpdateCountdown) == 0x000088, "Wrong size on Athena_SquadDirective_C_UpdateCountdown");
static_assert(offsetof(Athena_SquadDirective_C_UpdateCountdown, CallFunc_Max_ReturnValue) == 0x000000, "Member 'Athena_SquadDirective_C_UpdateCountdown::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_UpdateCountdown, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'Athena_SquadDirective_C_UpdateCountdown::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_UpdateCountdown, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'Athena_SquadDirective_C_UpdateCountdown::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_UpdateCountdown, K2Node_MakeArray_Array) == 0x000060, "Member 'Athena_SquadDirective_C_UpdateCountdown::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_UpdateCountdown, CallFunc_Format_ReturnValue) == 0x000070, "Member 'Athena_SquadDirective_C_UpdateCountdown::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function Athena_SquadDirective.Athena_SquadDirective_C.Cleanup Directive State Anim Event
// 0x0020 (0x0020 - 0x0000)
struct Athena_SquadDirective_C_Cleanup_Directive_State_Anim_Event final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F66[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Athena_SquadDirective_C_Cleanup_Directive_State_Anim_Event) == 0x000008, "Wrong alignment on Athena_SquadDirective_C_Cleanup_Directive_State_Anim_Event");
static_assert(sizeof(Athena_SquadDirective_C_Cleanup_Directive_State_Anim_Event) == 0x000020, "Wrong size on Athena_SquadDirective_C_Cleanup_Directive_State_Anim_Event");
static_assert(offsetof(Athena_SquadDirective_C_Cleanup_Directive_State_Anim_Event, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'Athena_SquadDirective_C_Cleanup_Directive_State_Anim_Event::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_Cleanup_Directive_State_Anim_Event, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000010, "Member 'Athena_SquadDirective_C_Cleanup_Directive_State_Anim_Event::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_Cleanup_Directive_State_Anim_Event, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'Athena_SquadDirective_C_Cleanup_Directive_State_Anim_Event::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function Athena_SquadDirective.Athena_SquadDirective_C.EventIntro
// 0x0001 (0x0001 - 0x0000)
struct Athena_SquadDirective_C_EventIntro final
{
public:
	EAthenaSquadListUpdateType                    UpdateType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Athena_SquadDirective_C_EventIntro) == 0x000001, "Wrong alignment on Athena_SquadDirective_C_EventIntro");
static_assert(sizeof(Athena_SquadDirective_C_EventIntro) == 0x000001, "Wrong size on Athena_SquadDirective_C_EventIntro");
static_assert(offsetof(Athena_SquadDirective_C_EventIntro, UpdateType) == 0x000000, "Member 'Athena_SquadDirective_C_EventIntro::UpdateType' has a wrong offset!");

// Function Athena_SquadDirective.Athena_SquadDirective_C.UpdateSquadListDisplay
// 0x0010 (0x0010 - 0x0000)
struct Athena_SquadDirective_C_UpdateSquadListDisplay final
{
public:
	EAthenaSquadListUpdateType                    UpdateType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F67[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerStateAthena*                 PS;                                                // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Athena_SquadDirective_C_UpdateSquadListDisplay) == 0x000008, "Wrong alignment on Athena_SquadDirective_C_UpdateSquadListDisplay");
static_assert(sizeof(Athena_SquadDirective_C_UpdateSquadListDisplay) == 0x000010, "Wrong size on Athena_SquadDirective_C_UpdateSquadListDisplay");
static_assert(offsetof(Athena_SquadDirective_C_UpdateSquadListDisplay, UpdateType) == 0x000000, "Member 'Athena_SquadDirective_C_UpdateSquadListDisplay::UpdateType' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_UpdateSquadListDisplay, PS) == 0x000008, "Member 'Athena_SquadDirective_C_UpdateSquadListDisplay::PS' has a wrong offset!");

// Function Athena_SquadDirective.Athena_SquadDirective_C.ExecuteUbergraph_Athena_SquadDirective
// 0x01D0 (0x01D0 - 0x0000)
struct Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F68[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, HasGetValueTypeHash)
	EAthenaSquadListUpdateType                    Temp_byte_Variable_2;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F69[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0020(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F6A[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0040(0x0018)()
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAthenaSquadListUpdateType                    Temp_byte_Variable_4;                              // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAthenaSquadListUpdateType                    K2Node_CustomEvent_UpdateType;                     // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_6;                              // 0x005E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F6B[0x1];                                     // 0x005F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAthenaSquadListUpdateType                    Temp_byte_Variable_7;                              // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAthenaSquadListUpdateType                    K2Node_Event_UpdateType;                           // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F6C[0x2];                                     // 0x0066(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerStateAthena*                 K2Node_Event_PS;                                   // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F6D[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0088(0x0018)()
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F6E[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00A8(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F6F[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x00F0(0x0010)(ReferenceParm, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0100(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue_1;                // 0x0118(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0130(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0140(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F70[0x1];                                     // 0x014B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0160(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   Temp_text_Variable;                                // 0x0170(0x0018)()
	class FText                                   K2Node_Select_Default_2;                           // 0x0188(0x0018)()
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;            // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRebootDirectiveDisplayTime_ReturnValue; // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRebootChipExpirationTime_ReturnValue;  // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue_1;          // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRebootChipExpirationTime_ReturnValue_1; // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_3;                           // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x01C8(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective) == 0x000008, "Wrong alignment on Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective");
static_assert(sizeof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective) == 0x0001D0, "Wrong size on Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, EntryPoint) == 0x000000, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::EntryPoint' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, Temp_byte_Variable) == 0x000004, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, Temp_byte_Variable_1) == 0x000005, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, K2Node_MakeArray_Array) == 0x000008, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, Temp_byte_Variable_2) == 0x000018, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, CallFunc_Format_ReturnValue) == 0x000020, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, Temp_bool_Variable) == 0x000038, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, CallFunc_TextToUpper_ReturnValue) == 0x000040, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, Temp_byte_Variable_3) == 0x000058, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, Temp_byte_Variable_4) == 0x000059, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, K2Node_CustomEvent_UpdateType) == 0x00005A, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::K2Node_CustomEvent_UpdateType' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00005B, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00005C, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, Temp_byte_Variable_5) == 0x00005D, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, Temp_byte_Variable_6) == 0x00005E, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, Temp_int_Variable) == 0x000060, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, Temp_byte_Variable_7) == 0x000064, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, K2Node_Event_UpdateType) == 0x000065, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::K2Node_Event_UpdateType' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, K2Node_Event_PS) == 0x000068, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::K2Node_Event_PS' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, CallFunc_GetPlayerName_ReturnValue) == 0x000070, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, CallFunc_Conv_StringToText_ReturnValue) == 0x000088, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x0000A0, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, K2Node_MakeStruct_FormatArgumentData) == 0x0000A8, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, CallFunc_BooleanAND_ReturnValue) == 0x0000E8, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, K2Node_MakeArray_Array_1) == 0x0000F0, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, CallFunc_Format_ReturnValue_1) == 0x000100, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, CallFunc_TextToUpper_ReturnValue_1) == 0x000118, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::CallFunc_TextToUpper_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, K2Node_CreateDelegate_OutputDelegate) == 0x000130, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000140, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000148, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, K2Node_Select_Default) == 0x000149, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, K2Node_Select_Default_1) == 0x00014A, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, CallFunc_Subtract_IntInt_ReturnValue) == 0x00014C, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, CallFunc_PlayAnimation_ReturnValue) == 0x000150, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, CallFunc_PlayAnimation_ReturnValue_1) == 0x000158, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, K2Node_CreateDelegate_OutputDelegate_1) == 0x000160, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, Temp_text_Variable) == 0x000170, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, K2Node_Select_Default_2) == 0x000188, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, CallFunc_GetRuntimeOptions_ReturnValue) == 0x0001A0, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, CallFunc_GetRebootDirectiveDisplayTime_ReturnValue) == 0x0001A8, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::CallFunc_GetRebootDirectiveDisplayTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, CallFunc_GetRebootChipExpirationTime_ReturnValue) == 0x0001AC, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::CallFunc_GetRebootChipExpirationTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, CallFunc_GetRuntimeOptions_ReturnValue_1) == 0x0001B0, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::CallFunc_GetRuntimeOptions_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, CallFunc_GetRebootChipExpirationTime_ReturnValue_1) == 0x0001B8, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::CallFunc_GetRebootChipExpirationTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, CallFunc_FTrunc_ReturnValue) == 0x0001BC, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, K2Node_Select_Default_3) == 0x0001C0, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0001C4, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x0001C8, "Member 'Athena_SquadDirective_C_ExecuteUbergraph_Athena_SquadDirective::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");

}
