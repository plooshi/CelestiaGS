#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Prop_Video_Stream_Trigger1

#include "Basic.hpp"

#include "Athena_Prop_Video_Stream_Trigger1_classes.hpp"
#include "Athena_Prop_Video_Stream_Trigger1_parameters.hpp"


namespace SDK
{

// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.VideoStartedEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AAthena_Prop_Video_Stream_Trigger1_C::VideoStartedEventDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "VideoStartedEventDispatcher__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.VideoStoppedEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AAthena_Prop_Video_Stream_Trigger1_C::VideoStoppedEventDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "VideoStoppedEventDispatcher__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.ExecuteUbergraph_Athena_Prop_Video_Stream_Trigger1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_Prop_Video_Stream_Trigger1_C::ExecuteUbergraph_Athena_Prop_Video_Stream_Trigger1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "ExecuteUbergraph_Athena_Prop_Video_Stream_Trigger1");

	Params::Athena_Prop_Video_Stream_Trigger1_C_ExecuteUbergraph_Athena_Prop_Video_Stream_Trigger1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.SubtitleLimitDistance
// (BlueprintCallable, BlueprintEvent)

void AAthena_Prop_Video_Stream_Trigger1_C::SubtitleLimitDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "SubtitleLimitDistance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.videoseek
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_ScreenName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                                   SeekTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Exact                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAthena_Prop_Video_Stream_Trigger1_C::Videoseek(const class FString& Param_ScreenName, float SeekTime, bool Exact)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "videoseek");

	Params::Athena_Prop_Video_Stream_Trigger1_C_Videoseek Parms{};

	Parms.Param_ScreenName = move(Param_ScreenName);
	Parms.SeekTime = SeekTime;
	Parms.Exact = Exact;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.videosetmaxbw
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_ScreenName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   MaxBandwidth                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_Prop_Video_Stream_Trigger1_C::Videosetmaxbw(const class FString& Param_ScreenName, int32 MaxBandwidth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "videosetmaxbw");

	Params::Athena_Prop_Video_Stream_Trigger1_C_Videosetmaxbw Parms{};

	Parms.Param_ScreenName = move(Param_ScreenName);
	Parms.MaxBandwidth = MaxBandwidth;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.BandwidthLimitDistance
// (BlueprintCallable, BlueprintEvent)

void AAthena_Prop_Video_Stream_Trigger1_C::BandwidthLimitDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "BandwidthLimitDistance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.MeshStopWarming
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           VideoScreen                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AAthena_Prop_Video_Stream_Trigger1_C::MeshStopWarming(const class FString& VideoScreen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "MeshStopWarming");

	Params::Athena_Prop_Video_Stream_Trigger1_C_MeshStopWarming Parms{};

	Parms.VideoScreen = move(VideoScreen);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.StopVideoWarming
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Screen_Name                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AAthena_Prop_Video_Stream_Trigger1_C::StopVideoWarming(const class FString& Screen_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "StopVideoWarming");

	Params::Athena_Prop_Video_Stream_Trigger1_C_StopVideoWarming Parms{};

	Parms.Screen_Name = move(Screen_Name);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.PlayCheck
// (BlueprintCallable, BlueprintEvent)

void AAthena_Prop_Video_Stream_Trigger1_C::PlayCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "PlayCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.StartPlayCheck
// (BlueprintCallable, BlueprintEvent)

