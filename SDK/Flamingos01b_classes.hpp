#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Flamingos01b

#include "Basic.hpp"

#include "Parent_BuildingPropActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Flamingos01b.Flamingos01b_C
// 0x0000 (0x0CA0 - 0x0CA0)
class AFlamingos01b_C final : public AParent_BuildingPropActor_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Flamingos01b_C">();
	}
	static class AFlamingos01b_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFlamingos01b_C>();
	}
};
static_assert(alignof(AFlamingos01b_C) == 0x000008, "Wrong alignment on AFlamingos01b_C");
static_assert(sizeof(AFlamingos01b_C) == 0x000CA0, "Wrong size on AFlamingos01b_C");

}

