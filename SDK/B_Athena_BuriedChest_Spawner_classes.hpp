#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Athena_BuriedChest_Spawner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AIModule_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Athena_BuriedChest_Spawner.B_Athena_BuriedChest_Spawner_C
// 0x0098 (0x02B8 - 0x0220)
class AB_Athena_BuriedChest_Spawner_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UEnvQuery*                              EQS;                                               // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         Row_MinChanceToSpawn;                              // 0x0238(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_MaxChanceToSpawn;                              // 0x0258(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_SpawnRadius;                                   // 0x0278(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_SpawnEnabled;                                  // 0x0298(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_B_Athena_BuriedChest_Spawner(int32 EntryPoint);
	void ReceiveBeginPlay();
	void EQSFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus);
	void OnReady_3CC8EEA44ECD5BB2C05F4DB46D35F02D(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void UserConstructionScript();
	bool CheckForSpawnRate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Athena_BuriedChest_Spawner_C">();
	}
	static class AB_Athena_BuriedChest_Spawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Athena_BuriedChest_Spawner_C>();
	}
};
static_assert(alignof(AB_Athena_BuriedChest_Spawner_C) == 0x000008, "Wrong alignment on AB_Athena_BuriedChest_Spawner_C");
static_assert(sizeof(AB_Athena_BuriedChest_Spawner_C) == 0x0002B8, "Wrong size on AB_Athena_BuriedChest_Spawner_C");
static_assert(offsetof(AB_Athena_BuriedChest_Spawner_C, UberGraphFrame) == 0x000220, "Member 'AB_Athena_BuriedChest_Spawner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Athena_BuriedChest_Spawner_C, DefaultSceneRoot) == 0x000228, "Member 'AB_Athena_BuriedChest_Spawner_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AB_Athena_BuriedChest_Spawner_C, EQS) == 0x000230, "Member 'AB_Athena_BuriedChest_Spawner_C::EQS' has a wrong offset!");
static_assert(offsetof(AB_Athena_BuriedChest_Spawner_C, Row_MinChanceToSpawn) == 0x000238, "Member 'AB_Athena_BuriedChest_Spawner_C::Row_MinChanceToSpawn' has a wrong offset!");
static_assert(offsetof(AB_Athena_BuriedChest_Spawner_C, Row_MaxChanceToSpawn) == 0x000258, "Member 'AB_Athena_BuriedChest_Spawner_C::Row_MaxChanceToSpawn' has a wrong offset!");
static_assert(offsetof(AB_Athena_BuriedChest_Spawner_C, Row_SpawnRadius) == 0x000278, "Member 'AB_Athena_BuriedChest_Spawner_C::Row_SpawnRadius' has a wrong offset!");
static_assert(offsetof(AB_Athena_BuriedChest_Spawner_C, Row_SpawnEnabled) == 0x000298, "Member 'AB_Athena_BuriedChest_Spawner_C::Row_SpawnEnabled' has a wrong offset!");

}

