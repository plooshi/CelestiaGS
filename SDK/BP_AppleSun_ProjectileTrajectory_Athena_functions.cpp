#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AppleSun_ProjectileTrajectory_Athena

#include "Basic.hpp"

#include "BP_AppleSun_ProjectileTrajectory_Athena_classes.hpp"
#include "BP_AppleSun_ProjectileTrajectory_Athena_parameters.hpp"


namespace SDK
{

// Function BP_AppleSun_ProjectileTrajectory_Athena.BP_AppleSun_ProjectileTrajectory_Athena_C.ExecuteUbergraph_BP_AppleSun_ProjectileTrajectory_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AppleSun_ProjectileTrajectory_Athena_C::ExecuteUbergraph_BP_AppleSun_ProjectileTrajectory_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AppleSun_ProjectileTrajectory_Athena_C", "ExecuteUbergraph_BP_AppleSun_ProjectileTrajectory_Athena");

	Params::BP_AppleSun_ProjectileTrajectory_Athena_C_ExecuteUbergraph_BP_AppleSun_ProjectileTrajectory_Athena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AppleSun_ProjectileTrajectory_Athena.BP_AppleSun_ProjectileTrajectory_Athena_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AppleSun_ProjectileTrajectory_Athena_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AppleSun_ProjectileTrajectory_Athena_C", "ReceiveTick");

	Params::BP_AppleSun_ProjectileTrajectory_Athena_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AppleSun_ProjectileTrajectory_Athena.BP_AppleSun_ProjectileTrajectory_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AppleSun_ProjectileTrajectory_Athena_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AppleSun_ProjectileTrajectory_Athena_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

