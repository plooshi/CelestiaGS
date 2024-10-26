#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WinterQuestPresentTag

#include "Basic.hpp"

#include "WinterQuestPresentTag_classes.hpp"
#include "WinterQuestPresentTag_parameters.hpp"


namespace SDK
{

// Function WinterQuestPresentTag.WinterQuestPresentTag_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWinterQuestPresentTag_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WinterQuestPresentTag_C", "PreConstruct");

	Params::WinterQuestPresentTag_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WinterQuestPresentTag.WinterQuestPresentTag_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWinterQuestPresentTag_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WinterQuestPresentTag_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WinterQuestPresentTag.WinterQuestPresentTag_C.OnSetupCharacterNameTag
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FLinearColor                     CharacterName                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterQuestPresentTag_C::OnSetupCharacterNameTag(const struct FLinearColor& CharacterName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WinterQuestPresentTag_C", "OnSetupCharacterNameTag");

	Params::WinterQuestPresentTag_C_OnSetupCharacterNameTag Parms{};

	Parms.CharacterName = move(CharacterName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WinterQuestPresentTag.WinterQuestPresentTag_C.ExecuteUbergraph_WinterQuestPresentTag
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterQuestPresentTag_C::ExecuteUbergraph_WinterQuestPresentTag(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WinterQuestPresentTag_C", "ExecuteUbergraph_WinterQuestPresentTag");

	Params::WinterQuestPresentTag_C_ExecuteUbergraph_WinterQuestPresentTag Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

