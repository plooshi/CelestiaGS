#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Athena_ReactiveProp_GasPump_Explode

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GCN_Athena_ReactiveProp_GasPump_Explode.GCN_Athena_ReactiveProp_GasPump_Explode_C.OnBurst
// 0x0140 (0x0140 - 0x0000)
struct GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UCameraShake*                           BurstCameraShakeInstance;                          // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x00E8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EFortTeamAffiliation>                  K2Node_MakeArray_Array;                            // 0x00F0(0x0010)(ReferenceParm, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0100(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetActorTeam_ReturnValue;                 // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_790B[0x3];                                     // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0128(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_790C[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDecalComponent*                        CallFunc_SpawnDecalAtLocation_ReturnValue;         // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst) == 0x000008, "Wrong alignment on GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst");
static_assert(sizeof(GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst) == 0x000140, "Wrong size on GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst");
static_assert(offsetof(GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst, MyTarget) == 0x000000, "Member 'GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst, Parameters) == 0x000008, "Member 'GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst, ParticleComponents) == 0x0000C0, "Member 'GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst, AudioComponents) == 0x0000D0, "Member 'GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst, BurstCameraShakeInstance) == 0x0000E0, "Member 'GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst, BurstDecalInstance) == 0x0000E8, "Member 'GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst::BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst, K2Node_MakeArray_Array) == 0x0000F0, "Member 'GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000100, "Member 'GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst, CallFunc_GetActorTeam_ReturnValue) == 0x00010C, "Member 'GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst::CallFunc_GetActorTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000110, "Member 'GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x00011C, "Member 'GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000128, "Member 'GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst, CallFunc_SpawnDecalAtLocation_ReturnValue) == 0x000138, "Member 'GCN_Athena_ReactiveProp_GasPump_Explode_C_OnBurst::CallFunc_SpawnDecalAtLocation_ReturnValue' has a wrong offset!");

}
