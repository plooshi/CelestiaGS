#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FuelEquipped

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_FuelEquipped.GA_FuelEquipped_C
// 0x0008 (0x0A80 - 0x0A78)
class UGA_FuelEquipped_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_FuelEquipped(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_FuelEquipped_C">();
	}
	static class UGA_FuelEquipped_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_FuelEquipped_C>();
	}
};
static_assert(alignof(UGA_FuelEquipped_C) == 0x000008, "Wrong alignment on UGA_FuelEquipped_C");
static_assert(sizeof(UGA_FuelEquipped_C) == 0x000A80, "Wrong size on UGA_FuelEquipped_C");
static_assert(offsetof(UGA_FuelEquipped_C, UberGraphFrame) == 0x000A78, "Member 'UGA_FuelEquipped_C::UberGraphFrame' has a wrong offset!");

}
