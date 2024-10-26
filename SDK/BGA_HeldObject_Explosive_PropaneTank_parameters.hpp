#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_HeldObject_Explosive_PropaneTank

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BGA_HeldObject_Explosive_PropaneTank.BGA_HeldObject_Explosive_PropaneTank_C.ExecuteUbergraph_BGA_HeldObject_Explosive_PropaneTank
// 0x00B0 (0x00B0 - 0x0000)
struct BGA_HeldObject_Explosive_PropaneTank_C_ExecuteUbergraph_BGA_HeldObject_Explosive_PropaneTank final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8445[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetValueAtLevel_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Square_ReturnValue;                       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_ImpactResult;           // 0x0010(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                K2Node_ComponentBoundEvent_ImpactVelocity;         // 0x009C(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSizeSquared_ReturnValue;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BGA_HeldObject_Explosive_PropaneTank_C_ExecuteUbergraph_BGA_HeldObject_Explosive_PropaneTank) == 0x000004, "Wrong alignment on BGA_HeldObject_Explosive_PropaneTank_C_ExecuteUbergraph_BGA_HeldObject_Explosive_PropaneTank");
static_assert(sizeof(BGA_HeldObject_Explosive_PropaneTank_C_ExecuteUbergraph_BGA_HeldObject_Explosive_PropaneTank) == 0x0000B0, "Wrong size on BGA_HeldObject_Explosive_PropaneTank_C_ExecuteUbergraph_BGA_HeldObject_Explosive_PropaneTank");
static_assert(offsetof(BGA_HeldObject_Explosive_PropaneTank_C_ExecuteUbergraph_BGA_HeldObject_Explosive_PropaneTank, EntryPoint) == 0x000000, "Member 'BGA_HeldObject_Explosive_PropaneTank_C_ExecuteUbergraph_BGA_HeldObject_Explosive_PropaneTank::EntryPoint' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Explosive_PropaneTank_C_ExecuteUbergraph_BGA_HeldObject_Explosive_PropaneTank, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'BGA_HeldObject_Explosive_PropaneTank_C_ExecuteUbergraph_BGA_HeldObject_Explosive_PropaneTank::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Explosive_PropaneTank_C_ExecuteUbergraph_BGA_HeldObject_Explosive_PropaneTank, CallFunc_GetValueAtLevel_ReturnValue) == 0x000008, "Member 'BGA_HeldObject_Explosive_PropaneTank_C_ExecuteUbergraph_BGA_HeldObject_Explosive_PropaneTank::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Explosive_PropaneTank_C_ExecuteUbergraph_BGA_HeldObject_Explosive_PropaneTank, CallFunc_Square_ReturnValue) == 0x00000C, "Member 'BGA_HeldObject_Explosive_PropaneTank_C_ExecuteUbergraph_BGA_HeldObject_Explosive_PropaneTank::CallFunc_Square_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Explosive_PropaneTank_C_ExecuteUbergraph_BGA_HeldObject_Explosive_PropaneTank, K2Node_ComponentBoundEvent_ImpactResult) == 0x000010, "Member 'BGA_HeldObject_Explosive_PropaneTank_C_ExecuteUbergraph_BGA_HeldObject_Explosive_PropaneTank::K2Node_ComponentBoundEvent_ImpactResult' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Explosive_PropaneTank_C_ExecuteUbergraph_BGA_HeldObject_Explosive_PropaneTank, K2Node_ComponentBoundEvent_ImpactVelocity) == 0x00009C, "Member 'BGA_HeldObject_Explosive_PropaneTank_C_ExecuteUbergraph_BGA_HeldObject_Explosive_PropaneTank::K2Node_ComponentBoundEvent_ImpactVelocity' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Explosive_PropaneTank_C_ExecuteUbergraph_BGA_HeldObject_Explosive_PropaneTank, CallFunc_VSizeSquared_ReturnValue) == 0x0000A8, "Member 'BGA_HeldObject_Explosive_PropaneTank_C_ExecuteUbergraph_BGA_HeldObject_Explosive_PropaneTank::CallFunc_VSizeSquared_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Explosive_PropaneTank_C_ExecuteUbergraph_BGA_HeldObject_Explosive_PropaneTank, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x0000AC, "Member 'BGA_HeldObject_Explosive_PropaneTank_C_ExecuteUbergraph_BGA_HeldObject_Explosive_PropaneTank::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function BGA_HeldObject_Explosive_PropaneTank.BGA_HeldObject_Explosive_PropaneTank_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature
// 0x0098 (0x0098 - 0x0000)
struct BGA_HeldObject_Explosive_PropaneTank_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature final
{
public:
	struct FHitResult                             ImpactResult;                                      // 0x0000(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                ImpactVelocity;                                    // 0x008C(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BGA_HeldObject_Explosive_PropaneTank_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature) == 0x000004, "Wrong alignment on BGA_HeldObject_Explosive_PropaneTank_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature");
static_assert(sizeof(BGA_HeldObject_Explosive_PropaneTank_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature) == 0x000098, "Wrong size on BGA_HeldObject_Explosive_PropaneTank_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature");
static_assert(offsetof(BGA_HeldObject_Explosive_PropaneTank_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature, ImpactResult) == 0x000000, "Member 'BGA_HeldObject_Explosive_PropaneTank_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature::ImpactResult' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Explosive_PropaneTank_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature, ImpactVelocity) == 0x00008C, "Member 'BGA_HeldObject_Explosive_PropaneTank_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature::ImpactVelocity' has a wrong offset!");

}

