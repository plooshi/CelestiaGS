#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_Athena_SCMachine

#include "Basic.hpp"

#include "BGA_Athena_SCMachine_classes.hpp"
#include "BGA_Athena_SCMachine_parameters.hpp"


namespace SDK
{

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.ExecuteUbergraph_BGA_Athena_SCMachine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_SCMachine_C::ExecuteUbergraph_BGA_Athena_SCMachine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "ExecuteUbergraph_BGA_Athena_SCMachine");

	Params::BGA_Athena_SCMachine_C_ExecuteUbergraph_BGA_Athena_SCMachine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.InteactComplete
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_SCMachine_C::InteactComplete(class AFortPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "InteactComplete");

	Params::BGA_Athena_SCMachine_C_InteactComplete Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.SkydiveIfAirborne
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_SCMachine_C::SkydiveIfAirborne(class AFortPlayerPawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "SkydiveIfAirborne");

	Params::BGA_Athena_SCMachine_C_SkydiveIfAirborne Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.Update Cooldown Sound
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_C::Update_Cooldown_Sound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "Update Cooldown Sound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.Play Horn Sound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_C::Play_Horn_Sound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "Play Horn Sound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.StartCoolDown
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_C::StartCoolDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "StartCoolDown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.CooldownTimer
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_C::CooldownTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "CooldownTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.ToggleHologram
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TurnOn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_Athena_SCMachine_C::ToggleHologram(bool TurnOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "ToggleHologram");

	Params::BGA_Athena_SCMachine_C_ToggleHologram Parms{};

	Parms.TurnOn = TurnOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnSpawnMachineStateChanged
// (Event, Protected, BlueprintEvent)

void ABGA_Athena_SCMachine_C::OnSpawnMachineStateChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "OnSpawnMachineStateChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnInterruptLongUse
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerAthena*      AthenaPC                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_SCMachine_C::OnInterruptLongUse(class AFortPlayerControllerAthena* AthenaPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "OnInterruptLongUse");

	Params::BGA_Athena_SCMachine_C_OnInterruptLongUse Parms{};

	Parms.AthenaPC = AthenaPC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnBeginLongUse
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerAthena*      AthenaPC                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_SCMachine_C::OnBeginLongUse(class AFortPlayerControllerAthena* AthenaPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "OnBeginLongUse");

	Params::BGA_Athena_SCMachine_C_OnBeginLongUse Parms{};

	Parms.AthenaPC = AthenaPC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.TriggerRespawnFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                        PhaseInPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_SCMachine_C::TriggerRespawnFX(class AFortPawn* PhaseInPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "TriggerRespawnFX");

	Params::BGA_Athena_SCMachine_C_TriggerRespawnFX Parms{};

	Parms.PhaseInPawn = PhaseInPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.BndEvt__BlockingVolume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_SCMachine_C::BndEvt__BlockingVolume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "BndEvt__BlockingVolume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	Params::BGA_Athena_SCMachine_C_BndEvt__BlockingVolume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.BndEvt__BlockingVolume_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABGA_Athena_SCMachine_C::BndEvt__BlockingVolume_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "BndEvt__BlockingVolume_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BGA_Athena_SCMachine_C_BndEvt__BlockingVolume_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.HandleAmbientSound
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_C::HandleAmbientSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "HandleAmbientSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_Athena_SCMachine_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnResurrectionCompleted
// (Event, Protected, BlueprintEvent)

void ABGA_Athena_SCMachine_C::OnResurrectionCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "OnResurrectionCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnResurrectionStarted
// (Event, Protected, BlueprintEvent)

void ABGA_Athena_SCMachine_C::OnResurrectionStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "OnResurrectionStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnPlayerPawnResurrected
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  PlayerPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_SCMachine_C::OnPlayerPawnResurrected(class AFortPlayerPawn* PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "OnPlayerPawnResurrected");

	Params::BGA_Athena_SCMachine_C_OnPlayerPawnResurrected Parms{};

	Parms.PlayerPawn = PlayerPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.LightFlash__UpdateFunc
// (BlueprintEvent)

void ABGA_Athena_SCMachine_C::LightFlash__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "LightFlash__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.LightFlash__FinishedFunc
// (BlueprintEvent)

void ABGA_Athena_SCMachine_C::LightFlash__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "LightFlash__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.WarpVan__UpdateFunc
// (BlueprintEvent)

void ABGA_Athena_SCMachine_C::WarpVan__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "WarpVan__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.WarpVan__FinishedFunc
// (BlueprintEvent)

void ABGA_Athena_SCMachine_C::WarpVan__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "WarpVan__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.KnockPlayerPawns
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           IgnoreKnock                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_SCMachine_C::KnockPlayerPawns(class AActor* IgnoreKnock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "KnockPlayerPawns");

	Params::BGA_Athena_SCMachine_C_KnockPlayerPawns Parms{};

	Parms.IgnoreKnock = IgnoreKnock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.UpdateScreen
// (Public, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_C::UpdateScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "UpdateScreen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnRep_RepServerInteract
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_C::OnRep_RepServerInteract()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "OnRep_RepServerInteract");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.CheckQuestCredit
// (Public, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_C::CheckQuestCredit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "CheckQuestCredit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      EventInstigator                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABGA_Athena_SCMachine_C::ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "ShouldDie");

	Params::BGA_Athena_SCMachine_C_ShouldDie Parms{};

	Parms.Damage = Damage;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.GiveWeaponsAndResources
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*            FortPC                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_SCMachine_C::GiveWeaponsAndResources(class AFortPlayerController* FortPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "GiveWeaponsAndResources");

	Params::BGA_Athena_SCMachine_C_GiveWeaponsAndResources Parms{};

	Parms.FortPC = FortPC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.KnockVehicles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_C::KnockVehicles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "KnockVehicles");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETInteractionType                       InteractionType                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABGA_Athena_SCMachine_C::BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "BlueprintCanInteract");

	Params::BGA_Athena_SCMachine_C_BlueprintCanInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;
	Parms.InteractionType = InteractionType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText ABGA_Athena_SCMachine_C::BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "BlueprintGetInteractionString");

	Params::BGA_Athena_SCMachine_C_BlueprintGetInteractionString Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.BlueprintGetFailedInteractionString
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText ABGA_Athena_SCMachine_C::BlueprintGetFailedInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_C", "BlueprintGetFailedInteractionString");

	Params::BGA_Athena_SCMachine_C_BlueprintGetFailedInteractionString Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
