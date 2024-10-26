#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_Waterbody_SwimmingPool_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Water_structs.hpp"


namespace SDK::Params
{

// Function Apollo_Waterbody_SwimmingPool_Parent.Apollo_Waterbody_SwimmingPool_Parent_C.ExecuteUbergraph_Apollo_Waterbody_SwimmingPool_Parent
// 0x0004 (0x0004 - 0x0000)
struct Apollo_Waterbody_SwimmingPool_Parent_C_ExecuteUbergraph_Apollo_Waterbody_SwimmingPool_Parent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Apollo_Waterbody_SwimmingPool_Parent_C_ExecuteUbergraph_Apollo_Waterbody_SwimmingPool_Parent) == 0x000004, "Wrong alignment on Apollo_Waterbody_SwimmingPool_Parent_C_ExecuteUbergraph_Apollo_Waterbody_SwimmingPool_Parent");
static_assert(sizeof(Apollo_Waterbody_SwimmingPool_Parent_C_ExecuteUbergraph_Apollo_Waterbody_SwimmingPool_Parent) == 0x000004, "Wrong size on Apollo_Waterbody_SwimmingPool_Parent_C_ExecuteUbergraph_Apollo_Waterbody_SwimmingPool_Parent");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_ExecuteUbergraph_Apollo_Waterbody_SwimmingPool_Parent, EntryPoint) == 0x000000, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_ExecuteUbergraph_Apollo_Waterbody_SwimmingPool_Parent::EntryPoint' has a wrong offset!");

// Function Apollo_Waterbody_SwimmingPool_Parent.Apollo_Waterbody_SwimmingPool_Parent_C.UserConstructionScript
// 0x0038 (0x0038 - 0x0000)
struct Apollo_Waterbody_SwimmingPool_Parent_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7881[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStaticMeshComponent*>           CallFunc_GetWaterMeshComponents_ReturnValue;       // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7882[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Apollo_Waterbody_SwimmingPool_Parent_C_UserConstructionScript) == 0x000008, "Wrong alignment on Apollo_Waterbody_SwimmingPool_Parent_C_UserConstructionScript");
static_assert(sizeof(Apollo_Waterbody_SwimmingPool_Parent_C_UserConstructionScript) == 0x000038, "Wrong size on Apollo_Waterbody_SwimmingPool_Parent_C_UserConstructionScript");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_UserConstructionScript, Temp_int_Array_Index_Variable) == 0x000000, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_UserConstructionScript::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_UserConstructionScript, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_UserConstructionScript::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_UserConstructionScript, CallFunc_GetWaterMeshComponents_ReturnValue) == 0x000010, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_UserConstructionScript::CallFunc_GetWaterMeshComponents_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x000028, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function Apollo_Waterbody_SwimmingPool_Parent.Apollo_Waterbody_SwimmingPool_Parent_C.Assign Fixed Water Height PP
// 0x0630 (0x0630 - 0x0000)
struct Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP final
{
public:
	class UMaterialInstanceDynamic*               TempMID;                                           // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7883[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7884[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWeightedBlendable                     K2Node_MakeStruct_WeightedBlendable;               // 0x0020(0x0010)(NoDestructor)
	TArray<struct FWeightedBlendable>             K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ReferenceParm, HasGetValueTypeHash)
	struct FWeightedBlendables                    K2Node_MakeStruct_WeightedBlendables;              // 0x0040(0x0010)()
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7885[0xC];                                     // 0x0054(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUnderwaterPostProcessSettings         K2Node_MakeStruct_UnderwaterPostProcessSettings;   // 0x0060(0x0560)()
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x05C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x05CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x05D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x05D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x05D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x05DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7886[0x3];                                     // 0x05DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x05E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x05EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x05F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x05F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x05F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x05FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7887[0x3];                                     // 0x05FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_DynamicCast_AsMaterial_Interface;           // 0x0600(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0608(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7888[0x7];                                     // 0x0609(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x0610(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0618(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0619(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x061A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7889[0x5];                                     // 0x061B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x0620(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP) == 0x000010, "Wrong alignment on Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP");
static_assert(sizeof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP) == 0x000630, "Wrong size on Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, TempMID) == 0x000000, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::TempMID' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, CallFunc_IsValid_ReturnValue_1) == 0x000009, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000010, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000018, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, K2Node_MakeStruct_WeightedBlendable) == 0x000020, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::K2Node_MakeStruct_WeightedBlendable' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, K2Node_MakeArray_Array) == 0x000030, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, K2Node_MakeStruct_WeightedBlendables) == 0x000040, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::K2Node_MakeStruct_WeightedBlendables' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000050, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, K2Node_MakeStruct_UnderwaterPostProcessSettings) == 0x000060, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::K2Node_MakeStruct_UnderwaterPostProcessSettings' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0005C0, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, CallFunc_BreakVector_X) == 0x0005CC, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, CallFunc_BreakVector_Y) == 0x0005D0, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, CallFunc_BreakVector_Z) == 0x0005D4, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x0005D8, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, CallFunc_IsValid_ReturnValue_2) == 0x0005DC, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0005E0, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, CallFunc_Array_Length_ReturnValue) == 0x0005EC, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, CallFunc_BreakVector_X_1) == 0x0005F0, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, CallFunc_BreakVector_Y_1) == 0x0005F4, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, CallFunc_BreakVector_Z_1) == 0x0005F8, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, CallFunc_Greater_IntInt_ReturnValue) == 0x0005FC, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, K2Node_DynamicCast_AsMaterial_Interface) == 0x000600, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::K2Node_DynamicCast_AsMaterial_Interface' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, K2Node_DynamicCast_bSuccess) == 0x000608, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, K2Node_DynamicCast_AsMaterial_Instance_Dynamic) == 0x000610, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::K2Node_DynamicCast_AsMaterial_Instance_Dynamic' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, K2Node_DynamicCast_bSuccess_1) == 0x000618, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, CallFunc_IsValid_ReturnValue_3) == 0x000619, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x00061A, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000620, "Member 'Apollo_Waterbody_SwimmingPool_Parent_C_Assign_Fixed_Water_Height_PP::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");

}

