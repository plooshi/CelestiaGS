#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_StoreFront_Glass_E

#include "Basic.hpp"

#include "Parent_BuildingWall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass S_StoreFront_Glass_E.S_StoreFront_Glass_E_C
// 0x0000 (0x0CD8 - 0x0CD8)
class AS_StoreFront_Glass_E_C final : public AParent_BuildingWall_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"S_StoreFront_Glass_E_C">();
	}
	static class AS_StoreFront_Glass_E_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AS_StoreFront_Glass_E_C>();
	}
};
static_assert(alignof(AS_StoreFront_Glass_E_C) == 0x000008, "Wrong alignment on AS_StoreFront_Glass_E_C");
static_assert(sizeof(AS_StoreFront_Glass_E_C) == 0x000CD8, "Wrong size on AS_StoreFront_Glass_E_C");

}
