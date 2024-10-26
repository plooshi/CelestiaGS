#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemCollection_Cluster

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ItemCollection_Cluster.BP_ItemCollection_Cluster_C.ExecuteUbergraph_BP_ItemCollection_Cluster
// 0x0150 (0x0150 - 0x0000)
struct BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78D5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_CustomEvent_OverlappedComponent;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OtherActor;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_OtherComp;                      // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_OtherBodyIndex;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bFromSweep;                     // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78D6[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_CustomEvent_SweepResult;                    // 0x0028(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TDelegate<void(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x00B4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_78D7[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortQuestManager*                      CallFunc_GetQuestManagerForActor_ReturnValue;      // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsObjectiveWithNameInProgress_ReturnValue; // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78D8[0x2];                                     // 0x00D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78D9[0x8];                                     // 0x00F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0100(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Item_Collection_Cluster_FragmentSpawner_C* CallFunc_FinishSpawningActor_ReturnValue;          // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SendComplexCustomStatEvent_QuestActive;   // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SendComplexCustomStatEvent_QuestCompleted; // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster) == 0x000010, "Wrong alignment on BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster");
static_assert(sizeof(BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster) == 0x000150, "Wrong size on BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster");
static_assert(offsetof(BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster, EntryPoint) == 0x000000, "Member 'BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster, K2Node_CustomEvent_OverlappedComponent) == 0x000008, "Member 'BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster::K2Node_CustomEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster, K2Node_CustomEvent_OtherActor) == 0x000010, "Member 'BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster::K2Node_CustomEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster, K2Node_CustomEvent_OtherComp) == 0x000018, "Member 'BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster::K2Node_CustomEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster, K2Node_CustomEvent_OtherBodyIndex) == 0x000020, "Member 'BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster::K2Node_CustomEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster, K2Node_CustomEvent_bFromSweep) == 0x000024, "Member 'BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster::K2Node_CustomEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster, K2Node_CustomEvent_SweepResult) == 0x000028, "Member 'BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster::K2Node_CustomEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster, K2Node_CreateDelegate_OutputDelegate) == 0x0000B4, "Member 'BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster, CallFunc_GetQuestManagerForActor_ReturnValue) == 0x0000C8, "Member 'BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster::CallFunc_GetQuestManagerForActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster, CallFunc_IsValid_ReturnValue) == 0x0000D0, "Member 'BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster, CallFunc_IsObjectiveWithNameInProgress_ReturnValue) == 0x0000D1, "Member 'BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster::CallFunc_IsObjectiveWithNameInProgress_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000D4, "Member 'BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0000E0, "Member 'BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster, CallFunc_Add_VectorVector_ReturnValue) == 0x0000EC, "Member 'BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster, CallFunc_MakeTransform_ReturnValue) == 0x000100, "Member 'BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000130, "Member 'BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster, CallFunc_FinishSpawningActor_ReturnValue) == 0x000138, "Member 'BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster, CallFunc_SendComplexCustomStatEvent_QuestActive) == 0x000140, "Member 'BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster::CallFunc_SendComplexCustomStatEvent_QuestActive' has a wrong offset!");
static_assert(offsetof(BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster, CallFunc_SendComplexCustomStatEvent_QuestCompleted) == 0x000141, "Member 'BP_ItemCollection_Cluster_C_ExecuteUbergraph_BP_ItemCollection_Cluster::CallFunc_SendComplexCustomStatEvent_QuestCompleted' has a wrong offset!");

// Function BP_ItemCollection_Cluster.BP_ItemCollection_Cluster_C.Collected
// 0x00B0 (0x00B0 - 0x0000)
struct BP_ItemCollection_Cluster_C_Collected final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78DA[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_ItemCollection_Cluster_C_Collected) == 0x000008, "Wrong alignment on BP_ItemCollection_Cluster_C_Collected");
static_assert(sizeof(BP_ItemCollection_Cluster_C_Collected) == 0x0000B0, "Wrong size on BP_ItemCollection_Cluster_C_Collected");
static_assert(offsetof(BP_ItemCollection_Cluster_C_Collected, OverlappedComponent) == 0x000000, "Member 'BP_ItemCollection_Cluster_C_Collected::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_ItemCollection_Cluster_C_Collected, OtherActor) == 0x000008, "Member 'BP_ItemCollection_Cluster_C_Collected::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_ItemCollection_Cluster_C_Collected, OtherComp) == 0x000010, "Member 'BP_ItemCollection_Cluster_C_Collected::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_ItemCollection_Cluster_C_Collected, OtherBodyIndex) == 0x000018, "Member 'BP_ItemCollection_Cluster_C_Collected::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_ItemCollection_Cluster_C_Collected, bFromSweep) == 0x00001C, "Member 'BP_ItemCollection_Cluster_C_Collected::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_ItemCollection_Cluster_C_Collected, SweepResult) == 0x000020, "Member 'BP_ItemCollection_Cluster_C_Collected::SweepResult' has a wrong offset!");

}

