#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IceCream_Machine

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass IceCream_Machine.IceCream_Machine_C
// 0x0000 (0x0BC0 - 0x0BC0)
class AIceCream_Machine_C final : public ABuildingProp
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IceCream_Machine_C">();
	}
	static class AIceCream_Machine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AIceCream_Machine_C>();
	}
};
static_assert(alignof(AIceCream_Machine_C) == 0x000008, "Wrong alignment on AIceCream_Machine_C");
static_assert(sizeof(AIceCream_Machine_C) == 0x000BC0, "Wrong size on AIceCream_Machine_C");

}
