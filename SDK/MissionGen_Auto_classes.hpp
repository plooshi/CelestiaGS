#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionGen_Auto

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MissionGen_Auto.MissionGen_Auto_C
// 0x0000 (0x06C0 - 0x06C0)
class UMissionGen_Auto_C final : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionGen_Auto_C">();
	}
	static class UMissionGen_Auto_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGen_Auto_C>();
	}
};
static_assert(alignof(UMissionGen_Auto_C) == 0x000008, "Wrong alignment on UMissionGen_Auto_C");
static_assert(sizeof(UMissionGen_Auto_C) == 0x0006C0, "Wrong size on UMissionGen_Auto_C");

}

