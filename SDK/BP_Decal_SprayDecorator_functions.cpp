#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Decal_SprayDecorator

#include "Basic.hpp"

#include "BP_Decal_SprayDecorator_classes.hpp"
#include "BP_Decal_SprayDecorator_parameters.hpp"


namespace SDK
{

// Function BP_Decal_SprayDecorator.BP_Decal_SprayDecorator_C.ExecuteUbergraph_BP_Decal_SprayDecorator
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Decal_SprayDecorator_C::ExecuteUbergraph_BP_Decal_SprayDecorator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Decal_SprayDecorator_C", "ExecuteUbergraph_BP_Decal_SprayDecorator");

	Params::BP_Decal_SprayDecorator_C_ExecuteUbergraph_BP_Decal_SprayDecorator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Decal_SprayDecorator.BP_Decal_SprayDecorator_C.OnAttachedPropDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Decal_SprayDecorator_C::OnAttachedPropDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Decal_SprayDecorator_C", "OnAttachedPropDestroyed");

	Params::BP_Decal_SprayDecorator_C_OnAttachedPropDestroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Decal_SprayDecorator.BP_Decal_SprayDecorator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Decal_SprayDecorator_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Decal_SprayDecorator_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Decal_SprayDecorator.BP_Decal_SprayDecorator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Decal_SprayDecorator_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Decal_SprayDecorator_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
