#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Valet_AudioController_Interface

#include "Basic.hpp"

#include "Valet_AudioController_Interface_classes.hpp"
#include "Valet_AudioController_Interface_parameters.hpp"


namespace SDK
{

// Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnTick
// (Public, BlueprintCallable, BlueprintEvent)

void IValet_AudioController_Interface_C::OnTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_AudioController_Interface_C", "OnTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnCacheReferences
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortDagwoodVehicle*              Vehicle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IValet_AudioController_Interface_C::OnCacheReferences(class AFortDagwoodVehicle* Vehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_AudioController_Interface_C", "OnCacheReferences");

	Params::Valet_AudioController_Interface_C_OnCacheReferences Parms{};

	Parms.Vehicle = Vehicle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnBodyCollision
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    FilteredHit                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Magnitude                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IValet_AudioController_Interface_C::OnBodyCollision(const struct FVector& HitLocation, const struct FVector& NormalImpulse, bool* FilteredHit, float* Magnitude)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_AudioController_Interface_C", "OnBodyCollision");

	Params::Valet_AudioController_Interface_C_OnBodyCollision Parms{};

	Parms.HitLocation = move(HitLocation);
	Parms.NormalImpulse = move(NormalImpulse);

	UObject::ProcessEvent(Func, &Parms);

	if (FilteredHit != nullptr)
		*FilteredHit = Parms.FilteredHit;

	if (Magnitude != nullptr)
		*Magnitude = Parms.Magnitude;
}


// Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnSuspensionCollision
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    FilteredHit                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Magnitude                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IValet_AudioController_Interface_C::OnSuspensionCollision(bool* FilteredHit, float* Magnitude)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_AudioController_Interface_C", "OnSuspensionCollision");

	Params::Valet_AudioController_Interface_C_OnSuspensionCollision Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FilteredHit != nullptr)
		*FilteredHit = Parms.FilteredHit;

	if (Magnitude != nullptr)
		*Magnitude = Parms.Magnitude;
}


// Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnHandbrake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Start                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IValet_AudioController_Interface_C::OnHandbrake(bool Start)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_AudioController_Interface_C", "OnHandbrake");

	Params::Valet_AudioController_Interface_C_OnHandbrake Parms{};

	Parms.Start = Start;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnHorn
// (Public, BlueprintCallable, BlueprintEvent)

void IValet_AudioController_Interface_C::OnHorn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_AudioController_Interface_C", "OnHorn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnStopTick
// (Public, BlueprintCallable, BlueprintEvent)

void IValet_AudioController_Interface_C::OnStopTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_AudioController_Interface_C", "OnStopTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnDriverStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IValet_AudioController_Interface_C::OnDriverStateChanged(bool Enter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_AudioController_Interface_C", "OnDriverStateChanged");

	Params::Valet_AudioController_Interface_C_OnDriverStateChanged Parms{};

	Parms.Enter = Enter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnWaterStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Is_Entering_Water                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IValet_AudioController_Interface_C::OnWaterStateChanged(bool Is_Entering_Water)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_AudioController_Interface_C", "OnWaterStateChanged");

	Params::Valet_AudioController_Interface_C_OnWaterStateChanged Parms{};

	Parms.Is_Entering_Water = Is_Entering_Water;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnWindowBreak
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Bone_Name                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IValet_AudioController_Interface_C::OnWindowBreak(class FName Bone_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_AudioController_Interface_C", "OnWindowBreak");

	Params::Valet_AudioController_Interface_C_OnWindowBreak Parms{};

	Parms.Bone_Name = Bone_Name;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnTirePop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Bone_Name                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IValet_AudioController_Interface_C::OnTirePop(class FName Bone_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_AudioController_Interface_C", "OnTirePop");

	Params::Valet_AudioController_Interface_C_OnTirePop Parms{};

	Parms.Bone_Name = Bone_Name;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Damage_Value                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IValet_AudioController_Interface_C::OnDamage(float Damage_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_AudioController_Interface_C", "OnDamage");

	Params::Valet_AudioController_Interface_C_OnDamage Parms{};

	Parms.Damage_Value = Damage_Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnDestroy
// (Public, BlueprintCallable, BlueprintEvent)

void IValet_AudioController_Interface_C::OnDestroy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_AudioController_Interface_C", "OnDestroy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnBoostStart
// (Public, BlueprintCallable, BlueprintEvent)

void IValet_AudioController_Interface_C::OnBoostStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_AudioController_Interface_C", "OnBoostStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnBoostEnd
// (Public, BlueprintCallable, BlueprintEvent)

void IValet_AudioController_Interface_C::OnBoostEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_AudioController_Interface_C", "OnBoostEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnSleepStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Awake                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IValet_AudioController_Interface_C::OnSleepStateChange(bool Awake)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_AudioController_Interface_C", "OnSleepStateChange");

	Params::Valet_AudioController_Interface_C_OnSleepStateChange Parms{};

	Parms.Awake = Awake;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnHitPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          ImpactPoint                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IValet_AudioController_Interface_C::OnHitPlayer(const struct FVector& ImpactPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_AudioController_Interface_C", "OnHitPlayer");

	Params::Valet_AudioController_Interface_C_OnHitPlayer Parms{};

	Parms.ImpactPoint = move(ImpactPoint);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnHitBuilding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Impact_Point                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IValet_AudioController_Interface_C::OnHitBuilding(const struct FVector& Impact_Point)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_AudioController_Interface_C", "OnHitBuilding");

	Params::Valet_AudioController_Interface_C_OnHitBuilding Parms{};

	Parms.Impact_Point = move(Impact_Point);

	UObject::ProcessEvent(Func, &Parms);
}

}

