#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Chair_Dining

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Chair_Dining.Chair_Dining_C
// 0x0000 (0x0BC0 - 0x0BC0)
class AChair_Dining_C final : public ABuildingProp
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Chair_Dining_C">();
	}
	static class AChair_Dining_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AChair_Dining_C>();
	}
};
static_assert(alignof(AChair_Dining_C) == 0x000008, "Wrong alignment on AChair_Dining_C");
static_assert(sizeof(AChair_Dining_C) == 0x000BC0, "Wrong size on AChair_Dining_C");

}
