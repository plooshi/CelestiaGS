#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PassengerImpulseWeaponComponent

#include "Basic.hpp"

#include "PassengerImpulseWeaponComponent_classes.hpp"
#include "PassengerImpulseWeaponComponent_parameters.hpp"


namespace SDK
{

// Function PassengerImpulseWeaponComponent.PassengerImpulseWeaponComponent_C.OnPassengerFiredImpulseWeapon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPassengerImpulseWeaponComponent_C::OnPassengerFiredImpulseWeapon__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassengerImpulseWeaponComponent_C", "OnPassengerFiredImpulseWeapon__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PassengerImpulseWeaponComponent.PassengerImpulseWeaponComponent_C.ExecuteUbergraph_PassengerImpulseWeaponComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassengerImpulseWeaponComponent_C::ExecuteUbergraph_PassengerImpulseWeaponComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassengerImpulseWeaponComponent_C", "ExecuteUbergraph_PassengerImpulseWeaponComponent");

	Params::PassengerImpulseWeaponComponent_C_ExecuteUbergraph_PassengerImpulseWeaponComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassengerImpulseWeaponComponent.PassengerImpulseWeaponComponent_C.ApplyImpulse
// (BlueprintCallable, BlueprintEvent)

void UPassengerImpulseWeaponComponent_C::ApplyImpulse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassengerImpulseWeaponComponent_C", "ApplyImpulse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PassengerImpulseWeaponComponent.PassengerImpulseWeaponComponent_C.OnImpluseWeaponProjectileSpawned
// (BlueprintCallable, BlueprintEvent)

void UPassengerImpulseWeaponComponent_C::OnImpluseWeaponProjectileSpawned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassengerImpulseWeaponComponent_C", "OnImpluseWeaponProjectileSpawned");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PassengerImpulseWeaponComponent.PassengerImpulseWeaponComponent_C.OnPassengerWeaponEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*                      NewWeapon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                      PreviousWeapon                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassengerImpulseWeaponComponent_C::OnPassengerWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PreviousWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassengerImpulseWeaponComponent_C", "OnPassengerWeaponEquipped");

	Params::PassengerImpulseWeaponComponent_C_OnPassengerWeaponEquipped Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PreviousWeapon = PreviousWeapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassengerImpulseWeaponComponent.PassengerImpulseWeaponComponent_C.IsAnImpulseWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*                      Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bReturnValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortWeaponRanged*                Param_ImpulseWeapon                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassengerImpulseWeaponComponent_C::IsAnImpulseWeapon(class AFortWeapon* Weapon, bool* bReturnValue, class AFortWeaponRanged** Param_ImpulseWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassengerImpulseWeaponComponent_C", "IsAnImpulseWeapon");

	Params::PassengerImpulseWeaponComponent_C_IsAnImpulseWeapon Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

	if (bReturnValue != nullptr)
		*bReturnValue = Parms.bReturnValue;

	if (Param_ImpulseWeapon != nullptr)
		*Param_ImpulseWeapon = Parms.Param_ImpulseWeapon;
}


// Function PassengerImpulseWeaponComponent.PassengerImpulseWeaponComponent_C.SetPassengerPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  NewPassengerPawn                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassengerImpulseWeaponComponent_C::SetPassengerPawn(class AFortPlayerPawn* NewPassengerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassengerImpulseWeaponComponent_C", "SetPassengerPawn");

	Params::PassengerImpulseWeaponComponent_C_SetPassengerPawn Parms{};

	Parms.NewPassengerPawn = NewPassengerPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassengerImpulseWeaponComponent.PassengerImpulseWeaponComponent_C.CalculateImpulse
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Impulse                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassengerImpulseWeaponComponent_C::CalculateImpulse(struct FVector* Impulse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassengerImpulseWeaponComponent_C", "CalculateImpulse");

	Params::PassengerImpulseWeaponComponent_C_CalculateImpulse Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Impulse != nullptr)
		*Impulse = move(Parms.Impulse);
}


// Function PassengerImpulseWeaponComponent.PassengerImpulseWeaponComponent_C.OnRep_ImpulseVector
// (BlueprintCallable, BlueprintEvent)

void UPassengerImpulseWeaponComponent_C::OnRep_ImpulseVector()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassengerImpulseWeaponComponent_C", "OnRep_ImpulseVector");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PassengerImpulseWeaponComponent.PassengerImpulseWeaponComponent_C.SetImpulseWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeaponRanged*                NewImpulseWeapon                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassengerImpulseWeaponComponent_C::SetImpulseWeapon(class AFortWeaponRanged* NewImpulseWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassengerImpulseWeaponComponent_C", "SetImpulseWeapon");

	Params::PassengerImpulseWeaponComponent_C_SetImpulseWeapon Parms{};

	Parms.NewImpulseWeapon = NewImpulseWeapon;

	UObject::ProcessEvent(Func, &Parms);
}

}
