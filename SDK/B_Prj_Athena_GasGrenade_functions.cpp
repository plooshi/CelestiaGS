#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Athena_GasGrenade

#include "Basic.hpp"

#include "B_Prj_Athena_GasGrenade_classes.hpp"
#include "B_Prj_Athena_GasGrenade_parameters.hpp"


namespace SDK
{

// Function B_Prj_Athena_GasGrenade.B_Prj_Athena_GasGrenade_C.ExecuteUbergraph_B_Prj_Athena_GasGrenade
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Athena_GasGrenade_C::ExecuteUbergraph_B_Prj_Athena_GasGrenade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_GasGrenade_C", "ExecuteUbergraph_B_Prj_Athena_GasGrenade");

	Params::B_Prj_Athena_GasGrenade_C_ExecuteUbergraph_B_Prj_Athena_GasGrenade Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_GasGrenade.B_Prj_Athena_GasGrenade_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*              WaterBody                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWaterInteractionComponent*   Param_WaterInteractionComponent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsFirstBody                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Prj_Athena_GasGrenade_C::BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* Param_WaterInteractionComponent, bool bIsFirstBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_GasGrenade_C", "BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature");

	Params::B_Prj_Athena_GasGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature Parms{};

	Parms.WaterBody = WaterBody;
	Parms.Param_WaterInteractionComponent = Param_WaterInteractionComponent;
	Parms.bIsFirstBody = bIsFirstBody;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_GasGrenade.B_Prj_Athena_GasGrenade_C.Update PostProcess Scale
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_GasGrenade_C::Update_PostProcess_Scale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_GasGrenade_C", "Update PostProcess Scale");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Athena_GasGrenade.B_Prj_Athena_GasGrenade_C.Update Tick Rate
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_GasGrenade_C::Update_Tick_Rate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_GasGrenade_C", "Update Tick Rate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Athena_GasGrenade.B_Prj_Athena_GasGrenade_C.Update Gas Duration
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_GasGrenade_C::Update_Gas_Duration()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_GasGrenade_C", "Update Gas Duration");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Athena_GasGrenade.B_Prj_Athena_GasGrenade_C.SyncedTimer
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_GasGrenade_C::SyncedTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_GasGrenade_C", "SyncedTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Athena_GasGrenade.B_Prj_Athena_GasGrenade_C.FadeOut
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_GasGrenade_C::FadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_GasGrenade_C", "FadeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Athena_GasGrenade.B_Prj_Athena_GasGrenade_C.FadeIn
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_GasGrenade_C::FadeIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_GasGrenade_C", "FadeIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Athena_GasGrenade.B_Prj_Athena_GasGrenade_C.DamageTick
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_GasGrenade_C::DamageTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_GasGrenade_C", "DamageTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Athena_GasGrenade.B_Prj_Athena_GasGrenade_C.Stop_Rotation
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_GasGrenade_C::Stop_Rotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_GasGrenade_C", "Stop_Rotation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Athena_GasGrenade.B_Prj_Athena_GasGrenade_C.OnStop
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Prj_Athena_GasGrenade_C::OnStop(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_GasGrenade_C", "OnStop");

	Params::B_Prj_Athena_GasGrenade_C_OnStop Parms{};

	Parms.Hit = move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_GasGrenade.B_Prj_Athena_GasGrenade_C.FadeSmokeTL__UpdateFunc
// (BlueprintEvent)

void AB_Prj_Athena_GasGrenade_C::FadeSmokeTL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_GasGrenade_C", "FadeSmokeTL__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Athena_GasGrenade.B_Prj_Athena_GasGrenade_C.FadeSmokeTL__FinishedFunc
// (BlueprintEvent)

void AB_Prj_Athena_GasGrenade_C::FadeSmokeTL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_GasGrenade_C", "FadeSmokeTL__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Athena_GasGrenade.B_Prj_Athena_GasGrenade_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_GasGrenade_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_GasGrenade_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
