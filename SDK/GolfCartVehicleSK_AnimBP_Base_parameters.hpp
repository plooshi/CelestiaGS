#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GolfCartVehicleSK_AnimBP_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GolfCartVehicleSK_AnimBP_Base.GolfCartVehicleSK_AnimBP_Base_C.ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base
// 0x0030 (0x0030 - 0x0000)
struct GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8916[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8917[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGolfCartVehicleSK_C*                   K2Node_DynamicCast_AsGolf_Cart_Vehicle_SK;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEBraking_ReturnValue;                   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8918[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetBrakingDelta_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsBoosting_ReturnValue;                   // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8919[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetForwardSpeedKmh_ReturnValue;           // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base) == 0x000008, "Wrong alignment on GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base");
static_assert(sizeof(GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base) == 0x000030, "Wrong size on GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base");
static_assert(offsetof(GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base, EntryPoint) == 0x000000, "Member 'GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000004, "Member 'GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base, K2Node_Event_DeltaTimeX) == 0x000008, "Member 'GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base, CallFunc_GetOwningActor_ReturnValue) == 0x000010, "Member 'GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base, K2Node_DynamicCast_AsGolf_Cart_Vehicle_SK) == 0x000018, "Member 'GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base::K2Node_DynamicCast_AsGolf_Cart_Vehicle_SK' has a wrong offset!");
static_assert(offsetof(GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base, CallFunc_IsEBraking_ReturnValue) == 0x000021, "Member 'GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base::CallFunc_IsEBraking_ReturnValue' has a wrong offset!");
static_assert(offsetof(GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base, CallFunc_GetBrakingDelta_ReturnValue) == 0x000024, "Member 'GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base::CallFunc_GetBrakingDelta_ReturnValue' has a wrong offset!");
static_assert(offsetof(GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000028, "Member 'GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base, CallFunc_IsBoosting_ReturnValue) == 0x000029, "Member 'GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base::CallFunc_IsBoosting_ReturnValue' has a wrong offset!");
static_assert(offsetof(GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base, CallFunc_GetForwardSpeedKmh_ReturnValue) == 0x00002C, "Member 'GolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base::CallFunc_GetForwardSpeedKmh_ReturnValue' has a wrong offset!");

// Function GolfCartVehicleSK_AnimBP_Base.GolfCartVehicleSK_AnimBP_Base_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct GolfCartVehicleSK_AnimBP_Base_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GolfCartVehicleSK_AnimBP_Base_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on GolfCartVehicleSK_AnimBP_Base_C_BlueprintUpdateAnimation");
static_assert(sizeof(GolfCartVehicleSK_AnimBP_Base_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on GolfCartVehicleSK_AnimBP_Base_C_BlueprintUpdateAnimation");
static_assert(offsetof(GolfCartVehicleSK_AnimBP_Base_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'GolfCartVehicleSK_AnimBP_Base_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function GolfCartVehicleSK_AnimBP_Base.GolfCartVehicleSK_AnimBP_Base_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct GolfCartVehicleSK_AnimBP_Base_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(GolfCartVehicleSK_AnimBP_Base_C_AnimGraph) == 0x000008, "Wrong alignment on GolfCartVehicleSK_AnimBP_Base_C_AnimGraph");
static_assert(sizeof(GolfCartVehicleSK_AnimBP_Base_C_AnimGraph) == 0x000010, "Wrong size on GolfCartVehicleSK_AnimBP_Base_C_AnimGraph");
static_assert(offsetof(GolfCartVehicleSK_AnimBP_Base_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'GolfCartVehicleSK_AnimBP_Base_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}
