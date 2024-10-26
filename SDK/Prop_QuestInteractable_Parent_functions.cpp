#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_QuestInteractable_Parent

#include "Basic.hpp"

#include "Prop_QuestInteractable_Parent_classes.hpp"
#include "Prop_QuestInteractable_Parent_parameters.hpp"


namespace SDK
{

// Function Prop_QuestInteractable_Parent.Prop_QuestInteractable_Parent_C.ExecuteUbergraph_Prop_QuestInteractable_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_QuestInteractable_Parent_C::ExecuteUbergraph_Prop_QuestInteractable_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_QuestInteractable_Parent_C", "ExecuteUbergraph_Prop_QuestInteractable_Parent");

	Params::Prop_QuestInteractable_Parent_C_ExecuteUbergraph_Prop_QuestInteractable_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Prop_QuestInteractable_Parent.Prop_QuestInteractable_Parent_C.DebugModeForceInteract
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*                   SelfActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                        Param_InteractingPawn                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_QuestInteractable_Parent_C::DebugModeForceInteract(class ABuildingActor* SelfActor, class AFortPawn* Param_InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_QuestInteractable_Parent_C", "DebugModeForceInteract");

	Params::Prop_QuestInteractable_Parent_C_DebugModeForceInteract Parms{};

	Parms.SelfActor = SelfActor;
	Parms.Param_InteractingPawn = Param_InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Prop_QuestInteractable_Parent.Prop_QuestInteractable_Parent_C.Server_QuestObjectiveUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*            Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItemDefinition*         QuestDef                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BackendName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CompletionCount                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ObjectiveCompleted                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_QuestCompleted                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_QuestInteractable_Parent_C::Server_QuestObjectiveUpdated(class AFortPlayerController* Controller, const class UFortQuestItemDefinition* QuestDef, class FName BackendName, int32 CompletionCount, bool ObjectiveCompleted, bool Param_QuestCompleted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_QuestInteractable_Parent_C", "Server_QuestObjectiveUpdated");

	Params::Prop_QuestInteractable_Parent_C_Server_QuestObjectiveUpdated Parms{};

	Parms.Controller = Controller;
	Parms.QuestDef = QuestDef;
	Parms.BackendName = BackendName;
	Parms.CompletionCount = CompletionCount;
	Parms.ObjectiveCompleted = ObjectiveCompleted;
	Parms.Param_QuestCompleted = Param_QuestCompleted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Prop_QuestInteractable_Parent.Prop_QuestInteractable_Parent_C.Server_QuestObjectiveCompleted
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                        Param_InteractingPawn                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_QuestInteractable_Parent_C::Server_QuestObjectiveCompleted(class AFortPawn* Param_InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_QuestInteractable_Parent_C", "Server_QuestObjectiveCompleted");

	Params::Prop_QuestInteractable_Parent_C_Server_QuestObjectiveCompleted Parms{};

	Parms.Param_InteractingPawn = Param_InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Prop_QuestInteractable_Parent.Prop_QuestInteractable_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_QuestInteractable_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_QuestInteractable_Parent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Prop_QuestInteractable_Parent.Prop_QuestInteractable_Parent_C.ThisQuestObjectiveComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                        IneractingPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_QuestInteractable_Parent_C::ThisQuestObjectiveComplete(class AFortPawn* IneractingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_QuestInteractable_Parent_C", "ThisQuestObjectiveComplete");

	Params::Prop_QuestInteractable_Parent_C_ThisQuestObjectiveComplete Parms{};

	Parms.IneractingPawn = IneractingPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Prop_QuestInteractable_Parent.Prop_QuestInteractable_Parent_C.PlaySuccessFX
// (BlueprintCallable, BlueprintEvent)

void AProp_QuestInteractable_Parent_C::PlaySuccessFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_QuestInteractable_Parent_C", "PlaySuccessFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Prop_QuestInteractable_Parent.Prop_QuestInteractable_Parent_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                        Param_InteractingPawn                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_QuestInteractable_Parent_C::BlueprintOnInteract(const class AFortPawn* Param_InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_QuestInteractable_Parent_C", "BlueprintOnInteract");

	Params::Prop_QuestInteractable_Parent_C_BlueprintOnInteract Parms{};

	Parms.Param_InteractingPawn = Param_InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Prop_QuestInteractable_Parent.Prop_QuestInteractable_Parent_C.QuestInitializedAndValid
// (BlueprintCallable, BlueprintEvent)

void AProp_QuestInteractable_Parent_C::QuestInitializedAndValid()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_QuestInteractable_Parent_C", "QuestInitializedAndValid");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Prop_QuestInteractable_Parent.Prop_QuestInteractable_Parent_C.Quest Initialized and Not Valid
// (BlueprintCallable, BlueprintEvent)

void AProp_QuestInteractable_Parent_C::Quest_Initialized_and_Not_Valid()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_QuestInteractable_Parent_C", "Quest Initialized and Not Valid");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Prop_QuestInteractable_Parent.Prop_QuestInteractable_Parent_C.QuestUpdatedFromAnywhere
// (BlueprintCallable, BlueprintEvent)

void AProp_QuestInteractable_Parent_C::QuestUpdatedFromAnywhere()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_QuestInteractable_Parent_C", "QuestUpdatedFromAnywhere");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Prop_QuestInteractable_Parent.Prop_QuestInteractable_Parent_C.PlaylistLoaded
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             PlaylistName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            PlaylistContextTags                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AProp_QuestInteractable_Parent_C::PlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_QuestInteractable_Parent_C", "PlaylistLoaded");

	Params::Prop_QuestInteractable_Parent_C_PlaylistLoaded Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = move(PlaylistContextTags);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Prop_QuestInteractable_Parent.Prop_QuestInteractable_Parent_C.ParentQuestUpdated
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AProp_QuestInteractable_Parent_C::ParentQuestUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_QuestInteractable_Parent_C", "ParentQuestUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Prop_QuestInteractable_Parent.Prop_QuestInteractable_Parent_C.Shrink__UpdateFunc
// (BlueprintEvent)

void AProp_QuestInteractable_Parent_C::Shrink__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_QuestInteractable_Parent_C", "Shrink__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Prop_QuestInteractable_Parent.Prop_QuestInteractable_Parent_C.Shrink__FinishedFunc
// (BlueprintEvent)

void AProp_QuestInteractable_Parent_C::Shrink__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_QuestInteractable_Parent_C", "Shrink__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Prop_QuestInteractable_Parent.Prop_QuestInteractable_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProp_QuestInteractable_Parent_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_QuestInteractable_Parent_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Prop_QuestInteractable_Parent.Prop_QuestInteractable_Parent_C.HideQuestProp
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_QuestInteractable_Parent_C::HideQuestProp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_QuestInteractable_Parent_C", "HideQuestProp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Prop_QuestInteractable_Parent.Prop_QuestInteractable_Parent_C.ShowQuestProp
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_QuestInteractable_Parent_C::ShowQuestProp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_QuestInteractable_Parent_C", "ShowQuestProp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Prop_QuestInteractable_Parent.Prop_QuestInteractable_Parent_C.BlueprintCanInteract
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                        Param_InteractingPawn                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETInteractionType                       InteractionType                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AProp_QuestInteractable_Parent_C::BlueprintCanInteract(const class AFortPawn* Param_InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_QuestInteractable_Parent_C", "BlueprintCanInteract");

	Params::Prop_QuestInteractable_Parent_C_BlueprintCanInteract Parms{};

	Parms.Param_InteractingPawn = Param_InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;
	Parms.InteractionType = InteractionType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Prop_QuestInteractable_Parent.Prop_QuestInteractable_Parent_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                        Param_InteractingPawn                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText AProp_QuestInteractable_Parent_C::BlueprintGetInteractionString(const class AFortPawn* Param_InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_QuestInteractable_Parent_C", "BlueprintGetInteractionString");

	Params::Prop_QuestInteractable_Parent_C_BlueprintGetInteractionString Parms{};

	Parms.Param_InteractingPawn = Param_InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

