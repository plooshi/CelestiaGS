#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShoppingCartVehicleSK

#include "Basic.hpp"

#include "ShoppingCartVehicleSK_classes.hpp"
#include "ShoppingCartVehicleSK_parameters.hpp"


namespace SDK
{

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.ExecuteUbergraph_ShoppingCartVehicleSK
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShoppingCartVehicleSK_C::ExecuteUbergraph_ShoppingCartVehicleSK(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "ExecuteUbergraph_ShoppingCartVehicleSK");

	Params::ShoppingCartVehicleSK_C_ExecuteUbergraph_ShoppingCartVehicleSK Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.CanHitLastDriver
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::CanHitLastDriver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "CanHitLastDriver");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.StopDriverCameraShake
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::StopDriverCameraShake()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "StopDriverCameraShake");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.StopCoastCameraShake
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::StopCoastCameraShake()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "StopCoastCameraShake");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.StartDriverCameraShake
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::StartDriverCameraShake()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "StartDriverCameraShake");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.StartDriverRumble
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::StartDriverRumble()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "StartDriverRumble");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.StopDriverRumble
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::StopDriverRumble()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "StopDriverRumble");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnIsSprintingChanged
// (Event, Protected, BlueprintEvent)

void AShoppingCartVehicleSK_C::OnIsSprintingChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "OnIsSprintingChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnIsCoastingChanged
// (Event, Protected, BlueprintEvent)

void AShoppingCartVehicleSK_C::OnIsCoastingChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "OnIsCoastingChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnPassengerFiredImpulseWeapon
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::OnPassengerFiredImpulseWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "OnPassengerFiredImpulseWeapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnCollisionHitEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                          HitLocation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitNormalImpulse                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitFrictionImpulse                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitNormal                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HitActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPhysicalSurface                        HitSurfaceType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShoppingCartVehicleSK_C::OnCollisionHitEffects(const struct FVector& HitLocation, const struct FVector& HitNormalImpulse, const struct FVector& HitFrictionImpulse, const struct FVector& HitNormal, class AActor* HitActor, EPhysicalSurface HitSurfaceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "OnCollisionHitEffects");

	Params::ShoppingCartVehicleSK_C_OnCollisionHitEffects Parms{};

	Parms.HitLocation = move(HitLocation);
	Parms.HitNormalImpulse = move(HitNormalImpulse);
	Parms.HitFrictionImpulse = move(HitFrictionImpulse);
	Parms.HitNormal = move(HitNormal);
	Parms.HitActor = HitActor;
	Parms.HitSurfaceType = HitSurfaceType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnHoldExitStopped
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                        ExitingPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShoppingCartVehicleSK_C::OnHoldExitStopped(class AFortPawn* ExitingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "OnHoldExitStopped");

	Params::ShoppingCartVehicleSK_C_OnHoldExitStopped Parms{};

	Parms.ExitingPawn = ExitingPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnHoldExitStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                        ExitingPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ExitDuration                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShoppingCartVehicleSK_C::OnHoldExitStarted(class AFortPawn* ExitingPawn, const float ExitDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "OnHoldExitStarted");

	Params::ShoppingCartVehicleSK_C_OnHoldExitStarted Parms{};

	Parms.ExitingPawn = ExitingPawn;
	Parms.ExitDuration = ExitDuration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AShoppingCartVehicleSK_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnStopTick
// (Event, Public, BlueprintEvent)

void AShoppingCartVehicleSK_C::OnStopTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "OnStopTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.PawnHitByVehicle
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AFortPawn*                        Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ImpactPoint                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ImpactNormal                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          LaunchVector                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShoppingCartVehicleSK_C::PawnHitByVehicle(class AFortPawn* Pawn, const struct FVector& ImpactPoint, const struct FVector& ImpactNormal, const struct FVector& LaunchVector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "PawnHitByVehicle");

	Params::ShoppingCartVehicleSK_C_PawnHitByVehicle Parms{};

	Parms.Pawn = Pawn;
	Parms.ImpactPoint = move(ImpactPoint);
	Parms.ImpactNormal = move(ImpactNormal);
	Parms.LaunchVector = move(LaunchVector);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.CheckWater
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::CheckWater()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "CheckWater");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnExitedWaterVolume
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                          WaterSurfacePoint                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShoppingCartVehicleSK_C::OnExitedWaterVolume(const struct FVector& WaterSurfacePoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "OnExitedWaterVolume");

	Params::ShoppingCartVehicleSK_C_OnExitedWaterVolume Parms{};

	Parms.WaterSurfacePoint = move(WaterSurfacePoint);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnEnteredWaterVolume
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                          WaterSurfacePoint                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShoppingCartVehicleSK_C::OnEnteredWaterVolume(const struct FVector& WaterSurfacePoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "OnEnteredWaterVolume");

	Params::ShoppingCartVehicleSK_C_OnEnteredWaterVolume Parms{};

	Parms.WaterSurfacePoint = move(WaterSurfacePoint);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnSpringCompression
