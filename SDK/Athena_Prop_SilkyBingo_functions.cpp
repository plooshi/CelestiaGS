#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Prop_SilkyBingo

#include "Basic.hpp"

#include "Athena_Prop_SilkyBingo_classes.hpp"
#include "Athena_Prop_SilkyBingo_parameters.hpp"


namespace SDK
{

// Function Athena_Prop_SilkyBingo.Athena_Prop_SilkyBingo_C.ExecuteUbergraph_Athena_Prop_SilkyBingo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_Prop_SilkyBingo_C::ExecuteUbergraph_Athena_Prop_SilkyBingo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_SilkyBingo_C", "ExecuteUbergraph_Athena_Prop_SilkyBingo");

	Params::Athena_Prop_SilkyBingo_C_ExecuteUbergraph_Athena_Prop_SilkyBingo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Prop_SilkyBingo.Athena_Prop_SilkyBingo_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                        InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void AAthena_Prop_SilkyBingo_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_SilkyBingo_C", "OnDeathPlayEffects");

	Params::Athena_Prop_SilkyBingo_C_OnDeathPlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = move(DamageTags);
	Parms.Momentum = move(Momentum);
	Parms.HitInfo = move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Prop_SilkyBingo.Athena_Prop_SilkyBingo_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void AAthena_Prop_SilkyBingo_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_SilkyBingo_C", "OnDeathServer");

	Params::Athena_Prop_SilkyBingo_C_OnDeathServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = move(DamageTags);
	Parms.Momentum = move(Momentum);
	Parms.HitInfo = move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Prop_SilkyBingo.Athena_Prop_SilkyBingo_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      EventInstigator                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AAthena_Prop_SilkyBingo_C::ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_SilkyBingo_C", "ShouldDie");

	Params::Athena_Prop_SilkyBingo_C_ShouldDie Parms{};

	Parms.Damage = Damage;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Athena_Prop_SilkyBingo.Athena_Prop_SilkyBingo_C.Distance Check for Camera Lens Effect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Param_Instigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AAthena_Prop_SilkyBingo_C::Distance_Check_for_Camera_Lens_Effect(class AActor* Param_Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_SilkyBingo_C", "Distance Check for Camera Lens Effect");

	Params::Athena_Prop_SilkyBingo_C_Distance_Check_for_Camera_Lens_Effect Parms{};

	Parms.Param_Instigator = Param_Instigator;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Athena_Prop_SilkyBingo.Athena_Prop_SilkyBingo_C.Apply Water if Curie Enabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Param_Instigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_Prop_SilkyBingo_C::Apply_Water_if_Curie_Enabled(class AActor* Param_Instigator, class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_SilkyBingo_C", "Apply Water if Curie Enabled");

	Params::Athena_Prop_SilkyBingo_C_Apply_Water_if_Curie_Enabled Parms{};

	Parms.Param_Instigator = Param_Instigator;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}

}
