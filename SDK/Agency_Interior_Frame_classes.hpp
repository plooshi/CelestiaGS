#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Agency_Interior_Frame

#include "Basic.hpp"

#include "Parent_BuildingWall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Agency_Interior_Frame.Agency_Interior_Frame_C
// 0x0000 (0x0CD8 - 0x0CD8)
class AAgency_Interior_Frame_C final : public AParent_BuildingWall_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Agency_Interior_Frame_C">();
	}
	static class AAgency_Interior_Frame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAgency_Interior_Frame_C>();
	}
};
static_assert(alignof(AAgency_Interior_Frame_C) == 0x000008, "Wrong alignment on AAgency_Interior_Frame_C");
static_assert(sizeof(AAgency_Interior_Frame_C) == 0x000CD8, "Wrong size on AAgency_Interior_Frame_C");

}

