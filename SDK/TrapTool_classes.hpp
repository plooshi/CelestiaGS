#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TrapTool

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TrapTool.TrapTool_C
// 0x0000 (0x0C78 - 0x0C78)
class ATrapTool_C final : public AFortTrapTool
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TrapTool_C">();
	}
	static class ATrapTool_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATrapTool_C>();
	}
};
static_assert(alignof(ATrapTool_C) == 0x000008, "Wrong alignment on ATrapTool_C");
static_assert(sizeof(ATrapTool_C) == 0x000C78, "Wrong size on ATrapTool_C");

}
