#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_MangPatrolTag

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_MangPatrolTag.GE_MangPatrolTag_C
// 0x0000 (0x07B8 - 0x07B8)
class UGE_MangPatrolTag_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_MangPatrolTag_C">();
	}
	static class UGE_MangPatrolTag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_MangPatrolTag_C>();
	}
};
static_assert(alignof(UGE_MangPatrolTag_C) == 0x000008, "Wrong alignment on UGE_MangPatrolTag_C");
static_assert(sizeof(UGE_MangPatrolTag_C) == 0x0007B8, "Wrong size on UGE_MangPatrolTag_C");

}

