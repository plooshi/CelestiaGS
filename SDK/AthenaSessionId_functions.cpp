#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSessionId

#include "Basic.hpp"

#include "AthenaSessionId_classes.hpp"
#include "AthenaSessionId_parameters.hpp"


namespace SDK
{

// Function AthenaSessionId.AthenaSessionId_C.ExecuteUbergraph_AthenaSessionId
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSessionId_C::ExecuteUbergraph_AthenaSessionId(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSessionId_C", "ExecuteUbergraph_AthenaSessionId");

	Params::AthenaSessionId_C_ExecuteUbergraph_AthenaSessionId Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaSessionId.AthenaSessionId_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaSessionId_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSessionId_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaSessionId.AthenaSessionId_C.UpdateSessionId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaSessionId_C::UpdateSessionId()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSessionId_C", "UpdateSessionId");

	UObject::ProcessEvent(Func, nullptr);
}

}
