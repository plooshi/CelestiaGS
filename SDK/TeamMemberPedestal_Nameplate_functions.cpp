#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TeamMemberPedestal_Nameplate

#include "Basic.hpp"

#include "TeamMemberPedestal_Nameplate_classes.hpp"
#include "TeamMemberPedestal_Nameplate_parameters.hpp"


namespace SDK
{

// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.ExecuteUbergraph_TeamMemberPedestal_Nameplate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamMemberPedestal_Nameplate_C::ExecuteUbergraph_TeamMemberPedestal_Nameplate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_Nameplate_C", "ExecuteUbergraph_TeamMemberPedestal_Nameplate");

	Params::TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnCurrentSubGameChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// ESubGame                                NewSubGame                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamMemberPedestal_Nameplate_C::OnCurrentSubGameChanged(ESubGame NewSubGame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_Nameplate_C", "OnCurrentSubGameChanged");

	Params::TeamMemberPedestal_Nameplate_C_OnCurrentSubGameChanged Parms{};

	Parms.NewSubGame = NewSubGame;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnPlayReadyAudio
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsReadyForMatchmaking                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeamMemberPedestal_Nameplate_C::OnPlayReadyAudio(bool bIsReadyForMatchmaking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_Nameplate_C", "OnPlayReadyAudio");

	Params::TeamMemberPedestal_Nameplate_C_OnPlayReadyAudio Parms{};

	Parms.bIsReadyForMatchmaking = bIsReadyForMatchmaking;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnFrontEndCameraChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFrontEndCamera                         NewCamera                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFrontEndCamera                         OldCamera                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamMemberPedestal_Nameplate_C::OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_Nameplate_C", "OnFrontEndCameraChanged");

	Params::TeamMemberPedestal_Nameplate_C_OnFrontEndCameraChanged Parms{};

	Parms.NewCamera = NewCamera;
	Parms.OldCamera = OldCamera;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTeamMemberPedestal_Nameplate_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_Nameplate_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.BP_OnTeamMemberEstablished
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bHasValidMember                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeamMemberPedestal_Nameplate_C::BP_OnTeamMemberEstablished(bool bHasValidMember)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_Nameplate_C", "BP_OnTeamMemberEstablished");

	Params::TeamMemberPedestal_Nameplate_C_BP_OnTeamMemberEstablished Parms{};

	Parms.bHasValidMember = bHasValidMember;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnReadyStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EGameReadiness                          GameReadiness                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamMemberPedestal_Nameplate_C::OnReadyStatusChanged(EGameReadiness GameReadiness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_Nameplate_C", "OnReadyStatusChanged");

	Params::TeamMemberPedestal_Nameplate_C_OnReadyStatusChanged Parms{};

	Parms.GameReadiness = GameReadiness;

	UObject::ProcessEvent(Func, &Parms);
}

}
