#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_GasGrenade_PulseDamage

#include "Basic.hpp"

#include "GET_DirectBallisticDamage_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_GasGrenade_PulseDamage.GE_GasGrenade_PulseDamage_C
// 0x0000 (0x07B8 - 0x07B8)
class UGE_GasGrenade_PulseDamage_C final : public UGET_DirectBallisticDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_GasGrenade_PulseDamage_C">();
	}
	static class UGE_GasGrenade_PulseDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_GasGrenade_PulseDamage_C>();
	}
};
static_assert(alignof(UGE_GasGrenade_PulseDamage_C) == 0x000008, "Wrong alignment on UGE_GasGrenade_PulseDamage_C");
static_assert(sizeof(UGE_GasGrenade_PulseDamage_C) == 0x0007B8, "Wrong size on UGE_GasGrenade_PulseDamage_C");

}
