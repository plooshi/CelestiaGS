#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MeshNetwork_Speaker

#include "Basic.hpp"

#include "BP_MeshNetwork_Speaker_classes.hpp"
#include "BP_MeshNetwork_Speaker_parameters.hpp"


namespace SDK
{

// Function BP_MeshNetwork_Speaker.BP_MeshNetwork_Speaker_C.ExecuteUbergraph_BP_MeshNetwork_Speaker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MeshNetwork_Speaker_C::ExecuteUbergraph_BP_MeshNetwork_Speaker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeshNetwork_Speaker_C", "ExecuteUbergraph_BP_MeshNetwork_Speaker");

	Params::BP_MeshNetwork_Speaker_C_ExecuteUbergraph_BP_MeshNetwork_Speaker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MeshNetwork_Speaker.BP_MeshNetwork_Speaker_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MeshNetwork_Speaker_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeshNetwork_Speaker_C", "ReceiveEndPlay");

	Params::BP_MeshNetwork_Speaker_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MeshNetwork_Speaker.BP_MeshNetwork_Speaker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MeshNetwork_Speaker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeshNetwork_Speaker_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

