#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Valet_SportsCar_Vehicle

#include "Basic.hpp"

#include "Valet_SportsCar_Vehicle_classes.hpp"
#include "Valet_SportsCar_Vehicle_parameters.hpp"


namespace SDK
{

// Function Valet_SportsCar_Vehicle.Valet_SportsCar_Vehicle_C.ExecuteUbergraph_Valet_SportsCar_Vehicle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AValet_SportsCar_Vehicle_C::ExecuteUbergraph_Valet_SportsCar_Vehicle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_SportsCar_Vehicle_C", "ExecuteUbergraph_Valet_SportsCar_Vehicle");

	Params::Valet_SportsCar_Vehicle_C_ExecuteUbergraph_Valet_SportsCar_Vehicle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Valet_SportsCar_Vehicle.Valet_SportsCar_Vehicle_C.ActivateBoost
// (BlueprintCallable, BlueprintEvent)

void AValet_SportsCar_Vehicle_C::ActivateBoost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_SportsCar_Vehicle_C", "ActivateBoost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Valet_SportsCar_Vehicle.Valet_SportsCar_Vehicle_C.DeactivateBoost
// (BlueprintCallable, BlueprintEvent)

void AValet_SportsCar_Vehicle_C::DeactivateBoost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_SportsCar_Vehicle_C", "DeactivateBoost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Valet_SportsCar_Vehicle.Valet_SportsCar_Vehicle_C.BP_OnBoostStarted
// (Event, Protected, BlueprintEvent)

void AValet_SportsCar_Vehicle_C::BP_OnBoostStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_SportsCar_Vehicle_C", "BP_OnBoostStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Valet_SportsCar_Vehicle.Valet_SportsCar_Vehicle_C.OnPawnExitVehicle
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  PlayerPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ExitSocketName                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AValet_SportsCar_Vehicle_C::OnPawnExitVehicle(class AFortPlayerPawn* PlayerPawn, class FName ExitSocketName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_SportsCar_Vehicle_C", "OnPawnExitVehicle");

	Params::Valet_SportsCar_Vehicle_C_OnPawnExitVehicle Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ExitSocketName = ExitSocketName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Valet_SportsCar_Vehicle.Valet_SportsCar_Vehicle_C.BP_OnBoostFinished
// (Event, Protected, BlueprintEvent)

void AValet_SportsCar_Vehicle_C::BP_OnBoostFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_SportsCar_Vehicle_C", "BP_OnBoostFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Valet_SportsCar_Vehicle.Valet_SportsCar_Vehicle_C.TimeLineBoostFast__UpdateFunc
// (BlueprintEvent)

void AValet_SportsCar_Vehicle_C::TimeLineBoostFast__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_SportsCar_Vehicle_C", "TimeLineBoostFast__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Valet_SportsCar_Vehicle.Valet_SportsCar_Vehicle_C.TimeLineBoostFast__FinishedFunc
// (BlueprintEvent)

void AValet_SportsCar_Vehicle_C::TimeLineBoostFast__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_SportsCar_Vehicle_C", "TimeLineBoostFast__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Valet_SportsCar_Vehicle.Valet_SportsCar_Vehicle_C.TimeLineBoost__UpdateFunc
// (BlueprintEvent)

void AValet_SportsCar_Vehicle_C::TimeLineBoost__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_SportsCar_Vehicle_C", "TimeLineBoost__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Valet_SportsCar_Vehicle.Valet_SportsCar_Vehicle_C.TimeLineBoost__FinishedFunc
// (BlueprintEvent)

void AValet_SportsCar_Vehicle_C::TimeLineBoost__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_SportsCar_Vehicle_C", "TimeLineBoost__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Valet_SportsCar_Vehicle.Valet_SportsCar_Vehicle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AValet_SportsCar_Vehicle_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_SportsCar_Vehicle_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
