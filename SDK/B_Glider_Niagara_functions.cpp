#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Glider_Niagara

#include "Basic.hpp"

#include "B_Glider_Niagara_classes.hpp"
#include "B_Glider_Niagara_parameters.hpp"


namespace SDK
{

// Function B_Glider_Niagara.B_Glider_Niagara_C.ExecuteUbergraph_B_Glider_Niagara
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Glider_Niagara_C::ExecuteUbergraph_B_Glider_Niagara(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Glider_Niagara_C", "ExecuteUbergraph_B_Glider_Niagara");

	Params::B_Glider_Niagara_C_ExecuteUbergraph_B_Glider_Niagara Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Glider_Niagara.B_Glider_Niagara_C.FX System Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Forward_Dot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Right_Dot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Is_Fully_Deployed                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Glider_Niagara_C::FX_System_Update(float Forward_Dot, float Right_Dot, bool Is_Fully_Deployed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Glider_Niagara_C", "FX System Update");

	Params::B_Glider_Niagara_C_FX_System_Update Parms{};

	Parms.Forward_Dot = Forward_Dot;
	Parms.Right_Dot = Right_Dot;
	Parms.Is_Fully_Deployed = Is_Fully_Deployed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Glider_Niagara.B_Glider_Niagara_C.Audio Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ForwardDot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RightDot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Glider_Niagara_C::Audio_Update(float ForwardDot, float RightDot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Glider_Niagara_C", "Audio Update");

	Params::B_Glider_Niagara_C_Audio_Update Parms{};

	Parms.ForwardDot = ForwardDot;
	Parms.RightDot = RightDot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Glider_Niagara.B_Glider_Niagara_C.OnReceiveParachuteItemdef
// (Event, Protected, BlueprintEvent)

void AB_Glider_Niagara_C::OnReceiveParachuteItemdef()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Glider_Niagara_C", "OnReceiveParachuteItemdef");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Glider_Niagara.B_Glider_Niagara_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Glider_Niagara_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Glider_Niagara_C", "ReceiveEndPlay");

	Params::B_Glider_Niagara_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Glider_Niagara.B_Glider_Niagara_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Glider_Niagara_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Glider_Niagara_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Glider_Niagara.B_Glider_Niagara_C.OnParachuteTrailUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   MovementLengthSquared                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ForwardDot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RightDot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RotationalMovementAcceleration                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Glider_Niagara_C::OnParachuteTrailUpdated(float MovementLengthSquared, float ForwardDot, float RightDot, float RotationalMovementAcceleration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Glider_Niagara_C", "OnParachuteTrailUpdated");

	Params::B_Glider_Niagara_C_OnParachuteTrailUpdated Parms{};

	Parms.MovementLengthSquared = MovementLengthSquared;
	Parms.ForwardDot = ForwardDot;
	Parms.RightDot = RightDot;
	Parms.RotationalMovementAcceleration = RotationalMovementAcceleration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Glider_Niagara.B_Glider_Niagara_C.K2_SetChuteMeshVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bParachuteVisibility                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Glider_Niagara_C::K2_SetChuteMeshVisibility(bool bParachuteVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Glider_Niagara_C", "K2_SetChuteMeshVisibility");

	Params::B_Glider_Niagara_C_K2_SetChuteMeshVisibility Parms{};

	Parms.bParachuteVisibility = bParachuteVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Glider_Niagara.B_Glider_Niagara_C.Do Front End Setup
// (BlueprintCallable, BlueprintEvent)

void AB_Glider_Niagara_C::Do_Front_End_Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Glider_Niagara_C", "Do Front End Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Glider_Niagara.B_Glider_Niagara_C.OnDayPhaseChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// EFortDayPhase                           CurrentDayPhase                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortDayPhase                           PreviousDayPhase                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAtCreation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Glider_Niagara_C::OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Glider_Niagara_C", "OnDayPhaseChanged");

	Params::B_Glider_Niagara_C_OnDayPhaseChanged Parms{};

	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Glider_Niagara.B_Glider_Niagara_C.OnGliderFullyDeployed
// (Event, Public, BlueprintEvent)

void AB_Glider_Niagara_C::OnGliderFullyDeployed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Glider_Niagara_C", "OnGliderFullyDeployed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Glider_Niagara.B_Glider_Niagara_C.On Managed Particles Spawned and Ready
// (BlueprintCallable, BlueprintEvent)

void AB_Glider_Niagara_C::On_Managed_Particles_Spawned_and_Ready()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Glider_Niagara_C", "On Managed Particles Spawned and Ready");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Glider_Niagara.B_Glider_Niagara_C.OnComponentsReady_155854BF43EF505B38EF969297E36093
// (BlueprintCallable, BlueprintEvent)

void AB_Glider_Niagara_C::OnComponentsReady_155854BF43EF505B38EF969297E36093()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Glider_Niagara_C", "OnComponentsReady_155854BF43EF505B38EF969297E36093");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Glider_Niagara.B_Glider_Niagara_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Glider_Niagara_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Glider_Niagara_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Glider_Niagara.B_Glider_Niagara_C.set Niagara System Default Variables
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Forward_Dot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Right_Dot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Glider_Niagara_C::Set_Niagara_System_Default_Variables(float Forward_Dot, float Right_Dot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Glider_Niagara_C", "set Niagara System Default Variables");

	Params::B_Glider_Niagara_C_Set_Niagara_System_Default_Variables Parms{};

	Parms.Forward_Dot = Forward_Dot;
	Parms.Right_Dot = Right_Dot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Glider_Niagara.B_Glider_Niagara_C.get Niagara Particles (Gameplay Tag Array)
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer            Gameplay_Tag_Container                                 (Parm, OutParm)

void AB_Glider_Niagara_C::Get_Niagara_Particles__Gameplay_Tag_Array_(struct FGameplayTagContainer* Gameplay_Tag_Container)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Glider_Niagara_C", "get Niagara Particles (Gameplay Tag Array)");

	Params::B_Glider_Niagara_C_Get_Niagara_Particles__Gameplay_Tag_Array_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Gameplay_Tag_Container != nullptr)
		*Gameplay_Tag_Container = move(Parms.Gameplay_Tag_Container);
}


// Function B_Glider_Niagara.B_Glider_Niagara_C.get Cascade Particles (Gameplay Tag Array)
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer            Gameplay_Tag_Container                                 (Parm, OutParm)

void AB_Glider_Niagara_C::Get_Cascade_Particles__Gameplay_Tag_Array_(struct FGameplayTagContainer* Gameplay_Tag_Container)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Glider_Niagara_C", "get Cascade Particles (Gameplay Tag Array)");

	Params::B_Glider_Niagara_C_Get_Cascade_Particles__Gameplay_Tag_Array_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Gameplay_Tag_Container != nullptr)
		*Gameplay_Tag_Container = move(Parms.Gameplay_Tag_Container);
}


// Function B_Glider_Niagara.B_Glider_Niagara_C.set Niagara System User Variable (Float)
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Glider_Niagara_C::Set_Niagara_System_User_Variable__Float_(class FName Param_Name, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Glider_Niagara_C", "set Niagara System User Variable (Float)");

	Params::B_Glider_Niagara_C_Set_Niagara_System_User_Variable__Float_ Parms{};

	Parms.Param_Name = Param_Name;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Glider_Niagara.B_Glider_Niagara_C.set Niagara System User Variable (Vector)
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Glider_Niagara_C::Set_Niagara_System_User_Variable__Vector_(class FName Param_Name, const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Glider_Niagara_C", "set Niagara System User Variable (Vector)");

	Params::B_Glider_Niagara_C_Set_Niagara_System_User_Variable__Vector_ Parms{};

	Parms.Param_Name = Param_Name;
	Parms.Value = move(Value);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Glider_Niagara.B_Glider_Niagara_C.set Niagara System User Variable (Int)
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Glider_Niagara_C::Set_Niagara_System_User_Variable__Int_(class FName Param_Name, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Glider_Niagara_C", "set Niagara System User Variable (Int)");

	Params::B_Glider_Niagara_C_Set_Niagara_System_User_Variable__Int_ Parms{};

	Parms.Param_Name = Param_Name;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Glider_Niagara.B_Glider_Niagara_C.set Niagara System User Variable (Bool)
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Glider_Niagara_C::Set_Niagara_System_User_Variable__Bool_(class FName Param_Name, bool Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Glider_Niagara_C", "set Niagara System User Variable (Bool)");

	Params::B_Glider_Niagara_C_Set_Niagara_System_User_Variable__Bool_ Parms{};

	Parms.Param_Name = Param_Name;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Glider_Niagara.B_Glider_Niagara_C.set Niagara System User Variable (Color)
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Glider_Niagara_C::Set_Niagara_System_User_Variable__Color_(class FName Param_Name, const struct FLinearColor& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Glider_Niagara_C", "set Niagara System User Variable (Color)");

	Params::B_Glider_Niagara_C_Set_Niagara_System_User_Variable__Color_ Parms{};

	Parms.Param_Name = Param_Name;
	Parms.Value = move(Value);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Glider_Niagara.B_Glider_Niagara_C.activate Niagara System
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Reset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Glider_Niagara_C::Activate_Niagara_System(bool Reset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Glider_Niagara_C", "activate Niagara System");

	Params::B_Glider_Niagara_C_Activate_Niagara_System Parms{};

	Parms.Reset = Reset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Glider_Niagara.B_Glider_Niagara_C.deactivate Niagara System
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Glider_Niagara_C::Deactivate_Niagara_System()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Glider_Niagara_C", "deactivate Niagara System");

	UObject::ProcessEvent(Func, nullptr);
}

}
