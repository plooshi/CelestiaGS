#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CryptWalls_04

#include "Basic.hpp"

#include "Parent_BuildingWall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CryptWalls_04.CryptWalls_04_C
// 0x0000 (0x0CD8 - 0x0CD8)
class ACryptWalls_04_C final : public AParent_BuildingWall_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CryptWalls_04_C">();
	}
	static class ACryptWalls_04_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACryptWalls_04_C>();
	}
};
static_assert(alignof(ACryptWalls_04_C) == 0x000008, "Wrong alignment on ACryptWalls_04_C");
static_assert(sizeof(ACryptWalls_04_C) == 0x000CD8, "Wrong size on ACryptWalls_04_C");

}
