#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KillerInfoWidget

#include "Basic.hpp"

#include "KillerInfoWidget_classes.hpp"
#include "KillerInfoWidget_parameters.hpp"


namespace SDK
{

// Function KillerInfoWidget.KillerInfoWidget_C.ExecuteUbergraph_KillerInfoWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKillerInfoWidget_C::ExecuteUbergraph_KillerInfoWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KillerInfoWidget_C", "ExecuteUbergraph_KillerInfoWidget");

	Params::KillerInfoWidget_C_ExecuteUbergraph_KillerInfoWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KillerInfoWidget.KillerInfoWidget_C.SetNumOfKillerKills
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   NumOfKillers                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKillerInfoWidget_C::SetNumOfKillerKills(int32 NumOfKillers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KillerInfoWidget_C", "SetNumOfKillerKills");

	Params::KillerInfoWidget_C_SetNumOfKillerKills Parms{};

	Parms.NumOfKillers = NumOfKillers;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KillerInfoWidget.KillerInfoWidget_C.SetKillerHealthAndShield
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   HealthPercent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ShieldPercent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKillerInfoWidget_C::SetKillerHealthAndShield(float HealthPercent, float ShieldPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KillerInfoWidget_C", "SetKillerHealthAndShield");

	Params::KillerInfoWidget_C_SetKillerHealthAndShield Parms{};

	Parms.HealthPercent = HealthPercent;
	Parms.ShieldPercent = ShieldPercent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KillerInfoWidget.KillerInfoWidget_C.SetKillerWeaponIconAndName
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*                       IconTexture                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*        ItemDef                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKillerInfoWidget_C::SetKillerWeaponIconAndName(class UTexture2D* IconTexture, const class UFortWeaponItemDefinition* ItemDef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KillerInfoWidget_C", "SetKillerWeaponIconAndName");

	Params::KillerInfoWidget_C_SetKillerWeaponIconAndName Parms{};

	Parms.IconTexture = IconTexture;
	Parms.ItemDef = ItemDef;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KillerInfoWidget.KillerInfoWidget_C.SetKillerName
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                           PlayerName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           PlayerID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UKillerInfoWidget_C::SetKillerName(const class FString& PlayerName, const class FString& PlayerID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KillerInfoWidget_C", "SetKillerName");

	Params::KillerInfoWidget_C_SetKillerName Parms{};

	Parms.PlayerName = move(PlayerName);
	Parms.PlayerID = move(PlayerID);

	UObject::ProcessEvent(Func, &Parms);
}

}
