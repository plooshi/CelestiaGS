#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PhysicsBall_Master

#include "Basic.hpp"

#include "PhysicsBall_Master_classes.hpp"
#include "PhysicsBall_Master_parameters.hpp"


namespace SDK
{

// Function PhysicsBall_Master.PhysicsBall_Master_C.ExecuteUbergraph_PhysicsBall_Master
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APhysicsBall_Master_C::ExecuteUbergraph_PhysicsBall_Master(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicsBall_Master_C", "ExecuteUbergraph_PhysicsBall_Master");

	Params::PhysicsBall_Master_C_ExecuteUbergraph_PhysicsBall_Master Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*              WaterBody                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWaterInteractionComponent*   Param_WaterInteractionComponent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsFirstBody                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APhysicsBall_Master_C::BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* Param_WaterInteractionComponent, bool bIsFirstBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicsBall_Master_C", "BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature");

	Params::PhysicsBall_Master_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature Parms{};

	Parms.WaterBody = WaterBody;
	Parms.Param_WaterInteractionComponent = Param_WaterInteractionComponent;
	Parms.bIsFirstBody = bIsFirstBody;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.Water Collision
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*              WaterBody                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWaterInteractionComponent*   Param_WaterInteractionComponent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsFirstBody                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APhysicsBall_Master_C::Water_Collision(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* Param_WaterInteractionComponent, bool bIsFirstBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicsBall_Master_C", "Water Collision");

	Params::PhysicsBall_Master_C_Water_Collision Parms{};

	Parms.WaterBody = WaterBody;
	Parms.Param_WaterInteractionComponent = Param_WaterInteractionComponent;
	Parms.bIsFirstBody = bIsFirstBody;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.OnPawnTouchedMe
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            TouchingPawn                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APhysicsBall_Master_C::OnPawnTouchedMe(class APawn* TouchingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicsBall_Master_C", "OnPawnTouchedMe");

	Params::PhysicsBall_Master_C_OnPawnTouchedMe Parms{};

	Parms.TouchingPawn = TouchingPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void APhysicsBall_Master_C::BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicsBall_Master_C", "BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::PhysicsBall_Master_C_BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.DrawDebugTrajectory
// (BlueprintCallable, BlueprintEvent)

void APhysicsBall_Master_C::DrawDebugTrajectory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicsBall_Master_C", "DrawDebugTrajectory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.OnReplicatedVelocityStartOrStop
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bStart                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APhysicsBall_Master_C::OnReplicatedVelocityStartOrStop(bool bStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicsBall_Master_C", "OnReplicatedVelocityStartOrStop");

	Params::PhysicsBall_Master_C_OnReplicatedVelocityStartOrStop Parms{};

	Parms.bStart = bStart;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              MyComp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSelfMoved                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitNormal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void APhysicsBall_Master_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicsBall_Master_C", "ReceiveHit");

	Params::PhysicsBall_Master_C_ReceiveHit Parms{};

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = move(HitLocation);
	Parms.HitNormal = move(HitNormal);
	Parms.NormalImpulse = move(NormalImpulse);
	Parms.Hit = move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.ProjectileStop
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       ImpactResult                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void APhysicsBall_Master_C::ProjectileStop(const struct FHitResult& ImpactResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicsBall_Master_C", "ProjectileStop");

	Params::PhysicsBall_Master_C_ProjectileStop Parms{};

	Parms.ImpactResult = move(ImpactResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APhysicsBall_Master_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicsBall_Master_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APhysicsBall_Master_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicsBall_Master_C", "ReceiveTick");

	Params::PhysicsBall_Master_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.UpdateDirectionAndRotationRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APhysicsBall_Master_C::UpdateDirectionAndRotationRate(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicsBall_Master_C", "UpdateDirectionAndRotationRate");

	Params::PhysicsBall_Master_C_UpdateDirectionAndRotationRate Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.ApplyImpulseToBall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitVelocity                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HitMagnitude                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APhysicsBall_Master_C::ApplyImpulseToBall(const struct FVector& HitLocation, const struct FVector& HitVelocity, float HitMagnitude)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicsBall_Master_C", "ApplyImpulseToBall");

	Params::PhysicsBall_Master_C_ApplyImpulseToBall Parms{};

	Parms.HitLocation = move(HitLocation);
	Parms.HitVelocity = move(HitVelocity);
	Parms.HitMagnitude = HitMagnitude;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.SetTickingEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldTick                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APhysicsBall_Master_C::SetTickingEnabled(bool ShouldTick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicsBall_Master_C", "SetTickingEnabled");

	Params::PhysicsBall_Master_C_SetTickingEnabled Parms{};

	Parms.ShouldTick = ShouldTick;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.GetHitScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitVelocity                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float APhysicsBall_Master_C::GetHitScale(const struct FVector& HitLocation, const struct FVector& HitVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicsBall_Master_C", "GetHitScale");

	Params::PhysicsBall_Master_C_GetHitScale Parms{};

	Parms.HitLocation = move(HitLocation);
	Parms.HitVelocity = move(HitVelocity);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.OnRep_PlotTrajectory
// (BlueprintCallable, BlueprintEvent)

void APhysicsBall_Master_C::OnRep_PlotTrajectory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicsBall_Master_C", "OnRep_PlotTrajectory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.SetBallVelocityAndStartTicking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          NewVelocity                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APhysicsBall_Master_C::SetBallVelocityAndStartTicking(const struct FVector& NewVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicsBall_Master_C", "SetBallVelocityAndStartTicking");

	Params::PhysicsBall_Master_C_SetBallVelocityAndStartTicking Parms{};

	Parms.NewVelocity = move(NewVelocity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.MakeBallDormant
// (Public, BlueprintCallable, BlueprintEvent)

void APhysicsBall_Master_C::MakeBallDormant()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicsBall_Master_C", "MakeBallDormant");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.ImpactFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           HitActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          SpawnLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Overlap_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APhysicsBall_Master_C::ImpactFX(class AActor* HitActor, const struct FVector& SpawnLocation, bool Overlap_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicsBall_Master_C", "ImpactFX");

	Params::PhysicsBall_Master_C_ImpactFX Parms{};

	Parms.HitActor = HitActor;
	Parms.SpawnLocation = move(SpawnLocation);
	Parms.Overlap_ = Overlap_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.CheckStopInWaterOnServer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APhysicsBall_Master_C::CheckStopInWaterOnServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicsBall_Master_C", "CheckStopInWaterOnServer");

	UObject::ProcessEvent(Func, nullptr);
}

}
