#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_Pawn_Parent

#include "Basic.hpp"

#include "EnemyPawn_Parent_Deimos_classes.hpp"
#include "Engine_structs.hpp"
#include "Enum_NPC_AlertLevel_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass NPC_Pawn_Parent.NPC_Pawn_Parent_C
// 0x00A0 (0x2550 - 0x24B0)
class ANPC_Pawn_Parent_C : public AEnemyPawn_Parent_Deimos_C
{
public:
	uint8                                         Pad_50F1[0x4];                                     // 0x24A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_NPC_Pawn_Parent_C;                  // 0x24A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortWidgetComponent*                   NPCStatusWidget;                                   // 0x24B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_NPC_RecentlyDamaged;                            // 0x24B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_NPC_AlertLevel                           NPC_AlertLevel;                                    // 0x24C0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50F2[0x7];                                     // 0x24C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<Enum_NPC_AlertLevel, struct FGameplayTag> NPC_AlertLevelToTagMap;                            // 0x24C8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         NPC_MaxDistanceFromDamageInstigatorToDrawHealthBar; // 0x2518(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GameplayCue_PickupGrabbed;                         // 0x251C(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	EFortRarity                                   NPC_BestLootRarityInInventory;                     // 0x2524(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50F3[0x3];                                     // 0x2525(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  GrantStartingItemsAbilityTC;                       // 0x2528(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          NPC_DebugPawn;                                     // 0x2548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NPC_ShowInventoryRarityVisuals;                    // 0x2549(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50F4[0x2];                                     // 0x254A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InventoryGlowDelay;                                // 0x254C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_NPC_Pawn_Parent(int32 EntryPoint);
	void TestLoot();
	void NPC_ParentLaunchVehicle(class AActor* Vehicle, const struct FVector& Velocity);
	void WidgetVisibilityChanged(bool bVisible);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void GrantStartingItems();
	void ReceiveBeginPlay();
	void OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	bool ShouldUpdateSkeletalMesh();
	void NPC_ApplyRecentlyDamagedTag(class UClass* RecentlyDamagedOverride);
	void NPC_GetAlertLevelInfo(Enum_NPC_AlertLevel* AlertLevel, struct FGameplayTag* AlertLevelTag, bool* ValidDataFound);
	void OnRep_NPC_AlertLevel();
	void NPC_SetBestLootRarityInInventory(EFortRarity* Param_NPC_BestLootRarityInInventory);
	void NPC_PawnDebugMessage(const class FString& String, bool OnlyWhenDebug);
	void NPC_SendGameplayCuePickupGrabbed();
	void OnRep_NPC_BestLootRarityInInventory();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPC_Pawn_Parent_C">();
	}
	static class ANPC_Pawn_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANPC_Pawn_Parent_C>();
	}
};
static_assert(alignof(ANPC_Pawn_Parent_C) == 0x000010, "Wrong alignment on ANPC_Pawn_Parent_C");
static_assert(sizeof(ANPC_Pawn_Parent_C) == 0x002550, "Wrong size on ANPC_Pawn_Parent_C");
static_assert(offsetof(ANPC_Pawn_Parent_C, UberGraphFrame_NPC_Pawn_Parent_C) == 0x0024A8, "Member 'ANPC_Pawn_Parent_C::UberGraphFrame_NPC_Pawn_Parent_C' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Parent_C, NPCStatusWidget) == 0x0024B0, "Member 'ANPC_Pawn_Parent_C::NPCStatusWidget' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Parent_C, GE_NPC_RecentlyDamaged) == 0x0024B8, "Member 'ANPC_Pawn_Parent_C::GE_NPC_RecentlyDamaged' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Parent_C, NPC_AlertLevel) == 0x0024C0, "Member 'ANPC_Pawn_Parent_C::NPC_AlertLevel' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Parent_C, NPC_AlertLevelToTagMap) == 0x0024C8, "Member 'ANPC_Pawn_Parent_C::NPC_AlertLevelToTagMap' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Parent_C, NPC_MaxDistanceFromDamageInstigatorToDrawHealthBar) == 0x002518, "Member 'ANPC_Pawn_Parent_C::NPC_MaxDistanceFromDamageInstigatorToDrawHealthBar' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Parent_C, GameplayCue_PickupGrabbed) == 0x00251C, "Member 'ANPC_Pawn_Parent_C::GameplayCue_PickupGrabbed' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Parent_C, NPC_BestLootRarityInInventory) == 0x002524, "Member 'ANPC_Pawn_Parent_C::NPC_BestLootRarityInInventory' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Parent_C, GrantStartingItemsAbilityTC) == 0x002528, "Member 'ANPC_Pawn_Parent_C::GrantStartingItemsAbilityTC' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Parent_C, NPC_DebugPawn) == 0x002548, "Member 'ANPC_Pawn_Parent_C::NPC_DebugPawn' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Parent_C, NPC_ShowInventoryRarityVisuals) == 0x002549, "Member 'ANPC_Pawn_Parent_C::NPC_ShowInventoryRarityVisuals' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Parent_C, InventoryGlowDelay) == 0x00254C, "Member 'ANPC_Pawn_Parent_C::InventoryGlowDelay' has a wrong offset!");

}
