#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Valet_SportsCar_Vehicle_Upgrade

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Valet_SportsCar_Vehicle_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Valet_SportsCar_Vehicle_Upgrade.Valet_SportsCar_Vehicle_Upgrade_C
// 0x0010 (0x24C0 - 0x24B0)
class AValet_SportsCar_Vehicle_Upgrade_C final : public AValet_SportsCar_Vehicle_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Valet_SportsCar_Vehicle_Upgrade_C;  // 0x24B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Valet_SportsCar_Vehicle_Upgrade(int32 EntryPoint);
	void PickRandomMaterial();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Valet_SportsCar_Vehicle_Upgrade_C">();
	}
	static class AValet_SportsCar_Vehicle_Upgrade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AValet_SportsCar_Vehicle_Upgrade_C>();
	}
};
static_assert(alignof(AValet_SportsCar_Vehicle_Upgrade_C) == 0x000010, "Wrong alignment on AValet_SportsCar_Vehicle_Upgrade_C");
static_assert(sizeof(AValet_SportsCar_Vehicle_Upgrade_C) == 0x0024C0, "Wrong size on AValet_SportsCar_Vehicle_Upgrade_C");
static_assert(offsetof(AValet_SportsCar_Vehicle_Upgrade_C, UberGraphFrame_Valet_SportsCar_Vehicle_Upgrade_C) == 0x0024B0, "Member 'AValet_SportsCar_Vehicle_Upgrade_C::UberGraphFrame_Valet_SportsCar_Vehicle_Upgrade_C' has a wrong offset!");

}

