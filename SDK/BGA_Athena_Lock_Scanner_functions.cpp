#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_Athena_Lock_Scanner

#include "Basic.hpp"

#include "BGA_Athena_Lock_Scanner_classes.hpp"
#include "BGA_Athena_Lock_Scanner_parameters.hpp"


namespace SDK
{

// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.ExecuteUbergraph_BGA_Athena_Lock_Scanner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_Lock_Scanner_C::ExecuteUbergraph_BGA_Athena_Lock_Scanner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "ExecuteUbergraph_BGA_Athena_Lock_Scanner");

	Params::BGA_Athena_Lock_Scanner_C_ExecuteUbergraph_BGA_Athena_Lock_Scanner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.HideAndKill
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Lock_Scanner_C::HideAndKill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "HideAndKill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.SetFailText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_Lock_Scanner_C::SetFailText(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "SetFailText");

	Params::BGA_Athena_Lock_Scanner_C_SetFailText Parms{};

	Parms.Tag = move(Tag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.HandleAnalytics
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Passed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_Athena_Lock_Scanner_C::HandleAnalytics(bool Passed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "HandleAnalytics");

	Params::BGA_Athena_Lock_Scanner_C_HandleAnalytics Parms{};

	Parms.Passed = Passed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.UnaimEye
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Lock_Scanner_C::UnaimEye()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "UnaimEye");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.OnFirstInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_Lock_Scanner_C::OnFirstInteract(class AFortPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "OnFirstInteract");

	Params::BGA_Athena_Lock_Scanner_C_OnFirstInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_Athena_Lock_Scanner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.NotEnabled
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Lock_Scanner_C::NotEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "NotEnabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.CE_EndAimEye
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Lock_Scanner_C::CE_EndAimEye()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "CE_EndAimEye");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.CE_AimEye
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                        Interacting_Pawn                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_Lock_Scanner_C::CE_AimEye(class AFortPawn* Interacting_Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "CE_AimEye");

	Params::BGA_Athena_Lock_Scanner_C_CE_AimEye Parms{};

	Parms.Interacting_Pawn = Interacting_Pawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.OnUnLocked
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Lock_Scanner_C::OnUnLocked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "OnUnLocked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.OnLocked
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Lock_Scanner_C::OnLocked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "OnLocked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.StartScan
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  PlayerPawnToScan                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_Lock_Scanner_C::StartScan(class AFortPlayerPawn* PlayerPawnToScan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "StartScan");

	Params::BGA_Athena_Lock_Scanner_C_StartScan Parms{};

	Parms.PlayerPawnToScan = PlayerPawnToScan;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.BndEvt__Athena_FactionSelection_K2Node_ComponentBoundEvent_0_OnFactionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FGameplayTag                     FactionTagOut                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_Lock_Scanner_C::BndEvt__Athena_FactionSelection_K2Node_ComponentBoundEvent_0_OnFactionSelected__DelegateSignature(const struct FGameplayTag& FactionTagOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "BndEvt__Athena_FactionSelection_K2Node_ComponentBoundEvent_0_OnFactionSelected__DelegateSignature");

	Params::BGA_Athena_Lock_Scanner_C_BndEvt__Athena_FactionSelection_K2Node_ComponentBoundEvent_0_OnFactionSelected__DelegateSignature Parms{};

	Parms.FactionTagOut = move(FactionTagOut);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.EndScan
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Canceled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_Athena_Lock_Scanner_C::EndScan(bool Canceled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "EndScan");

	Params::BGA_Athena_Lock_Scanner_C_EndScan Parms{};

	Parms.Canceled = Canceled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.OnPassScan
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Lock_Scanner_C::OnPassScan()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "OnPassScan");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.OnFailScan
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Lock_Scanner_C::OnFailScan()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "OnFailScan");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.OnReady_52C7FB4347310A401D7AE8B7917A2DA0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*             GameState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylist*                    Playlist                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            PlaylistContextTags                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABGA_Athena_Lock_Scanner_C::OnReady_52C7FB4347310A401D7AE8B7917A2DA0(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "OnReady_52C7FB4347310A401D7AE8B7917A2DA0");

	Params::BGA_Athena_Lock_Scanner_C_OnReady_52C7FB4347310A401D7AE8B7917A2DA0 Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = move(PlaylistContextTags);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.PassScan__UpdateFunc
// (BlueprintEvent)

void ABGA_Athena_Lock_Scanner_C::PassScan__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "PassScan__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.PassScan__FinishedFunc
// (BlueprintEvent)

void ABGA_Athena_Lock_Scanner_C::PassScan__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "PassScan__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.FailScan__UpdateFunc
// (BlueprintEvent)

void ABGA_Athena_Lock_Scanner_C::FailScan__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "FailScan__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.FailScan__FinishedFunc
// (BlueprintEvent)

void ABGA_Athena_Lock_Scanner_C::FailScan__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "FailScan__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.UnAim Eye__UpdateFunc
// (BlueprintEvent)

void ABGA_Athena_Lock_Scanner_C::UnAim_Eye__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "UnAim Eye__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.UnAim Eye__FinishedFunc
// (BlueprintEvent)

void ABGA_Athena_Lock_Scanner_C::UnAim_Eye__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "UnAim Eye__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.Aim Eye__UpdateFunc
// (BlueprintEvent)

void ABGA_Athena_Lock_Scanner_C::Aim_Eye__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "Aim Eye__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.Aim Eye__FinishedFunc
// (BlueprintEvent)

void ABGA_Athena_Lock_Scanner_C::Aim_Eye__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "Aim Eye__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Lock_Scanner_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.OnRep_IsScanning
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Lock_Scanner_C::OnRep_IsScanning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "OnRep_IsScanning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.OnRep_EndType
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Lock_Scanner_C::OnRep_EndType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "OnRep_EndType");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.BlueprintCanInteract
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETInteractionType                       InteractionType                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABGA_Athena_Lock_Scanner_C::BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "BlueprintCanInteract");

	Params::BGA_Athena_Lock_Scanner_C_BlueprintCanInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;
	Parms.InteractionType = InteractionType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText ABGA_Athena_Lock_Scanner_C::BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "BlueprintGetInteractionString");

	Params::BGA_Athena_Lock_Scanner_C_BlueprintGetInteractionString Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BGA_Athena_Lock_Scanner.BGA_Athena_Lock_Scanner_C.GetFocusedSocketLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABGA_Athena_Lock_Scanner_C::GetFocusedSocketLocation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Lock_Scanner_C", "GetFocusedSocketLocation");

	Params::BGA_Athena_Lock_Scanner_C_GetFocusedSocketLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
