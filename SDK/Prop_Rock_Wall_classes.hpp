#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_Rock_Wall

#include "Basic.hpp"

#include "Prop_Rock_01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Prop_Rock_Wall.Prop_Rock_Wall_C
// 0x0000 (0x0BE0 - 0x0BE0)
class AProp_Rock_Wall_C final : public AProp_Rock_01_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Prop_Rock_Wall_C">();
	}
	static class AProp_Rock_Wall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_Rock_Wall_C>();
	}
};
static_assert(alignof(AProp_Rock_Wall_C) == 0x000008, "Wrong alignment on AProp_Rock_Wall_C");
static_assert(sizeof(AProp_Rock_Wall_C) == 0x000BE0, "Wrong size on AProp_Rock_Wall_C");

}
