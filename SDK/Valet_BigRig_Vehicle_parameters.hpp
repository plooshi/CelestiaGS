#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Valet_BigRig_Vehicle

#include "Basic.hpp"


namespace SDK::Params
{

// Function Valet_BigRig_Vehicle.Valet_BigRig_Vehicle_C.ExecuteUbergraph_Valet_BigRig_Vehicle
// 0x0018 (0x0018 - 0x0000)
struct Valet_BigRig_Vehicle_C_ExecuteUbergraph_Valet_BigRig_Vehicle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55FE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortWaterBodyActor*                    K2Node_Event_WaterBody;                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Valet_BigRig_Vehicle_C_ExecuteUbergraph_Valet_BigRig_Vehicle) == 0x000008, "Wrong alignment on Valet_BigRig_Vehicle_C_ExecuteUbergraph_Valet_BigRig_Vehicle");
static_assert(sizeof(Valet_BigRig_Vehicle_C_ExecuteUbergraph_Valet_BigRig_Vehicle) == 0x000018, "Wrong size on Valet_BigRig_Vehicle_C_ExecuteUbergraph_Valet_BigRig_Vehicle");
static_assert(offsetof(Valet_BigRig_Vehicle_C_ExecuteUbergraph_Valet_BigRig_Vehicle, EntryPoint) == 0x000000, "Member 'Valet_BigRig_Vehicle_C_ExecuteUbergraph_Valet_BigRig_Vehicle::EntryPoint' has a wrong offset!");
static_assert(offsetof(Valet_BigRig_Vehicle_C_ExecuteUbergraph_Valet_BigRig_Vehicle, K2Node_Event_WaterBody) == 0x000008, "Member 'Valet_BigRig_Vehicle_C_ExecuteUbergraph_Valet_BigRig_Vehicle::K2Node_Event_WaterBody' has a wrong offset!");
static_assert(offsetof(Valet_BigRig_Vehicle_C_ExecuteUbergraph_Valet_BigRig_Vehicle, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'Valet_BigRig_Vehicle_C_ExecuteUbergraph_Valet_BigRig_Vehicle::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function Valet_BigRig_Vehicle.Valet_BigRig_Vehicle_C.OnEnteredWaterBody
// 0x0008 (0x0008 - 0x0000)
struct Valet_BigRig_Vehicle_C_OnEnteredWaterBody final
{
public:
	class AFortWaterBodyActor*                    Param_WaterBody;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Valet_BigRig_Vehicle_C_OnEnteredWaterBody) == 0x000008, "Wrong alignment on Valet_BigRig_Vehicle_C_OnEnteredWaterBody");
static_assert(sizeof(Valet_BigRig_Vehicle_C_OnEnteredWaterBody) == 0x000008, "Wrong size on Valet_BigRig_Vehicle_C_OnEnteredWaterBody");
static_assert(offsetof(Valet_BigRig_Vehicle_C_OnEnteredWaterBody, Param_WaterBody) == 0x000000, "Member 'Valet_BigRig_Vehicle_C_OnEnteredWaterBody::Param_WaterBody' has a wrong offset!");

// Function Valet_BigRig_Vehicle.Valet_BigRig_Vehicle_C.UserConstructionScript
// 0x0008 (0x0008 - 0x0000)
struct Valet_BigRig_Vehicle_C_UserConstructionScript final
{
public:
	float                                         CallFunc_GetValueAtLevel_ReturnValue;              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValueAtLevel_ReturnValue_1;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Valet_BigRig_Vehicle_C_UserConstructionScript) == 0x000004, "Wrong alignment on Valet_BigRig_Vehicle_C_UserConstructionScript");
static_assert(sizeof(Valet_BigRig_Vehicle_C_UserConstructionScript) == 0x000008, "Wrong size on Valet_BigRig_Vehicle_C_UserConstructionScript");
static_assert(offsetof(Valet_BigRig_Vehicle_C_UserConstructionScript, CallFunc_GetValueAtLevel_ReturnValue) == 0x000000, "Member 'Valet_BigRig_Vehicle_C_UserConstructionScript::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_BigRig_Vehicle_C_UserConstructionScript, CallFunc_GetValueAtLevel_ReturnValue_1) == 0x000004, "Member 'Valet_BigRig_Vehicle_C_UserConstructionScript::CallFunc_GetValueAtLevel_ReturnValue_1' has a wrong offset!");

}