void AAthena_Prop_Video_Stream_Trigger1_C::StartPlayCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "StartPlayCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAthena_Prop_Video_Stream_Trigger1_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.OnMetaDataFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AAthena_Prop_Video_Stream_Trigger1_C::OnMetaDataFailed(const class FString& Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "OnMetaDataFailed");

	Params::Athena_Prop_Video_Stream_Trigger1_C_OnMetaDataFailed Parms{};

	Parms.Reason = move(Reason);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.DisableLoopVideo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_ScreenName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AAthena_Prop_Video_Stream_Trigger1_C::DisableLoopVideo(const class FString& Param_ScreenName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "DisableLoopVideo");

	Params::Athena_Prop_Video_Stream_Trigger1_C_DisableLoopVideo Parms{};

	Parms.Param_ScreenName = move(Param_ScreenName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.EnableLoopVideo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_ScreenName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AAthena_Prop_Video_Stream_Trigger1_C::EnableLoopVideo(const class FString& Param_ScreenName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "EnableLoopVideo");

	Params::Athena_Prop_Video_Stream_Trigger1_C_EnableLoopVideo Parms{};

	Parms.Param_ScreenName = move(Param_ScreenName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.StartVideoWarming
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_ScreenName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AAthena_Prop_Video_Stream_Trigger1_C::StartVideoWarming(const class FString& Param_ScreenName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "StartVideoWarming");

	Params::Athena_Prop_Video_Stream_Trigger1_C_StartVideoWarming Parms{};

	Parms.Param_ScreenName = move(Param_ScreenName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.MeshStartWarming
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   StartWarmingTime                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Param_ScreenName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AAthena_Prop_Video_Stream_Trigger1_C::MeshStartWarming(float StartWarmingTime, const class FString& Param_ScreenName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "MeshStartWarming");

	Params::Athena_Prop_Video_Stream_Trigger1_C_MeshStartWarming Parms{};

	Parms.StartWarmingTime = StartWarmingTime;
	Parms.Param_ScreenName = move(Param_ScreenName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_Prop_Video_Stream_Trigger1_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "ReceiveEndPlay");

	Params::Athena_Prop_Video_Stream_Trigger1_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.Stop PIP
// (BlueprintCallable, BlueprintEvent)

void AAthena_Prop_Video_Stream_Trigger1_C::Stop_PIP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "Stop PIP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.VideoPlayFrom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_ScreenName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                                   Param_StartPlayTime                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_Prop_Video_Stream_Trigger1_C::VideoPlayFrom(const class FString& Param_ScreenName, float Param_StartPlayTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "VideoPlayFrom");

	Params::Athena_Prop_Video_Stream_Trigger1_C_VideoPlayFrom Parms{};

	Parms.Param_ScreenName = move(Param_ScreenName);
	Parms.Param_StartPlayTime = Param_StartPlayTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.MeshStopPlayback
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           VideoScreen                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AAthena_Prop_Video_Stream_Trigger1_C::MeshStopPlayback(const class FString& VideoScreen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "MeshStopPlayback");

	Params::Athena_Prop_Video_Stream_Trigger1_C_MeshStopPlayback Parms{};

	Parms.VideoScreen = move(VideoScreen);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.On Media Closed
// (BlueprintCallable, BlueprintEvent)

void AAthena_Prop_Video_Stream_Trigger1_C::On_Media_Closed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "On Media Closed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.On Media Open Failed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           FailedUrl                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AAthena_Prop_Video_Stream_Trigger1_C::On_Media_Open_Failed(const class FString& FailedUrl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "On Media Open Failed");

	Params::Athena_Prop_Video_Stream_Trigger1_C_On_Media_Open_Failed Parms{};

	Parms.FailedUrl = move(FailedUrl);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.AttemptActivateScreen
// (BlueprintCallable, BlueprintEvent)

void AAthena_Prop_Video_Stream_Trigger1_C::AttemptActivateScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "AttemptActivateScreen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.SetScreenActiveWithTimer
// (BlueprintCallable, BlueprintEvent)

void AAthena_Prop_Video_Stream_Trigger1_C::SetScreenActiveWithTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "SetScreenActiveWithTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.MeshTriggerReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   PlayStartTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Param_VideoUID                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Param_ScreenName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AAthena_Prop_Video_Stream_Trigger1_C::MeshTriggerReady(float PlayStartTime, const class FString& Param_VideoUID, const class FString& Param_ScreenName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "MeshTriggerReady");

	Params::Athena_Prop_Video_Stream_Trigger1_C_MeshTriggerReady Parms{};

	Parms.PlayStartTime = PlayStartTime;
	Parms.Param_VideoUID = move(Param_VideoUID);
	Parms.Param_ScreenName = move(Param_ScreenName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.SetupMeshTrigger
// (BlueprintCallable, BlueprintEvent)

void AAthena_Prop_Video_Stream_Trigger1_C::SetupMeshTrigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "SetupMeshTrigger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.RequestVideoUrl
// (BlueprintCallable, BlueprintEvent)

void AAthena_Prop_Video_Stream_Trigger1_C::RequestVideoUrl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "RequestVideoUrl");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.AttemptOpenSource
// (BlueprintCallable, BlueprintEvent)

void AAthena_Prop_Video_Stream_Trigger1_C::AttemptOpenSource()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "AttemptOpenSource");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.videotestoff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_ScreenName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AAthena_Prop_Video_Stream_Trigger1_C::Videotestoff(const class FString& Param_ScreenName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "videotestoff");

	Params::Athena_Prop_Video_Stream_Trigger1_C_Videotestoff Parms{};

	Parms.Param_ScreenName = move(Param_ScreenName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.videotest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_ScreenName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Param_VideoUID                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                                   StartTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_Prop_Video_Stream_Trigger1_C::Videotest(const class FString& Param_ScreenName, const class FString& Param_VideoUID, float StartTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "videotest");

	Params::Athena_Prop_Video_Stream_Trigger1_C_Videotest Parms{};

	Parms.Param_ScreenName = move(Param_ScreenName);
	Parms.Param_VideoUID = move(Param_VideoUID);
	Parms.StartTime = StartTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.CheckDistanceToScreen
// (BlueprintCallable, BlueprintEvent)

void AAthena_Prop_Video_Stream_Trigger1_C::CheckDistanceToScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "CheckDistanceToScreen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.On Media Opened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           OpenedUrl                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AAthena_Prop_Video_Stream_Trigger1_C::On_Media_Opened(const class FString& OpenedUrl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "On Media Opened");

	Params::Athena_Prop_Video_Stream_Trigger1_C_On_Media_Opened Parms{};

	Parms.OpenedUrl = move(OpenedUrl);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.On Media End
// (BlueprintCallable, BlueprintEvent)

void AAthena_Prop_Video_Stream_Trigger1_C::On_Media_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "On Media End");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.On Video Url Failed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           RetrievedUrl                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AAthena_Prop_Video_Stream_Trigger1_C::On_Video_Url_Failed(const class FString& RetrievedUrl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "On Video Url Failed");

	Params::Athena_Prop_Video_Stream_Trigger1_C_On_Video_Url_Failed Parms{};

	Parms.RetrievedUrl = move(RetrievedUrl);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.On Video Url Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           RetrievedUrl                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AAthena_Prop_Video_Stream_Trigger1_C::On_Video_Url_Success(const class FString& RetrievedUrl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "On Video Url Success");

	Params::Athena_Prop_Video_Stream_Trigger1_C_On_Video_Url_Success Parms{};

	Parms.RetrievedUrl = move(RetrievedUrl);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.SendRelevancyAnalytics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthena_Prop_Video_Stream_Trigger1_C::SendRelevancyAnalytics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "SendRelevancyAnalytics");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.TelevisionOff
// (Public, BlueprintCallable, BlueprintEvent)

void AAthena_Prop_Video_Stream_Trigger1_C::TelevisionOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "TelevisionOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.Unbind Video Player Events
// (Public, BlueprintCallable, BlueprintEvent)

void AAthena_Prop_Video_Stream_Trigger1_C::Unbind_Video_Player_Events()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "Unbind Video Player Events");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.CheckScreen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_ScreenName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsThisScreen                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAthena_Prop_Video_Stream_Trigger1_C::CheckScreen(const class FString& Param_ScreenName, bool* IsThisScreen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "CheckScreen");

	Params::Athena_Prop_Video_Stream_Trigger1_C_CheckScreen Parms{};

	Parms.Param_ScreenName = move(Param_ScreenName);

	UObject::ProcessEvent(Func, &Parms);

	if (IsThisScreen != nullptr)
		*IsThisScreen = Parms.IsThisScreen;
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.SetStartPlayTime
// (Public, BlueprintCallable, BlueprintEvent)

