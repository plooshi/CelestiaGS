#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_Waterbody_Pond_Parent

#include "Basic.hpp"

#include "Apollo_Waterbody_Pond_Parent_classes.hpp"
#include "Apollo_Waterbody_Pond_Parent_parameters.hpp"


namespace SDK
{

// Function Apollo_Waterbody_Pond_Parent.Apollo_Waterbody_Pond_Parent_C.ExecuteUbergraph_Apollo_Waterbody_Pond_Parent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AApollo_Waterbody_Pond_Parent_C::ExecuteUbergraph_Apollo_Waterbody_Pond_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Apollo_Waterbody_Pond_Parent_C", "ExecuteUbergraph_Apollo_Waterbody_Pond_Parent");

	Params::Apollo_Waterbody_Pond_Parent_C_ExecuteUbergraph_Apollo_Waterbody_Pond_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Apollo_Waterbody_Pond_Parent.Apollo_Waterbody_Pond_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AApollo_Waterbody_Pond_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Apollo_Waterbody_Pond_Parent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Apollo_Waterbody_Pond_Parent.Apollo_Waterbody_Pond_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AApollo_Waterbody_Pond_Parent_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Apollo_Waterbody_Pond_Parent_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

