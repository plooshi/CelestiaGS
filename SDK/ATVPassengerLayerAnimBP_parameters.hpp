#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ATVPassengerLayerAnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function ATVPassengerLayerAnimBP.ATVPassengerLayerAnimBP_C.ExecuteUbergraph_ATVPassengerLayerAnimBP
// 0x0004 (0x0004 - 0x0000)
struct ATVPassengerLayerAnimBP_C_ExecuteUbergraph_ATVPassengerLayerAnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ATVPassengerLayerAnimBP_C_ExecuteUbergraph_ATVPassengerLayerAnimBP) == 0x000004, "Wrong alignment on ATVPassengerLayerAnimBP_C_ExecuteUbergraph_ATVPassengerLayerAnimBP");
static_assert(sizeof(ATVPassengerLayerAnimBP_C_ExecuteUbergraph_ATVPassengerLayerAnimBP) == 0x000004, "Wrong size on ATVPassengerLayerAnimBP_C_ExecuteUbergraph_ATVPassengerLayerAnimBP");
static_assert(offsetof(ATVPassengerLayerAnimBP_C_ExecuteUbergraph_ATVPassengerLayerAnimBP, EntryPoint) == 0x000000, "Member 'ATVPassengerLayerAnimBP_C_ExecuteUbergraph_ATVPassengerLayerAnimBP::EntryPoint' has a wrong offset!");

