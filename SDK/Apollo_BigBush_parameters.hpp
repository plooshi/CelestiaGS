#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_BigBush

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function Apollo_BigBush.Apollo_BigBush_C.ExecuteUbergraph_Apollo_BigBush
// 0x01B8 (0x01B8 - 0x0000)
struct Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E8A[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTimeSeconds_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E8B[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_Player;                         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E8C[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x003C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult;          // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E8D[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;               // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E8E[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue_1;   // 0x006C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E8F[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E90[0x2];                                     // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x008C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0090(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E91[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E92[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x00B8(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_3E93[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface;       // 0x0148(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E94[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x015C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena_1;         // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E95[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x0178(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0190(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E96[0x4];                                     // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena_2;         // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E97[0x7];                                     // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue_1;  // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush) == 0x000008, "Wrong alignment on Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush");
static_assert(sizeof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush) == 0x0001B8, "Wrong size on Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, EntryPoint) == 0x000000, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::EntryPoint' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, Temp_bool_Variable) == 0x000004, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, CallFunc_GetTimeSeconds_ReturnValue) == 0x000008, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, K2Node_CustomEvent_Player) == 0x000010, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::K2Node_CustomEvent_Player' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x000018, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, CallFunc_IsServer_ReturnValue) == 0x000021, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, CallFunc_GetVelocity_ReturnValue) == 0x000024, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x00003C, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, CallFunc_EvaluateCurveTableRow_OutResult) == 0x00004C, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::CallFunc_EvaluateCurveTableRow_OutResult' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, CallFunc_EvaluateCurveTableRow_OutXY) == 0x000050, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, CallFunc_FTrunc_ReturnValue) == 0x000054, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, K2Node_SwitchEnum_CmpSuccess) == 0x000058, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, CallFunc_Conv_IntToBool_ReturnValue) == 0x000059, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, CallFunc_Normal_ReturnValue) == 0x00005C, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, CallFunc_VSize_ReturnValue) == 0x000068, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, CallFunc_Conv_VectorToLinearColor_ReturnValue_1) == 0x00006C, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::CallFunc_Conv_VectorToLinearColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00007C, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000080, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, CallFunc_IsDedicatedServer_ReturnValue) == 0x000089, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, Temp_float_Variable) == 0x00008C, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, Temp_float_Variable_1) == 0x000090, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000098, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, K2Node_ComponentBoundEvent_OtherActor_1) == 0x0000A0, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, K2Node_ComponentBoundEvent_OtherComp_1) == 0x0000A8, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x0000B0, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, K2Node_ComponentBoundEvent_bFromSweep) == 0x0000B4, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, K2Node_ComponentBoundEvent_SweepResult) == 0x0000B8, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, K2Node_DynamicCast_AsFort_Vehicle_Interface) == 0x000148, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::K2Node_DynamicCast_AsFort_Vehicle_Interface' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, K2Node_DynamicCast_bSuccess_1) == 0x000158, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, K2Node_Select_Default) == 0x00015C, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, K2Node_DynamicCast_AsPlayer_Pawn_Athena_1) == 0x000160, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::K2Node_DynamicCast_AsPlayer_Pawn_Athena_1' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, K2Node_DynamicCast_bSuccess_2) == 0x000168, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000170, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000178, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000180, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, K2Node_ComponentBoundEvent_OtherActor) == 0x000188, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, K2Node_ComponentBoundEvent_OtherComp) == 0x000190, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000198, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, K2Node_DynamicCast_AsPlayer_Pawn_Athena_2) == 0x0001A0, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::K2Node_DynamicCast_AsPlayer_Pawn_Athena_2' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, K2Node_DynamicCast_bSuccess_3) == 0x0001A8, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush, CallFunc_GetAbilitySystemComponent_ReturnValue_1) == 0x0001B0, "Member 'Apollo_BigBush_C_ExecuteUbergraph_Apollo_BigBush::CallFunc_GetAbilitySystemComponent_ReturnValue_1' has a wrong offset!");

// Function Apollo_BigBush.Apollo_BigBush_C.BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function Apollo_BigBush.Apollo_BigBush_C.BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E98[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000B0, "Wrong size on Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'Apollo_BigBush_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function Apollo_BigBush.Apollo_BigBush_C.MaterialWobble
// 0x0008 (0x0008 - 0x0000)
struct Apollo_BigBush_C_MaterialWobble final
{
public:
	class AActor*                                 Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Apollo_BigBush_C_MaterialWobble) == 0x000008, "Wrong alignment on Apollo_BigBush_C_MaterialWobble");
static_assert(sizeof(Apollo_BigBush_C_MaterialWobble) == 0x000008, "Wrong size on Apollo_BigBush_C_MaterialWobble");
static_assert(offsetof(Apollo_BigBush_C_MaterialWobble, Player) == 0x000000, "Member 'Apollo_BigBush_C_MaterialWobble::Player' has a wrong offset!");

}
