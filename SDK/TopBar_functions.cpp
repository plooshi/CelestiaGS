#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TopBar

#include "Basic.hpp"

#include "TopBar_classes.hpp"
#include "TopBar_parameters.hpp"


namespace SDK
{

// Function TopBar.TopBar_C.SetTopTabsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        NewVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBar_C::SetTopTabsVisibility(ESlateVisibility NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBar_C", "SetTopTabsVisibility");

	Params::TopBar_C_SetTopTabsVisibility Parms{};

	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TopBar.TopBar_C.UpdateMTXButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTopBar_C::UpdateMTXButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBar_C", "UpdateMTXButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TopBar.TopBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTopBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBar_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TopBar.TopBar_C.OnMobileTabLabelChanged
// (Event, Protected, BlueprintEvent)

void UTopBar_C::OnMobileTabLabelChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBar_C", "OnMobileTabLabelChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TopBar.TopBar_C.ExecuteUbergraph_TopBar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBar_C::ExecuteUbergraph_TopBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBar_C", "ExecuteUbergraph_TopBar");

	Params::TopBar_C_ExecuteUbergraph_TopBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
