#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BrickSimple_BraceWall

#include "Basic.hpp"

#include "Parent_BuildingWall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BrickSimple_BraceWall.BrickSimple_BraceWall_C
// 0x0000 (0x0CD8 - 0x0CD8)
class ABrickSimple_BraceWall_C final : public AParent_BuildingWall_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BrickSimple_BraceWall_C">();
	}
	static class ABrickSimple_BraceWall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABrickSimple_BraceWall_C>();
	}
};
static_assert(alignof(ABrickSimple_BraceWall_C) == 0x000008, "Wrong alignment on ABrickSimple_BraceWall_C");
static_assert(sizeof(ABrickSimple_BraceWall_C) == 0x000CD8, "Wrong size on ABrickSimple_BraceWall_C");

}
