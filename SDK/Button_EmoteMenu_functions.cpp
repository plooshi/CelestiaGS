#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Button_EmoteMenu

#include "Basic.hpp"

#include "Button_EmoteMenu_classes.hpp"
#include "Button_EmoteMenu_parameters.hpp"


namespace SDK
{

// Function Button_EmoteMenu.Button_EmoteMenu_C.ExecuteUbergraph_Button_EmoteMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UButton_EmoteMenu_C::ExecuteUbergraph_Button_EmoteMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Button_EmoteMenu_C", "ExecuteUbergraph_Button_EmoteMenu");

	Params::Button_EmoteMenu_C_ExecuteUbergraph_Button_EmoteMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Button_EmoteMenu.Button_EmoteMenu_C.OnHUDStateUpdate
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortHUDState                    NewState                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UButton_EmoteMenu_C::OnHUDStateUpdate(const struct FFortHUDState& NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Button_EmoteMenu_C", "OnHUDStateUpdate");

	Params::Button_EmoteMenu_C_OnHUDStateUpdate Parms{};

	Parms.NewState = move(NewState);

	UObject::ProcessEvent(Func, &Parms);
}

}
