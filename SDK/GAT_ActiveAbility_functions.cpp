#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_ActiveAbility

#include "Basic.hpp"

#include "GAT_ActiveAbility_classes.hpp"
#include "GAT_ActiveAbility_parameters.hpp"


namespace SDK
{

// Function GAT_ActiveAbility.GAT_ActiveAbility_C.ExecuteUbergraph_GAT_ActiveAbility
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_ActiveAbility_C::ExecuteUbergraph_GAT_ActiveAbility(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_ActiveAbility_C", "ExecuteUbergraph_GAT_ActiveAbility");

	Params::GAT_ActiveAbility_C_ExecuteUbergraph_GAT_ActiveAbility Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAT_ActiveAbility_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_ActiveAbility_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetPawnCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                        FortPawn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CollisionOn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAT_ActiveAbility_C::SetPawnCollision(class AFortPawn* FortPawn, bool CollisionOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_ActiveAbility_C", "SetPawnCollision");

	Params::GAT_ActiveAbility_C_SetPawnCollision Parms{};

	Parms.FortPawn = FortPawn;
	Parms.CollisionOn = CollisionOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetKnockbackImmunity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ImmunityOn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAT_ActiveAbility_C::SetKnockbackImmunity(bool ImmunityOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_ActiveAbility_C", "SetKnockbackImmunity");

	Params::GAT_ActiveAbility_C_SetKnockbackImmunity Parms{};

	Parms.ImmunityOn = ImmunityOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.ActiveAbilitySetup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*          AbilitySystemIn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*          AbilitySystemOut                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_ActiveAbility_C::ActiveAbilitySetup(class UAbilitySystemComponent* AbilitySystemIn, class UAbilitySystemComponent** AbilitySystemOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_ActiveAbility_C", "ActiveAbilitySetup");

	Params::GAT_ActiveAbility_C_ActiveAbilitySetup Parms{};

	Parms.AbilitySystemIn = AbilitySystemIn;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilitySystemOut != nullptr)
		*AbilitySystemOut = Parms.AbilitySystemOut;
}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetHolsterWeaponWithName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                        Target_Fort_Pawn                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShouldHolster                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    PlayEquipAnim                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ShowDebugPrintName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsWeaponHolstered                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    OperationSuccessful                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAT_ActiveAbility_C::SetHolsterWeaponWithName(class AFortPawn* Target_Fort_Pawn, bool ShouldHolster, bool PlayEquipAnim, bool ShowDebugPrintName, bool* IsWeaponHolstered, bool* OperationSuccessful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_ActiveAbility_C", "SetHolsterWeaponWithName");

	Params::GAT_ActiveAbility_C_SetHolsterWeaponWithName Parms{};

	Parms.Target_Fort_Pawn = Target_Fort_Pawn;
	Parms.ShouldHolster = ShouldHolster;
	Parms.PlayEquipAnim = PlayEquipAnim;
	Parms.ShowDebugPrintName = ShowDebugPrintName;

	UObject::ProcessEvent(Func, &Parms);

	if (IsWeaponHolstered != nullptr)
		*IsWeaponHolstered = Parms.IsWeaponHolstered;

	if (OperationSuccessful != nullptr)
		*OperationSuccessful = Parms.OperationSuccessful;
}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.SendHeroAbilityActivationEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGAT_ActiveAbility_C::SendHeroAbilityActivationEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_ActiveAbility_C", "SendHeroAbilityActivationEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.EndAbilityWithReason
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UGAT_ActiveAbility_C::EndAbilityWithReason(const class FString& Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_ActiveAbility_C", "EndAbilityWithReason");

	Params::GAT_ActiveAbility_C_EndAbilityWithReason Parms{};

	Parms.Reason = move(Reason);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGAT_ActiveAbility_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_ActiveAbility_C", "K2_ShouldAbilityRespondToEvent");

	Params::GAT_ActiveAbility_C_K2_ShouldAbilityRespondToEvent Parms{};

	Parms.ActorInfo = move(ActorInfo);
	Parms.Payload = move(Payload);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
