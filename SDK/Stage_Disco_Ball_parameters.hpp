#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Stage_Disco_Ball

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Stage_Disco_Ball.Stage_Disco_Ball_C.ExecuteUbergraph_Stage_Disco_Ball
// 0x0018 (0x0018 - 0x0000)
struct Stage_Disco_Ball_C_ExecuteUbergraph_Stage_Disco_Ball final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_872F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Stage_Disco_Ball_C_ExecuteUbergraph_Stage_Disco_Ball) == 0x000004, "Wrong alignment on Stage_Disco_Ball_C_ExecuteUbergraph_Stage_Disco_Ball");
static_assert(sizeof(Stage_Disco_Ball_C_ExecuteUbergraph_Stage_Disco_Ball) == 0x000018, "Wrong size on Stage_Disco_Ball_C_ExecuteUbergraph_Stage_Disco_Ball");
static_assert(offsetof(Stage_Disco_Ball_C_ExecuteUbergraph_Stage_Disco_Ball, EntryPoint) == 0x000000, "Member 'Stage_Disco_Ball_C_ExecuteUbergraph_Stage_Disco_Ball::EntryPoint' has a wrong offset!");
static_assert(offsetof(Stage_Disco_Ball_C_ExecuteUbergraph_Stage_Disco_Ball, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'Stage_Disco_Ball_C_ExecuteUbergraph_Stage_Disco_Ball::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Stage_Disco_Ball_C_ExecuteUbergraph_Stage_Disco_Ball, CallFunc_RandomFloatInRange_ReturnValue) == 0x000008, "Member 'Stage_Disco_Ball_C_ExecuteUbergraph_Stage_Disco_Ball::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Stage_Disco_Ball_C_ExecuteUbergraph_Stage_Disco_Ball, CallFunc_MakeRotator_ReturnValue) == 0x00000C, "Member 'Stage_Disco_Ball_C_ExecuteUbergraph_Stage_Disco_Ball::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");

}

