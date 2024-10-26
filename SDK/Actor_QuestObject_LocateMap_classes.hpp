#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Actor_QuestObject_LocateMap

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Actor_QuestObject_LocateMap.Actor_QuestObject_LocateMap_C
// 0x0078 (0x0C38 - 0x0BC0)
class AActor_QuestObject_LocateMap_C final : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BC0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   S_ObjectiveBoard_Pin_C;                            // 0x0BC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_ObjectiveBoard_Note_E;                           // 0x0BD0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Touchbox;                                          // 0x0BD8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Deco_AppleMap;                                     // 0x0BE0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*               QuestItem;                                         // 0x0BE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   ObjBackendName;                                    // 0x0BF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          CreativeMode;                                      // 0x0BF8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RequiresConditionToComplete;                       // 0x0BF9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsLocallyValid;                                    // 0x0BFA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_877C[0x5];                                     // 0x0BFB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             GenericSuccessSound;                               // 0x0C00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        GenericSuccessFX;                                  // 0x0C08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelayBeforeGenericSuccessSoundAndFX;               // 0x0C10(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PlayerObjectiveCount;                              // 0x0C14(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 PlayerThatTriggeredObject;                         // 0x0C18(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAthenaSKPushVehicle*               ShoppingCartThatTriggered;                         // 0x0C20(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          bTestQuest;                                        // 0x0C28(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_877D[0x3];                                     // 0x0C29(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           TagToCheck;                                        // 0x0C2C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsQuestShared;                                    // 0x0C34(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Actor_QuestObject_LocateMap(int32 EntryPoint);
	void Particle();
	void ReceiveBeginPlay();
	void OnUsingFocalPointChanged(class AFortPlayerControllerAthena* FocalPointUser, class AActor* FocalPointActor, bool bUsingFocalPoint);
	void QuestActor_EndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void TouchedQuestActor(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void TouchedActorInCreativeMode();
	void TellChildOfSuccess();
	void PlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags);
	void ObjectiveSuccessfullyCompleted(class AActor* PlayerWhoTriggeredObject);
	void QuestInitializedAndValid();
	void QuestSuccessfullyUpdated();
	void OnRep_ShoppingCartThatTriggered();
	void CheckCreativeMode();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Actor_QuestObject_LocateMap_C">();
	}
	static class AActor_QuestObject_LocateMap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AActor_QuestObject_LocateMap_C>();
	}
};
static_assert(alignof(AActor_QuestObject_LocateMap_C) == 0x000008, "Wrong alignment on AActor_QuestObject_LocateMap_C");
static_assert(sizeof(AActor_QuestObject_LocateMap_C) == 0x000C38, "Wrong size on AActor_QuestObject_LocateMap_C");
static_assert(offsetof(AActor_QuestObject_LocateMap_C, UberGraphFrame) == 0x000BC0, "Member 'AActor_QuestObject_LocateMap_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AActor_QuestObject_LocateMap_C, S_ObjectiveBoard_Pin_C) == 0x000BC8, "Member 'AActor_QuestObject_LocateMap_C::S_ObjectiveBoard_Pin_C' has a wrong offset!");
static_assert(offsetof(AActor_QuestObject_LocateMap_C, S_ObjectiveBoard_Note_E) == 0x000BD0, "Member 'AActor_QuestObject_LocateMap_C::S_ObjectiveBoard_Note_E' has a wrong offset!");
static_assert(offsetof(AActor_QuestObject_LocateMap_C, Touchbox) == 0x000BD8, "Member 'AActor_QuestObject_LocateMap_C::Touchbox' has a wrong offset!");
static_assert(offsetof(AActor_QuestObject_LocateMap_C, Deco_AppleMap) == 0x000BE0, "Member 'AActor_QuestObject_LocateMap_C::Deco_AppleMap' has a wrong offset!");
static_assert(offsetof(AActor_QuestObject_LocateMap_C, QuestItem) == 0x000BE8, "Member 'AActor_QuestObject_LocateMap_C::QuestItem' has a wrong offset!");
static_assert(offsetof(AActor_QuestObject_LocateMap_C, ObjBackendName) == 0x000BF0, "Member 'AActor_QuestObject_LocateMap_C::ObjBackendName' has a wrong offset!");
static_assert(offsetof(AActor_QuestObject_LocateMap_C, CreativeMode) == 0x000BF8, "Member 'AActor_QuestObject_LocateMap_C::CreativeMode' has a wrong offset!");
static_assert(offsetof(AActor_QuestObject_LocateMap_C, RequiresConditionToComplete) == 0x000BF9, "Member 'AActor_QuestObject_LocateMap_C::RequiresConditionToComplete' has a wrong offset!");
static_assert(offsetof(AActor_QuestObject_LocateMap_C, IsLocallyValid) == 0x000BFA, "Member 'AActor_QuestObject_LocateMap_C::IsLocallyValid' has a wrong offset!");
static_assert(offsetof(AActor_QuestObject_LocateMap_C, GenericSuccessSound) == 0x000C00, "Member 'AActor_QuestObject_LocateMap_C::GenericSuccessSound' has a wrong offset!");
static_assert(offsetof(AActor_QuestObject_LocateMap_C, GenericSuccessFX) == 0x000C08, "Member 'AActor_QuestObject_LocateMap_C::GenericSuccessFX' has a wrong offset!");
static_assert(offsetof(AActor_QuestObject_LocateMap_C, DelayBeforeGenericSuccessSoundAndFX) == 0x000C10, "Member 'AActor_QuestObject_LocateMap_C::DelayBeforeGenericSuccessSoundAndFX' has a wrong offset!");
static_assert(offsetof(AActor_QuestObject_LocateMap_C, PlayerObjectiveCount) == 0x000C14, "Member 'AActor_QuestObject_LocateMap_C::PlayerObjectiveCount' has a wrong offset!");
static_assert(offsetof(AActor_QuestObject_LocateMap_C, PlayerThatTriggeredObject) == 0x000C18, "Member 'AActor_QuestObject_LocateMap_C::PlayerThatTriggeredObject' has a wrong offset!");
static_assert(offsetof(AActor_QuestObject_LocateMap_C, ShoppingCartThatTriggered) == 0x000C20, "Member 'AActor_QuestObject_LocateMap_C::ShoppingCartThatTriggered' has a wrong offset!");
static_assert(offsetof(AActor_QuestObject_LocateMap_C, bTestQuest) == 0x000C28, "Member 'AActor_QuestObject_LocateMap_C::bTestQuest' has a wrong offset!");
static_assert(offsetof(AActor_QuestObject_LocateMap_C, TagToCheck) == 0x000C2C, "Member 'AActor_QuestObject_LocateMap_C::TagToCheck' has a wrong offset!");
static_assert(offsetof(AActor_QuestObject_LocateMap_C, bIsQuestShared) == 0x000C34, "Member 'AActor_QuestObject_LocateMap_C::bIsQuestShared' has a wrong offset!");

}

