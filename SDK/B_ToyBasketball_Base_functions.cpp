#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ToyBasketball_Base

#include "Basic.hpp"

#include "B_ToyBasketball_Base_classes.hpp"
#include "B_ToyBasketball_Base_parameters.hpp"


namespace SDK
{

// Function B_ToyBasketball_Base.B_ToyBasketball_Base_C.ExecuteUbergraph_B_ToyBasketball_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ToyBasketball_Base_C::ExecuteUbergraph_B_ToyBasketball_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ToyBasketball_Base_C", "ExecuteUbergraph_B_ToyBasketball_Base");

	Params::B_ToyBasketball_Base_C_ExecuteUbergraph_B_ToyBasketball_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ToyBasketball_Base.B_ToyBasketball_Base_C.PlayScoringAnim
// (BlueprintCallable, BlueprintEvent)

void AB_ToyBasketball_Base_C::PlayScoringAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ToyBasketball_Base_C", "PlayScoringAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ToyBasketball_Base.B_ToyBasketball_Base_C.InitializeToyInstance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*            OwningPC                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumTimesSummoned                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ToyBasketball_Base_C::InitializeToyInstance(class AFortPlayerController* OwningPC, int32 NumTimesSummoned)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ToyBasketball_Base_C", "InitializeToyInstance");

	Params::B_ToyBasketball_Base_C_InitializeToyInstance Parms{};

	Parms.OwningPC = OwningPC;
	Parms.NumTimesSummoned = NumTimesSummoned;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ToyBasketball_Base.B_ToyBasketball_Base_C.LerpIntoGoalTimeline__UpdateFunc
// (BlueprintEvent)

void AB_ToyBasketball_Base_C::LerpIntoGoalTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ToyBasketball_Base_C", "LerpIntoGoalTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ToyBasketball_Base.B_ToyBasketball_Base_C.LerpIntoGoalTimeline__FinishedFunc
// (BlueprintEvent)

void AB_ToyBasketball_Base_C::LerpIntoGoalTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ToyBasketball_Base_C", "LerpIntoGoalTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ToyBasketball_Base.B_ToyBasketball_Base_C.PlayScoringCueAndDestruct
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ScoreAmount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          TargetStartPos                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          TargetEndPos                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ToyBasketball_Base_C::PlayScoringCueAndDestruct(int32 ScoreAmount, const struct FVector& TargetStartPos, const struct FVector& TargetEndPos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ToyBasketball_Base_C", "PlayScoringCueAndDestruct");

	Params::B_ToyBasketball_Base_C_PlayScoringCueAndDestruct Parms{};

	Parms.ScoreAmount = ScoreAmount;
	Parms.TargetStartPos = move(TargetStartPos);
	Parms.TargetEndPos = move(TargetEndPos);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ToyBasketball_Base.B_ToyBasketball_Base_C.OnRep_IdealLerpEndPos
// (BlueprintCallable, BlueprintEvent)

void AB_ToyBasketball_Base_C::OnRep_IdealLerpEndPos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ToyBasketball_Base_C", "OnRep_IdealLerpEndPos");

	UObject::ProcessEvent(Func, nullptr);
}

}

