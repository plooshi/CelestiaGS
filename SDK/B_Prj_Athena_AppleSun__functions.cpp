#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Athena_AppleSun_

#include "Basic.hpp"

#include "B_Prj_Athena_AppleSun__classes.hpp"
#include "B_Prj_Athena_AppleSun__parameters.hpp"


namespace SDK
{

// Function B_Prj_Athena_AppleSun_.B_Prj_Athena_AppleSun__C.ExecuteUbergraph_B_Prj_Athena_AppleSun_
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Athena_AppleSun__C::ExecuteUbergraph_B_Prj_Athena_AppleSun_(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_AppleSun__C", "ExecuteUbergraph_B_Prj_Athena_AppleSun_");

	Params::B_Prj_Athena_AppleSun__C_ExecuteUbergraph_B_Prj_Athena_AppleSun_ Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_AppleSun_.B_Prj_Athena_AppleSun__C.OnStop
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Prj_Athena_AppleSun__C::OnStop(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_AppleSun__C", "OnStop");

	Params::B_Prj_Athena_AppleSun__C_OnStop Parms{};

	Parms.Hit = move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_AppleSun_.B_Prj_Athena_AppleSun__C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Prj_Athena_AppleSun__C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_AppleSun__C", "BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::B_Prj_Athena_AppleSun__C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = move(NormalImpulse);
	Parms.Hit = move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_AppleSun_.B_Prj_Athena_AppleSun__C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_AppleSun__C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_AppleSun__C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
