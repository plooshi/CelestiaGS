#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LandscapeWaterInfo

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function LandscapeWaterInfo.LandscapeWaterInfo_C.ExecuteUbergraph_LandscapeWaterInfo
// 0x0020 (0x0020 - 0x0000)
struct LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A25[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetScalarParameterValue_ReturnValue;      // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A26[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWaterSubsystem*                        CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo) == 0x000008, "Wrong alignment on LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo");
static_assert(sizeof(LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo) == 0x000020, "Wrong size on LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo");
static_assert(offsetof(LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo, EntryPoint) == 0x000000, "Member 'LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo, CallFunc_BooleanAND_ReturnValue) == 0x000005, "Member 'LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo, CallFunc_GetScalarParameterValue_ReturnValue) == 0x000008, "Member 'LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo::CallFunc_GetScalarParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo, CallFunc_Conv_BoolToFloat_ReturnValue) == 0x00000C, "Member 'LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo::CallFunc_Conv_BoolToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo, K2Node_Event_EndPlayReason) == 0x000010, "Member 'LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000018, "Member 'LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");

// Function LandscapeWaterInfo.LandscapeWaterInfo_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct LandscapeWaterInfo_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LandscapeWaterInfo_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on LandscapeWaterInfo_C_ReceiveEndPlay");
static_assert(sizeof(LandscapeWaterInfo_C_ReceiveEndPlay) == 0x000001, "Wrong size on LandscapeWaterInfo_C_ReceiveEndPlay");
static_assert(offsetof(LandscapeWaterInfo_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'LandscapeWaterInfo_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function LandscapeWaterInfo.LandscapeWaterInfo_C.UserConstructionScript
// 0x00B0 (0x00B0 - 0x0000)
struct LandscapeWaterInfo_C_UserConstructionScript final
{
public:
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScalarParameterValue_ReturnValue;      // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A27[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A28[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_BoolToString_ReturnValue;            // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A29[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LandscapeWaterInfo_C_UserConstructionScript) == 0x000008, "Wrong alignment on LandscapeWaterInfo_C_UserConstructionScript");
static_assert(sizeof(LandscapeWaterInfo_C_UserConstructionScript) == 0x0000B0, "Wrong size on LandscapeWaterInfo_C_UserConstructionScript");
static_assert(offsetof(LandscapeWaterInfo_C_UserConstructionScript, CallFunc_Concat_StrStr_ReturnValue) == 0x000000, "Member 'LandscapeWaterInfo_C_UserConstructionScript::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_UserConstructionScript, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000010, "Member 'LandscapeWaterInfo_C_UserConstructionScript::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_UserConstructionScript, CallFunc_GetScalarParameterValue_ReturnValue) == 0x000020, "Member 'LandscapeWaterInfo_C_UserConstructionScript::CallFunc_GetScalarParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_UserConstructionScript, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000028, "Member 'LandscapeWaterInfo_C_UserConstructionScript::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_UserConstructionScript, CallFunc_Conv_FloatToString_ReturnValue) == 0x000038, "Member 'LandscapeWaterInfo_C_UserConstructionScript::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_UserConstructionScript, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000048, "Member 'LandscapeWaterInfo_C_UserConstructionScript::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_UserConstructionScript, CallFunc_GetDisplayName_ReturnValue) == 0x000058, "Member 'LandscapeWaterInfo_C_UserConstructionScript::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_UserConstructionScript, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000068, "Member 'LandscapeWaterInfo_C_UserConstructionScript::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'LandscapeWaterInfo_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_UserConstructionScript, CallFunc_Conv_BoolToString_ReturnValue) == 0x000080, "Member 'LandscapeWaterInfo_C_UserConstructionScript::CallFunc_Conv_BoolToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_UserConstructionScript, CallFunc_BooleanAND_ReturnValue) == 0x000090, "Member 'LandscapeWaterInfo_C_UserConstructionScript::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_UserConstructionScript, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000098, "Member 'LandscapeWaterInfo_C_UserConstructionScript::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_UserConstructionScript, CallFunc_Conv_BoolToFloat_ReturnValue) == 0x0000A8, "Member 'LandscapeWaterInfo_C_UserConstructionScript::CallFunc_Conv_BoolToFloat_ReturnValue' has a wrong offset!");

// Function LandscapeWaterInfo.LandscapeWaterInfo_C.Set Water MPC Values
// 0x0148 (0x0148 - 0x0000)
struct LandscapeWaterInfo_C_Set_Water_MPC_Values final
{
public:
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x008C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_2;                // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_2;                // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_2;                   // 0x00BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_3;                // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_3;                // 0x00D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_3;                   // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_2;                          // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_2;                          // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_2;                          // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_3;                          // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_3;                          // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_3;                          // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_4;                          // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_4;                          // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_4;                          // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue_1;   // 0x0128(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue_2;   // 0x0138(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LandscapeWaterInfo_C_Set_Water_MPC_Values) == 0x000004, "Wrong alignment on LandscapeWaterInfo_C_Set_Water_MPC_Values");
static_assert(sizeof(LandscapeWaterInfo_C_Set_Water_MPC_Values) == 0x000148, "Wrong size on LandscapeWaterInfo_C_Set_Water_MPC_Values");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakTransform_Location) == 0x000000, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakTransform_Rotation) == 0x00000C, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakTransform_Scale) == 0x000018, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakTransform_Location_1) == 0x000024, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakTransform_Rotation_1) == 0x000030, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakTransform_Scale_1) == 0x00003C, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakVector_X) == 0x000048, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakVector_Y) == 0x00004C, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakVector_Z) == 0x000050, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakVector_X_1) == 0x000054, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakVector_Y_1) == 0x000058, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakVector_Z_1) == 0x00005C, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_MakeVector2D_ReturnValue) == 0x000060, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_MakeVector_ReturnValue) == 0x000068, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000074, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000080, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x00008C, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00009C, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x0000A0, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakTransform_Location_2) == 0x0000A4, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakTransform_Location_2' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakTransform_Rotation_2) == 0x0000B0, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakTransform_Rotation_2' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakTransform_Scale_2) == 0x0000BC, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakTransform_Scale_2' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakTransform_Location_3) == 0x0000C8, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakTransform_Location_3' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakTransform_Rotation_3) == 0x0000D4, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakTransform_Rotation_3' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakTransform_Scale_3) == 0x0000E0, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakTransform_Scale_3' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakVector_X_2) == 0x0000EC, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakVector_Y_2) == 0x0000F0, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakVector_Z_2) == 0x0000F4, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakVector_X_3) == 0x0000F8, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakVector_X_3' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakVector_Y_3) == 0x0000FC, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakVector_Y_3' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakVector_Z_3) == 0x000100, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakVector_Z_3' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000104, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000108, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x00010C, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_MakeVector_ReturnValue_1) == 0x000110, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakVector_X_4) == 0x00011C, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakVector_X_4' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakVector_Y_4) == 0x000120, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakVector_Y_4' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_BreakVector_Z_4) == 0x000124, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_BreakVector_Z_4' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_Conv_VectorToLinearColor_ReturnValue_1) == 0x000128, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_Conv_VectorToLinearColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Set_Water_MPC_Values, CallFunc_Conv_VectorToLinearColor_ReturnValue_2) == 0x000138, "Member 'LandscapeWaterInfo_C_Set_Water_MPC_Values::CallFunc_Conv_VectorToLinearColor_ReturnValue_2' has a wrong offset!");

