#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaTeamScoreWidget

#include "Basic.hpp"

#include "AthenaTeamScoreWidget_classes.hpp"
#include "AthenaTeamScoreWidget_parameters.hpp"


namespace SDK
{

// Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.ExecuteUbergraph_AthenaTeamScoreWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamScoreWidget_C::ExecuteUbergraph_AthenaTeamScoreWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamScoreWidget_C", "ExecuteUbergraph_AthenaTeamScoreWidget");

	Params::AthenaTeamScoreWidget_C_ExecuteUbergraph_AthenaTeamScoreWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.OnLeaderboardChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   ScoreDelta                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsWinner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bHasScore                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamScoreWidget_C::OnLeaderboardChanged(int32 ScoreDelta, bool bIsWinner, bool bHasScore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamScoreWidget_C", "OnLeaderboardChanged");

	Params::AthenaTeamScoreWidget_C_OnLeaderboardChanged Parms{};

	Parms.ScoreDelta = ScoreDelta;
	Parms.bIsWinner = bIsWinner;
	Parms.bHasScore = bHasScore;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaTeamScoreWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamScoreWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamScoreWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamScoreWidget_C", "PreConstruct");

	Params::AthenaTeamScoreWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.OnScoreChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   Score                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamScoreWidget_C::OnScoreChanged(int32 Score)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamScoreWidget_C", "OnScoreChanged");

	Params::AthenaTeamScoreWidget_C_OnScoreChanged Parms{};

	Parms.Score = Score;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.OnPlacementChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   Placement                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamScoreWidget_C::OnPlacementChanged(int32 Placement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamScoreWidget_C", "OnPlacementChanged");

	Params::AthenaTeamScoreWidget_C_OnPlacementChanged Parms{};

	Parms.Placement = Placement;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.UpdateScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Score                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamScoreWidget_C::UpdateScore(int32 Score)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamScoreWidget_C", "UpdateScore");

	Params::AthenaTeamScoreWidget_C_UpdateScore Parms{};

	Parms.Score = Score;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.UpdatePlacement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Place                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Instant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamScoreWidget_C::UpdatePlacement(int32 Place, bool Instant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamScoreWidget_C", "UpdatePlacement");

	Params::AthenaTeamScoreWidget_C_UpdatePlacement Parms{};

	Parms.Place = Place;
	Parms.Instant = Instant;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.UpdateLeaderboard
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PointsDelta                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsWinner                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    HasScore                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamScoreWidget_C::UpdateLeaderboard(int32 PointsDelta, bool Param_IsWinner, bool HasScore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamScoreWidget_C", "UpdateLeaderboard");

	Params::AthenaTeamScoreWidget_C_UpdateLeaderboard Parms{};

	Parms.PointsDelta = PointsDelta;
	Parms.Param_IsWinner = Param_IsWinner;
	Parms.HasScore = HasScore;

	UObject::ProcessEvent(Func, &Parms);
}

}