void AAthena_Prop_Video_Stream_Trigger1_C::SetStartPlayTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "SetStartPlayTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.Utc To String
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        UTC                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           String                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void AAthena_Prop_Video_Stream_Trigger1_C::Utc_To_String(const struct FDateTime& UTC, class FString* String)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "Utc To String");

	Params::Athena_Prop_Video_Stream_Trigger1_C_Utc_To_String Parms{};

	Parms.UTC = move(UTC);

	UObject::ProcessEvent(Func, &Parms);

	if (String != nullptr)
		*String = move(Parms.String);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.SendAnalytics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthena_Prop_Video_Stream_Trigger1_C::SendAnalytics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "SendAnalytics");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.StreamFailCheck
// (Public, BlueprintCallable, BlueprintEvent)

void AAthena_Prop_Video_Stream_Trigger1_C::StreamFailCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "StreamFailCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Prop_Video_Stream_Trigger1.Athena_Prop_Video_Stream_Trigger1_C.CheckBlocks
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CompleteBlock                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAthena_Prop_Video_Stream_Trigger1_C::CheckBlocks(bool* CompleteBlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_Video_Stream_Trigger1_C", "CheckBlocks");

	Params::Athena_Prop_Video_Stream_Trigger1_C_CheckBlocks Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CompleteBlock != nullptr)
		*CompleteBlock = Parms.CompleteBlock;
}

}

