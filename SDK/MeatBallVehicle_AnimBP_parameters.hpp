#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MeatBallVehicle_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function MeatBallVehicle_AnimBP.MeatBallVehicle_AnimBP_C.ExecuteUbergraph_MeatBallVehicle_AnimBP
// 0x0030 (0x0030 - 0x0000)
struct MeatBallVehicle_AnimBP_C_ExecuteUbergraph_MeatBallVehicle_AnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ClampAngle_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_RInterpTo_ReturnValue;                    // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MeatBallVehicle_AnimBP_C_ExecuteUbergraph_MeatBallVehicle_AnimBP) == 0x000004, "Wrong alignment on MeatBallVehicle_AnimBP_C_ExecuteUbergraph_MeatBallVehicle_AnimBP");
static_assert(sizeof(MeatBallVehicle_AnimBP_C_ExecuteUbergraph_MeatBallVehicle_AnimBP) == 0x000030, "Wrong size on MeatBallVehicle_AnimBP_C_ExecuteUbergraph_MeatBallVehicle_AnimBP");
static_assert(offsetof(MeatBallVehicle_AnimBP_C_ExecuteUbergraph_MeatBallVehicle_AnimBP, EntryPoint) == 0x000000, "Member 'MeatBallVehicle_AnimBP_C_ExecuteUbergraph_MeatBallVehicle_AnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(MeatBallVehicle_AnimBP_C_ExecuteUbergraph_MeatBallVehicle_AnimBP, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'MeatBallVehicle_AnimBP_C_ExecuteUbergraph_MeatBallVehicle_AnimBP::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(MeatBallVehicle_AnimBP_C_ExecuteUbergraph_MeatBallVehicle_AnimBP, CallFunc_BreakRotator_Roll) == 0x000008, "Member 'MeatBallVehicle_AnimBP_C_ExecuteUbergraph_MeatBallVehicle_AnimBP::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(MeatBallVehicle_AnimBP_C_ExecuteUbergraph_MeatBallVehicle_AnimBP, CallFunc_BreakRotator_Pitch) == 0x00000C, "Member 'MeatBallVehicle_AnimBP_C_ExecuteUbergraph_MeatBallVehicle_AnimBP::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(MeatBallVehicle_AnimBP_C_ExecuteUbergraph_MeatBallVehicle_AnimBP, CallFunc_BreakRotator_Yaw) == 0x000010, "Member 'MeatBallVehicle_AnimBP_C_ExecuteUbergraph_MeatBallVehicle_AnimBP::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(MeatBallVehicle_AnimBP_C_ExecuteUbergraph_MeatBallVehicle_AnimBP, CallFunc_ClampAngle_ReturnValue) == 0x000014, "Member 'MeatBallVehicle_AnimBP_C_ExecuteUbergraph_MeatBallVehicle_AnimBP::CallFunc_ClampAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeatBallVehicle_AnimBP_C_ExecuteUbergraph_MeatBallVehicle_AnimBP, CallFunc_MakeRotator_ReturnValue) == 0x000018, "Member 'MeatBallVehicle_AnimBP_C_ExecuteUbergraph_MeatBallVehicle_AnimBP::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeatBallVehicle_AnimBP_C_ExecuteUbergraph_MeatBallVehicle_AnimBP, CallFunc_RInterpTo_ReturnValue) == 0x000024, "Member 'MeatBallVehicle_AnimBP_C_ExecuteUbergraph_MeatBallVehicle_AnimBP::CallFunc_RInterpTo_ReturnValue' has a wrong offset!");

// Function MeatBallVehicle_AnimBP.MeatBallVehicle_AnimBP_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct MeatBallVehicle_AnimBP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MeatBallVehicle_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on MeatBallVehicle_AnimBP_C_BlueprintUpdateAnimation");
static_assert(sizeof(MeatBallVehicle_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on MeatBallVehicle_AnimBP_C_BlueprintUpdateAnimation");
static_assert(offsetof(MeatBallVehicle_AnimBP_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'MeatBallVehicle_AnimBP_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function MeatBallVehicle_AnimBP.MeatBallVehicle_AnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct MeatBallVehicle_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(MeatBallVehicle_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on MeatBallVehicle_AnimBP_C_AnimGraph");
static_assert(sizeof(MeatBallVehicle_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on MeatBallVehicle_AnimBP_C_AnimGraph");
static_assert(offsetof(MeatBallVehicle_AnimBP_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'MeatBallVehicle_AnimBP_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}
