#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Showdown_DropItemsOnDeath

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Showdown_DropItemsOnDeath.Showdown_DropItemsOnDeath_C
// 0x0000 (0x0330 - 0x0330)
class AShowdown_DropItemsOnDeath_C final : public AFortAthenaMutator_ItemDropOnDeath
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Showdown_DropItemsOnDeath_C">();
	}
	static class AShowdown_DropItemsOnDeath_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AShowdown_DropItemsOnDeath_C>();
	}
};
static_assert(alignof(AShowdown_DropItemsOnDeath_C) == 0x000008, "Wrong alignment on AShowdown_DropItemsOnDeath_C");
static_assert(sizeof(AShowdown_DropItemsOnDeath_C) == 0x000330, "Wrong size on AShowdown_DropItemsOnDeath_C");

}
