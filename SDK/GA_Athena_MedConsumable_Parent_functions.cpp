#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_MedConsumable_Parent

#include "Basic.hpp"

#include "GA_Athena_MedConsumable_Parent_classes.hpp"
#include "GA_Athena_MedConsumable_Parent_parameters.hpp"


namespace SDK
{

// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.ExecuteUbergraph_GA_Athena_MedConsumable_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_MedConsumable_Parent_C::ExecuteUbergraph_GA_Athena_MedConsumable_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_MedConsumable_Parent_C", "ExecuteUbergraph_GA_Athena_MedConsumable_Parent");

	Params::GA_Athena_MedConsumable_Parent_C_ExecuteUbergraph_GA_Athena_MedConsumable_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_MedConsumable_Parent_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_MedConsumable_Parent_C", "K2_OnEndAbility");

	Params::GA_Athena_MedConsumable_Parent_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_MedConsumable_Parent_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_MedConsumable_Parent_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.Triggered_4C02BFB04B18D9E79F84848FFE6D2C32
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_MedConsumable_Parent_C::Triggered_4C02BFB04B18D9E79F84848FFE6D2C32(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_MedConsumable_Parent_C", "Triggered_4C02BFB04B18D9E79F84848FFE6D2C32");

	Params::GA_Athena_MedConsumable_Parent_C_Triggered_4C02BFB04B18D9E79F84848FFE6D2C32 Parms{};

	Parms.TargetData = move(TargetData);
	Parms.ApplicationTag = move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.Cancelled_4C02BFB04B18D9E79F84848FFE6D2C32
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_MedConsumable_Parent_C::Cancelled_4C02BFB04B18D9E79F84848FFE6D2C32(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_MedConsumable_Parent_C", "Cancelled_4C02BFB04B18D9E79F84848FFE6D2C32");

	Params::GA_Athena_MedConsumable_Parent_C_Cancelled_4C02BFB04B18D9E79F84848FFE6D2C32 Parms{};

	Parms.TargetData = move(TargetData);
	Parms.ApplicationTag = move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.Completed_4C02BFB04B18D9E79F84848FFE6D2C32
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_MedConsumable_Parent_C::Completed_4C02BFB04B18D9E79F84848FFE6D2C32(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_MedConsumable_Parent_C", "Completed_4C02BFB04B18D9E79F84848FFE6D2C32");

	Params::GA_Athena_MedConsumable_Parent_C_Completed_4C02BFB04B18D9E79F84848FFE6D2C32 Parms{};

	Parms.TargetData = move(TargetData);
	Parms.ApplicationTag = move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.ShieldCalc
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_MedConsumable_Parent_C::ShieldCalc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_MedConsumable_Parent_C", "ShieldCalc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.HealthCalc
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_MedConsumable_Parent_C::HealthCalc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_MedConsumable_Parent_C", "HealthCalc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.SetupGE
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectSpecHandle        Effect_Out                                             (Parm, OutParm)

void UGA_Athena_MedConsumable_Parent_C::SetupGE(struct FGameplayEffectSpecHandle* Effect_Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_MedConsumable_Parent_C", "SetupGE");

	Params::GA_Athena_MedConsumable_Parent_C_SetupGE Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Effect_Out != nullptr)
		*Effect_Out = move(Parms.Effect_Out);
}


// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.MakeCustomMontageInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_MedConsumable_Parent_C::MakeCustomMontageInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_MedConsumable_Parent_C", "MakeCustomMontageInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.OnMontageTriggered
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_MedConsumable_Parent_C::OnMontageTriggered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_MedConsumable_Parent_C", "OnMontageTriggered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayTagContainer            RelevantTags                                           (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_Athena_MedConsumable_Parent_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_MedConsumable_Parent_C", "K2_CanActivateAbility");

	Params::GA_Athena_MedConsumable_Parent_C_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = move(ActorInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = move(Parms.RelevantTags);

	return Parms.ReturnValue;
}

}
