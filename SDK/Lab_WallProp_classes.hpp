#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lab_WallProp

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Lab_WallProp.Lab_WallProp_C
// 0x0000 (0x0BC0 - 0x0BC0)
class ALab_WallProp_C final : public ABuildingProp
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Lab_WallProp_C">();
	}
	static class ALab_WallProp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALab_WallProp_C>();
	}
};
static_assert(alignof(ALab_WallProp_C) == 0x000008, "Wrong alignment on ALab_WallProp_C");
static_assert(sizeof(ALab_WallProp_C) == 0x000BC0, "Wrong size on ALab_WallProp_C");

}
