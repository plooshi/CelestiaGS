#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengePunchCardEntry

#include "Basic.hpp"

#include "ChallengePunchCardEntry_classes.hpp"
#include "ChallengePunchCardEntry_parameters.hpp"


namespace SDK
{

// Function ChallengePunchCardEntry.ChallengePunchCardEntry_C.ExecuteUbergraph_ChallengePunchCardEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengePunchCardEntry_C::ExecuteUbergraph_ChallengePunchCardEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengePunchCardEntry_C", "ExecuteUbergraph_ChallengePunchCardEntry");

	Params::ChallengePunchCardEntry_C_ExecuteUbergraph_ChallengePunchCardEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChallengePunchCardEntry.ChallengePunchCardEntry_C.Play Place Stamp
// (BlueprintCallable, BlueprintEvent)

void UChallengePunchCardEntry_C::Play_Place_Stamp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengePunchCardEntry_C", "Play Place Stamp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengePunchCardEntry.ChallengePunchCardEntry_C.SetStyle
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortChallengePunchCardStyles    PunchStyle                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChallengePunchCardEntry_C::SetStyle(const struct FFortChallengePunchCardStyles& PunchStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengePunchCardEntry_C", "SetStyle");

	Params::ChallengePunchCardEntry_C_SetStyle Parms{};

	Parms.PunchStyle = move(PunchStyle);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChallengePunchCardEntry.ChallengePunchCardEntry_C.SetIsNonsequentialSlot
// (Event, Public, BlueprintEvent)

void UChallengePunchCardEntry_C::SetIsNonsequentialSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengePunchCardEntry_C", "SetIsNonsequentialSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengePunchCardEntry.ChallengePunchCardEntry_C.SetToDefaultSlot
// (Event, Public, BlueprintEvent)

void UChallengePunchCardEntry_C::SetToDefaultSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengePunchCardEntry_C", "SetToDefaultSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengePunchCardEntry.ChallengePunchCardEntry_C.SetIsLastSlot
// (Event, Public, BlueprintEvent)

void UChallengePunchCardEntry_C::SetIsLastSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengePunchCardEntry_C", "SetIsLastSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengePunchCardEntry.ChallengePunchCardEntry_C.SetIsFirstSlot
// (Event, Public, BlueprintEvent)

void UChallengePunchCardEntry_C::SetIsFirstSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengePunchCardEntry_C", "SetIsFirstSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengePunchCardEntry.ChallengePunchCardEntry_C.OnPlacedEntry
// (Event, Public, BlueprintEvent)

void UChallengePunchCardEntry_C::OnPlacedEntry()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengePunchCardEntry_C", "OnPlacedEntry");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengePunchCardEntry.ChallengePunchCardEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChallengePunchCardEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengePunchCardEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengePunchCardEntry.ChallengePunchCardEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengePunchCardEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengePunchCardEntry_C", "PreConstruct");

	Params::ChallengePunchCardEntry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

