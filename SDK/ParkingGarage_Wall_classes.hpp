#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ParkingGarage_Wall

#include "Basic.hpp"

#include "Parent_BuildingWall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ParkingGarage_Wall.ParkingGarage_Wall_C
// 0x0000 (0x0CD8 - 0x0CD8)
class AParkingGarage_Wall_C final : public AParent_BuildingWall_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ParkingGarage_Wall_C">();
	}
	static class AParkingGarage_Wall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AParkingGarage_Wall_C>();
	}
};
static_assert(alignof(AParkingGarage_Wall_C) == 0x000008, "Wrong alignment on AParkingGarage_Wall_C");
static_assert(sizeof(AParkingGarage_Wall_C) == 0x000CD8, "Wrong size on AParkingGarage_Wall_C");

}
