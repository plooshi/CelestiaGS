#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaQuestFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UAthenaQuestFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void Athena_HasQuest(class AFortPlayerController* InPlayerControlle, class UFortQuestItemDefinition* InQuestItemRef, class UObject* __WorldContext, bool* PlayerHasQuest);
	static void Athena_HasPlayerCompletedQuest(class AFortPlayerController* InPlayerControlle, class UFortQuestItemDefinition* InQuestItemRef, class UObject* __WorldContext, bool* HasQuest, bool* QuestCompleted);
	static void Athena_CheckQuestAndObjectiveCompletion(class AFortPlayerController* InPlayerControlle, class UFortQuestItemDefinition* InQuestItemRef, class FName ObjectiveBackendName, class UObject* __WorldContext, bool* QuestIsValid, bool* QuestCompleted, bool* ObjectiveCompleted);
	static void Athena_CheckQuestAndObjectiveCompletionMP(TArray<class AFortPlayerController*>& InPlayerControlle, class UFortQuestItemDefinition* InQuestItemRef, class FName ObjectiveBackendName, class UObject* __WorldContext, bool* QuestIsValid, bool* QuestCompleted, bool* ObjectiveCompleted);
	static void Athena_GiveQuestUpdateToPlayers(class UFortQuestItemDefinition* InQuestItemRef, class FName ObjectiveBackendName, const struct FDataTableRowHandle& ObjectiveStatEvent, TArray<class AFortPlayerController*>& PlayerControllersForUpdate, class UObject* __WorldContext);
	static void Athena_QuestObjectiveCounter(class AFortPlayerController* FortPlayerControllerAthena, class UFortQuestItemDefinition* ObjectiveItem, const struct FDataTableRowHandle& ObjectiveStat, class UObject* __WorldContext, int32* QuestCountAchieved, int32* QuestCountRequired, bool* CountSuccessfullyReturned);
	static void Athena_CheckCreativeMode(class AGameStateBase* InGameState, class UObject* __WorldContext, bool* CanCompleteQuest);
	static bool Athena_IsCreativeOrPlaygroundPlaylist(const struct FGameplayTagContainer& TagContainer, class UObject* __WorldContext);
	static void Athena_PlayQuestRewardFeedback(bool PlayFX_onPlayer_, class USoundBase* Success_Sound, class UParticleSystem* Success_Particles, class UForceFeedbackEffect* Success_Shake, class AActor* QuestActor, class AFortPlayerPawn* PlayerPawn, class UObject* __WorldContext);
	static void Athena_PartyAssistCheck(class AFortPlayerController* PlayerController, class FName ObjectiveBackendName, class UObject* __WorldContext, bool* bIsAssistingObjective, bool* bIsValidPlayerController);
	static void Athena_CheckActorHasTags(class AActor* TargetActor, const struct FGameplayTagContainer& TagsToCheck, bool OnlyExactMatch, class UObject* __WorldContext, bool* bDidActorHaveTags);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaQuestFunctionLibrary_C">();
	}
	static class UAthenaQuestFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaQuestFunctionLibrary_C>();
	}
};
static_assert(alignof(UAthenaQuestFunctionLibrary_C) == 0x000008, "Wrong alignment on UAthenaQuestFunctionLibrary_C");
static_assert(sizeof(UAthenaQuestFunctionLibrary_C) == 0x000028, "Wrong size on UAthenaQuestFunctionLibrary_C");

}
