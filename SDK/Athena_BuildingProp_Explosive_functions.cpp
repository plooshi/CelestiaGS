#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_BuildingProp_Explosive

#include "Basic.hpp"

#include "Athena_BuildingProp_Explosive_classes.hpp"
#include "Athena_BuildingProp_Explosive_parameters.hpp"


namespace SDK
{

// Function Athena_BuildingProp_Explosive.Athena_BuildingProp_Explosive_C.ExecuteUbergraph_Athena_BuildingProp_Explosive
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_BuildingProp_Explosive_C::ExecuteUbergraph_Athena_BuildingProp_Explosive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_BuildingProp_Explosive_C", "ExecuteUbergraph_Athena_BuildingProp_Explosive");

	Params::Athena_BuildingProp_Explosive_C_ExecuteUbergraph_Athena_BuildingProp_Explosive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_BuildingProp_Explosive.Athena_BuildingProp_Explosive_C.StopGrowAudio
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AAthena_BuildingProp_Explosive_C::StopGrowAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_BuildingProp_Explosive_C", "StopGrowAudio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_BuildingProp_Explosive.Athena_BuildingProp_Explosive_C.FastExplodeAndDie
// (BlueprintCallable, BlueprintEvent)

void AAthena_BuildingProp_Explosive_C::FastExplodeAndDie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_BuildingProp_Explosive_C", "FastExplodeAndDie");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_BuildingProp_Explosive.Athena_BuildingProp_Explosive_C.ExplodeAndDieStaggered
// (BlueprintCallable, BlueprintEvent)

void AAthena_BuildingProp_Explosive_C::ExplodeAndDieStaggered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_BuildingProp_Explosive_C", "ExplodeAndDieStaggered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_BuildingProp_Explosive.Athena_BuildingProp_Explosive_C.TriggeredByGasPump
// (BlueprintCallable, BlueprintEvent)

void AAthena_BuildingProp_Explosive_C::TriggeredByGasPump()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_BuildingProp_Explosive_C", "TriggeredByGasPump");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_BuildingProp_Explosive.Athena_BuildingProp_Explosive_C.ManuallyTriggerFuse
// (BlueprintCallable, BlueprintEvent)

void AAthena_BuildingProp_Explosive_C::ManuallyTriggerFuse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_BuildingProp_Explosive_C", "ManuallyTriggerFuse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_BuildingProp_Explosive.Athena_BuildingProp_Explosive_C.OnCurieElementInteractBegun_BP
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle            CurieContainerHandle                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     ElementTag                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FCurieInteractParamsHandle       InteractParamsHandle                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AAthena_BuildingProp_Explosive_C::OnCurieElementInteractBegun_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, const struct FCurieInteractParamsHandle& InteractParamsHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_BuildingProp_Explosive_C", "OnCurieElementInteractBegun_BP");

	Params::Athena_BuildingProp_Explosive_C_OnCurieElementInteractBegun_BP Parms{};

	Parms.CurieContainerHandle = move(CurieContainerHandle);
	Parms.ElementTag = move(ElementTag);
	Parms.InteractParamsHandle = move(InteractParamsHandle);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_BuildingProp_Explosive.Athena_BuildingProp_Explosive_C.OnCurieElementInteract_BP
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle            CurieContainerHandle                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     ElementTag                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FCurieInteractParamsHandle       InteractParamsHandle                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AAthena_BuildingProp_Explosive_C::OnCurieElementInteract_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, const struct FCurieInteractParamsHandle& InteractParamsHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_BuildingProp_Explosive_C", "OnCurieElementInteract_BP");

	Params::Athena_BuildingProp_Explosive_C_OnCurieElementInteract_BP Parms{};

	Parms.CurieContainerHandle = move(CurieContainerHandle);
	Parms.ElementTag = move(ElementTag);
	Parms.InteractParamsHandle = move(InteractParamsHandle);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_BuildingProp_Explosive.Athena_BuildingProp_Explosive_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                        InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void AAthena_BuildingProp_Explosive_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_BuildingProp_Explosive_C", "OnDeathPlayEffects");

