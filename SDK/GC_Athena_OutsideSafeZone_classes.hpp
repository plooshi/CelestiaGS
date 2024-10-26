#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Athena_OutsideSafeZone

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C
// 0x0090 (0x0850 - 0x07C0)
class AGC_Athena_OutsideSafeZone_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   Random_Lighting_Light;                             // 0x07C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         LightningFlashTL_LERP_3FDEC95248645BE865DCD0840F99915A; // 0x07D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            LightningFlashTL__Direction_3FDEC95248645BE865DCD0840F99915A; // 0x07D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F71[0x3];                                     // 0x07D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     LightningFlashTL;                                  // 0x07D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StormOpacity;                                      // 0x07E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F72[0x4];                                     // 0x07E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Storm_Sound;                                       // 0x07E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightningFlashDiameter;                            // 0x07F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightningFlashHeight;                              // 0x07F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Lightning_Spawn_Location;                          // 0x07F8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _ChanceOfLightningMesh;                            // 0x0804(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Lightning_Intensity;                               // 0x0808(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightningIntensityMin;                             // 0x080C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightningIntensityMax;                             // 0x0810(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightningTimelinePlaySpeedMin;                     // 0x0814(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightningTimelinePlaySpeedMax;                     // 0x0818(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F73[0x4];                                     // 0x081C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerPawn_Athena_C*                   Player_Pawn;                                       // 0x0820(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightningFlashRepeatDelayMin;                      // 0x0828(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightningFlashRepeatDelayMax;                      // 0x082C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Storm_Stage;                                       // 0x0830(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           StormAudioTag_Low;                                 // 0x0834(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           StormAudioTag_Medium;                              // 0x083C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           StormAudioTag_High;                                // 0x0844(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GC_Athena_OutsideSafeZone(int32 EntryPoint);
	void FlashTimeline();
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void LightningFlashTL__UpdateFunc();
	void LightningFlashTL__FinishedFunc();
	void AddStormAudio(class APlayerPawn_Athena_C* PlayerPawnAthena);
	void RemoveStormAudio(class APlayerPawn_Athena_C* PlayerPawnAthena);
	void Get_Location_in_Circle_XY(struct FVector* Location_Local_Space);
	void Random_Lighting_Flashes();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Athena_OutsideSafeZone_C">();
	}
	static class AGC_Athena_OutsideSafeZone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Athena_OutsideSafeZone_C>();
	}
};
static_assert(alignof(AGC_Athena_OutsideSafeZone_C) == 0x000008, "Wrong alignment on AGC_Athena_OutsideSafeZone_C");
static_assert(sizeof(AGC_Athena_OutsideSafeZone_C) == 0x000850, "Wrong size on AGC_Athena_OutsideSafeZone_C");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, UberGraphFrame) == 0x0007C0, "Member 'AGC_Athena_OutsideSafeZone_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, Random_Lighting_Light) == 0x0007C8, "Member 'AGC_Athena_OutsideSafeZone_C::Random_Lighting_Light' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, LightningFlashTL_LERP_3FDEC95248645BE865DCD0840F99915A) == 0x0007D0, "Member 'AGC_Athena_OutsideSafeZone_C::LightningFlashTL_LERP_3FDEC95248645BE865DCD0840F99915A' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, LightningFlashTL__Direction_3FDEC95248645BE865DCD0840F99915A) == 0x0007D4, "Member 'AGC_Athena_OutsideSafeZone_C::LightningFlashTL__Direction_3FDEC95248645BE865DCD0840F99915A' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, LightningFlashTL) == 0x0007D8, "Member 'AGC_Athena_OutsideSafeZone_C::LightningFlashTL' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, StormOpacity) == 0x0007E0, "Member 'AGC_Athena_OutsideSafeZone_C::StormOpacity' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, Storm_Sound) == 0x0007E8, "Member 'AGC_Athena_OutsideSafeZone_C::Storm_Sound' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, LightningFlashDiameter) == 0x0007F0, "Member 'AGC_Athena_OutsideSafeZone_C::LightningFlashDiameter' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, LightningFlashHeight) == 0x0007F4, "Member 'AGC_Athena_OutsideSafeZone_C::LightningFlashHeight' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, Lightning_Spawn_Location) == 0x0007F8, "Member 'AGC_Athena_OutsideSafeZone_C::Lightning_Spawn_Location' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, _ChanceOfLightningMesh) == 0x000804, "Member 'AGC_Athena_OutsideSafeZone_C::_ChanceOfLightningMesh' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, Lightning_Intensity) == 0x000808, "Member 'AGC_Athena_OutsideSafeZone_C::Lightning_Intensity' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, LightningIntensityMin) == 0x00080C, "Member 'AGC_Athena_OutsideSafeZone_C::LightningIntensityMin' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, LightningIntensityMax) == 0x000810, "Member 'AGC_Athena_OutsideSafeZone_C::LightningIntensityMax' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, LightningTimelinePlaySpeedMin) == 0x000814, "Member 'AGC_Athena_OutsideSafeZone_C::LightningTimelinePlaySpeedMin' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, LightningTimelinePlaySpeedMax) == 0x000818, "Member 'AGC_Athena_OutsideSafeZone_C::LightningTimelinePlaySpeedMax' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, Player_Pawn) == 0x000820, "Member 'AGC_Athena_OutsideSafeZone_C::Player_Pawn' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, LightningFlashRepeatDelayMin) == 0x000828, "Member 'AGC_Athena_OutsideSafeZone_C::LightningFlashRepeatDelayMin' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, LightningFlashRepeatDelayMax) == 0x00082C, "Member 'AGC_Athena_OutsideSafeZone_C::LightningFlashRepeatDelayMax' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, Storm_Stage) == 0x000830, "Member 'AGC_Athena_OutsideSafeZone_C::Storm_Stage' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, StormAudioTag_Low) == 0x000834, "Member 'AGC_Athena_OutsideSafeZone_C::StormAudioTag_Low' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, StormAudioTag_Medium) == 0x00083C, "Member 'AGC_Athena_OutsideSafeZone_C::StormAudioTag_Medium' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, StormAudioTag_High) == 0x000844, "Member 'AGC_Athena_OutsideSafeZone_C::StormAudioTag_High' has a wrong offset!");

}

