#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortVoiceChannelSpeakerHUD

#include "Basic.hpp"

#include "FortVoiceChannelSpeakerHUD_classes.hpp"
#include "FortVoiceChannelSpeakerHUD_parameters.hpp"


namespace SDK
{

// Function FortVoiceChannelSpeakerHUD.FortVoiceChannelSpeakerHUD_C.ExecuteUbergraph_FortVoiceChannelSpeakerHUD
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortVoiceChannelSpeakerHUD_C::ExecuteUbergraph_FortVoiceChannelSpeakerHUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVoiceChannelSpeakerHUD_C", "ExecuteUbergraph_FortVoiceChannelSpeakerHUD");

	Params::FortVoiceChannelSpeakerHUD_C_ExecuteUbergraph_FortVoiceChannelSpeakerHUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FortVoiceChannelSpeakerHUD.FortVoiceChannelSpeakerHUD_C.OnAnimateTalkingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsNowTalking                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortVoiceChannelSpeakerHUD_C::OnAnimateTalkingChanged(bool bIsNowTalking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVoiceChannelSpeakerHUD_C", "OnAnimateTalkingChanged");

	Params::FortVoiceChannelSpeakerHUD_C_OnAnimateTalkingChanged Parms{};

	Parms.bIsNowTalking = bIsNowTalking;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FortVoiceChannelSpeakerHUD.FortVoiceChannelSpeakerHUD_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortVoiceChannelSpeakerHUD_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVoiceChannelSpeakerHUD_C", "PreConstruct");

	Params::FortVoiceChannelSpeakerHUD_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FortVoiceChannelSpeakerHUD.FortVoiceChannelSpeakerHUD_C.OnStyleAssigned
// (Event, Public, BlueprintEvent)
// Parameters:
// EChannelSpeakerStyle                    NewStyle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortVoiceChannelSpeakerHUD_C::OnStyleAssigned(EChannelSpeakerStyle NewStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVoiceChannelSpeakerHUD_C", "OnStyleAssigned");

	Params::FortVoiceChannelSpeakerHUD_C_OnStyleAssigned Parms{};

	Parms.NewStyle = NewStyle;

	UObject::ProcessEvent(Func, &Parms);
}

}
