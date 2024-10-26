#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengePunchCardEntry

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ChallengePunchCardEntry.ChallengePunchCardEntry_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ChallengePunchCardEntry_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChallengePunchCardEntry_C_PreConstruct) == 0x000001, "Wrong alignment on ChallengePunchCardEntry_C_PreConstruct");
static_assert(sizeof(ChallengePunchCardEntry_C_PreConstruct) == 0x000001, "Wrong size on ChallengePunchCardEntry_C_PreConstruct");
static_assert(offsetof(ChallengePunchCardEntry_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ChallengePunchCardEntry_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ChallengePunchCardEntry.ChallengePunchCardEntry_C.SetStyle
// 0x00B0 (0x00B0 - 0x0000)
struct ChallengePunchCardEntry_C_SetStyle final
{
public:
	struct FFortChallengePunchCardStyles          PunchStyle;                                        // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ChallengePunchCardEntry_C_SetStyle) == 0x000008, "Wrong alignment on ChallengePunchCardEntry_C_SetStyle");
static_assert(sizeof(ChallengePunchCardEntry_C_SetStyle) == 0x0000B0, "Wrong size on ChallengePunchCardEntry_C_SetStyle");
static_assert(offsetof(ChallengePunchCardEntry_C_SetStyle, PunchStyle) == 0x000000, "Member 'ChallengePunchCardEntry_C_SetStyle::PunchStyle' has a wrong offset!");

// Function ChallengePunchCardEntry.ChallengePunchCardEntry_C.ExecuteUbergraph_ChallengePunchCardEntry
// 0x0148 (0x0148 - 0x0000)
struct ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70AA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_2;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70AB[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_3;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortChallengePunchCardStyles          K2Node_Event_PunchStyle;                           // 0x0038(0x00B0)(ConstParm)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_4;         // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70AC[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_5;         // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70AD[0x5];                                     // 0x0103(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInZone_ReturnValue;                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70AE[0x3];                                     // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70AF[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x012C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0134(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry) == 0x000008, "Wrong alignment on ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry");
static_assert(sizeof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry) == 0x000148, "Wrong size on ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry");
static_assert(offsetof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry, EntryPoint) == 0x000000, "Member 'ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000010, "Member 'ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry, CallFunc_GetDynamicMaterial_ReturnValue_2) == 0x000018, "Member 'ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry::CallFunc_GetDynamicMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry, CallFunc_GetEndTime_ReturnValue) == 0x000020, "Member 'ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry, CallFunc_PlayAnimationForward_ReturnValue) == 0x000028, "Member 'ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry, CallFunc_GetDynamicMaterial_ReturnValue_3) == 0x000030, "Member 'ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry::CallFunc_GetDynamicMaterial_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry, K2Node_Event_PunchStyle) == 0x000038, "Member 'ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry::K2Node_Event_PunchStyle' has a wrong offset!");
static_assert(offsetof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry, CallFunc_GetDynamicMaterial_ReturnValue_4) == 0x0000E8, "Member 'ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry::CallFunc_GetDynamicMaterial_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry, K2Node_Event_IsDesignTime) == 0x0000F0, "Member 'ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry, CallFunc_GetDynamicMaterial_ReturnValue_5) == 0x0000F8, "Member 'ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry::CallFunc_GetDynamicMaterial_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry, Temp_byte_Variable) == 0x000100, "Member 'ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry, Temp_byte_Variable_1) == 0x000101, "Member 'ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry, Temp_bool_Variable) == 0x000102, "Member 'ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000108, "Member 'ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry, CallFunc_IsInZone_ReturnValue) == 0x000110, "Member 'ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry::CallFunc_IsInZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry, CallFunc_RandomFloatInRange_ReturnValue) == 0x000114, "Member 'ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry, K2Node_Select_Default) == 0x000118, "Member 'ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x00011C, "Member 'ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry, CallFunc_MakeVector2D_ReturnValue) == 0x000120, "Member 'ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x000128, "Member 'ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry, CallFunc_MakeVector2D_ReturnValue_1) == 0x00012C, "Member 'ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry, K2Node_CreateDelegate_OutputDelegate) == 0x000134, "Member 'ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

}

