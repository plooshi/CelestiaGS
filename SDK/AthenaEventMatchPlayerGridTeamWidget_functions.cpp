#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaEventMatchPlayerGridTeamWidget

#include "Basic.hpp"

#include "AthenaEventMatchPlayerGridTeamWidget_classes.hpp"
#include "AthenaEventMatchPlayerGridTeamWidget_parameters.hpp"


namespace SDK
{

// Function AthenaEventMatchPlayerGridTeamWidget.AthenaEventMatchPlayerGridTeamWidget_C.ExecuteUbergraph_AthenaEventMatchPlayerGridTeamWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchPlayerGridTeamWidget_C::ExecuteUbergraph_AthenaEventMatchPlayerGridTeamWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaEventMatchPlayerGridTeamWidget_C", "ExecuteUbergraph_AthenaEventMatchPlayerGridTeamWidget");

	Params::AthenaEventMatchPlayerGridTeamWidget_C_ExecuteUbergraph_AthenaEventMatchPlayerGridTeamWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaEventMatchPlayerGridTeamWidget.AthenaEventMatchPlayerGridTeamWidget_C.OnPlayerWidgetAdded
// (Event, Public, BlueprintEvent)

void UAthenaEventMatchPlayerGridTeamWidget_C::OnPlayerWidgetAdded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaEventMatchPlayerGridTeamWidget_C", "OnPlayerWidgetAdded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaEventMatchPlayerGridTeamWidget.AthenaEventMatchPlayerGridTeamWidget_C.AddToGrid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      PlayerWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchPlayerGridTeamWidget_C::AddToGrid(class UUserWidget* PlayerWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaEventMatchPlayerGridTeamWidget_C", "AddToGrid");

	Params::AthenaEventMatchPlayerGridTeamWidget_C_AddToGrid Parms{};

	Parms.PlayerWidget = PlayerWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaEventMatchPlayerGridTeamWidget.AthenaEventMatchPlayerGridTeamWidget_C.OnGridSizeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InGridSize                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchPlayerGridTeamWidget_C::OnGridSizeChanged(int32 InGridSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaEventMatchPlayerGridTeamWidget_C", "OnGridSizeChanged");

	Params::AthenaEventMatchPlayerGridTeamWidget_C_OnGridSizeChanged Parms{};

	Parms.InGridSize = InGridSize;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaEventMatchPlayerGridTeamWidget.AthenaEventMatchPlayerGridTeamWidget_C.SetEliminationsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInVisible                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchPlayerGridTeamWidget_C::SetEliminationsVisibility(bool bInVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaEventMatchPlayerGridTeamWidget_C", "SetEliminationsVisibility");

	Params::AthenaEventMatchPlayerGridTeamWidget_C_SetEliminationsVisibility Parms{};

	Parms.bInVisible = bInVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}
