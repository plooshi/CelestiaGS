#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Athena_TnTina_Fireballs

#include "Basic.hpp"

#include "B_Prj_Athena_TnTina_Fireballs_classes.hpp"
#include "B_Prj_Athena_TnTina_Fireballs_parameters.hpp"


namespace SDK
{

// Function B_Prj_Athena_TnTina_Fireballs.B_Prj_Athena_TnTina_Fireballs_C.ExecuteUbergraph_B_Prj_Athena_TnTina_Fireballs
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Athena_TnTina_Fireballs_C::ExecuteUbergraph_B_Prj_Athena_TnTina_Fireballs(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_TnTina_Fireballs_C", "ExecuteUbergraph_B_Prj_Athena_TnTina_Fireballs");

	Params::B_Prj_Athena_TnTina_Fireballs_C_ExecuteUbergraph_B_Prj_Athena_TnTina_Fireballs Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_TnTina_Fireballs.B_Prj_Athena_TnTina_Fireballs_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*              WaterBody                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWaterInteractionComponent*   Param_WaterInteractionComponent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsFirstBody                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Prj_Athena_TnTina_Fireballs_C::BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* Param_WaterInteractionComponent, bool bIsFirstBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_TnTina_Fireballs_C", "BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature");

	Params::B_Prj_Athena_TnTina_Fireballs_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature Parms{};

	Parms.WaterBody = WaterBody;
	Parms.Param_WaterInteractionComponent = Param_WaterInteractionComponent;
	Parms.bIsFirstBody = bIsFirstBody;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_TnTina_Fireballs.B_Prj_Athena_TnTina_Fireballs_C.Play Impact Sound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_TnTina_Fireballs_C::Play_Impact_Sound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_TnTina_Fireballs_C", "Play Impact Sound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Athena_TnTina_Fireballs.B_Prj_Athena_TnTina_Fireballs_C.OnStop
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Prj_Athena_TnTina_Fireballs_C::OnStop(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_TnTina_Fireballs_C", "OnStop");

	Params::B_Prj_Athena_TnTina_Fireballs_C_OnStop Parms{};

	Parms.Hit = move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_TnTina_Fireballs.B_Prj_Athena_TnTina_Fireballs_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              MyComp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSelfMoved                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitNormal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Prj_Athena_TnTina_Fireballs_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_TnTina_Fireballs_C", "ReceiveHit");

	Params::B_Prj_Athena_TnTina_Fireballs_C_ReceiveHit Parms{};

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = move(HitLocation);
	Parms.HitNormal = move(HitNormal);
	Parms.NormalImpulse = move(NormalImpulse);
	Parms.Hit = move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_TnTina_Fireballs.B_Prj_Athena_TnTina_Fireballs_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Athena_TnTina_Fireballs_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_TnTina_Fireballs_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
