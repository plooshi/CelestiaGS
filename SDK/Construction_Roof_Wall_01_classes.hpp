#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Construction_Roof_Wall_01

#include "Basic.hpp"

#include "Parent_BuildingWall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Construction_Roof_Wall_01.Construction_Roof_Wall_01_C
// 0x0000 (0x0CD8 - 0x0CD8)
class AConstruction_Roof_Wall_01_C final : public AParent_BuildingWall_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Construction_Roof_Wall_01_C">();
	}
	static class AConstruction_Roof_Wall_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AConstruction_Roof_Wall_01_C>();
	}
};
static_assert(alignof(AConstruction_Roof_Wall_01_C) == 0x000008, "Wrong alignment on AConstruction_Roof_Wall_01_C");
static_assert(sizeof(AConstruction_Roof_Wall_01_C) == 0x000CD8, "Wrong size on AConstruction_Roof_Wall_01_C");

}

