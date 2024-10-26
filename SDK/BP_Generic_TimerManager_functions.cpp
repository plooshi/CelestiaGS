#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Generic_TimerManager

#include "Basic.hpp"

#include "BP_Generic_TimerManager_classes.hpp"
#include "BP_Generic_TimerManager_parameters.hpp"


namespace SDK
{

// Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.ExecuteUbergraph_BP_Generic_TimerManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Generic_TimerManager_C::ExecuteUbergraph_BP_Generic_TimerManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_C", "ExecuteUbergraph_BP_Generic_TimerManager");

	Params::BP_Generic_TimerManager_C_ExecuteUbergraph_BP_Generic_TimerManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.ClearTimerVisuals
// (BlueprintCallable, BlueprintEvent)

void ABP_Generic_TimerManager_C::ClearTimerVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_C", "ClearTimerVisuals");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.ContinueClockCountdown
// (BlueprintCallable, BlueprintEvent)

void ABP_Generic_TimerManager_C::ContinueClockCountdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_C", "ContinueClockCountdown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.VisualUpdateEverySecond
// (BlueprintCallable, BlueprintEvent)

void ABP_Generic_TimerManager_C::VisualUpdateEverySecond()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_C", "VisualUpdateEverySecond");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.CountdownTimer_New
// (BlueprintCallable, BlueprintEvent)

void ABP_Generic_TimerManager_C::CountdownTimer_New()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_C", "CountdownTimer_New");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.CountDownTimer_AccuracyFix
// (BlueprintCallable, BlueprintEvent)

void ABP_Generic_TimerManager_C::CountDownTimer_AccuracyFix()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_C", "CountDownTimer_AccuracyFix");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.StartFinalAccuracyadjustment
// (BlueprintCallable, BlueprintEvent)

void ABP_Generic_TimerManager_C::StartFinalAccuracyadjustment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_C", "StartFinalAccuracyadjustment");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.ErrorCorrection
// (BlueprintCallable, BlueprintEvent)

void ABP_Generic_TimerManager_C::ErrorCorrection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_C", "ErrorCorrection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Generic_TimerManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.OnReady_B337321A443C013690B7869DF30E5BCC
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*             GameState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylist*                    Playlist                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            PlaylistContextTags                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Generic_TimerManager_C::OnReady_B337321A443C013690B7869DF30E5BCC(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_C", "OnReady_B337321A443C013690B7869DF30E5BCC");

	Params::BP_Generic_TimerManager_C_OnReady_B337321A443C013690B7869DF30E5BCC Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = move(PlaylistContextTags);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.OnReady_5CD17C734C5C64794A8D0BA05D00B72C
// (BlueprintCallable, BlueprintEvent)

void ABP_Generic_TimerManager_C::OnReady_5CD17C734C5C64794A8D0BA05D00B72C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_C", "OnReady_5CD17C734C5C64794A8D0BA05D00B72C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.OnEventActive_60E8057840996C096DE192A0F298D20C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                        TimeUntilEnd                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                        TimeSinceBegin                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   TimespanRatio                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Generic_TimerManager_C::OnEventActive_60E8057840996C096DE192A0F298D20C(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_C", "OnEventActive_60E8057840996C096DE192A0F298D20C");

	Params::BP_Generic_TimerManager_C_OnEventActive_60E8057840996C096DE192A0F298D20C Parms{};

	Parms.EventName = move(EventName);
	Parms.TimeUntilEnd = move(TimeUntilEnd);
	Parms.TimeSinceBegin = move(TimeSinceBegin);
	Parms.TimespanRatio = TimespanRatio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.OnEventUpdated_60E8057840996C096DE192A0F298D20C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                        TimeUntilEnd                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                        TimeSinceBegin                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   TimespanRatio                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Generic_TimerManager_C::OnEventUpdated_60E8057840996C096DE192A0F298D20C(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_C", "OnEventUpdated_60E8057840996C096DE192A0F298D20C");

	Params::BP_Generic_TimerManager_C_OnEventUpdated_60E8057840996C096DE192A0F298D20C Parms{};

	Parms.EventName = move(EventName);
	Parms.TimeUntilEnd = move(TimeUntilEnd);
	Parms.TimeSinceBegin = move(TimeSinceBegin);
	Parms.TimespanRatio = TimespanRatio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.OnEventEnded_60E8057840996C096DE192A0F298D20C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                        TimeUntilEnd                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                        TimeSinceBegin                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   TimespanRatio                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Generic_TimerManager_C::OnEventEnded_60E8057840996C096DE192A0F298D20C(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_C", "OnEventEnded_60E8057840996C096DE192A0F298D20C");

	Params::BP_Generic_TimerManager_C_OnEventEnded_60E8057840996C096DE192A0F298D20C Parms{};

	Parms.EventName = move(EventName);
	Parms.TimeUntilEnd = move(TimeUntilEnd);
	Parms.TimeSinceBegin = move(TimeSinceBegin);
	Parms.TimespanRatio = TimespanRatio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.OnRep_ServerWorldSecondsAtEvent
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Generic_TimerManager_C::OnRep_ServerWorldSecondsAtEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_C", "OnRep_ServerWorldSecondsAtEvent");

	UObject::ProcessEvent(Func, nullptr);
}

}

