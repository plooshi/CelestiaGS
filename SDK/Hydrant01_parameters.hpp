#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hydrant01

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Hydrant01.Hydrant01_C.UserConstructionScript
// 0x0090 (0x0090 - 0x0000)
struct Hydrant01_C_UserConstructionScript final
{
public:
	struct FHitResult                             CallFunc_K2_AddRelativeLocation_SweepHitResult;    // 0x0000(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue_1;              // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Hydrant01_C_UserConstructionScript) == 0x000004, "Wrong alignment on Hydrant01_C_UserConstructionScript");
static_assert(sizeof(Hydrant01_C_UserConstructionScript) == 0x000090, "Wrong size on Hydrant01_C_UserConstructionScript");
static_assert(offsetof(Hydrant01_C_UserConstructionScript, CallFunc_K2_AddRelativeLocation_SweepHitResult) == 0x000000, "Member 'Hydrant01_C_UserConstructionScript::CallFunc_K2_AddRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Hydrant01_C_UserConstructionScript, CallFunc_SetStaticMesh_ReturnValue) == 0x00008C, "Member 'Hydrant01_C_UserConstructionScript::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(Hydrant01_C_UserConstructionScript, CallFunc_SetStaticMesh_ReturnValue_1) == 0x00008D, "Member 'Hydrant01_C_UserConstructionScript::CallFunc_SetStaticMesh_ReturnValue_1' has a wrong offset!");

// Function Hydrant01.Hydrant01_C.handle_Exploded_State
// 0x0020 (0x0020 - 0x0000)
struct Hydrant01_C_Handle_Exploded_State final
{
public:
	class UStaticMeshComponent*                   CallFunc_GetBuildingMeshComponent_ReturnValue;     // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCustomState_ReturnValue;               // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Hydrant01_C_Handle_Exploded_State) == 0x000008, "Wrong alignment on Hydrant01_C_Handle_Exploded_State");
static_assert(sizeof(Hydrant01_C_Handle_Exploded_State) == 0x000020, "Wrong size on Hydrant01_C_Handle_Exploded_State");
static_assert(offsetof(Hydrant01_C_Handle_Exploded_State, CallFunc_GetBuildingMeshComponent_ReturnValue) == 0x000000, "Member 'Hydrant01_C_Handle_Exploded_State::CallFunc_GetBuildingMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Hydrant01_C_Handle_Exploded_State, CallFunc_GetCustomState_ReturnValue) == 0x000008, "Member 'Hydrant01_C_Handle_Exploded_State::CallFunc_GetCustomState_ReturnValue' has a wrong offset!");
static_assert(offsetof(Hydrant01_C_Handle_Exploded_State, K2Node_SwitchString_CmpSuccess) == 0x000018, "Member 'Hydrant01_C_Handle_Exploded_State::K2Node_SwitchString_CmpSuccess' has a wrong offset!");

}
