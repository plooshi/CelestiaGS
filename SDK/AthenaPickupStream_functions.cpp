#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaPickupStream

#include "Basic.hpp"

#include "AthenaPickupStream_classes.hpp"
#include "AthenaPickupStream_parameters.hpp"


namespace SDK
{

// Function AthenaPickupStream.AthenaPickupStream_C.ExecuteUbergraph_AthenaPickupStream
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPickupStream_C::ExecuteUbergraph_AthenaPickupStream(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPickupStream_C", "ExecuteUbergraph_AthenaPickupStream");

	Params::AthenaPickupStream_C_ExecuteUbergraph_AthenaPickupStream Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPickupStream.AthenaPickupStream_C.RefreshPickupEntry
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UUserWidget*                      EntryWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        Icon                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPickupStream_C::RefreshPickupEntry(class UUserWidget* EntryWidget, const TSoftObjectPtr<class UTexture2D>& Icon, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPickupStream_C", "RefreshPickupEntry");

	Params::AthenaPickupStream_C_RefreshPickupEntry Parms{};

	Parms.EntryWidget = EntryWidget;
	Parms.Icon = Icon;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPickupStream.AthenaPickupStream_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaPickupStream_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPickupStream_C", "PreConstruct");

	Params::AthenaPickupStream_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

