#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Neo_QuarterWallS

#include "Basic.hpp"

#include "Parent_BuildingPropWall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Neo_QuarterWallS.Neo_QuarterWallS_C
// 0x0000 (0x0BD8 - 0x0BD8)
class ANeo_QuarterWallS_C final : public AParent_BuildingPropWall_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Neo_QuarterWallS_C">();
	}
	static class ANeo_QuarterWallS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANeo_QuarterWallS_C>();
	}
};
static_assert(alignof(ANeo_QuarterWallS_C) == 0x000008, "Wrong alignment on ANeo_QuarterWallS_C");
static_assert(sizeof(ANeo_QuarterWallS_C) == 0x000BD8, "Wrong size on ANeo_QuarterWallS_C");

}
