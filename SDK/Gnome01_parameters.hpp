#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Gnome01

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Gnome01.Gnome01_C.ExecuteUbergraph_Gnome01
// 0x0050 (0x0050 - 0x0000)
struct Gnome01_C_ExecuteUbergraph_Gnome01 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasDestructionLoot_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8631[0xB];                                     // 0x0005(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*               CallFunc_AddComponent_ReturnValue;                 // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Gnome01_C_ExecuteUbergraph_Gnome01) == 0x000010, "Wrong alignment on Gnome01_C_ExecuteUbergraph_Gnome01");
static_assert(sizeof(Gnome01_C_ExecuteUbergraph_Gnome01) == 0x000050, "Wrong size on Gnome01_C_ExecuteUbergraph_Gnome01");
static_assert(offsetof(Gnome01_C_ExecuteUbergraph_Gnome01, EntryPoint) == 0x000000, "Member 'Gnome01_C_ExecuteUbergraph_Gnome01::EntryPoint' has a wrong offset!");
static_assert(offsetof(Gnome01_C_ExecuteUbergraph_Gnome01, CallFunc_HasDestructionLoot_ReturnValue) == 0x000004, "Member 'Gnome01_C_ExecuteUbergraph_Gnome01::CallFunc_HasDestructionLoot_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gnome01_C_ExecuteUbergraph_Gnome01, CallFunc_MakeTransform_ReturnValue) == 0x000010, "Member 'Gnome01_C_ExecuteUbergraph_Gnome01::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gnome01_C_ExecuteUbergraph_Gnome01, CallFunc_AddComponent_ReturnValue) == 0x000040, "Member 'Gnome01_C_ExecuteUbergraph_Gnome01::CallFunc_AddComponent_ReturnValue' has a wrong offset!");

}

