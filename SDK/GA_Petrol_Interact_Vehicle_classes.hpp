#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Petrol_Interact_Vehicle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Petrol_Interact_Vehicle.GA_Petrol_Interact_Vehicle_C
// 0x0070 (0x0AE8 - 0x0A78)
class UGA_Petrol_Interact_Vehicle_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortWorldItemDefinition*               PetrolItemDef;                                     // 0x0A80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayAbilityMontageInfo        RefillGasTankMontage;                              // 0x0A88(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_RefillVehicleTag;                               // 0x0AE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Petrol_Interact_Vehicle(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Petrol_Interact_Vehicle_C">();
	}
	static class UGA_Petrol_Interact_Vehicle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Petrol_Interact_Vehicle_C>();
	}
};
static_assert(alignof(UGA_Petrol_Interact_Vehicle_C) == 0x000008, "Wrong alignment on UGA_Petrol_Interact_Vehicle_C");
static_assert(sizeof(UGA_Petrol_Interact_Vehicle_C) == 0x000AE8, "Wrong size on UGA_Petrol_Interact_Vehicle_C");
static_assert(offsetof(UGA_Petrol_Interact_Vehicle_C, UberGraphFrame) == 0x000A78, "Member 'UGA_Petrol_Interact_Vehicle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Petrol_Interact_Vehicle_C, PetrolItemDef) == 0x000A80, "Member 'UGA_Petrol_Interact_Vehicle_C::PetrolItemDef' has a wrong offset!");
static_assert(offsetof(UGA_Petrol_Interact_Vehicle_C, RefillGasTankMontage) == 0x000A88, "Member 'UGA_Petrol_Interact_Vehicle_C::RefillGasTankMontage' has a wrong offset!");
static_assert(offsetof(UGA_Petrol_Interact_Vehicle_C, GE_RefillVehicleTag) == 0x000AE0, "Member 'UGA_Petrol_Interact_Vehicle_C::GE_RefillVehicleTag' has a wrong offset!");

}
