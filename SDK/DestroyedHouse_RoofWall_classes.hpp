#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DestroyedHouse_RoofWall

#include "Basic.hpp"

#include "Parent_BuildingWall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DestroyedHouse_RoofWall.DestroyedHouse_RoofWall_C
// 0x0000 (0x0CD8 - 0x0CD8)
class ADestroyedHouse_RoofWall_C final : public AParent_BuildingWall_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DestroyedHouse_RoofWall_C">();
	}
	static class ADestroyedHouse_RoofWall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADestroyedHouse_RoofWall_C>();
	}
};
static_assert(alignof(ADestroyedHouse_RoofWall_C) == 0x000008, "Wrong alignment on ADestroyedHouse_RoofWall_C");
static_assert(sizeof(ADestroyedHouse_RoofWall_C) == 0x000CD8, "Wrong size on ADestroyedHouse_RoofWall_C");

}
