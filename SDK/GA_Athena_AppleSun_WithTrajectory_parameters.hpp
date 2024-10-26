#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_AppleSun_WithTrajectory

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_AppleSun_WithTrajectory.GA_Athena_AppleSun_WithTrajectory_C.ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory
// 0x0360 (0x0360 - 0x0000)
struct GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue_1;              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61F4[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints; // 0x0018(0x0010)(ReferenceParm, HasGetValueTypeHash)
	TArray<struct FVector>                        CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents; // 0x0028(0x0010)(ReferenceParm, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_GetProjectileTrajectoryPoints_OutHitResult; // 0x0038(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x00C4(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x00CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61F5[0x2];                                     // 0x00CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x00E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x00FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0130(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x013C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61F6[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortAthenaVehicle*                     K2Node_DynamicCast_AsFort_Athena_Vehicle;          // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61F7[0x5];                                     // 0x0163(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AWaterBody*                             K2Node_DynamicCast_AsWater_Body;                   // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61F8[0x3];                                     // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x0178(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61F9[0x3];                                     // 0x0185(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0188(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61FA[0x3];                                     // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_ProjectVectorOnToPlane_ReturnValue;       // 0x0198(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61FB[0x3];                                     // 0x01A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotFromXZ_ReturnValue;                // 0x01A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61FC[0x3];                                     // 0x01B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortAnalyticsEventAttribute           K2Node_MakeStruct_FortAnalyticsEventAttribute;     // 0x01B8(0x0020)()
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61FD[0x3];                                     // 0x01E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x01EC(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;       // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61FE[0x3];                                     // 0x0289(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x028C(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x0318(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0329(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61FF[0x6];                                     // 0x032A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput_1; // 0x0330(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1; // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6200[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortWorldItemDefinition*               K2Node_Select_Default;                             // 0x0348(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6201[0x3];                                     // 0x0351(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue;   // 0x0354(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6202[0x3];                                     // 0x0359(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_K2_RemoveItemFromPlayer_ReturnValue;      // 0x035C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory) == 0x000008, "Wrong alignment on GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory");
static_assert(sizeof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory) == 0x000360, "Wrong size on GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, EntryPoint) == 0x000000, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_GetActorForwardVector_ReturnValue) == 0x000004, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_SetStaticMesh_ReturnValue) == 0x000010, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_SetStaticMesh_ReturnValue_1) == 0x000011, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_SetStaticMesh_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints) == 0x000018, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents) == 0x000028, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_GetProjectileTrajectoryPoints_OutHitResult) == 0x000038, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_GetProjectileTrajectoryPoints_OutHitResult' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x0000C4, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_bBlockingHit) == 0x0000CC, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000CD, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_Time) == 0x0000D0, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_Distance) == 0x0000D4, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_Location) == 0x0000D8, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_ImpactPoint) == 0x0000E4, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_Normal) == 0x0000F0, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_ImpactNormal) == 0x0000FC, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_PhysMat) == 0x000108, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_HitActor) == 0x000110, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_HitComponent) == 0x000118, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_HitBoneName) == 0x000120, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_HitItem) == 0x000128, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_FaceIndex) == 0x00012C, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_TraceStart) == 0x000130, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_TraceEnd) == 0x00013C, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, K2Node_DynamicCast_AsFort_Pawn) == 0x000148, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, K2Node_DynamicCast_bSuccess) == 0x000150, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, K2Node_DynamicCast_AsFort_Athena_Vehicle) == 0x000158, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::K2Node_DynamicCast_AsFort_Athena_Vehicle' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, K2Node_DynamicCast_bSuccess_1) == 0x000160, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_Not_PreBool_ReturnValue) == 0x000161, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_Not_PreBool_ReturnValue_1) == 0x000162, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, K2Node_DynamicCast_AsWater_Body) == 0x000168, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::K2Node_DynamicCast_AsWater_Body' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, K2Node_DynamicCast_bSuccess_2) == 0x000170, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_Dot_VectorVector_ReturnValue) == 0x000174, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_SelectVector_ReturnValue) == 0x000178, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000184, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_Add_VectorVector_ReturnValue) == 0x000188, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BooleanAND_ReturnValue) == 0x000194, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_ProjectVectorOnToPlane_ReturnValue) == 0x000198, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_ProjectVectorOnToPlane_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BooleanAND_ReturnValue_1) == 0x0001A4, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_MakeRotFromXZ_ReturnValue) == 0x0001A8, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_MakeRotFromXZ_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x0001B4, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, K2Node_MakeStruct_FortAnalyticsEventAttribute) == 0x0001B8, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::K2Node_MakeStruct_FortAnalyticsEventAttribute' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0001D8, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0001E0, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, K2Node_DynamicCast_bSuccess_3) == 0x0001E8, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x0001EC, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_GetController_ReturnValue) == 0x000278, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000280, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, K2Node_DynamicCast_bSuccess_4) == 0x000288, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x00028C, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x000318, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000328, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, Temp_bool_Variable) == 0x000329, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_HasAnyMatchingGameplayTags_self_CastInput_1) == 0x000330, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_HasAnyMatchingGameplayTags_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1) == 0x000340, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, K2Node_Select_Default) == 0x000348, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_IsValid_ReturnValue) == 0x000350, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue) == 0x000354, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000358, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_K2_RemoveItemFromPlayer_ReturnValue) == 0x00035C, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_K2_RemoveItemFromPlayer_ReturnValue' has a wrong offset!");

}

