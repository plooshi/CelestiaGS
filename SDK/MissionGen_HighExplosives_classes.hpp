#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionGen_HighExplosives

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MissionGen_HighExplosives.MissionGen_HighExplosives_C
// 0x0000 (0x06C0 - 0x06C0)
class UMissionGen_HighExplosives_C final : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionGen_HighExplosives_C">();
	}
	static class UMissionGen_HighExplosives_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGen_HighExplosives_C>();
	}
};
static_assert(alignof(UMissionGen_HighExplosives_C) == 0x000008, "Wrong alignment on UMissionGen_HighExplosives_C");
static_assert(sizeof(UMissionGen_HighExplosives_C) == 0x0006C0, "Wrong size on UMissionGen_HighExplosives_C");

}
