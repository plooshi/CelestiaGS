#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Neo_Int_DoorC

#include "Basic.hpp"

#include "Parent_BuildingWall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Neo_Int_DoorC.Neo_Int_DoorC_C
// 0x0000 (0x0CD8 - 0x0CD8)
class ANeo_Int_DoorC_C final : public AParent_BuildingWall_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Neo_Int_DoorC_C">();
	}
	static class ANeo_Int_DoorC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANeo_Int_DoorC_C>();
	}
};
static_assert(alignof(ANeo_Int_DoorC_C) == 0x000008, "Wrong alignment on ANeo_Int_DoorC_C");
static_assert(sizeof(ANeo_Int_DoorC_C) == 0x000CD8, "Wrong size on ANeo_Int_DoorC_C");

}
