#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Recreation_Canopy

#include "Basic.hpp"

#include "Parent_BuildingPropActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Recreation_Canopy.Recreation_Canopy_C
// 0x0000 (0x0CA0 - 0x0CA0)
class ARecreation_Canopy_C final : public AParent_BuildingPropActor_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Recreation_Canopy_C">();
	}
	static class ARecreation_Canopy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARecreation_Canopy_C>();
	}
};
static_assert(alignof(ARecreation_Canopy_C) == 0x000008, "Wrong alignment on ARecreation_Canopy_C");
static_assert(sizeof(ARecreation_Canopy_C) == 0x000CA0, "Wrong size on ARecreation_Canopy_C");

}
