#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CobWebs03

#include "Basic.hpp"

#include "CobWebs01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CobWebs03.CobWebs03_C
// 0x0000 (0x0CC8 - 0x0CC8)
class ACobWebs03_C final : public ACobWebs01_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CobWebs03_C">();
	}
	static class ACobWebs03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACobWebs03_C>();
	}
};
static_assert(alignof(ACobWebs03_C) == 0x000008, "Wrong alignment on ACobWebs03_C");
static_assert(sizeof(ACobWebs03_C) == 0x000CC8, "Wrong size on ACobWebs03_C");

}

