#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Loop_GhostMode

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Loop_GhostMode.GCN_Loop_GhostMode_C
// 0x0050 (0x0810 - 0x07C0)
class AGCN_Loop_GhostMode_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         FadeMaterialsTL_Lerp_D7B0BAAD47F48403BE23B98F38D8CA3E; // 0x07C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FadeMaterialsTL__Direction_D7B0BAAD47F48403BE23B98F38D8CA3E; // 0x07CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_610F[0x3];                                     // 0x07CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FadeMaterialsTL;                                   // 0x07D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HitGlowColor;                                      // 0x07D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HotGlowOuterColor;                                 // 0x07E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HitGlowFresnelBrightness;                          // 0x07F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HitGlowFresnelExponent;                            // 0x07FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                   Target_Player;                                     // 0x0800(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Glow__;                                            // 0x0808(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Glow_Priority;                                     // 0x080C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCN_Loop_GhostMode(int32 EntryPoint);
	void FadeMaterialsOut();
	void FadeMaterialsIn();
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void FadeMaterialsTL__UpdateFunc();
	void FadeMaterialsTL__FinishedFunc();
	void Highlight_Lerp(float Alpha, struct FPawnHighlight* Highlight);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Loop_GhostMode_C">();
	}
	static class AGCN_Loop_GhostMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Loop_GhostMode_C>();
	}
};
static_assert(alignof(AGCN_Loop_GhostMode_C) == 0x000008, "Wrong alignment on AGCN_Loop_GhostMode_C");
static_assert(sizeof(AGCN_Loop_GhostMode_C) == 0x000810, "Wrong size on AGCN_Loop_GhostMode_C");
static_assert(offsetof(AGCN_Loop_GhostMode_C, UberGraphFrame) == 0x0007C0, "Member 'AGCN_Loop_GhostMode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_GhostMode_C, FadeMaterialsTL_Lerp_D7B0BAAD47F48403BE23B98F38D8CA3E) == 0x0007C8, "Member 'AGCN_Loop_GhostMode_C::FadeMaterialsTL_Lerp_D7B0BAAD47F48403BE23B98F38D8CA3E' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_GhostMode_C, FadeMaterialsTL__Direction_D7B0BAAD47F48403BE23B98F38D8CA3E) == 0x0007CC, "Member 'AGCN_Loop_GhostMode_C::FadeMaterialsTL__Direction_D7B0BAAD47F48403BE23B98F38D8CA3E' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_GhostMode_C, FadeMaterialsTL) == 0x0007D0, "Member 'AGCN_Loop_GhostMode_C::FadeMaterialsTL' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_GhostMode_C, HitGlowColor) == 0x0007D8, "Member 'AGCN_Loop_GhostMode_C::HitGlowColor' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_GhostMode_C, HotGlowOuterColor) == 0x0007E8, "Member 'AGCN_Loop_GhostMode_C::HotGlowOuterColor' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_GhostMode_C, HitGlowFresnelBrightness) == 0x0007F8, "Member 'AGCN_Loop_GhostMode_C::HitGlowFresnelBrightness' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_GhostMode_C, HitGlowFresnelExponent) == 0x0007FC, "Member 'AGCN_Loop_GhostMode_C::HitGlowFresnelExponent' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_GhostMode_C, Target_Player) == 0x000800, "Member 'AGCN_Loop_GhostMode_C::Target_Player' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_GhostMode_C, Glow__) == 0x000808, "Member 'AGCN_Loop_GhostMode_C::Glow__' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_GhostMode_C, Glow_Priority) == 0x00080C, "Member 'AGCN_Loop_GhostMode_C::Glow_Priority' has a wrong offset!");

}