// Function ATVPassengerLayerAnimBP.ATVPassengerLayerAnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ATVPassengerLayerAnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ATVPassengerLayerAnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on ATVPassengerLayerAnimBP_C_AnimGraph");
static_assert(sizeof(ATVPassengerLayerAnimBP_C_AnimGraph) == 0x000010, "Wrong size on ATVPassengerLayerAnimBP_C_AnimGraph");
static_assert(offsetof(ATVPassengerLayerAnimBP_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ATVPassengerLayerAnimBP_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function ATVPassengerLayerAnimBP.ATVPassengerLayerAnimBP_C.VehicleSplitBodyOverride
// 0x00B0 (0x00B0 - 0x0000)
struct ATVPassengerLayerAnimBP_C_VehicleSplitBodyOverride final
{
public:
	struct FPoseLink                              InPoseSplitBody;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              InPoseUpperAndLowerBody;                           // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFortAnimInput_TurnInPlace             Param_TurnInPlace;                                 // 0x0020(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                              InPoseUpperAndLowerBodyRemoveRoot;                 // 0x0090(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Param_VehicleSplitBodyOverride;                    // 0x00A0(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ATVPassengerLayerAnimBP_C_VehicleSplitBodyOverride) == 0x000008, "Wrong alignment on ATVPassengerLayerAnimBP_C_VehicleSplitBodyOverride");
static_assert(sizeof(ATVPassengerLayerAnimBP_C_VehicleSplitBodyOverride) == 0x0000B0, "Wrong size on ATVPassengerLayerAnimBP_C_VehicleSplitBodyOverride");
static_assert(offsetof(ATVPassengerLayerAnimBP_C_VehicleSplitBodyOverride, InPoseSplitBody) == 0x000000, "Member 'ATVPassengerLayerAnimBP_C_VehicleSplitBodyOverride::InPoseSplitBody' has a wrong offset!");
static_assert(offsetof(ATVPassengerLayerAnimBP_C_VehicleSplitBodyOverride, InPoseUpperAndLowerBody) == 0x000010, "Member 'ATVPassengerLayerAnimBP_C_VehicleSplitBodyOverride::InPoseUpperAndLowerBody' has a wrong offset!");
static_assert(offsetof(ATVPassengerLayerAnimBP_C_VehicleSplitBodyOverride, Param_TurnInPlace) == 0x000020, "Member 'ATVPassengerLayerAnimBP_C_VehicleSplitBodyOverride::Param_TurnInPlace' has a wrong offset!");
static_assert(offsetof(ATVPassengerLayerAnimBP_C_VehicleSplitBodyOverride, InPoseUpperAndLowerBodyRemoveRoot) == 0x000090, "Member 'ATVPassengerLayerAnimBP_C_VehicleSplitBodyOverride::InPoseUpperAndLowerBodyRemoveRoot' has a wrong offset!");
static_assert(offsetof(ATVPassengerLayerAnimBP_C_VehicleSplitBodyOverride, Param_VehicleSplitBodyOverride) == 0x0000A0, "Member 'ATVPassengerLayerAnimBP_C_VehicleSplitBodyOverride::Param_VehicleSplitBodyOverride' has a wrong offset!");

// Function ATVPassengerLayerAnimBP.ATVPassengerLayerAnimBP_C.VehicleLowerBodyOverride
// 0x0030 (0x0030 - 0x0000)
struct ATVPassengerLayerAnimBP_C_VehicleLowerBodyOverride final
{
public:
	struct FPoseLink                              InPoseLowerBodyDefault;                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              InPoseUpperBody;                                   // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Param_VehicleLowerBodyOverride;                    // 0x0020(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ATVPassengerLayerAnimBP_C_VehicleLowerBodyOverride) == 0x000008, "Wrong alignment on ATVPassengerLayerAnimBP_C_VehicleLowerBodyOverride");
static_assert(sizeof(ATVPassengerLayerAnimBP_C_VehicleLowerBodyOverride) == 0x000030, "Wrong size on ATVPassengerLayerAnimBP_C_VehicleLowerBodyOverride");
static_assert(offsetof(ATVPassengerLayerAnimBP_C_VehicleLowerBodyOverride, InPoseLowerBodyDefault) == 0x000000, "Member 'ATVPassengerLayerAnimBP_C_VehicleLowerBodyOverride::InPoseLowerBodyDefault' has a wrong offset!");
static_assert(offsetof(ATVPassengerLayerAnimBP_C_VehicleLowerBodyOverride, InPoseUpperBody) == 0x000010, "Member 'ATVPassengerLayerAnimBP_C_VehicleLowerBodyOverride::InPoseUpperBody' has a wrong offset!");
static_assert(offsetof(ATVPassengerLayerAnimBP_C_VehicleLowerBodyOverride, Param_VehicleLowerBodyOverride) == 0x000020, "Member 'ATVPassengerLayerAnimBP_C_VehicleLowerBodyOverride::Param_VehicleLowerBodyOverride' has a wrong offset!");

// Function ATVPassengerLayerAnimBP.ATVPassengerLayerAnimBP_C.VehicleFullBodyOverride
// 0x0030 (0x0030 - 0x0000)
struct ATVPassengerLayerAnimBP_C_VehicleFullBodyOverride final
{
public:
	struct FPoseLink                              InPoseFullBody;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              InPoseUpperAndLowerCachePose;                      // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Param_VehicleFullBodyOverride;                     // 0x0020(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ATVPassengerLayerAnimBP_C_VehicleFullBodyOverride) == 0x000008, "Wrong alignment on ATVPassengerLayerAnimBP_C_VehicleFullBodyOverride");
static_assert(sizeof(ATVPassengerLayerAnimBP_C_VehicleFullBodyOverride) == 0x000030, "Wrong size on ATVPassengerLayerAnimBP_C_VehicleFullBodyOverride");
static_assert(offsetof(ATVPassengerLayerAnimBP_C_VehicleFullBodyOverride, InPoseFullBody) == 0x000000, "Member 'ATVPassengerLayerAnimBP_C_VehicleFullBodyOverride::InPoseFullBody' has a wrong offset!");
static_assert(offsetof(ATVPassengerLayerAnimBP_C_VehicleFullBodyOverride, InPoseUpperAndLowerCachePose) == 0x000010, "Member 'ATVPassengerLayerAnimBP_C_VehicleFullBodyOverride::InPoseUpperAndLowerCachePose' has a wrong offset!");
static_assert(offsetof(ATVPassengerLayerAnimBP_C_VehicleFullBodyOverride, Param_VehicleFullBodyOverride) == 0x000020, "Member 'ATVPassengerLayerAnimBP_C_VehicleFullBodyOverride::Param_VehicleFullBodyOverride' has a wrong offset!");

}

