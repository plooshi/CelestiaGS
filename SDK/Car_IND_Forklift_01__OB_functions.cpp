#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Car_IND_Forklift_01__OB

#include "Basic.hpp"

#include "Car_IND_Forklift_01__OB_classes.hpp"
#include "Car_IND_Forklift_01__OB_parameters.hpp"


namespace SDK
{

// Function Car_IND_Forklift_01__OB.Car_IND_Forklift_01__OB_C.ExecuteUbergraph_Car_IND_Forklift_01__OB
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACar_IND_Forklift_01__OB_C::ExecuteUbergraph_Car_IND_Forklift_01__OB(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_IND_Forklift_01__OB_C", "ExecuteUbergraph_Car_IND_Forklift_01__OB");

	Params::Car_IND_Forklift_01__OB_C_ExecuteUbergraph_Car_IND_Forklift_01__OB Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Car_IND_Forklift_01__OB.Car_IND_Forklift_01__OB_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ACar_IND_Forklift_01__OB_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_IND_Forklift_01__OB_C", "OnDeathServer");

	Params::Car_IND_Forklift_01__OB_C_OnDeathServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = move(DamageTags);
	Parms.Momentum = move(Momentum);
	Parms.HitInfo = move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}

}
