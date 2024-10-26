#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Athena_Tether_FallLanding

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GCN_Athena_Tether_FallLanding.GCN_Athena_Tether_FallLanding_C.OnBurst
// 0x0248 (0x0248 - 0x0000)
struct GCN_Athena_Tether_FallLanding_C_OnBurst final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UCameraShake*                           BurstCameraShakeInstance;                          // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x00E8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_Array_Get_Item;                           // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           CallFunc_BreakGameplayCueParameters_EffectContext; // 0x0100(0x0018)()
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0x0118(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0x0120(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x0128(0x0020)()
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x0148(0x0020)()
	struct FVector                                CallFunc_BreakGameplayCueParameters_Location;      // 0x0168(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakGameplayCueParameters_Normal;        // 0x0174(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_Instigator;    // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_724A[0x3];                                     // 0x01B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWaterBodyActor*                    CallFunc_GetCurrentWaterBody_ReturnValue;          // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_724B[0x3];                                     // 0x01C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x01CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetWaterSurfaceInfo_WaterPlaneLocation;   // 0x01D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetWaterSurfaceInfo_WaterPlaneNormal;     // 0x01E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetWaterSurfaceInfo_WaterSurfacePosition; // 0x01F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWaterSurfaceInfo_WaterDepth;           // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWaterSurfaceInfo_WaterBodyIdx;         // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetWaterSurfaceInfo_WaterVelocity;        // 0x0204(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_724C[0x4];                                     // 0x021C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;       // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_724D[0x7];                                     // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFXSystemComponent*                     CallFunc_SpawnFXAtLocation_ReturnValue;            // 0x0230(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEmitterCameraLensEffectBase*           CallFunc_AddCameraLensEffect_ReturnValue;          // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCN_Athena_Tether_FallLanding_C_OnBurst) == 0x000008, "Wrong alignment on GCN_Athena_Tether_FallLanding_C_OnBurst");
static_assert(sizeof(GCN_Athena_Tether_FallLanding_C_OnBurst) == 0x000248, "Wrong size on GCN_Athena_Tether_FallLanding_C_OnBurst");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, MyTarget) == 0x000000, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, Parameters) == 0x000008, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, ParticleComponents) == 0x0000C0, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, AudioComponents) == 0x0000D0, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, BurstCameraShakeInstance) == 0x0000E0, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, BurstDecalInstance) == 0x0000E8, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_Array_Get_Item) == 0x0000F0, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x0000F8, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x0000FC, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000100, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000118, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000120, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000128, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000148, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_Location) == 0x000168, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_Normal) == 0x000174, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_Instigator) == 0x000180, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x000188, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x000190, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x000198, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0001A0, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0001A4, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0001A8, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0001B0, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, K2Node_DynamicCast_bSuccess) == 0x0001B8, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_FTrunc_ReturnValue) == 0x0001BC, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_GetCurrentWaterBody_ReturnValue) == 0x0001C0, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_GetCurrentWaterBody_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_IsValid_ReturnValue) == 0x0001C8, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0001CC, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_GetWaterSurfaceInfo_WaterPlaneLocation) == 0x0001D8, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_GetWaterSurfaceInfo_WaterPlaneLocation' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_GetWaterSurfaceInfo_WaterPlaneNormal) == 0x0001E4, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_GetWaterSurfaceInfo_WaterPlaneNormal' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_GetWaterSurfaceInfo_WaterSurfacePosition) == 0x0001F0, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_GetWaterSurfaceInfo_WaterSurfacePosition' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_GetWaterSurfaceInfo_WaterDepth) == 0x0001FC, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_GetWaterSurfaceInfo_WaterDepth' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_GetWaterSurfaceInfo_WaterBodyIdx) == 0x000200, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_GetWaterSurfaceInfo_WaterBodyIdx' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_GetWaterSurfaceInfo_WaterVelocity) == 0x000204, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_GetWaterSurfaceInfo_WaterVelocity' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_GetController_ReturnValue) == 0x000210, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000218, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000220, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, K2Node_DynamicCast_bSuccess_1) == 0x000228, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_SpawnFXAtLocation_ReturnValue) == 0x000230, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_SpawnFXAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_AddCameraLensEffect_ReturnValue) == 0x000238, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_AddCameraLensEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000240, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

}

