#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FogVolume

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_FogVolume.BP_FogVolume_C.ExecuteUbergraph_BP_FogVolume
// 0x0004 (0x0004 - 0x0000)
struct BP_FogVolume_C_ExecuteUbergraph_BP_FogVolume final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FogVolume_C_ExecuteUbergraph_BP_FogVolume) == 0x000004, "Wrong alignment on BP_FogVolume_C_ExecuteUbergraph_BP_FogVolume");
static_assert(sizeof(BP_FogVolume_C_ExecuteUbergraph_BP_FogVolume) == 0x000004, "Wrong size on BP_FogVolume_C_ExecuteUbergraph_BP_FogVolume");
static_assert(offsetof(BP_FogVolume_C_ExecuteUbergraph_BP_FogVolume, EntryPoint) == 0x000000, "Member 'BP_FogVolume_C_ExecuteUbergraph_BP_FogVolume::EntryPoint' has a wrong offset!");

// Function BP_FogVolume.BP_FogVolume_C.SetScalarOnFogMaterial
// 0x000C (0x000C - 0x0000)
struct BP_FogVolume_C_SetScalarOnFogMaterial final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Param_Name;                                        // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FogVolume_C_SetScalarOnFogMaterial) == 0x000004, "Wrong alignment on BP_FogVolume_C_SetScalarOnFogMaterial");
static_assert(sizeof(BP_FogVolume_C_SetScalarOnFogMaterial) == 0x00000C, "Wrong size on BP_FogVolume_C_SetScalarOnFogMaterial");
static_assert(offsetof(BP_FogVolume_C_SetScalarOnFogMaterial, Value) == 0x000000, "Member 'BP_FogVolume_C_SetScalarOnFogMaterial::Value' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_SetScalarOnFogMaterial, Param_Name) == 0x000004, "Member 'BP_FogVolume_C_SetScalarOnFogMaterial::Param_Name' has a wrong offset!");

// Function BP_FogVolume.BP_FogVolume_C.UpdateMaterial
// 0x0074 (0x0074 - 0x0000)
struct BP_FogVolume_C_UpdateMaterial final
{
public:
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue_1;   // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_Origin;                // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_BoxExtent;             // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetComponentBounds_SphereRadius;          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue_2;   // 0x0054(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue_3;   // 0x0064(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FogVolume_C_UpdateMaterial) == 0x000004, "Wrong alignment on BP_FogVolume_C_UpdateMaterial");
static_assert(sizeof(BP_FogVolume_C_UpdateMaterial) == 0x000074, "Wrong size on BP_FogVolume_C_UpdateMaterial");
static_assert(offsetof(BP_FogVolume_C_UpdateMaterial, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x000000, "Member 'BP_FogVolume_C_UpdateMaterial::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateMaterial, CallFunc_Conv_VectorToLinearColor_ReturnValue_1) == 0x000010, "Member 'BP_FogVolume_C_UpdateMaterial::CallFunc_Conv_VectorToLinearColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateMaterial, CallFunc_GetComponentBounds_Origin) == 0x000020, "Member 'BP_FogVolume_C_UpdateMaterial::CallFunc_GetComponentBounds_Origin' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateMaterial, CallFunc_GetComponentBounds_BoxExtent) == 0x00002C, "Member 'BP_FogVolume_C_UpdateMaterial::CallFunc_GetComponentBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateMaterial, CallFunc_GetComponentBounds_SphereRadius) == 0x000038, "Member 'BP_FogVolume_C_UpdateMaterial::CallFunc_GetComponentBounds_SphereRadius' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateMaterial, CallFunc_Add_VectorVector_ReturnValue) == 0x00003C, "Member 'BP_FogVolume_C_UpdateMaterial::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateMaterial, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000048, "Member 'BP_FogVolume_C_UpdateMaterial::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateMaterial, CallFunc_Conv_VectorToLinearColor_ReturnValue_2) == 0x000054, "Member 'BP_FogVolume_C_UpdateMaterial::CallFunc_Conv_VectorToLinearColor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateMaterial, CallFunc_Conv_VectorToLinearColor_ReturnValue_3) == 0x000064, "Member 'BP_FogVolume_C_UpdateMaterial::CallFunc_Conv_VectorToLinearColor_ReturnValue_3' has a wrong offset!");

// Function BP_FogVolume.BP_FogVolume_C.SetVectorOnFogMaterial
// 0x0018 (0x0018 - 0x0000)
struct BP_FogVolume_C_SetVectorOnFogMaterial final
{
public:
	struct FLinearColor                           Value;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Param_Name;                                        // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FogVolume_C_SetVectorOnFogMaterial) == 0x000004, "Wrong alignment on BP_FogVolume_C_SetVectorOnFogMaterial");
static_assert(sizeof(BP_FogVolume_C_SetVectorOnFogMaterial) == 0x000018, "Wrong size on BP_FogVolume_C_SetVectorOnFogMaterial");
static_assert(offsetof(BP_FogVolume_C_SetVectorOnFogMaterial, Value) == 0x000000, "Member 'BP_FogVolume_C_SetVectorOnFogMaterial::Value' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_SetVectorOnFogMaterial, Param_Name) == 0x000010, "Member 'BP_FogVolume_C_SetVectorOnFogMaterial::Param_Name' has a wrong offset!");

// Function BP_FogVolume.BP_FogVolume_C.updateParticle
// 0x0090 (0x0090 - 0x0000)
struct BP_FogVolume_C_UpdateParticle final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77A4[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77A5[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77A6[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FogVolume_C_UpdateParticle) == 0x000008, "Wrong alignment on BP_FogVolume_C_UpdateParticle");
static_assert(sizeof(BP_FogVolume_C_UpdateParticle) == 0x000090, "Wrong size on BP_FogVolume_C_UpdateParticle");
static_assert(offsetof(BP_FogVolume_C_UpdateParticle, Temp_bool_Variable) == 0x000000, "Member 'BP_FogVolume_C_UpdateParticle::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateParticle, Temp_object_Variable) == 0x000008, "Member 'BP_FogVolume_C_UpdateParticle::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateParticle, Temp_object_Variable_1) == 0x000010, "Member 'BP_FogVolume_C_UpdateParticle::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateParticle, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_FogVolume_C_UpdateParticle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateParticle, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00001C, "Member 'BP_FogVolume_C_UpdateParticle::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateParticle, CallFunc_GetDisplayName_ReturnValue) == 0x000028, "Member 'BP_FogVolume_C_UpdateParticle::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateParticle, CallFunc_BreakVector_X) == 0x000038, "Member 'BP_FogVolume_C_UpdateParticle::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateParticle, CallFunc_BreakVector_Y) == 0x00003C, "Member 'BP_FogVolume_C_UpdateParticle::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateParticle, CallFunc_BreakVector_Z) == 0x000040, "Member 'BP_FogVolume_C_UpdateParticle::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateParticle, CallFunc_Add_FloatFloat_ReturnValue) == 0x000044, "Member 'BP_FogVolume_C_UpdateParticle::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateParticle, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'BP_FogVolume_C_UpdateParticle::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateParticle, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x00004C, "Member 'BP_FogVolume_C_UpdateParticle::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateParticle, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000050, "Member 'BP_FogVolume_C_UpdateParticle::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateParticle, CallFunc_FTrunc_ReturnValue) == 0x000054, "Member 'BP_FogVolume_C_UpdateParticle::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateParticle, CallFunc_Conv_IntToString_ReturnValue) == 0x000058, "Member 'BP_FogVolume_C_UpdateParticle::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateParticle, K2Node_Select_Default) == 0x000068, "Member 'BP_FogVolume_C_UpdateParticle::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateParticle, CallFunc_Concat_StrStr_ReturnValue) == 0x000070, "Member 'BP_FogVolume_C_UpdateParticle::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateParticle, CallFunc_Conv_StringToName_ReturnValue) == 0x000080, "Member 'BP_FogVolume_C_UpdateParticle::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogVolume_C_UpdateParticle, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000088, "Member 'BP_FogVolume_C_UpdateParticle::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

}

