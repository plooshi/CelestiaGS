#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAPPHUD_Radio

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function GAPPHUD_Radio.GAPPHUD_Radio_C.HUDToggle
// 0x0040 (0x0040 - 0x0000)
struct GAPPHUD_Radio_C_HUDToggle final
{
public:
	bool                                          Hide;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_704F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromTag_ReturnValue; // 0x0010(0x0020)()
	class AFortPlayerControllerAthena*            K2Node_DynamicCast_AsFort_Player_Controller_Athena; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAPPHUD_Radio_C_HUDToggle) == 0x000008, "Wrong alignment on GAPPHUD_Radio_C_HUDToggle");
static_assert(sizeof(GAPPHUD_Radio_C_HUDToggle) == 0x000040, "Wrong size on GAPPHUD_Radio_C_HUDToggle");
static_assert(offsetof(GAPPHUD_Radio_C_HUDToggle, Hide) == 0x000000, "Member 'GAPPHUD_Radio_C_HUDToggle::Hide' has a wrong offset!");
static_assert(offsetof(GAPPHUD_Radio_C_HUDToggle, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'GAPPHUD_Radio_C_HUDToggle::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAPPHUD_Radio_C_HUDToggle, CallFunc_MakeGameplayTagContainerFromTag_ReturnValue) == 0x000010, "Member 'GAPPHUD_Radio_C_HUDToggle::CallFunc_MakeGameplayTagContainerFromTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAPPHUD_Radio_C_HUDToggle, K2Node_DynamicCast_AsFort_Player_Controller_Athena) == 0x000030, "Member 'GAPPHUD_Radio_C_HUDToggle::K2Node_DynamicCast_AsFort_Player_Controller_Athena' has a wrong offset!");
static_assert(offsetof(GAPPHUD_Radio_C_HUDToggle, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'GAPPHUD_Radio_C_HUDToggle::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function GAPPHUD_Radio.GAPPHUD_Radio_C.Tick
// 0x003C (0x003C - 0x0000)
struct GAPPHUD_Radio_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAPPHUD_Radio_C_Tick) == 0x000004, "Wrong alignment on GAPPHUD_Radio_C_Tick");
static_assert(sizeof(GAPPHUD_Radio_C_Tick) == 0x00003C, "Wrong size on GAPPHUD_Radio_C_Tick");
static_assert(offsetof(GAPPHUD_Radio_C_Tick, MyGeometry) == 0x000000, "Member 'GAPPHUD_Radio_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(GAPPHUD_Radio_C_Tick, InDeltaTime) == 0x000038, "Member 'GAPPHUD_Radio_C_Tick::InDeltaTime' has a wrong offset!");

// Function GAPPHUD_Radio.GAPPHUD_Radio_C.ExecuteUbergraph_GAPPHUD_Radio
// 0x00A8 (0x00A8 - 0x0000)
struct GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7050[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7051[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0050(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x008C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio) == 0x000008, "Wrong alignment on GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio");
static_assert(sizeof(GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio) == 0x0000A8, "Wrong size on GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio");
static_assert(offsetof(GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio, EntryPoint) == 0x000000, "Member 'GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio, CallFunc_PlayAnimation_ReturnValue_1) == 0x000028, "Member 'GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio, CallFunc_GetPlayerController_ReturnValue) == 0x000030, "Member 'GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio, CallFunc_PlayAnimation_ReturnValue_2) == 0x000038, "Member 'GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio, CallFunc_IsInputKeyDown_ReturnValue) == 0x000040, "Member 'GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio::CallFunc_IsInputKeyDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio, CallFunc_PlayAnimation_ReturnValue_3) == 0x000048, "Member 'GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio, K2Node_Event_MyGeometry) == 0x000050, "Member 'GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio, K2Node_Event_InDeltaTime) == 0x000088, "Member 'GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio, K2Node_CreateDelegate_OutputDelegate) == 0x00008C, "Member 'GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio, CallFunc_Subtract_IntInt_ReturnValue) == 0x00009C, "Member 'GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio, Temp_int_Variable) == 0x0000A0, "Member 'GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000A4, "Member 'GAPPHUD_Radio_C_ExecuteUbergraph_GAPPHUD_Radio::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

}

