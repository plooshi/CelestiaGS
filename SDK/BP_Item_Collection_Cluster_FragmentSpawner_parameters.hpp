#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Item_Collection_Cluster_FragmentSpawner

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Item_Collection_Cluster_FragmentSpawner.BP_Item_Collection_Cluster_FragmentSpawner_C.ExecuteUbergraph_BP_Item_Collection_Cluster_FragmentSpawner
// 0x0020 (0x0020 - 0x0000)
struct BP_Item_Collection_Cluster_FragmentSpawner_C_ExecuteUbergraph_BP_Item_Collection_Cluster_FragmentSpawner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_SpawnDelay;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_TotalFragments;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E85[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_CollectingActor;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Item_Collection_Cluster_FragmentSpawner_C_ExecuteUbergraph_BP_Item_Collection_Cluster_FragmentSpawner) == 0x000008, "Wrong alignment on BP_Item_Collection_Cluster_FragmentSpawner_C_ExecuteUbergraph_BP_Item_Collection_Cluster_FragmentSpawner");
static_assert(sizeof(BP_Item_Collection_Cluster_FragmentSpawner_C_ExecuteUbergraph_BP_Item_Collection_Cluster_FragmentSpawner) == 0x000020, "Wrong size on BP_Item_Collection_Cluster_FragmentSpawner_C_ExecuteUbergraph_BP_Item_Collection_Cluster_FragmentSpawner");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_ExecuteUbergraph_BP_Item_Collection_Cluster_FragmentSpawner, EntryPoint) == 0x000000, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_ExecuteUbergraph_BP_Item_Collection_Cluster_FragmentSpawner::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_ExecuteUbergraph_BP_Item_Collection_Cluster_FragmentSpawner, K2Node_CustomEvent_SpawnDelay) == 0x000004, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_ExecuteUbergraph_BP_Item_Collection_Cluster_FragmentSpawner::K2Node_CustomEvent_SpawnDelay' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_ExecuteUbergraph_BP_Item_Collection_Cluster_FragmentSpawner, K2Node_CustomEvent_TotalFragments) == 0x000008, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_ExecuteUbergraph_BP_Item_Collection_Cluster_FragmentSpawner::K2Node_CustomEvent_TotalFragments' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_ExecuteUbergraph_BP_Item_Collection_Cluster_FragmentSpawner, K2Node_CustomEvent_CollectingActor) == 0x000010, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_ExecuteUbergraph_BP_Item_Collection_Cluster_FragmentSpawner::K2Node_CustomEvent_CollectingActor' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_ExecuteUbergraph_BP_Item_Collection_Cluster_FragmentSpawner, CallFunc_K2_SetTimer_ReturnValue) == 0x000018, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_ExecuteUbergraph_BP_Item_Collection_Cluster_FragmentSpawner::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");

// Function BP_Item_Collection_Cluster_FragmentSpawner.BP_Item_Collection_Cluster_FragmentSpawner_C.DetonateCluster
// 0x0010 (0x0010 - 0x0000)
struct BP_Item_Collection_Cluster_FragmentSpawner_C_DetonateCluster final
{
public:
	float                                         SpawnDelay;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalFragments;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Param_CollectingActor;                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Item_Collection_Cluster_FragmentSpawner_C_DetonateCluster) == 0x000008, "Wrong alignment on BP_Item_Collection_Cluster_FragmentSpawner_C_DetonateCluster");
static_assert(sizeof(BP_Item_Collection_Cluster_FragmentSpawner_C_DetonateCluster) == 0x000010, "Wrong size on BP_Item_Collection_Cluster_FragmentSpawner_C_DetonateCluster");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_DetonateCluster, SpawnDelay) == 0x000000, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_DetonateCluster::SpawnDelay' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_DetonateCluster, TotalFragments) == 0x000004, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_DetonateCluster::TotalFragments' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_DetonateCluster, Param_CollectingActor) == 0x000008, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_DetonateCluster::Param_CollectingActor' has a wrong offset!");

// Function BP_Item_Collection_Cluster_FragmentSpawner.BP_Item_Collection_Cluster_FragmentSpawner_C.LaunchFragment
// 0x00D0 (0x00D0 - 0x0000)
struct BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment final
{
public:
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E86[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetUpVector_ReturnValue;                  // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E87[0xC];                                     // 0x0034(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0040(0x0030)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_X;                            // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E88[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ItemCollection_Cluster_Fragment_C*  CallFunc_FinishSpawningActor_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E89[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_3;         // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_4;         // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment) == 0x000010, "Wrong alignment on BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment");
static_assert(sizeof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment) == 0x0000D0, "Wrong size on BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment, CallFunc_Subtract_IntInt_ReturnValue) == 0x000000, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment, CallFunc_Greater_IntInt_ReturnValue) == 0x000004, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment, Temp_int_Variable) == 0x000008, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment, CallFunc_RandomFloatInRange_ReturnValue) == 0x00000C, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment, CallFunc_MakeRotator_ReturnValue) == 0x00001C, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment, CallFunc_GetUpVector_ReturnValue) == 0x000028, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment::CallFunc_GetUpVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment, CallFunc_MakeTransform_ReturnValue) == 0x000040, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment, CallFunc_BreakVector_X) == 0x000070, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment, CallFunc_BreakVector_Y) == 0x000074, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment, CallFunc_BreakVector_Z) == 0x000078, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000080, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment, CallFunc_FinishSpawningActor_ReturnValue) == 0x000088, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment, CallFunc_HasAuthority_ReturnValue) == 0x000090, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000094, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000098, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x00009C, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment, CallFunc_RandomFloatInRange_ReturnValue_3) == 0x0000A0, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment::CallFunc_RandomFloatInRange_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000A4, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x0000A8, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment, CallFunc_RandomFloatInRange_ReturnValue_4) == 0x0000AC, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment::CallFunc_RandomFloatInRange_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x0000B0, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment, CallFunc_MakeVector_ReturnValue) == 0x0000B4, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000C0, "Member 'BP_Item_Collection_Cluster_FragmentSpawner_C_LaunchFragment::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");

}
