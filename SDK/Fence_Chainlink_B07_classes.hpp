#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Fence_Chainlink_B07

#include "Basic.hpp"

#include "Parent_BuildingPropWall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Fence_Chainlink_B07.Fence_Chainlink_B07_C
// 0x0000 (0x0BD8 - 0x0BD8)
class AFence_Chainlink_B07_C final : public AParent_BuildingPropWall_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fence_Chainlink_B07_C">();
	}
	static class AFence_Chainlink_B07_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFence_Chainlink_B07_C>();
	}
};
static_assert(alignof(AFence_Chainlink_B07_C) == 0x000008, "Wrong alignment on AFence_Chainlink_B07_C");
static_assert(sizeof(AFence_Chainlink_B07_C) == 0x000BD8, "Wrong size on AFence_Chainlink_B07_C");

}
