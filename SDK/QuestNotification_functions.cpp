#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestNotification

#include "Basic.hpp"

#include "QuestNotification_classes.hpp"
#include "QuestNotification_parameters.hpp"


namespace SDK
{

// Function QuestNotification.QuestNotification_C.ExecuteUbergraph_QuestNotification
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestNotification_C::ExecuteUbergraph_QuestNotification(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "ExecuteUbergraph_QuestNotification");

	Params::QuestNotification_C_ExecuteUbergraph_QuestNotification Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestNotification.QuestNotification_C.SetAssistData
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bWasAssisted                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           OtherPlayersName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UQuestNotification_C::SetAssistData(bool bWasAssisted, const class FString& OtherPlayersName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "SetAssistData");

	Params::QuestNotification_C_SetAssistData Parms{};

	Parms.bWasAssisted = bWasAssisted;
	Parms.OtherPlayersName = move(OtherPlayersName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestNotification.QuestNotification_C.EventReset
// (BlueprintCallable, BlueprintEvent)

void UQuestNotification_C::EventReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "EventReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestNotification.QuestNotification_C.EventCompleteAnim
// (BlueprintCallable, BlueprintEvent)

void UQuestNotification_C::EventCompleteAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "EventCompleteAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestNotification.QuestNotification_C.EventFillComplete
// (BlueprintCallable, BlueprintEvent)

void UQuestNotification_C::EventFillComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "EventFillComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestNotification.QuestNotification_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestNotification_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestNotification.QuestNotification_C.UpdateDefaultObjectiveVisuals
// (Event, Public, BlueprintEvent)

void UQuestNotification_C::UpdateDefaultObjectiveVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "UpdateDefaultObjectiveVisuals");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestNotification.QuestNotification_C.UpdateQuestVisuals
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortChallengeSetStyle           DisplayStyle                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuestNotification_C::UpdateQuestVisuals(const struct FFortChallengeSetStyle& DisplayStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "UpdateQuestVisuals");

	Params::QuestNotification_C_UpdateQuestVisuals Parms{};

	Parms.DisplayStyle = move(DisplayStyle);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestNotification.QuestNotification_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestNotification_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "PreConstruct");

	Params::QuestNotification_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestNotification.QuestNotification_C.StartNotificationOutro
// (Event, Public, BlueprintEvent)

void UQuestNotification_C::StartNotificationOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "StartNotificationOutro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestNotification.QuestNotification_C.StartNotificationIntro
// (Event, Protected, BlueprintEvent)

void UQuestNotification_C::StartNotificationIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "StartNotificationIntro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestNotification.QuestNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestNotification_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestNotification.QuestNotification_C.UpdateProgress
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestNotification_C::UpdateProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestNotification_C", "UpdateProgress");

	UObject::ProcessEvent(Func, nullptr);
}

}
