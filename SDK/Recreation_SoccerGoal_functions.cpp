#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Recreation_SoccerGoal

#include "Basic.hpp"

#include "Recreation_SoccerGoal_classes.hpp"
#include "Recreation_SoccerGoal_parameters.hpp"


namespace SDK
{

// Function Recreation_SoccerGoal.Recreation_SoccerGoal_C.ExecuteUbergraph_Recreation_SoccerGoal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARecreation_SoccerGoal_C::ExecuteUbergraph_Recreation_SoccerGoal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Recreation_SoccerGoal_C", "ExecuteUbergraph_Recreation_SoccerGoal");

	Params::Recreation_SoccerGoal_C_ExecuteUbergraph_Recreation_SoccerGoal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Recreation_SoccerGoal.Recreation_SoccerGoal_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ARecreation_SoccerGoal_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Recreation_SoccerGoal_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}

}
