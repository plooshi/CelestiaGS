#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LocalUserEntry

#include "Basic.hpp"

#include "LocalUserEntry_classes.hpp"
#include "LocalUserEntry_parameters.hpp"


namespace SDK
{

// Function LocalUserEntry.LocalUserEntry_C.ExecuteUbergraph_LocalUserEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULocalUserEntry_C::ExecuteUbergraph_LocalUserEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalUserEntry_C", "ExecuteUbergraph_LocalUserEntry");

	Params::LocalUserEntry_C_ExecuteUbergraph_LocalUserEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LocalUserEntry.LocalUserEntry_C.OnOnlineStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// ELocalUserOnlineStatus                  OnlineStatus                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULocalUserEntry_C::OnOnlineStatusChanged(ELocalUserOnlineStatus OnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalUserEntry_C", "OnOnlineStatusChanged");

	Params::LocalUserEntry_C_OnOnlineStatusChanged Parms{};

	Parms.OnlineStatus = OnlineStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LocalUserEntry.LocalUserEntry_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void ULocalUserEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalUserEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LocalUserEntry.LocalUserEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void ULocalUserEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalUserEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LocalUserEntry.LocalUserEntry_C.HandleOnlineIndicatorView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELocalUserOnlineStatus                  InLocalUserOnlineStatus                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULocalUserEntry_C::HandleOnlineIndicatorView(ELocalUserOnlineStatus InLocalUserOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalUserEntry_C", "HandleOnlineIndicatorView");

	Params::LocalUserEntry_C_HandleOnlineIndicatorView Parms{};

	Parms.InLocalUserOnlineStatus = InLocalUserOnlineStatus;

	UObject::ProcessEvent(Func, &Parms);
}

}
