#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SplineMesh

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_SplineMesh.BP_SplineMesh_C.UserConstructionScript
// 0x01B0 (0x01B0 - 0x0000)
struct BP_SplineMesh_C_UserConstructionScript final
{
public:
	struct FTransform                             Temp_struct_Variable;                              // 0x0000(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineMeshComponent*                   CallFunc_AddComponent_ReturnValue;                 // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BF2[0x2];                                     // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetScaleAtSplinePoint_ReturnValue;        // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetScaleAtSplinePoint_ReturnValue_1;      // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Location; // 0x0088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Tangent; // 0x0094(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Location_1; // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1; // 0x00B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue_1;                     // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BF3[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_VSize_ReturnValue;                        // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue_1;                      // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x010C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BF4[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_SelectVector_ReturnValue_1;               // 0x012C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetScaleAtSplinePoint_ReturnValue_2;      // 0x0138(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetScaleAtSplinePoint_ReturnValue_3;      // 0x0144(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_2;                          // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_2;                          // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_2;                          // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_3;                          // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_3;                          // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_3;                          // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_2;               // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_3;               // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Location_2; // 0x0178(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_2; // 0x0184(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Location_3; // 0x0190(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_3; // 0x019C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESplineMeshAxis                               CallFunc_GetForwardAxis_ReturnValue;               // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SplineMesh_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_SplineMesh_C_UserConstructionScript");
static_assert(sizeof(BP_SplineMesh_C_UserConstructionScript) == 0x0001B0, "Wrong size on BP_SplineMesh_C_UserConstructionScript");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, Temp_struct_Variable) == 0x000000, "Member 'BP_SplineMesh_C_UserConstructionScript::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, Temp_int_Variable) == 0x000030, "Member 'BP_SplineMesh_C_UserConstructionScript::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue) == 0x000038, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue_1) == 0x000040, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000044, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_IsValid_ReturnValue_1) == 0x000045, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_GetScaleAtSplinePoint_ReturnValue) == 0x000048, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_GetScaleAtSplinePoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_BreakVector_X) == 0x000054, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_BreakVector_Y) == 0x000058, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_BreakVector_Z) == 0x00005C, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_GetScaleAtSplinePoint_ReturnValue_1) == 0x000060, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_GetScaleAtSplinePoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_MakeVector2D_ReturnValue) == 0x00006C, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_BreakVector_X_1) == 0x000074, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_BreakVector_Y_1) == 0x000078, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_BreakVector_Z_1) == 0x00007C, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_MakeVector2D_ReturnValue_1) == 0x000080, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_GetLocationAndTangentAtSplinePoint_Location) == 0x000088, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_GetLocationAndTangentAtSplinePoint_Location' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_GetLocationAndTangentAtSplinePoint_Tangent) == 0x000094, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_GetLocationAndTangentAtSplinePoint_Tangent' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_Normal_ReturnValue) == 0x0000A0, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_GetLocationAndTangentAtSplinePoint_Location_1) == 0x0000AC, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_GetLocationAndTangentAtSplinePoint_Location_1' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1) == 0x0000B8, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x0000C4, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_Normal_ReturnValue_1) == 0x0000C8, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_Normal_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000D4, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000D8, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000E4, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_VSize_ReturnValue) == 0x0000E8, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000EC, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x0000F0, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000FC, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_VSize_ReturnValue_1) == 0x000108, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_VSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_SelectVector_ReturnValue) == 0x00010C, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000118, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x00011C, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_SetStaticMesh_ReturnValue) == 0x000128, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_SelectVector_ReturnValue_1) == 0x00012C, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_SelectVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_GetScaleAtSplinePoint_ReturnValue_2) == 0x000138, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_GetScaleAtSplinePoint_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_GetScaleAtSplinePoint_ReturnValue_3) == 0x000144, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_GetScaleAtSplinePoint_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_BreakVector_X_2) == 0x000150, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_BreakVector_Y_2) == 0x000154, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_BreakVector_Z_2) == 0x000158, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_BreakVector_X_3) == 0x00015C, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_BreakVector_X_3' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_BreakVector_Y_3) == 0x000160, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_BreakVector_Y_3' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_BreakVector_Z_3) == 0x000164, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_BreakVector_Z_3' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_MakeVector2D_ReturnValue_2) == 0x000168, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_MakeVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_MakeVector2D_ReturnValue_3) == 0x000170, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_MakeVector2D_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_GetLocationAndTangentAtSplinePoint_Location_2) == 0x000178, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_GetLocationAndTangentAtSplinePoint_Location_2' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_2) == 0x000184, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_2' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_GetLocationAndTangentAtSplinePoint_Location_3) == 0x000190, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_GetLocationAndTangentAtSplinePoint_Location_3' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_3) == 0x00019C, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_3' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_C_UserConstructionScript, CallFunc_GetForwardAxis_ReturnValue) == 0x0001A8, "Member 'BP_SplineMesh_C_UserConstructionScript::CallFunc_GetForwardAxis_ReturnValue' has a wrong offset!");

}
