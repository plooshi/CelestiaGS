#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Athena_Envitem_SilkyVeteran

#include "Basic.hpp"

#include "GCNL_Athena_Envitem_SilkyVeteran_classes.hpp"
#include "GCNL_Athena_Envitem_SilkyVeteran_parameters.hpp"


namespace SDK
{

// Function GCNL_Athena_Envitem_SilkyVeteran.GCNL_Athena_Envitem_SilkyVeteran_C.ExecuteUbergraph_GCNL_Athena_Envitem_SilkyVeteran
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Envitem_SilkyVeteran_C::ExecuteUbergraph_GCNL_Athena_Envitem_SilkyVeteran(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Envitem_SilkyVeteran_C", "ExecuteUbergraph_GCNL_Athena_Envitem_SilkyVeteran");

	Params::GCNL_Athena_Envitem_SilkyVeteran_C_ExecuteUbergraph_GCNL_Athena_Envitem_SilkyVeteran Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Athena_Envitem_SilkyVeteran.GCNL_Athena_Envitem_SilkyVeteran_C.Crouch Check
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          OldLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          OldVelocity                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Envitem_SilkyVeteran_C::Crouch_Check(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Envitem_SilkyVeteran_C", "Crouch Check");

	Params::GCNL_Athena_Envitem_SilkyVeteran_C_Crouch_Check Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.OldLocation = move(OldLocation);
	Parms.OldVelocity = move(OldVelocity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Athena_Envitem_SilkyVeteran.GCNL_Athena_Envitem_SilkyVeteran_C.OnLoopingStart
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*> ParticleComponents                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UAudioComponent*>          AudioComponents                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void AGCNL_Athena_Envitem_SilkyVeteran_C::OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Envitem_SilkyVeteran_C", "OnLoopingStart");

	Params::GCNL_Athena_Envitem_SilkyVeteran_C_OnLoopingStart Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = move(Parameters);
	Parms.ParticleComponents = move(ParticleComponents);
	Parms.AudioComponents = move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Athena_Envitem_SilkyVeteran.GCNL_Athena_Envitem_SilkyVeteran_C.Set FX MIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayCueParameters           Gameplay_Parameters                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void AGCNL_Athena_Envitem_SilkyVeteran_C::Set_FX_MIDs(const struct FGameplayCueParameters& Gameplay_Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Envitem_SilkyVeteran_C", "Set FX MIDs");

	Params::GCNL_Athena_Envitem_SilkyVeteran_C_Set_FX_MIDs Parms{};

	Parms.Gameplay_Parameters = move(Gameplay_Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

}

