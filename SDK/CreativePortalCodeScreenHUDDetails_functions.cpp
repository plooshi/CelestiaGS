#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CreativePortalCodeScreenHUDDetails

#include "Basic.hpp"

#include "CreativePortalCodeScreenHUDDetails_classes.hpp"
#include "CreativePortalCodeScreenHUDDetails_parameters.hpp"


namespace SDK
{

// Function CreativePortalCodeScreenHUDDetails.CreativePortalCodeScreenHUDDetails_C.ExecuteUbergraph_CreativePortalCodeScreenHUDDetails
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativePortalCodeScreenHUDDetails_C::ExecuteUbergraph_CreativePortalCodeScreenHUDDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativePortalCodeScreenHUDDetails_C", "ExecuteUbergraph_CreativePortalCodeScreenHUDDetails");

	Params::CreativePortalCodeScreenHUDDetails_C_ExecuteUbergraph_CreativePortalCodeScreenHUDDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativePortalCodeScreenHUDDetails.CreativePortalCodeScreenHUDDetails_C.PlayIntro
// (Public, BlueprintCallable, BlueprintEvent)

void UCreativePortalCodeScreenHUDDetails_C::PlayIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativePortalCodeScreenHUDDetails_C", "PlayIntro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreativePortalCodeScreenHUDDetails.CreativePortalCodeScreenHUDDetails_C.InitFromObject
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InitObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativePortalCodeScreenHUDDetails_C::InitFromObject(class UObject* InitObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativePortalCodeScreenHUDDetails_C", "InitFromObject");

	Params::CreativePortalCodeScreenHUDDetails_C_InitFromObject Parms{};

	Parms.InitObject = InitObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativePortalCodeScreenHUDDetails.CreativePortalCodeScreenHUDDetails_C.SetCuratedStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsFeatured                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsLinkCode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsUserInitiatedLoad                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativePortalCodeScreenHUDDetails_C::SetCuratedStatus(bool bIsFeatured, bool bIsLinkCode, bool bIsUserInitiatedLoad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativePortalCodeScreenHUDDetails_C", "SetCuratedStatus");

	Params::CreativePortalCodeScreenHUDDetails_C_SetCuratedStatus Parms{};

	Parms.bIsFeatured = bIsFeatured;
	Parms.bIsLinkCode = bIsLinkCode;
	Parms.bIsUserInitiatedLoad = bIsUserInitiatedLoad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativePortalCodeScreenHUDDetails.CreativePortalCodeScreenHUDDetails_C.SetupPortalEventBinding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABGA_IslandPortal_C*              InPortal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bBind                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativePortalCodeScreenHUDDetails_C::SetupPortalEventBinding(class ABGA_IslandPortal_C* InPortal, bool bBind)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativePortalCodeScreenHUDDetails_C", "SetupPortalEventBinding");

	Params::CreativePortalCodeScreenHUDDetails_C_SetupPortalEventBinding Parms{};

	Parms.InPortal = InPortal;
	Parms.bBind = bBind;

	UObject::ProcessEvent(Func, &Parms);
}

}
