#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Player_Bush

#include "Basic.hpp"

#include "Athena_Player_Bush_classes.hpp"
#include "Athena_Player_Bush_parameters.hpp"


namespace SDK
{

// Function Athena_Player_Bush.Athena_Player_Bush_C.ExecuteUbergraph_Athena_Player_Bush
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_Player_Bush_C::ExecuteUbergraph_Athena_Player_Bush(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Player_Bush_C", "ExecuteUbergraph_Athena_Player_Bush");

	Params::Athena_Player_Bush_C_ExecuteUbergraph_Athena_Player_Bush Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Player_Bush.Athena_Player_Bush_C.RemoveBush
// (BlueprintCallable, BlueprintEvent)

void AAthena_Player_Bush_C::RemoveBush()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Player_Bush_C", "RemoveBush");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Player_Bush.Athena_Player_Bush_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void AAthena_Player_Bush_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Player_Bush_C", "OnDeathServer");

	Params::Athena_Player_Bush_C_OnDeathServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = move(DamageTags);
	Parms.Momentum = move(Momentum);
	Parms.HitInfo = move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Player_Bush.Athena_Player_Bush_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAthena_Player_Bush_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Player_Bush_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Player_Bush.Athena_Player_Bush_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void AAthena_Player_Bush_C::OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Player_Bush_C", "OnDamageServer");

	Params::Athena_Player_Bush_C_OnDamageServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = move(DamageTags);
	Parms.Momentum = move(Momentum);
	Parms.HitInfo = move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Player_Bush.Athena_Player_Bush_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAthena_Player_Bush_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Player_Bush_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Player_Bush.Athena_Player_Bush_C.CheckInstIsOwner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Param_Owner                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_Player_Bush_C::CheckInstIsOwner(class AActor* DamageCauser, class AActor** Param_Owner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Player_Bush_C", "CheckInstIsOwner");

	Params::Athena_Player_Bush_C_CheckInstIsOwner Parms{};

	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Owner != nullptr)
		*Param_Owner = Parms.Param_Owner;
}

}
