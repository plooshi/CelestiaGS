#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_StairR

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Basic_StairR.Basic_StairR_C
// 0x0000 (0x0B68 - 0x0B68)
class ABasic_StairR_C final : public ABuildingStairs
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Basic_StairR_C">();
	}
	static class ABasic_StairR_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABasic_StairR_C>();
	}
};
static_assert(alignof(ABasic_StairR_C) == 0x000008, "Wrong alignment on ABasic_StairR_C");
static_assert(sizeof(ABasic_StairR_C) == 0x000B68, "Wrong size on ABasic_StairR_C");

}
