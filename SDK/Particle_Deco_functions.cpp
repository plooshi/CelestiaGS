#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Particle_Deco

#include "Basic.hpp"

#include "Particle_Deco_classes.hpp"
#include "Particle_Deco_parameters.hpp"


namespace SDK
{

// Function Particle_Deco.Particle_Deco_C.ExecuteUbergraph_Particle_Deco
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParticle_Deco_C::ExecuteUbergraph_Particle_Deco(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Particle_Deco_C", "ExecuteUbergraph_Particle_Deco");

	Params::Particle_Deco_C_ExecuteUbergraph_Particle_Deco Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Particle_Deco.Particle_Deco_C.ActivateDecoEmitter
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AParticle_Deco_C::ActivateDecoEmitter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Particle_Deco_C", "ActivateDecoEmitter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Particle_Deco.Particle_Deco_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AParticle_Deco_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Particle_Deco_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Particle_Deco.Particle_Deco_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AParticle_Deco_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Particle_Deco_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Particle_Deco.Particle_Deco_C.MaterialEditorSine
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   LookUpValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Period                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float AParticle_Deco_C::MaterialEditorSine(float LookUpValue, float Period)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Particle_Deco_C", "MaterialEditorSine");

	Params::Particle_Deco_C_MaterialEditorSine Parms{};

	Parms.LookUpValue = LookUpValue;
	Parms.Period = Period;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Particle_Deco.Particle_Deco_C.PseudoRandomScale
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          ActorLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Param_ParticleScale                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          RandomScale                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParticle_Deco_C::PseudoRandomScale(const struct FVector& ActorLocation, const struct FVector& Param_ParticleScale, struct FVector* RandomScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Particle_Deco_C", "PseudoRandomScale");

	Params::Particle_Deco_C_PseudoRandomScale Parms{};

	Parms.ActorLocation = move(ActorLocation);
	Parms.Param_ParticleScale = move(Param_ParticleScale);

	UObject::ProcessEvent(Func, &Parms);

	if (RandomScale != nullptr)
		*RandomScale = move(Parms.RandomScale);
}

}

