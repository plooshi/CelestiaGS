#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tiered_Chest_Apollo_IceBox

#include "Basic.hpp"

#include "Tiered_Chest_Apollo_IceBox_classes.hpp"
#include "Tiered_Chest_Apollo_IceBox_parameters.hpp"


namespace SDK
{

// Function Tiered_Chest_Apollo_IceBox.Tiered_Chest_Apollo_IceBox_C.ExecuteUbergraph_Tiered_Chest_Apollo_IceBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATiered_Chest_Apollo_IceBox_C::ExecuteUbergraph_Tiered_Chest_Apollo_IceBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tiered_Chest_Apollo_IceBox_C", "ExecuteUbergraph_Tiered_Chest_Apollo_IceBox");

	Params::Tiered_Chest_Apollo_IceBox_C_ExecuteUbergraph_Tiered_Chest_Apollo_IceBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Tiered_Chest_Apollo_IceBox.Tiered_Chest_Apollo_IceBox_C.OnLoot
// (Event, Public, BlueprintEvent)

void ATiered_Chest_Apollo_IceBox_C::OnLoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tiered_Chest_Apollo_IceBox_C", "OnLoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tiered_Chest_Apollo_IceBox.Tiered_Chest_Apollo_IceBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATiered_Chest_Apollo_IceBox_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tiered_Chest_Apollo_IceBox_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
