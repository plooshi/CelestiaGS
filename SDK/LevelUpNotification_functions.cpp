#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LevelUpNotification

#include "Basic.hpp"

#include "LevelUpNotification_classes.hpp"
#include "LevelUpNotification_parameters.hpp"


namespace SDK
{

// Function LevelUpNotification.LevelUpNotification_C.ExecuteUbergraph_LevelUpNotification
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelUpNotification_C::ExecuteUbergraph_LevelUpNotification(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelUpNotification_C", "ExecuteUbergraph_LevelUpNotification");

	Params::LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LevelUpNotification.LevelUpNotification_C.UpdateQuestRewardVisuals
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*              RewardItem                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelUpNotification_C::UpdateQuestRewardVisuals(const class UFortItemDefinition* RewardItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelUpNotification_C", "UpdateQuestRewardVisuals");

	Params::LevelUpNotification_C_UpdateQuestRewardVisuals Parms{};

	Parms.RewardItem = RewardItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LevelUpNotification.LevelUpNotification_C.EventSetHeaderStyle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLevelUp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULevelUpNotification_C::EventSetHeaderStyle(bool IsLevelUp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelUpNotification_C", "EventSetHeaderStyle");

	Params::LevelUpNotification_C_EventSetHeaderStyle Parms{};

	Parms.IsLevelUp = IsLevelUp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LevelUpNotification.LevelUpNotification_C.UpdateLevelUpVisuals
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*              RewardItem                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelUpNotification_C::UpdateLevelUpVisuals(const class UFortItemDefinition* RewardItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelUpNotification_C", "UpdateLevelUpVisuals");

	Params::LevelUpNotification_C_UpdateLevelUpVisuals Parms{};

	Parms.RewardItem = RewardItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LevelUpNotification.LevelUpNotification_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULevelUpNotification_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelUpNotification_C", "PreConstruct");

	Params::LevelUpNotification_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LevelUpNotification.LevelUpNotification_C.RarityVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortRarity                             Rarity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelUpNotification_C::RarityVisuals(EFortRarity Rarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelUpNotification_C", "RarityVisuals");

	Params::LevelUpNotification_C_RarityVisuals Parms{};

	Parms.Rarity = Rarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LevelUpNotification.LevelUpNotification_C.Intro FInished
// (BlueprintCallable, BlueprintEvent)

void ULevelUpNotification_C::Intro_FInished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelUpNotification_C", "Intro FInished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LevelUpNotification.LevelUpNotification_C.StartNotificationOutro
// (Event, Public, BlueprintEvent)

void ULevelUpNotification_C::StartNotificationOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelUpNotification_C", "StartNotificationOutro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LevelUpNotification.LevelUpNotification_C.StartNotificationIntro
// (Event, Protected, BlueprintEvent)

void ULevelUpNotification_C::StartNotificationIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelUpNotification_C", "StartNotificationIntro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LevelUpNotification.LevelUpNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULevelUpNotification_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelUpNotification_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
