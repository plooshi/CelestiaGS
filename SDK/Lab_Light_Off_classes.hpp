#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lab_Light_Off

#include "Basic.hpp"

#include "Parent_BuildingPropActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Lab_Light_Off.Lab_Light_Off_C
// 0x0000 (0x0CA0 - 0x0CA0)
class ALab_Light_Off_C final : public AParent_BuildingPropActor_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Lab_Light_Off_C">();
	}
	static class ALab_Light_Off_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALab_Light_Off_C>();
	}
};
static_assert(alignof(ALab_Light_Off_C) == 0x000008, "Wrong alignment on ALab_Light_Off_C");
static_assert(sizeof(ALab_Light_Off_C) == 0x000CA0, "Wrong size on ALab_Light_Off_C");

}
