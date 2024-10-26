#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveStreamLetEmKnow

#include "Basic.hpp"

#include "LiveStreamLetEmKnow_classes.hpp"
#include "LiveStreamLetEmKnow_parameters.hpp"


namespace SDK
{

// Function LiveStreamLetEmKnow.LiveStreamLetEmKnow_C.ExecuteUbergraph_LiveStreamLetEmKnow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULiveStreamLetEmKnow_C::ExecuteUbergraph_LiveStreamLetEmKnow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveStreamLetEmKnow_C", "ExecuteUbergraph_LiveStreamLetEmKnow");

	Params::LiveStreamLetEmKnow_C_ExecuteUbergraph_LiveStreamLetEmKnow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LiveStreamLetEmKnow.LiveStreamLetEmKnow_C.ShowAdvertisement
// (Event, Protected, BlueprintEvent)

void ULiveStreamLetEmKnow_C::ShowAdvertisement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveStreamLetEmKnow_C", "ShowAdvertisement");

	UObject::ProcessEvent(Func, nullptr);
}

}

