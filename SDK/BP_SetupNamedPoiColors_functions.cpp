#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SetupNamedPoiColors

#include "Basic.hpp"

#include "BP_SetupNamedPoiColors_classes.hpp"
#include "BP_SetupNamedPoiColors_parameters.hpp"


namespace SDK
{

// Function BP_SetupNamedPoiColors.BP_SetupNamedPoiColors_C.ExecuteUbergraph_BP_SetupNamedPoiColors
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SetupNamedPoiColors_C::ExecuteUbergraph_BP_SetupNamedPoiColors(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SetupNamedPoiColors_C", "ExecuteUbergraph_BP_SetupNamedPoiColors");

	Params::BP_SetupNamedPoiColors_C_ExecuteUbergraph_BP_SetupNamedPoiColors Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SetupNamedPoiColors.BP_SetupNamedPoiColors_C.OnCurrentPlaylistLoaded_Bind
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             PlaylistName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            PlaylistContextTags                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_SetupNamedPoiColors_C::OnCurrentPlaylistLoaded_Bind(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SetupNamedPoiColors_C", "OnCurrentPlaylistLoaded_Bind");

	Params::BP_SetupNamedPoiColors_C_OnCurrentPlaylistLoaded_Bind Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = move(PlaylistContextTags);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SetupNamedPoiColors.BP_SetupNamedPoiColors_C.UpdateNamedPoiColorDelegate_Bind
// (BlueprintCallable, BlueprintEvent)

void ABP_SetupNamedPoiColors_C::UpdateNamedPoiColorDelegate_Bind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SetupNamedPoiColors_C", "UpdateNamedPoiColorDelegate_Bind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SetupNamedPoiColors.BP_SetupNamedPoiColors_C.RefreshCalendar (Authority Only)
// (BlueprintCallable, BlueprintEvent)

void ABP_SetupNamedPoiColors_C::RefreshCalendar__Authority_Only_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SetupNamedPoiColors_C", "RefreshCalendar (Authority Only)");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SetupNamedPoiColors.BP_SetupNamedPoiColors_C.RefreshMapLocations
// (BlueprintCallable, BlueprintEvent)

void ABP_SetupNamedPoiColors_C::RefreshMapLocations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SetupNamedPoiColors_C", "RefreshMapLocations");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SetupNamedPoiColors.BP_SetupNamedPoiColors_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SetupNamedPoiColors_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SetupNamedPoiColors_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SetupNamedPoiColors.BP_SetupNamedPoiColors_C.OnReady_48C0CAD94148AE3E93FCDD8F6267DB95
// (BlueprintCallable, BlueprintEvent)

void ABP_SetupNamedPoiColors_C::OnReady_48C0CAD94148AE3E93FCDD8F6267DB95()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SetupNamedPoiColors_C", "OnReady_48C0CAD94148AE3E93FCDD8F6267DB95");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SetupNamedPoiColors.BP_SetupNamedPoiColors_C.OnReady_734C353B401F21D840C0A0BFD0A60019
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameStateBase*                   GameState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SetupNamedPoiColors_C::OnReady_734C353B401F21D840C0A0BFD0A60019(class AGameStateBase* GameState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SetupNamedPoiColors_C", "OnReady_734C353B401F21D840C0A0BFD0A60019");

	Params::BP_SetupNamedPoiColors_C_OnReady_734C353B401F21D840C0A0BFD0A60019 Parms{};

	Parms.GameState = GameState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SetupNamedPoiColors.BP_SetupNamedPoiColors_C.OnReady_734C353B401F21D840C0A0BF35BB4063
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameStateBase*                   GameState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SetupNamedPoiColors_C::OnReady_734C353B401F21D840C0A0BF35BB4063(class AGameStateBase* GameState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SetupNamedPoiColors_C", "OnReady_734C353B401F21D840C0A0BF35BB4063");

	Params::BP_SetupNamedPoiColors_C_OnReady_734C353B401F21D840C0A0BF35BB4063 Parms{};

	Parms.GameState = GameState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SetupNamedPoiColors.BP_SetupNamedPoiColors_C.OnReady_734C353B401F21D840C0A0BF8E84199F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameStateBase*                   GameState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SetupNamedPoiColors_C::OnReady_734C353B401F21D840C0A0BF8E84199F(class AGameStateBase* GameState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SetupNamedPoiColors_C", "OnReady_734C353B401F21D840C0A0BF8E84199F");

	Params::BP_SetupNamedPoiColors_C_OnReady_734C353B401F21D840C0A0BF8E84199F Parms{};

	Parms.GameState = GameState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SetupNamedPoiColors.BP_SetupNamedPoiColors_C.MakeLocationsVisibleInSnow
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer            LocationTags                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_SetupNamedPoiColors_C::MakeLocationsVisibleInSnow(const struct FGameplayTagContainer& LocationTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SetupNamedPoiColors_C", "MakeLocationsVisibleInSnow");

	Params::BP_SetupNamedPoiColors_C_MakeLocationsVisibleInSnow Parms{};

	Parms.LocationTags = move(LocationTags);

	UObject::ProcessEvent(Func, &Parms);
}

}
