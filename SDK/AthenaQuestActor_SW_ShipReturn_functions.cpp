#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaQuestActor_SW_ShipReturn

#include "Basic.hpp"

#include "AthenaQuestActor_SW_ShipReturn_classes.hpp"
#include "AthenaQuestActor_SW_ShipReturn_parameters.hpp"


namespace SDK
{

// Function AthenaQuestActor_SW_ShipReturn.AthenaQuestActor_SW_ShipReturn_C.ExecuteUbergraph_AthenaQuestActor_SW_ShipReturn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthenaQuestActor_SW_ShipReturn_C::ExecuteUbergraph_AthenaQuestActor_SW_ShipReturn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_SW_ShipReturn_C", "ExecuteUbergraph_AthenaQuestActor_SW_ShipReturn");

	Params::AthenaQuestActor_SW_ShipReturn_C_ExecuteUbergraph_AthenaQuestActor_SW_ShipReturn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaQuestActor_SW_ShipReturn.AthenaQuestActor_SW_ShipReturn_C.TouchedActorInCreativeMode
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AAthenaQuestActor_SW_ShipReturn_C::TouchedActorInCreativeMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_SW_ShipReturn_C", "TouchedActorInCreativeMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuestActor_SW_ShipReturn.AthenaQuestActor_SW_ShipReturn_C.TellChildOfSuccess
// (BlueprintCallable, BlueprintEvent)

void AAthenaQuestActor_SW_ShipReturn_C::TellChildOfSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_SW_ShipReturn_C", "TellChildOfSuccess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuestActor_SW_ShipReturn.AthenaQuestActor_SW_ShipReturn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAthenaQuestActor_SW_ShipReturn_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_SW_ShipReturn_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuestActor_SW_ShipReturn.AthenaQuestActor_SW_ShipReturn_C.ObjectiveSuccessfullyCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           PlayerWhoTriggeredObject                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthenaQuestActor_SW_ShipReturn_C::ObjectiveSuccessfullyCompleted(class AActor* PlayerWhoTriggeredObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_SW_ShipReturn_C", "ObjectiveSuccessfullyCompleted");

	Params::AthenaQuestActor_SW_ShipReturn_C_ObjectiveSuccessfullyCompleted Parms{};

	Parms.PlayerWhoTriggeredObject = PlayerWhoTriggeredObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaQuestActor_SW_ShipReturn.AthenaQuestActor_SW_ShipReturn_C.QuestInitializedAndValid
// (BlueprintCallable, BlueprintEvent)

void AAthenaQuestActor_SW_ShipReturn_C::QuestInitializedAndValid()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_SW_ShipReturn_C", "QuestInitializedAndValid");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuestActor_SW_ShipReturn.AthenaQuestActor_SW_ShipReturn_C.QuestSuccessfullyUpdated
// (BlueprintCallable, BlueprintEvent)

void AAthenaQuestActor_SW_ShipReturn_C::QuestSuccessfullyUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_SW_ShipReturn_C", "QuestSuccessfullyUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuestActor_SW_ShipReturn.AthenaQuestActor_SW_ShipReturn_C.PlaylistLoaded
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             PlaylistName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            PlaylistContextTags                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AAthenaQuestActor_SW_ShipReturn_C::PlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_SW_ShipReturn_C", "PlaylistLoaded");

	Params::AthenaQuestActor_SW_ShipReturn_C_PlaylistLoaded Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = move(PlaylistContextTags);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaQuestActor_SW_ShipReturn.AthenaQuestActor_SW_ShipReturn_C.TouchedQuestActor
// (Net, NetMulticast, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AAthenaQuestActor_SW_ShipReturn_C::TouchedQuestActor(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_SW_ShipReturn_C", "TouchedQuestActor");

	Params::AthenaQuestActor_SW_ShipReturn_C_TouchedQuestActor Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaQuestActor_SW_ShipReturn.AthenaQuestActor_SW_ShipReturn_C.OnCurrentQuestsReady_4BFC2E824911CD49AB110386C11F7FCD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestManager*                OwningQuestManager                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFoundAllQuestsOnProfile                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAthenaQuestActor_SW_ShipReturn_C::OnCurrentQuestsReady_4BFC2E824911CD49AB110386C11F7FCD(class UFortQuestManager* OwningQuestManager, bool bFoundAllQuestsOnProfile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_SW_ShipReturn_C", "OnCurrentQuestsReady_4BFC2E824911CD49AB110386C11F7FCD");

	Params::AthenaQuestActor_SW_ShipReturn_C_OnCurrentQuestsReady_4BFC2E824911CD49AB110386C11F7FCD Parms{};

	Parms.OwningQuestManager = OwningQuestManager;
	Parms.bFoundAllQuestsOnProfile = bFoundAllQuestsOnProfile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaQuestActor_SW_ShipReturn.AthenaQuestActor_SW_ShipReturn_C.HoverTimeline__UpdateFunc
// (BlueprintEvent)

void AAthenaQuestActor_SW_ShipReturn_C::HoverTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_SW_ShipReturn_C", "HoverTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuestActor_SW_ShipReturn.AthenaQuestActor_SW_ShipReturn_C.HoverTimeline__FinishedFunc
// (BlueprintEvent)

void AAthenaQuestActor_SW_ShipReturn_C::HoverTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_SW_ShipReturn_C", "HoverTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuestActor_SW_ShipReturn.AthenaQuestActor_SW_ShipReturn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAthenaQuestActor_SW_ShipReturn_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_SW_ShipReturn_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuestActor_SW_ShipReturn.AthenaQuestActor_SW_ShipReturn_C.OnRep_ShoppingCartThatTriggered
// (BlueprintCallable, BlueprintEvent)

void AAthenaQuestActor_SW_ShipReturn_C::OnRep_ShoppingCartThatTriggered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_SW_ShipReturn_C", "OnRep_ShoppingCartThatTriggered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuestActor_SW_ShipReturn.AthenaQuestActor_SW_ShipReturn_C.CheckShouldShowLocally
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldShowLocally                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAthenaQuestActor_SW_ShipReturn_C::CheckShouldShowLocally(bool* ShouldShowLocally)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_SW_ShipReturn_C", "CheckShouldShowLocally");

	Params::AthenaQuestActor_SW_ShipReturn_C_CheckShouldShowLocally Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldShowLocally != nullptr)
		*ShouldShowLocally = Parms.ShouldShowLocally;
}


// Function AthenaQuestActor_SW_ShipReturn.AthenaQuestActor_SW_ShipReturn_C.OnRep_PlaySuccessFX
// (BlueprintCallable, BlueprintEvent)

void AAthenaQuestActor_SW_ShipReturn_C::OnRep_PlaySuccessFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_SW_ShipReturn_C", "OnRep_PlaySuccessFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuestActor_SW_ShipReturn.AthenaQuestActor_SW_ShipReturn_C.OnRep_DestroyActor
// (BlueprintCallable, BlueprintEvent)

void AAthenaQuestActor_SW_ShipReturn_C::OnRep_DestroyActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuestActor_SW_ShipReturn_C", "OnRep_DestroyActor");

	UObject::ProcessEvent(Func, nullptr);
}

}

