#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_BasketballHoopWithMinigame_TALL

#include "Basic.hpp"

#include "B_BasketballHoopWithMinigame_TALL_classes.hpp"
#include "B_BasketballHoopWithMinigame_TALL_parameters.hpp"


namespace SDK
{

// Function B_BasketballHoopWithMinigame_TALL.B_BasketballHoopWithMinigame_TALL_C.ExecuteUbergraph_B_BasketballHoopWithMinigame_TALL
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BasketballHoopWithMinigame_TALL_C::ExecuteUbergraph_B_BasketballHoopWithMinigame_TALL(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BasketballHoopWithMinigame_TALL_C", "ExecuteUbergraph_B_BasketballHoopWithMinigame_TALL");

	Params::B_BasketballHoopWithMinigame_TALL_C_ExecuteUbergraph_B_BasketballHoopWithMinigame_TALL Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BasketballHoopWithMinigame_TALL.B_BasketballHoopWithMinigame_TALL_C.BndEvt__HoopTriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_BasketballHoopWithMinigame_TALL_C::BndEvt__HoopTriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BasketballHoopWithMinigame_TALL_C", "BndEvt__HoopTriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::B_BasketballHoopWithMinigame_TALL_C_BndEvt__HoopTriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BasketballHoopWithMinigame_TALL.B_BasketballHoopWithMinigame_TALL_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      EventInstigator                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AB_BasketballHoopWithMinigame_TALL_C::ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BasketballHoopWithMinigame_TALL_C", "ShouldDie");

	Params::B_BasketballHoopWithMinigame_TALL_C_ShouldDie Parms{};

	Parms.Damage = Damage;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_BasketballHoopWithMinigame_TALL.B_BasketballHoopWithMinigame_TALL_C.GradeScore
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_ToyBasketball_Base_C*          Ball                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumPoints                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TotalDistance                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BasketballHoopWithMinigame_TALL_C::GradeScore(class AB_ToyBasketball_Base_C* Ball, int32* NumPoints, float* TotalDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BasketballHoopWithMinigame_TALL_C", "GradeScore");

	Params::B_BasketballHoopWithMinigame_TALL_C_GradeScore Parms{};

	Parms.Ball = Ball;

	UObject::ProcessEvent(Func, &Parms);

	if (NumPoints != nullptr)
		*NumPoints = Parms.NumPoints;

	if (TotalDistance != nullptr)
		*TotalDistance = Parms.TotalDistance;
}


// Function B_BasketballHoopWithMinigame_TALL.B_BasketballHoopWithMinigame_TALL_C.CreateMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerState*                 PlayerWhoShot                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TotalDistance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ShotScore                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TotalScore                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BasketballHoopWithMinigame_TALL_C::CreateMessage(class AFortPlayerState* PlayerWhoShot, float TotalDistance, int32 ShotScore, int32 TotalScore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BasketballHoopWithMinigame_TALL_C", "CreateMessage");

	Params::B_BasketballHoopWithMinigame_TALL_C_CreateMessage Parms{};

	Parms.PlayerWhoShot = PlayerWhoShot;
	Parms.TotalDistance = TotalDistance;
	Parms.ShotScore = ShotScore;
	Parms.TotalScore = TotalScore;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BasketballHoopWithMinigame_TALL.B_BasketballHoopWithMinigame_TALL_C.OnRep_DisplayMessage
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_BasketballHoopWithMinigame_TALL_C::OnRep_DisplayMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BasketballHoopWithMinigame_TALL_C", "OnRep_DisplayMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BasketballHoopWithMinigame_TALL.B_BasketballHoopWithMinigame_TALL_C.AccumulateScore
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*            PC                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumPoints                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_ToyBasketball_Base_C*          Ball                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TotalScore                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BasketballHoopWithMinigame_TALL_C::AccumulateScore(class AFortPlayerController* PC, int32 NumPoints, class AB_ToyBasketball_Base_C* Ball, int32* TotalScore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BasketballHoopWithMinigame_TALL_C", "AccumulateScore");

	Params::B_BasketballHoopWithMinigame_TALL_C_AccumulateScore Parms{};

	Parms.PC = PC;
	Parms.NumPoints = NumPoints;
	Parms.Ball = Ball;

	UObject::ProcessEvent(Func, &Parms);

	if (TotalScore != nullptr)
		*TotalScore = Parms.TotalScore;
}


// Function B_BasketballHoopWithMinigame_TALL.B_BasketballHoopWithMinigame_TALL_C.IsSequentialShot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*            PC                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_ToyBasketball_Base_C*          Ball                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsSequential                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RunningScore                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BasketballHoopWithMinigame_TALL_C::IsSequentialShot(class AFortPlayerController* PC, class AB_ToyBasketball_Base_C* Ball, bool* IsSequential, int32* RunningScore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BasketballHoopWithMinigame_TALL_C", "IsSequentialShot");

	Params::B_BasketballHoopWithMinigame_TALL_C_IsSequentialShot Parms{};

	Parms.PC = PC;
	Parms.Ball = Ball;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSequential != nullptr)
		*IsSequential = Parms.IsSequential;

	if (RunningScore != nullptr)
		*RunningScore = Parms.RunningScore;
}


// Function B_BasketballHoopWithMinigame_TALL.B_BasketballHoopWithMinigame_TALL_C.PickFormatString
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             FormatString                                           (Parm, OutParm)

void AB_BasketballHoopWithMinigame_TALL_C::PickFormatString(class FText* FormatString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BasketballHoopWithMinigame_TALL_C", "PickFormatString");

	Params::B_BasketballHoopWithMinigame_TALL_C_PickFormatString Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FormatString != nullptr)
		*FormatString = move(Parms.FormatString);
}

}
