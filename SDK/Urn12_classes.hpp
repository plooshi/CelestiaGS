#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Urn12

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Urn12.Urn12_C
// 0x0000 (0x0BC0 - 0x0BC0)
class AUrn12_C final : public ABuildingProp
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Urn12_C">();
	}
	static class AUrn12_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AUrn12_C>();
	}
};
static_assert(alignof(AUrn12_C) == 0x000008, "Wrong alignment on AUrn12_C");
static_assert(sizeof(AUrn12_C) == 0x000BC0, "Wrong size on AUrn12_C");

}

