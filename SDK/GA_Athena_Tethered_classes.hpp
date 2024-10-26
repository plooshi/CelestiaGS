#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Tethered

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_Tethered.GA_Athena_Tethered_C
// 0x0078 (0x0AF0 - 0x0A78)
class UGA_Athena_Tethered_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FActiveGameplayEffectHandle            GE_TetheredHandle;                                 // 0x0A80(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        OwningFortPlayerPawn;                              // 0x0A88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxSpeedToPlayGCN;                                 // 0x0A90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GCTagPlayerLand;                                   // 0x0A94(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_611F[0x4];                                     // 0x0A9C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 StructureDamageGE;                                 // 0x0AA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           SmashGC;                                           // 0x0AA8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         BreakStructuresOnTetherEnabled;                    // 0x0AB0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         BreakStructuresOnTetherRange;                      // 0x0AD0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Athena_Tethered(int32 EntryPoint);
	void BreakBuildingsAtPlayerInDirectionOfTether();
	void MovementModeChangedDelegate_Event_0(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void BreakNearbyStructures(const struct FVector& ForwardVector, float OffsetForward);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Tethered_C">();
	}
	static class UGA_Athena_Tethered_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Tethered_C>();
	}
};
static_assert(alignof(UGA_Athena_Tethered_C) == 0x000008, "Wrong alignment on UGA_Athena_Tethered_C");
static_assert(sizeof(UGA_Athena_Tethered_C) == 0x000AF0, "Wrong size on UGA_Athena_Tethered_C");
static_assert(offsetof(UGA_Athena_Tethered_C, UberGraphFrame) == 0x000A78, "Member 'UGA_Athena_Tethered_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Tethered_C, GE_TetheredHandle) == 0x000A80, "Member 'UGA_Athena_Tethered_C::GE_TetheredHandle' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Tethered_C, OwningFortPlayerPawn) == 0x000A88, "Member 'UGA_Athena_Tethered_C::OwningFortPlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Tethered_C, MaxSpeedToPlayGCN) == 0x000A90, "Member 'UGA_Athena_Tethered_C::MaxSpeedToPlayGCN' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Tethered_C, GCTagPlayerLand) == 0x000A94, "Member 'UGA_Athena_Tethered_C::GCTagPlayerLand' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Tethered_C, StructureDamageGE) == 0x000AA0, "Member 'UGA_Athena_Tethered_C::StructureDamageGE' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Tethered_C, SmashGC) == 0x000AA8, "Member 'UGA_Athena_Tethered_C::SmashGC' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Tethered_C, BreakStructuresOnTetherEnabled) == 0x000AB0, "Member 'UGA_Athena_Tethered_C::BreakStructuresOnTetherEnabled' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Tethered_C, BreakStructuresOnTetherRange) == 0x000AD0, "Member 'UGA_Athena_Tethered_C::BreakStructuresOnTetherRange' has a wrong offset!");

}

