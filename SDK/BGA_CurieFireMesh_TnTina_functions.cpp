#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_CurieFireMesh_TnTina

#include "Basic.hpp"

#include "BGA_CurieFireMesh_TnTina_classes.hpp"
#include "BGA_CurieFireMesh_TnTina_parameters.hpp"


namespace SDK
{

// Function BGA_CurieFireMesh_TnTina.BGA_CurieFireMesh_TnTina_C.ExecuteUbergraph_BGA_CurieFireMesh_TnTina
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_CurieFireMesh_TnTina_C::ExecuteUbergraph_BGA_CurieFireMesh_TnTina(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_CurieFireMesh_TnTina_C", "ExecuteUbergraph_BGA_CurieFireMesh_TnTina");

	Params::BGA_CurieFireMesh_TnTina_C_ExecuteUbergraph_BGA_CurieFireMesh_TnTina Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_CurieFireMesh_TnTina.BGA_CurieFireMesh_TnTina_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_CurieFireMesh_TnTina_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_CurieFireMesh_TnTina_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

