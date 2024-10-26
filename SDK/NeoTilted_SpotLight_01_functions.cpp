#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NeoTilted_SpotLight_01

#include "Basic.hpp"

#include "NeoTilted_SpotLight_01_classes.hpp"
#include "NeoTilted_SpotLight_01_parameters.hpp"


namespace SDK
{

// Function NeoTilted_SpotLight_01.NeoTilted_SpotLight_01_C.ExecuteUbergraph_NeoTilted_SpotLight_01
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANeoTilted_SpotLight_01_C::ExecuteUbergraph_NeoTilted_SpotLight_01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoTilted_SpotLight_01_C", "ExecuteUbergraph_NeoTilted_SpotLight_01");

	Params::NeoTilted_SpotLight_01_C_ExecuteUbergraph_NeoTilted_SpotLight_01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NeoTilted_SpotLight_01.NeoTilted_SpotLight_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANeoTilted_SpotLight_01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoTilted_SpotLight_01_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeoTilted_SpotLight_01.NeoTilted_SpotLight_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANeoTilted_SpotLight_01_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoTilted_SpotLight_01_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeoTilted_SpotLight_01.NeoTilted_SpotLight_01_C.editor_pushRotationToInstance
// (Public, BlueprintCallable, BlueprintEvent)

void ANeoTilted_SpotLight_01_C::Editor_pushRotationToInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoTilted_SpotLight_01_C", "editor_pushRotationToInstance");

	UObject::ProcessEvent(Func, nullptr);
}

}

