#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Athena_Tether

#include "Basic.hpp"

#include "GCNL_Athena_Tether_classes.hpp"
#include "GCNL_Athena_Tether_parameters.hpp"


namespace SDK
{

// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ExecuteUbergraph_GCNL_Athena_Tether
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Tether_C::ExecuteUbergraph_GCNL_Athena_Tether(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "ExecuteUbergraph_GCNL_Athena_Tether");

	Params::GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ScaleInSkisForPlayer
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Athena_Tether_C::ScaleInSkisForPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "ScaleInSkisForPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCNL_Athena_Tether_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.InitializeTetherGCNL
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Tether_C::InitializeTetherGCNL(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "InitializeTetherGCNL");

	Params::GCNL_Athena_Tether_C_InitializeTetherGCNL Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.StopFF
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Athena_Tether_C::StopFF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "StopFF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.UpdateFF
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Athena_Tether_C::UpdateFF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "UpdateFF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.StartFF
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Athena_Tether_C::StartFF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "StartFF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAudioComponent*                  AudioComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ParameterName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OneshotIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Tether_C::BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature(class UAudioComponent* AudioComponent, class FName ParameterName, int32 OneshotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature");

	Params::GCNL_Athena_Tether_C_BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature Parms{};

	Parms.AudioComponent = AudioComponent;
	Parms.ParameterName = ParameterName;
	Parms.OneshotIndex = OneshotIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.OnRemoval
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*> ParticleComponents                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UAudioComponent*>          AudioComponents                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UCameraShake*                     BurstCameraShakeInstance                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                      BurstDecalInstance                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Tether_C::OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "OnRemoval");

	Params::GCNL_Athena_Tether_C_OnRemoval Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = move(Parameters);
	Parms.ParticleComponents = move(ParticleComponents);
	Parms.AudioComponents = move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.OnApplication
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*> ParticleComponents                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UAudioComponent*>          AudioComponents                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UCameraShake*                     BurstCameraShakeInstance                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                      BurstDecalInstance                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Tether_C::OnApplication(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "OnApplication");

	Params::GCNL_Athena_Tether_C_OnApplication Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = move(Parameters);
	Parms.ParticleComponents = move(ParticleComponents);
	Parms.AudioComponents = move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Tether_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "ReceiveTick");

	Params::GCNL_Athena_Tether_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ScaleInSkis__UpdateFunc
// (BlueprintEvent)

void AGCNL_Athena_Tether_C::ScaleInSkis__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "ScaleInSkis__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ScaleInSkis__FinishedFunc
// (BlueprintEvent)

void AGCNL_Athena_Tether_C::ScaleInSkis__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "ScaleInSkis__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.UpdateAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Surface                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Tether_C::UpdateAudio(int32 Surface)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "UpdateAudio");

	Params::GCNL_Athena_Tether_C_UpdateAudio Parms{};

	Parms.Surface = Surface;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.WhileActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCNL_Athena_Tether_C::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "WhileActive");

	Params::GCNL_Athena_Tether_C_WhileActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCNL_Athena_Tether_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Tether_C", "OnRemove");

	Params::GCNL_Athena_Tether_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
