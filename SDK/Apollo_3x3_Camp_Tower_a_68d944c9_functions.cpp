#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_3x3_Camp_Tower_a_68d944c9

#include "Basic.hpp"

#include "Apollo_3x3_Camp_Tower_a_68d944c9_classes.hpp"
#include "Apollo_3x3_Camp_Tower_a_68d944c9_parameters.hpp"


namespace SDK
{

// Function Apollo_3x3_Camp_Tower_a_68d944c9.Athena_REM_1x1_Shack_Cube_Tower_C.ExecuteUbergraph_Apollo_3x3_Camp_Tower_a
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_REM_1x1_Shack_Cube_Tower_C::ExecuteUbergraph_Apollo_3x3_Camp_Tower_a(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_REM_1x1_Shack_Cube_Tower_C", "ExecuteUbergraph_Apollo_3x3_Camp_Tower_a");

	Params::Athena_REM_1x1_Shack_Cube_Tower_C_ExecuteUbergraph_Apollo_3x3_Camp_Tower_a Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Apollo_3x3_Camp_Tower_a_68d944c9.Athena_REM_1x1_Shack_Cube_Tower_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAthena_REM_1x1_Shack_Cube_Tower_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_REM_1x1_Shack_Cube_Tower_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
