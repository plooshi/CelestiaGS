#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Curie_IceBlock

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Curie_IceBlock.BP_Curie_IceBlock_C.ExecuteUbergraph_BP_Curie_IceBlock
// 0x0060 (0x0060 - 0x0000)
struct BP_Curie_IceBlock_C_ExecuteUbergraph_BP_Curie_IceBlock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51F9[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51FA[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Curie_IceBlock_C_ExecuteUbergraph_BP_Curie_IceBlock) == 0x000008, "Wrong alignment on BP_Curie_IceBlock_C_ExecuteUbergraph_BP_Curie_IceBlock");
static_assert(sizeof(BP_Curie_IceBlock_C_ExecuteUbergraph_BP_Curie_IceBlock) == 0x000060, "Wrong size on BP_Curie_IceBlock_C_ExecuteUbergraph_BP_Curie_IceBlock");
static_assert(offsetof(BP_Curie_IceBlock_C_ExecuteUbergraph_BP_Curie_IceBlock, EntryPoint) == 0x000000, "Member 'BP_Curie_IceBlock_C_ExecuteUbergraph_BP_Curie_IceBlock::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Curie_IceBlock_C_ExecuteUbergraph_BP_Curie_IceBlock, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000004, "Member 'BP_Curie_IceBlock_C_ExecuteUbergraph_BP_Curie_IceBlock::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Curie_IceBlock_C_ExecuteUbergraph_BP_Curie_IceBlock, CallFunc_MakeVector_ReturnValue) == 0x000010, "Member 'BP_Curie_IceBlock_C_ExecuteUbergraph_BP_Curie_IceBlock::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Curie_IceBlock_C_ExecuteUbergraph_BP_Curie_IceBlock, CallFunc_MakeVector_ReturnValue_1) == 0x00001C, "Member 'BP_Curie_IceBlock_C_ExecuteUbergraph_BP_Curie_IceBlock::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Curie_IceBlock_C_ExecuteUbergraph_BP_Curie_IceBlock, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'BP_Curie_IceBlock_C_ExecuteUbergraph_BP_Curie_IceBlock::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Curie_IceBlock_C_ExecuteUbergraph_BP_Curie_IceBlock, CallFunc_HasAuthority_ReturnValue) == 0x000038, "Member 'BP_Curie_IceBlock_C_ExecuteUbergraph_BP_Curie_IceBlock::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Curie_IceBlock_C_ExecuteUbergraph_BP_Curie_IceBlock, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000040, "Member 'BP_Curie_IceBlock_C_ExecuteUbergraph_BP_Curie_IceBlock::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Curie_IceBlock_C_ExecuteUbergraph_BP_Curie_IceBlock, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000048, "Member 'BP_Curie_IceBlock_C_ExecuteUbergraph_BP_Curie_IceBlock::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Curie_IceBlock_C_ExecuteUbergraph_BP_Curie_IceBlock, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000058, "Member 'BP_Curie_IceBlock_C_ExecuteUbergraph_BP_Curie_IceBlock::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");

}
