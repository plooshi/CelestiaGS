#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PipeKit05

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PipeKit05.PipeKit05_C
// 0x0000 (0x0BC0 - 0x0BC0)
class APipeKit05_C final : public ABuildingProp
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PipeKit05_C">();
	}
	static class APipeKit05_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APipeKit05_C>();
	}
};
static_assert(alignof(APipeKit05_C) == 0x000008, "Wrong alignment on APipeKit05_C");
static_assert(sizeof(APipeKit05_C) == 0x000BC0, "Wrong size on APipeKit05_C");

}
