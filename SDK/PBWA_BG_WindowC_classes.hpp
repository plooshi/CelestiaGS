#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PBWA_BG_WindowC

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PBWA_BG_WindowC.PBWA_BG_WindowC_C
// 0x0000 (0x0CC0 - 0x0CC0)
class APBWA_BG_WindowC_C final : public ABuildingWall
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_BG_WindowC_C">();
	}
	static class APBWA_BG_WindowC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_BG_WindowC_C>();
	}
};
static_assert(alignof(APBWA_BG_WindowC_C) == 0x000008, "Wrong alignment on APBWA_BG_WindowC_C");
static_assert(sizeof(APBWA_BG_WindowC_C) == 0x000CC0, "Wrong size on APBWA_BG_WindowC_C");

}
