#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpicySakeDataTracker

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SpicySakeDataTracker.SpicySakeDataTracker_C
// 0x0000 (0x01A8 - 0x01A8)
class USpicySakeDataTracker_C final : public UFortGameplayDataTrackerComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SpicySakeDataTracker_C">();
	}
	static class USpicySakeDataTracker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpicySakeDataTracker_C>();
	}
};
static_assert(alignof(USpicySakeDataTracker_C) == 0x000008, "Wrong alignment on USpicySakeDataTracker_C");
static_assert(sizeof(USpicySakeDataTracker_C) == 0x0001A8, "Wrong size on USpicySakeDataTracker_C");

}
