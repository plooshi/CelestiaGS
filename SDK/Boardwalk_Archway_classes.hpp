#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Boardwalk_Archway

#include "Basic.hpp"

#include "Parent_BuildingWall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Boardwalk_Archway.Boardwalk_Archway_C
// 0x0000 (0x0CD8 - 0x0CD8)
class ABoardwalk_Archway_C final : public AParent_BuildingWall_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Boardwalk_Archway_C">();
	}
	static class ABoardwalk_Archway_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABoardwalk_Archway_C>();
	}
};
static_assert(alignof(ABoardwalk_Archway_C) == 0x000008, "Wrong alignment on ABoardwalk_Archway_C");
static_assert(sizeof(ABoardwalk_Archway_C) == 0x000CD8, "Wrong size on ABoardwalk_Archway_C");

}
