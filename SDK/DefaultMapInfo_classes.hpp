#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DefaultMapInfo

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DefaultMapInfo.DefaultMapInfo_C
// 0x0000 (0x0798 - 0x0798)
class ADefaultMapInfo_C final : public AFortAthenaMapInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DefaultMapInfo_C">();
	}
	static class ADefaultMapInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADefaultMapInfo_C>();
	}
};
static_assert(alignof(ADefaultMapInfo_C) == 0x000008, "Wrong alignment on ADefaultMapInfo_C");
static_assert(sizeof(ADefaultMapInfo_C) == 0x000798, "Wrong size on ADefaultMapInfo_C");

}

