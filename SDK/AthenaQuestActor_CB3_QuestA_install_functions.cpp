#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaQuestActor_CB3_QuestA_install

#include "Basic.hpp"

#include "AthenaQuestActor_CB3_QuestA_install_classes.hpp"
#include "AthenaQuestActor_CB3_QuestA_install_parameters.hpp"


namespace SDK
{

// Function AthenaQuestActor_CB3_QuestA_install.AthenaQuestActor_CB3_QuestA_install_C.ExecuteUbergraph_AthenaQuestActor_CB3_QuestA_install
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthenaQuestActor_CB3_QuestA_install_C::ExecuteUbergraph_AthenaQuestActor_CB3_QuestA_install(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_CB3_QuestA_install_C", "ExecuteUbergraph_AthenaQuestActor_CB3_QuestA_install");

	Params::AthenaQuestActor_CB3_QuestA_install_C_ExecuteUbergraph_AthenaQuestActor_CB3_QuestA_install Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaQuestActor_CB3_QuestA_install.AthenaQuestActor_CB3_QuestA_install_C.BndEvt__QuestComponent_K2Node_ComponentBoundEvent_0_SimpleQuestComponentDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortPlayerController*            PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthenaQuestActor_CB3_QuestA_install_C::BndEvt__QuestComponent_K2Node_ComponentBoundEvent_0_SimpleQuestComponentDelegate__DelegateSignature(class AFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_CB3_QuestA_install_C", "BndEvt__QuestComponent_K2Node_ComponentBoundEvent_0_SimpleQuestComponentDelegate__DelegateSignature");

	Params::AthenaQuestActor_CB3_QuestA_install_C_BndEvt__QuestComponent_K2Node_ComponentBoundEvent_0_SimpleQuestComponentDelegate__DelegateSignature Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaQuestActor_CB3_QuestA_install.AthenaQuestActor_CB3_QuestA_install_C.CompleteInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*            PC                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthenaQuestActor_CB3_QuestA_install_C::CompleteInteraction(class AFortPlayerController* PC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_CB3_QuestA_install_C", "CompleteInteraction");

	Params::AthenaQuestActor_CB3_QuestA_install_C_CompleteInteraction Parms{};

	Parms.PC = PC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaQuestActor_CB3_QuestA_install.AthenaQuestActor_CB3_QuestA_install_C.DisplayMessage
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*            PC                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthenaQuestActor_CB3_QuestA_install_C::DisplayMessage(class AFortPlayerController* PC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_CB3_QuestA_install_C", "DisplayMessage");

	Params::AthenaQuestActor_CB3_QuestA_install_C_DisplayMessage Parms{};

	Parms.PC = PC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaQuestActor_CB3_QuestA_install.AthenaQuestActor_CB3_QuestA_install_C.Detonate
// (BlueprintCallable, BlueprintEvent)

void AAthenaQuestActor_CB3_QuestA_install_C::Detonate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_CB3_QuestA_install_C", "Detonate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuestActor_CB3_QuestA_install.AthenaQuestActor_CB3_QuestA_install_C.Test
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AAthenaQuestActor_CB3_QuestA_install_C::Test()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_CB3_QuestA_install_C", "Test");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuestActor_CB3_QuestA_install.AthenaQuestActor_CB3_QuestA_install_C.HandleQuestComponentSuccessEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthenaQuestActor_CB3_QuestA_install_C::HandleQuestComponentSuccessEvent(class AFortPlayerController* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_CB3_QuestA_install_C", "HandleQuestComponentSuccessEvent");

	Params::AthenaQuestActor_CB3_QuestA_install_C_HandleQuestComponentSuccessEvent Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaQuestActor_CB3_QuestA_install.AthenaQuestActor_CB3_QuestA_install_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthenaQuestActor_CB3_QuestA_install_C::BlueprintOnInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_CB3_QuestA_install_C", "BlueprintOnInteract");

	Params::AthenaQuestActor_CB3_QuestA_install_C_BlueprintOnInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaQuestActor_CB3_QuestA_install.AthenaQuestActor_CB3_QuestA_install_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAthenaQuestActor_CB3_QuestA_install_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_CB3_QuestA_install_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuestActor_CB3_QuestA_install.AthenaQuestActor_CB3_QuestA_install_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AAthenaQuestActor_CB3_QuestA_install_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_CB3_QuestA_install_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuestActor_CB3_QuestA_install.AthenaQuestActor_CB3_QuestA_install_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AAthenaQuestActor_CB3_QuestA_install_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_CB3_QuestA_install_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuestActor_CB3_QuestA_install.AthenaQuestActor_CB3_QuestA_install_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETInteractionType                       InteractionType                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AAthenaQuestActor_CB3_QuestA_install_C::BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_CB3_QuestA_install_C", "BlueprintCanInteract");

	Params::AthenaQuestActor_CB3_QuestA_install_C_BlueprintCanInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;
	Parms.InteractionType = InteractionType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AthenaQuestActor_CB3_QuestA_install.AthenaQuestActor_CB3_QuestA_install_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText AAthenaQuestActor_CB3_QuestA_install_C::BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_CB3_QuestA_install_C", "BlueprintGetInteractionString");

	Params::AthenaQuestActor_CB3_QuestA_install_C_BlueprintGetInteractionString Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
