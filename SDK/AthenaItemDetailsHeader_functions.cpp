#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaItemDetailsHeader

#include "Basic.hpp"

#include "AthenaItemDetailsHeader_classes.hpp"
#include "AthenaItemDetailsHeader_parameters.hpp"


namespace SDK
{

// Function AthenaItemDetailsHeader.AthenaItemDetailsHeader_C.ExecuteUbergraph_AthenaItemDetailsHeader
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaItemDetailsHeader_C::ExecuteUbergraph_AthenaItemDetailsHeader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemDetailsHeader_C", "ExecuteUbergraph_AthenaItemDetailsHeader");

	Params::AthenaItemDetailsHeader_C_ExecuteUbergraph_AthenaItemDetailsHeader Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaItemDetailsHeader.AthenaItemDetailsHeader_C.HandleDifferentItemToCompareSet
// (Event, Protected, BlueprintEvent)

void UAthenaItemDetailsHeader_C::HandleDifferentItemToCompareSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemDetailsHeader_C", "HandleDifferentItemToCompareSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaItemDetailsHeader.AthenaItemDetailsHeader_C.HandleDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UAthenaItemDetailsHeader_C::HandleDifferentItemToDetailSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemDetailsHeader_C", "HandleDifferentItemToDetailSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaItemDetailsHeader.AthenaItemDetailsHeader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaItemDetailsHeader_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemDetailsHeader_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaItemDetailsHeader.AthenaItemDetailsHeader_C.UpdateItemsForWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaItemDetailsHeader_C::UpdateItemsForWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemDetailsHeader_C", "UpdateItemsForWidgets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaItemDetailsHeader.AthenaItemDetailsHeader_C.SetStyles
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaItemDetailsHeader_C::SetStyles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemDetailsHeader_C", "SetStyles");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaItemDetailsHeader.AthenaItemDetailsHeader_C.SetItemCost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaItemDetailsHeader_C::SetItemCost(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemDetailsHeader_C", "SetItemCost");

	Params::AthenaItemDetailsHeader_C_SetItemCost Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}

}
