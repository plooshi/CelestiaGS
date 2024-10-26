#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CBGA_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CBGA_Parent.CBGA_Parent_C
// 0x0130 (0x0950 - 0x0820)
class ACBGA_Parent_C : public ABuildingGameplayActorConsumable
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0820(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0828(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          ReplicatedCanInteract;                             // 0x0830(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5450[0x7];                                     // 0x0831(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         Row_FirstInteractSpeed;                            // 0x0838(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_SecondInteractSpeed;                           // 0x0858(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   FirstInteractText;                                 // 0x0878(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   SecondInteractText;                                // 0x0890(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_GatherEnabled;                                 // 0x08A8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   GatheredLootTier;                                  // 0x08C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldRollForSwap;                                 // 0x08D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5451[0x7];                                     // 0x08D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         Row_SwapChance;                                    // 0x08D8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 SwapActor;                                         // 0x08F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             SwapActorSpawnOffset;                              // 0x0900(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FScalableFloat                         Row_Enabled;                                       // 0x0930(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_CBGA_Parent(int32 EntryPoint);
	void OnGatherOrInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted);
	void CheckEnabled();
	void RollForSwap();
	void BlueprintOnInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted);
	void ReceiveBeginPlay();
	void OnReady_20953428413833809C18FBAEA984C70A(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void SetDrawDistance();

	class FText BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const;
	bool BlueprintGetInteractionTime(const class AFortPawn* InteractingPawn, float* OutInteractionTime, const EInteractionBeingAttempted InteractionBeingAttempted) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CBGA_Parent_C">();
	}
	static class ACBGA_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACBGA_Parent_C>();
	}
};
static_assert(alignof(ACBGA_Parent_C) == 0x000010, "Wrong alignment on ACBGA_Parent_C");
static_assert(sizeof(ACBGA_Parent_C) == 0x000950, "Wrong size on ACBGA_Parent_C");
static_assert(offsetof(ACBGA_Parent_C, UberGraphFrame) == 0x000820, "Member 'ACBGA_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACBGA_Parent_C, StaticMesh) == 0x000828, "Member 'ACBGA_Parent_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ACBGA_Parent_C, ReplicatedCanInteract) == 0x000830, "Member 'ACBGA_Parent_C::ReplicatedCanInteract' has a wrong offset!");
static_assert(offsetof(ACBGA_Parent_C, Row_FirstInteractSpeed) == 0x000838, "Member 'ACBGA_Parent_C::Row_FirstInteractSpeed' has a wrong offset!");
static_assert(offsetof(ACBGA_Parent_C, Row_SecondInteractSpeed) == 0x000858, "Member 'ACBGA_Parent_C::Row_SecondInteractSpeed' has a wrong offset!");
static_assert(offsetof(ACBGA_Parent_C, FirstInteractText) == 0x000878, "Member 'ACBGA_Parent_C::FirstInteractText' has a wrong offset!");
static_assert(offsetof(ACBGA_Parent_C, SecondInteractText) == 0x000890, "Member 'ACBGA_Parent_C::SecondInteractText' has a wrong offset!");
static_assert(offsetof(ACBGA_Parent_C, Row_GatherEnabled) == 0x0008A8, "Member 'ACBGA_Parent_C::Row_GatherEnabled' has a wrong offset!");
static_assert(offsetof(ACBGA_Parent_C, GatheredLootTier) == 0x0008C8, "Member 'ACBGA_Parent_C::GatheredLootTier' has a wrong offset!");
static_assert(offsetof(ACBGA_Parent_C, ShouldRollForSwap) == 0x0008D0, "Member 'ACBGA_Parent_C::ShouldRollForSwap' has a wrong offset!");
static_assert(offsetof(ACBGA_Parent_C, Row_SwapChance) == 0x0008D8, "Member 'ACBGA_Parent_C::Row_SwapChance' has a wrong offset!");
static_assert(offsetof(ACBGA_Parent_C, SwapActor) == 0x0008F8, "Member 'ACBGA_Parent_C::SwapActor' has a wrong offset!");
static_assert(offsetof(ACBGA_Parent_C, SwapActorSpawnOffset) == 0x000900, "Member 'ACBGA_Parent_C::SwapActorSpawnOffset' has a wrong offset!");
static_assert(offsetof(ACBGA_Parent_C, Row_Enabled) == 0x000930, "Member 'ACBGA_Parent_C::Row_Enabled' has a wrong offset!");

}

