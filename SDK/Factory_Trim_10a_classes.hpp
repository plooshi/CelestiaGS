#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Factory_Trim_10a

#include "Basic.hpp"

#include "Parent_BuildingPropWall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Factory_Trim_10a.Factory_Trim_10a_C
// 0x0000 (0x0BD8 - 0x0BD8)
class AFactory_Trim_10a_C final : public AParent_BuildingPropWall_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Factory_Trim_10a_C">();
	}
	static class AFactory_Trim_10a_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFactory_Trim_10a_C>();
	}
};
static_assert(alignof(AFactory_Trim_10a_C) == 0x000008, "Wrong alignment on AFactory_Trim_10a_C");
static_assert(sizeof(AFactory_Trim_10a_C) == 0x000BD8, "Wrong size on AFactory_Trim_10a_C");

}

