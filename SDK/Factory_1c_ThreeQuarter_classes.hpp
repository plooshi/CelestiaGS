#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Factory_1c_ThreeQuarter

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Factory_1c_ThreeQuarter.Factory_1c_ThreeQuarter_C
// 0x0000 (0x0B70 - 0x0B70)
class AFactory_1c_ThreeQuarter_C final : public ABuildingPropCorner
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Factory_1c_ThreeQuarter_C">();
	}
	static class AFactory_1c_ThreeQuarter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFactory_1c_ThreeQuarter_C>();
	}
};
static_assert(alignof(AFactory_1c_ThreeQuarter_C) == 0x000008, "Wrong alignment on AFactory_1c_ThreeQuarter_C");
static_assert(sizeof(AFactory_1c_ThreeQuarter_C) == 0x000B70, "Wrong size on AFactory_1c_ThreeQuarter_C");

}
