#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SM_FloorQuarter03

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SM_FloorQuarter03.SM_FloorQuarter03_C
// 0x0000 (0x0B60 - 0x0B60)
class ASM_FloorQuarter03_C final : public ABuildingFloor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SM_FloorQuarter03_C">();
	}
	static class ASM_FloorQuarter03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASM_FloorQuarter03_C>();
	}
};
static_assert(alignof(ASM_FloorQuarter03_C) == 0x000008, "Wrong alignment on ASM_FloorQuarter03_C");
static_assert(sizeof(ASM_FloorQuarter03_C) == 0x000B60, "Wrong size on ASM_FloorQuarter03_C");

}
