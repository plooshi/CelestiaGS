#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: APOLLO_MASTER_TODM

#include "Basic.hpp"

#include "APOLLO_MASTER_TODM_classes.hpp"
#include "APOLLO_MASTER_TODM_parameters.hpp"


namespace SDK
{

// Function APOLLO_MASTER_TODM.APOLLO_MASTER_TODM_C.ExecuteUbergraph_APOLLO_MASTER_TODM
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAPOLLO_MASTER_TODM_C::ExecuteUbergraph_APOLLO_MASTER_TODM(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("APOLLO_MASTER_TODM_C", "ExecuteUbergraph_APOLLO_MASTER_TODM");

	Params::APOLLO_MASTER_TODM_C_ExecuteUbergraph_APOLLO_MASTER_TODM Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function APOLLO_MASTER_TODM.APOLLO_MASTER_TODM_C.UpdateShadowLevel
// (BlueprintCallable, BlueprintEvent)

void AAPOLLO_MASTER_TODM_C::UpdateShadowLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("APOLLO_MASTER_TODM_C", "UpdateShadowLevel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function APOLLO_MASTER_TODM.APOLLO_MASTER_TODM_C.Manual Update for Override
// (BlueprintCallable, BlueprintEvent)

void AAPOLLO_MASTER_TODM_C::Manual_Update_for_Override()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("APOLLO_MASTER_TODM_C", "Manual Update for Override");

	UObject::ProcessEvent(Func, nullptr);
}


// Function APOLLO_MASTER_TODM.APOLLO_MASTER_TODM_C.StartStorm
// (BlueprintCallable, BlueprintEvent)

void AAPOLLO_MASTER_TODM_C::StartStorm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("APOLLO_MASTER_TODM_C", "StartStorm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function APOLLO_MASTER_TODM.APOLLO_MASTER_TODM_C.OnStormStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AAPOLLO_MASTER_TODM_C::OnStormStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("APOLLO_MASTER_TODM_C", "OnStormStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function APOLLO_MASTER_TODM.APOLLO_MASTER_TODM_C.OnStormEnd
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AAPOLLO_MASTER_TODM_C::OnStormEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("APOLLO_MASTER_TODM_C", "OnStormEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function APOLLO_MASTER_TODM.APOLLO_MASTER_TODM_C.LightningStrike
// (BlueprintCallable, BlueprintEvent)

void AAPOLLO_MASTER_TODM_C::LightningStrike()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("APOLLO_MASTER_TODM_C", "LightningStrike");

	UObject::ProcessEvent(Func, nullptr);
}


// Function APOLLO_MASTER_TODM.APOLLO_MASTER_TODM_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAPOLLO_MASTER_TODM_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("APOLLO_MASTER_TODM_C", "ReceiveTick");

	Params::APOLLO_MASTER_TODM_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function APOLLO_MASTER_TODM.APOLLO_MASTER_TODM_C.UpdateSSAO
// (BlueprintCallable, BlueprintEvent)

void AAPOLLO_MASTER_TODM_C::UpdateSSAO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("APOLLO_MASTER_TODM_C", "UpdateSSAO");

	UObject::ProcessEvent(Func, nullptr);
}


// Function APOLLO_MASTER_TODM.APOLLO_MASTER_TODM_C.EnableHDRRendering
// (BlueprintCallable, BlueprintEvent)

void AAPOLLO_MASTER_TODM_C::EnableHDRRendering()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("APOLLO_MASTER_TODM_C", "EnableHDRRendering");

	UObject::ProcessEvent(Func, nullptr);
}


// Function APOLLO_MASTER_TODM.APOLLO_MASTER_TODM_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAPOLLO_MASTER_TODM_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("APOLLO_MASTER_TODM_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function APOLLO_MASTER_TODM.APOLLO_MASTER_TODM_C.DisableLightAndFog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAPOLLO_MASTER_TODM_C::DisableLightAndFog(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("APOLLO_MASTER_TODM_C", "DisableLightAndFog");

	Params::APOLLO_MASTER_TODM_C_DisableLightAndFog Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function APOLLO_MASTER_TODM.APOLLO_MASTER_TODM_C.New Storm Timeline__FireOffRain__EventFunc
// (BlueprintEvent)

void AAPOLLO_MASTER_TODM_C::New_Storm_Timeline__FireOffRain__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("APOLLO_MASTER_TODM_C", "New Storm Timeline__FireOffRain__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function APOLLO_MASTER_TODM.APOLLO_MASTER_TODM_C.New Storm Timeline__UpdateFunc
// (BlueprintEvent)

void AAPOLLO_MASTER_TODM_C::New_Storm_Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("APOLLO_MASTER_TODM_C", "New Storm Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function APOLLO_MASTER_TODM.APOLLO_MASTER_TODM_C.New Storm Timeline__FinishedFunc
// (BlueprintEvent)

void AAPOLLO_MASTER_TODM_C::New_Storm_Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("APOLLO_MASTER_TODM_C", "New Storm Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function APOLLO_MASTER_TODM.APOLLO_MASTER_TODM_C.FlashLightning__UpdateFunc
// (BlueprintEvent)

void AAPOLLO_MASTER_TODM_C::FlashLightning__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("APOLLO_MASTER_TODM_C", "FlashLightning__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function APOLLO_MASTER_TODM.APOLLO_MASTER_TODM_C.FlashLightning__FinishedFunc
// (BlueprintEvent)

void AAPOLLO_MASTER_TODM_C::FlashLightning__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("APOLLO_MASTER_TODM_C", "FlashLightning__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function APOLLO_MASTER_TODM.APOLLO_MASTER_TODM_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAPOLLO_MASTER_TODM_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("APOLLO_MASTER_TODM_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function APOLLO_MASTER_TODM.APOLLO_MASTER_TODM_C.SetHeavySSAO
// (Public, BlueprintCallable, BlueprintEvent)

void AAPOLLO_MASTER_TODM_C::SetHeavySSAO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("APOLLO_MASTER_TODM_C", "SetHeavySSAO");

	UObject::ProcessEvent(Func, nullptr);
}


// Function APOLLO_MASTER_TODM.APOLLO_MASTER_TODM_C.EmptyTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                       Transform                                              (Parm, OutParm, IsPlainOldData, NoDestructor)

void AAPOLLO_MASTER_TODM_C::EmptyTransform(struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("APOLLO_MASTER_TODM_C", "EmptyTransform");

	Params::APOLLO_MASTER_TODM_C_EmptyTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = move(Parms.Transform);
}


// Function APOLLO_MASTER_TODM.APOLLO_MASTER_TODM_C.SetShadowStateMPC
// (Public, BlueprintCallable, BlueprintEvent)

void AAPOLLO_MASTER_TODM_C::SetShadowStateMPC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("APOLLO_MASTER_TODM_C", "SetShadowStateMPC");

	UObject::ProcessEvent(Func, nullptr);
}

}
