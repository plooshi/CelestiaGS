#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina

#include "Basic.hpp"

#include "GCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina_classes.hpp"
#include "GCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina_parameters.hpp"


namespace SDK
{

// Function GCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina.GCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina_C.ExecuteUbergraph_GCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina_C::ExecuteUbergraph_GCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina_C", "ExecuteUbergraph_GCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina");

	Params::GCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina_C_ExecuteUbergraph_GCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina.GCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina_C.StartLoop
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina_C::StartLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina_C", "StartLoop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina.GCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina_C.Loop
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina_C::Loop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina_C", "Loop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina.GCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina_C.OnLoopingStart
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*> ParticleComponents                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UAudioComponent*>          AudioComponents                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void AGCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina_C::OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina_C", "OnLoopingStart");

	Params::GCNL_Athena_ReactiveProp_PropaneTank_OnFire_TNTina_C_OnLoopingStart Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = move(Parameters);
	Parms.ParticleComponents = move(ParticleComponents);
	Parms.AudioComponents = move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

}
