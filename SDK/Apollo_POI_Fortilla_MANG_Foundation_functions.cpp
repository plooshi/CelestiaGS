#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_POI_Fortilla_MANG_Foundation

#include "Basic.hpp"

#include "Apollo_POI_Fortilla_MANG_Foundation_classes.hpp"
#include "Apollo_POI_Fortilla_MANG_Foundation_parameters.hpp"


namespace SDK
{

// Function Apollo_POI_Fortilla_MANG_Foundation.Apollo_POI_Fortilla_MANG_Foundation_C.ExecuteUbergraph_Apollo_POI_Fortilla_MANG_Foundation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Apollo_POI_Fortilla_MANG_Foundation::AApollo_POI_Fortilla_MANG_Foundation_C::ExecuteUbergraph_Apollo_POI_Fortilla_MANG_Foundation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Apollo_POI_Fortilla_MANG_Foundation_C", "ExecuteUbergraph_Apollo_POI_Fortilla_MANG_Foundation");

	Params::Apollo_POI_Fortilla_MANG_Foundation_C_ExecuteUbergraph_Apollo_POI_Fortilla_MANG_Foundation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Apollo_POI_Fortilla_MANG_Foundation.Apollo_POI_Fortilla_MANG_Foundation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Apollo_POI_Fortilla_MANG_Foundation::AApollo_POI_Fortilla_MANG_Foundation_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Apollo_POI_Fortilla_MANG_Foundation_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Apollo_POI_Fortilla_MANG_Foundation.Apollo_POI_Fortilla_MANG_Foundation_C.OnReady_8839FADC45083F770C8FCBAF3C0FCBAA
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*             GameState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylist*                    Playlist                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            PlaylistContextTags                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Apollo_POI_Fortilla_MANG_Foundation::AApollo_POI_Fortilla_MANG_Foundation_C::OnReady_8839FADC45083F770C8FCBAF3C0FCBAA(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Apollo_POI_Fortilla_MANG_Foundation_C", "OnReady_8839FADC45083F770C8FCBAF3C0FCBAA");

	Params::Apollo_POI_Fortilla_MANG_Foundation_C_OnReady_8839FADC45083F770C8FCBAF3C0FCBAA Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = move(PlaylistContextTags);

	UObject::ProcessEvent(Func, &Parms);
}

}