	Params::Athena_BuildingProp_Explosive_C_OnDeathPlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = move(DamageTags);
	Parms.Momentum = move(Momentum);
	Parms.HitInfo = move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_BuildingProp_Explosive.Athena_BuildingProp_Explosive_C.ExplosionTrace
// (BlueprintCallable, BlueprintEvent)

void AAthena_BuildingProp_Explosive_C::ExplosionTrace()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_BuildingProp_Explosive_C", "ExplosionTrace");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_BuildingProp_Explosive.Athena_BuildingProp_Explosive_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void AAthena_BuildingProp_Explosive_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_BuildingProp_Explosive_C", "OnDeathServer");

	Params::Athena_BuildingProp_Explosive_C_OnDeathServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = move(DamageTags);
	Parms.Momentum = move(Momentum);
	Parms.HitInfo = move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_BuildingProp_Explosive.Athena_BuildingProp_Explosive_C.ExplodeAndDie
// (BlueprintCallable, BlueprintEvent)

void AAthena_BuildingProp_Explosive_C::ExplodeAndDie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_BuildingProp_Explosive_C", "ExplodeAndDie");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_BuildingProp_Explosive.Athena_BuildingProp_Explosive_C.OnFireFx
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AAthena_BuildingProp_Explosive_C::OnFireFx()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_BuildingProp_Explosive_C", "OnFireFx");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_BuildingProp_Explosive.Athena_BuildingProp_Explosive_C.GrowTimeline
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AAthena_BuildingProp_Explosive_C::GrowTimeline()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_BuildingProp_Explosive_C", "GrowTimeline");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_BuildingProp_Explosive.Athena_BuildingProp_Explosive_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void AAthena_BuildingProp_Explosive_C::OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_BuildingProp_Explosive_C", "OnDamageServer");

	Params::Athena_BuildingProp_Explosive_C_OnDamageServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = move(DamageTags);
	Parms.Momentum = move(Momentum);
	Parms.HitInfo = move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_BuildingProp_Explosive.Athena_BuildingProp_Explosive_C.DeactivateEmitter
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AAthena_BuildingProp_Explosive_C::DeactivateEmitter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_BuildingProp_Explosive_C", "DeactivateEmitter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_BuildingProp_Explosive.Athena_BuildingProp_Explosive_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAthena_BuildingProp_Explosive_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_BuildingProp_Explosive_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_BuildingProp_Explosive.Athena_BuildingProp_Explosive_C.OnRep_DamageStateNotify
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthena_BuildingProp_Explosive_C::OnRep_DamageStateNotify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_BuildingProp_Explosive_C", "OnRep_DamageStateNotify");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_BuildingProp_Explosive.Athena_BuildingProp_Explosive_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      EventInstigator                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AAthena_BuildingProp_Explosive_C::ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_BuildingProp_Explosive_C", "ShouldDie");

	Params::Athena_BuildingProp_Explosive_C_ShouldDie Parms{};

	Parms.Damage = Damage;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Athena_BuildingProp_Explosive.Athena_BuildingProp_Explosive_C.OnRep_ExplosiveFxRepNotify
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthena_BuildingProp_Explosive_C::OnRep_ExplosiveFxRepNotify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_BuildingProp_Explosive_C", "OnRep_ExplosiveFxRepNotify");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_BuildingProp_Explosive.Athena_BuildingProp_Explosive_C.ExecuteFireApplicationInRadiusIfCurieEnabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           FireApplicationTarget                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_BuildingProp_Explosive_C::ExecuteFireApplicationInRadiusIfCurieEnabled(class AActor* FireApplicationTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_BuildingProp_Explosive_C", "ExecuteFireApplicationInRadiusIfCurieEnabled");

	Params::Athena_BuildingProp_Explosive_C_ExecuteFireApplicationInRadiusIfCurieEnabled Parms{};

	Parms.FireApplicationTarget = FireApplicationTarget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_BuildingProp_Explosive.Athena_BuildingProp_Explosive_C.BlueprintCanAttemptGenerateResources
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayTagContainer            InTags                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AController*                      InstigatorController                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AAthena_BuildingProp_Explosive_C::BlueprintCanAttemptGenerateResources(const struct FGameplayTagContainer& InTags, class AController* InstigatorController) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_BuildingProp_Explosive_C", "BlueprintCanAttemptGenerateResources");

	Params::Athena_BuildingProp_Explosive_C_BlueprintCanAttemptGenerateResources Parms{};

	Parms.InTags = move(InTags);
	Parms.InstigatorController = InstigatorController;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

