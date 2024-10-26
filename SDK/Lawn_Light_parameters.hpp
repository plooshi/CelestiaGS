#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lawn_Light

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Lawn_Light.Lawn_Light_C.UserConstructionScript
// 0x0014 (0x0014 - 0x0000)
struct Lawn_Light_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsErebus_ReturnValue;                     // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85BE[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Lawn_Light_C_UserConstructionScript) == 0x000004, "Wrong alignment on Lawn_Light_C_UserConstructionScript");
static_assert(sizeof(Lawn_Light_C_UserConstructionScript) == 0x000014, "Wrong size on Lawn_Light_C_UserConstructionScript");
static_assert(offsetof(Lawn_Light_C_UserConstructionScript, CallFunc_IsErebus_ReturnValue) == 0x000000, "Member 'Lawn_Light_C_UserConstructionScript::CallFunc_IsErebus_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lawn_Light_C_UserConstructionScript, CallFunc_Conv_LinearColorToVector_ReturnValue) == 0x000004, "Member 'Lawn_Light_C_UserConstructionScript::CallFunc_Conv_LinearColorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lawn_Light_C_UserConstructionScript, CallFunc_Lerp_ReturnValue) == 0x000010, "Member 'Lawn_Light_C_UserConstructionScript::CallFunc_Lerp_ReturnValue' has a wrong offset!");

}