// (Event, Protected, BlueprintEvent)

void AShoppingCartVehicleSK_C::OnSpringCompression()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "OnSpringCompression");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShoppingCartVehicleSK_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "ReceiveEndPlay");

	Params::ShoppingCartVehicleSK_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.Update Damage State
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShoppingCartVehicleSK_C::Update_Damage_State(float Damage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "Update Damage State");

	Params::ShoppingCartVehicleSK_C_Update_Damage_State Parms{};

	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnDamaged
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectContextHandle     EffectContext                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AController*                      EventInstigator                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShoppingCartVehicleSK_C::OnDamaged(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FGameplayEffectContextHandle& EffectContext, class AController* EventInstigator, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "OnDamaged");

	Params::ShoppingCartVehicleSK_C_OnDamaged Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = move(DamageTags);
	Parms.EffectContext = move(EffectContext);
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnPawnExitVehicle
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  PlayerPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ExitSocketName                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShoppingCartVehicleSK_C::OnPawnExitVehicle(class AFortPlayerPawn* PlayerPawn, class FName ExitSocketName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "OnPawnExitVehicle");

	Params::ShoppingCartVehicleSK_C_OnPawnExitVehicle Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ExitSocketName = ExitSocketName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnPawnEnterVehicle
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  PlayerPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SeatIdx                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShoppingCartVehicleSK_C::OnPawnEnterVehicle(class AFortPlayerPawn* PlayerPawn, const int32 SeatIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "OnPawnEnterVehicle");

	Params::ShoppingCartVehicleSK_C_OnPawnEnterVehicle Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIdx = SeatIdx;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.PedalForceFeedback
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::PedalForceFeedback()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "PedalForceFeedback");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.DropItems
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::DropItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "DropItems");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.AttachToCart
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::AttachToCart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "AttachToCart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AShoppingCartVehicleSK_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ShoppingCartVehicleSK_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.UpdateMovementCosmeticParameters
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::UpdateMovementCosmeticParameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "UpdateMovementCosmeticParameters");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                        InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void AShoppingCartVehicleSK_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "OnDeathPlayEffects");

	Params::ShoppingCartVehicleSK_C_OnDeathPlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = move(DamageTags);
	Parms.Momentum = move(Momentum);
	Parms.HitInfo = move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShoppingCartVehicleSK_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "ReceiveTick");

	Params::ShoppingCartVehicleSK_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnLoaded_D134B88042A0DBD581371180D9559024
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShoppingCartVehicleSK_C::OnLoaded_D134B88042A0DBD581371180D9559024(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "OnLoaded_D134B88042A0DBD581371180D9559024");

	Params::ShoppingCartVehicleSK_C_OnLoaded_D134B88042A0DBD581371180D9559024 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnLoaded_D134B88042A0DBD581371180F90B73AD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShoppingCartVehicleSK_C::OnLoaded_D134B88042A0DBD581371180F90B73AD(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "OnLoaded_D134B88042A0DBD581371180F90B73AD");

	Params::ShoppingCartVehicleSK_C_OnLoaded_D134B88042A0DBD581371180F90B73AD Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnLoaded_D134B88042A0DBD581371180351C9FE6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShoppingCartVehicleSK_C::OnLoaded_D134B88042A0DBD581371180351C9FE6(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "OnLoaded_D134B88042A0DBD581371180351C9FE6");

	Params::ShoppingCartVehicleSK_C_OnLoaded_D134B88042A0DBD581371180351C9FE6 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnLoaded_D134B88042A0DBD581371180874944B4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShoppingCartVehicleSK_C::OnLoaded_D134B88042A0DBD581371180874944B4(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "OnLoaded_D134B88042A0DBD581371180874944B4");

	Params::ShoppingCartVehicleSK_C_OnLoaded_D134B88042A0DBD581371180874944B4 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.AttachWeaponToCart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShoppingCartVehicleSK_C::AttachWeaponToCart(int32 Selection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "AttachWeaponToCart");

	Params::ShoppingCartVehicleSK_C_AttachWeaponToCart Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.PlayHapticsOnHit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   HitMagnitude                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShoppingCartVehicleSK_C::PlayHapticsOnHit(float HitMagnitude)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "PlayHapticsOnHit");

	Params::ShoppingCartVehicleSK_C_PlayHapticsOnHit Parms{};

	Parms.HitMagnitude = HitMagnitude;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnRep_CorrectiveImpulse
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::OnRep_CorrectiveImpulse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "OnRep_CorrectiveImpulse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.IsLocalPlayerRiding
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AShoppingCartVehicleSK_C::IsLocalPlayerRiding(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "IsLocalPlayerRiding");

	Params::ShoppingCartVehicleSK_C_IsLocalPlayerRiding Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.UpdateDynamicCameraShake
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::UpdateDynamicCameraShake()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShoppingCartVehicleSK_C", "UpdateDynamicCameraShake");

	UObject::ProcessEvent(Func, nullptr);
}

}
