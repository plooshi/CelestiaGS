#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShutterHouse_DoorSide

#include "Basic.hpp"

#include "Parent_BuildingWall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ShutterHouse_DoorSide.ShutterHouse_DoorSide_C
// 0x0000 (0x0CD8 - 0x0CD8)
class AShutterHouse_DoorSide_C final : public AParent_BuildingWall_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShutterHouse_DoorSide_C">();
	}
	static class AShutterHouse_DoorSide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AShutterHouse_DoorSide_C>();
	}
};
static_assert(alignof(AShutterHouse_DoorSide_C) == 0x000008, "Wrong alignment on AShutterHouse_DoorSide_C");
static_assert(sizeof(AShutterHouse_DoorSide_C) == 0x000CD8, "Wrong size on AShutterHouse_DoorSide_C");

}

