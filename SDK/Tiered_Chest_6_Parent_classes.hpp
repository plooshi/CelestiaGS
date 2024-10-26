#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tiered_Chest_6_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C
// 0x0078 (0x0D80 - 0x0D08)
class ATiered_Chest_6_Parent_C final : public ABuildingContainer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0D08(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   S_Chest_SmokeSheet;                                // 0x0D10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   TrasureLight;                                      // 0x0D18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Chest_Ambient_Sound;                               // 0x0D20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         MobileOnInteractTL_LERP_FCCEF5B24027951FFA8E469BC9BB2374; // 0x0D28(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            MobileOnInteractTL__Direction_FCCEF5B24027951FFA8E469BC9BB2374; // 0x0D2C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_82B4[0x3];                                     // 0x0D2D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     MobileOnInteractTL;                                // 0x0D30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Loot_Effect;                                       // 0x0D38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SpecialChestOpenSound;                             // 0x0D40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       MIDs;                                              // 0x0D48(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         MobileWiggleAmount;                                // 0x0D58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_82B5[0x4];                                     // 0x0D5C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ChimeTimer;                                        // 0x0D60(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         ChestChimeVisualUpdate;                            // 0x0D68(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_82B6[0x4];                                     // 0x0D6C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMiniMapComponent*                  CheatMiniMapComponent;                             // 0x0D70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CheatMiniMapVFX;                                   // 0x0D78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Tiered_Chest_6_Parent(int32 EntryPoint);
	void ShowTieredChests(bool bShow);
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void Chime_Visual();
	void Mobile_OnDisconnect();
	void Mobile_OnInteract();
	void Mobile_Outline_Off();
	void Mobile_Outline_On();
	void OnSetSearched();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void OnLoot();
	void MobileOnInteractTL__UpdateFunc();
	void MobileOnInteractTL__FinishedFunc();
	void UserConstructionScript();
	void SetLightVisibility(bool Visible);
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);
	void CreateMobileMIDs();
	void CleanupWiggleMIDs();
	void GetMaxAudibleDistance(float* Max_Distance);
	void OnSetCustomDepthStencilValue(const TArray<class UPrimitiveComponent*>& PrimComponents, bool bUseCustomDepth, int32 StencilValue, bool* bOutConsume);

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Tiered_Chest_6_Parent_C">();
	}
	static class ATiered_Chest_6_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATiered_Chest_6_Parent_C>();
	}
};
static_assert(alignof(ATiered_Chest_6_Parent_C) == 0x000008, "Wrong alignment on ATiered_Chest_6_Parent_C");
static_assert(sizeof(ATiered_Chest_6_Parent_C) == 0x000D80, "Wrong size on ATiered_Chest_6_Parent_C");
static_assert(offsetof(ATiered_Chest_6_Parent_C, UberGraphFrame) == 0x000D08, "Member 'ATiered_Chest_6_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATiered_Chest_6_Parent_C, S_Chest_SmokeSheet) == 0x000D10, "Member 'ATiered_Chest_6_Parent_C::S_Chest_SmokeSheet' has a wrong offset!");
static_assert(offsetof(ATiered_Chest_6_Parent_C, TrasureLight) == 0x000D18, "Member 'ATiered_Chest_6_Parent_C::TrasureLight' has a wrong offset!");
static_assert(offsetof(ATiered_Chest_6_Parent_C, Chest_Ambient_Sound) == 0x000D20, "Member 'ATiered_Chest_6_Parent_C::Chest_Ambient_Sound' has a wrong offset!");
static_assert(offsetof(ATiered_Chest_6_Parent_C, MobileOnInteractTL_LERP_FCCEF5B24027951FFA8E469BC9BB2374) == 0x000D28, "Member 'ATiered_Chest_6_Parent_C::MobileOnInteractTL_LERP_FCCEF5B24027951FFA8E469BC9BB2374' has a wrong offset!");
static_assert(offsetof(ATiered_Chest_6_Parent_C, MobileOnInteractTL__Direction_FCCEF5B24027951FFA8E469BC9BB2374) == 0x000D2C, "Member 'ATiered_Chest_6_Parent_C::MobileOnInteractTL__Direction_FCCEF5B24027951FFA8E469BC9BB2374' has a wrong offset!");
static_assert(offsetof(ATiered_Chest_6_Parent_C, MobileOnInteractTL) == 0x000D30, "Member 'ATiered_Chest_6_Parent_C::MobileOnInteractTL' has a wrong offset!");
static_assert(offsetof(ATiered_Chest_6_Parent_C, Loot_Effect) == 0x000D38, "Member 'ATiered_Chest_6_Parent_C::Loot_Effect' has a wrong offset!");
static_assert(offsetof(ATiered_Chest_6_Parent_C, SpecialChestOpenSound) == 0x000D40, "Member 'ATiered_Chest_6_Parent_C::SpecialChestOpenSound' has a wrong offset!");
static_assert(offsetof(ATiered_Chest_6_Parent_C, MIDs) == 0x000D48, "Member 'ATiered_Chest_6_Parent_C::MIDs' has a wrong offset!");
static_assert(offsetof(ATiered_Chest_6_Parent_C, MobileWiggleAmount) == 0x000D58, "Member 'ATiered_Chest_6_Parent_C::MobileWiggleAmount' has a wrong offset!");
static_assert(offsetof(ATiered_Chest_6_Parent_C, ChimeTimer) == 0x000D60, "Member 'ATiered_Chest_6_Parent_C::ChimeTimer' has a wrong offset!");
static_assert(offsetof(ATiered_Chest_6_Parent_C, ChestChimeVisualUpdate) == 0x000D68, "Member 'ATiered_Chest_6_Parent_C::ChestChimeVisualUpdate' has a wrong offset!");
static_assert(offsetof(ATiered_Chest_6_Parent_C, CheatMiniMapComponent) == 0x000D70, "Member 'ATiered_Chest_6_Parent_C::CheatMiniMapComponent' has a wrong offset!");
static_assert(offsetof(ATiered_Chest_6_Parent_C, CheatMiniMapVFX) == 0x000D78, "Member 'ATiered_Chest_6_Parent_C::CheatMiniMapVFX' has a wrong offset!");

}