// Function LandscapeWaterInfo.LandscapeWaterInfo_C.Update Water MID
// 0x0010 (0x0010 - 0x0000)
struct LandscapeWaterInfo_C_Update_Water_MID final
{
public:
	class UTexture*                               Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LandscapeWaterInfo_C_Update_Water_MID) == 0x000008, "Wrong alignment on LandscapeWaterInfo_C_Update_Water_MID");
static_assert(sizeof(LandscapeWaterInfo_C_Update_Water_MID) == 0x000010, "Wrong size on LandscapeWaterInfo_C_Update_Water_MID");
static_assert(offsetof(LandscapeWaterInfo_C_Update_Water_MID, Texture) == 0x000000, "Member 'LandscapeWaterInfo_C_Update_Water_MID::Texture' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_Update_Water_MID, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'LandscapeWaterInfo_C_Update_Water_MID::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function LandscapeWaterInfo.LandscapeWaterInfo_C.UpdateGameTexture
// 0x0028 (0x0028 - 0x0000)
struct LandscapeWaterInfo_C_UpdateGameTexture final
{
public:
	TArray<class AWaterMeshActor*>                CallFunc_GetAllActorsOfClass_OutActors;            // 0x0000(0x0010)(ReferenceParm, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A2A[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AWaterMeshActor*                        CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LandscapeWaterInfo_C_UpdateGameTexture) == 0x000008, "Wrong alignment on LandscapeWaterInfo_C_UpdateGameTexture");
static_assert(sizeof(LandscapeWaterInfo_C_UpdateGameTexture) == 0x000028, "Wrong size on LandscapeWaterInfo_C_UpdateGameTexture");
static_assert(offsetof(LandscapeWaterInfo_C_UpdateGameTexture, CallFunc_GetAllActorsOfClass_OutActors) == 0x000000, "Member 'LandscapeWaterInfo_C_UpdateGameTexture::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_UpdateGameTexture, CallFunc_Array_LastIndex_ReturnValue) == 0x000010, "Member 'LandscapeWaterInfo_C_UpdateGameTexture::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_UpdateGameTexture, CallFunc_Array_Get_Item) == 0x000018, "Member 'LandscapeWaterInfo_C_UpdateGameTexture::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_UpdateGameTexture, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000020, "Member 'LandscapeWaterInfo_C_UpdateGameTexture::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

}
