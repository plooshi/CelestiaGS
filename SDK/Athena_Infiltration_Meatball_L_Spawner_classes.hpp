#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Infiltration_Meatball_L_Spawner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Athena_Meatball_L_Spawner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Athena_Infiltration_Meatball_L_Spawner.Athena_Infiltration_Meatball_L_Spawner_C
// 0x0010 (0x02A0 - 0x0290)
class AAthena_Infiltration_Meatball_L_Spawner_C final : public AAthena_Meatball_L_Spawner_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Athena_Infiltration_Meatball_L_Spawner_C; // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UInfiltrationStatusComponent*           InfiltrationStatus;                                // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Athena_Infiltration_Meatball_L_Spawner(int32 EntryPoint);
	void SpawnVehicle();
	void BndEvt__InfiltrationStatus_K2Node_ComponentBoundEvent_0_OnRoundResetEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_Infiltration_Meatball_L_Spawner_C">();
	}
	static class AAthena_Infiltration_Meatball_L_Spawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthena_Infiltration_Meatball_L_Spawner_C>();
	}
};
static_assert(alignof(AAthena_Infiltration_Meatball_L_Spawner_C) == 0x000008, "Wrong alignment on AAthena_Infiltration_Meatball_L_Spawner_C");
static_assert(sizeof(AAthena_Infiltration_Meatball_L_Spawner_C) == 0x0002A0, "Wrong size on AAthena_Infiltration_Meatball_L_Spawner_C");
static_assert(offsetof(AAthena_Infiltration_Meatball_L_Spawner_C, UberGraphFrame_Athena_Infiltration_Meatball_L_Spawner_C) == 0x000290, "Member 'AAthena_Infiltration_Meatball_L_Spawner_C::UberGraphFrame_Athena_Infiltration_Meatball_L_Spawner_C' has a wrong offset!");
static_assert(offsetof(AAthena_Infiltration_Meatball_L_Spawner_C, InfiltrationStatus) == 0x000298, "Member 'AAthena_Infiltration_Meatball_L_Spawner_C::InfiltrationStatus' has a wrong offset!");

}

