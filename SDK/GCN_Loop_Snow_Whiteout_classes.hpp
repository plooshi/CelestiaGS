#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Loop_Snow_Whiteout

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Loop_Snow_Whiteout.GCN_Loop_Snow_Whiteout_C
// 0x0038 (0x07F8 - 0x07C0)
class AGCN_Loop_Snow_Whiteout_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                  PostProcess;                                       // 0x07C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         FadeinOut_Post_BDCA5FC943E3CD00D42B59A9A0D1C530;   // 0x07D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeinOut_Fade_BDCA5FC943E3CD00D42B59A9A0D1C530;   // 0x07D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FadeinOut__Direction_BDCA5FC943E3CD00D42B59A9A0D1C530; // 0x07D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EBB[0x7];                                     // 0x07D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FadeinOut;                                         // 0x07E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundOnFadeIn;                                     // 0x07E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundOnFadeOut;                                    // 0x07F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCN_Loop_Snow_Whiteout(int32 EntryPoint);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ReceiveDestroyed();
	void FadeinOut__UpdateFunc();
	void FadeinOut__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Loop_Snow_Whiteout_C">();
	}
	static class AGCN_Loop_Snow_Whiteout_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Loop_Snow_Whiteout_C>();
	}
};
static_assert(alignof(AGCN_Loop_Snow_Whiteout_C) == 0x000008, "Wrong alignment on AGCN_Loop_Snow_Whiteout_C");
static_assert(sizeof(AGCN_Loop_Snow_Whiteout_C) == 0x0007F8, "Wrong size on AGCN_Loop_Snow_Whiteout_C");
static_assert(offsetof(AGCN_Loop_Snow_Whiteout_C, UberGraphFrame) == 0x0007C0, "Member 'AGCN_Loop_Snow_Whiteout_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Snow_Whiteout_C, PostProcess) == 0x0007C8, "Member 'AGCN_Loop_Snow_Whiteout_C::PostProcess' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Snow_Whiteout_C, FadeinOut_Post_BDCA5FC943E3CD00D42B59A9A0D1C530) == 0x0007D0, "Member 'AGCN_Loop_Snow_Whiteout_C::FadeinOut_Post_BDCA5FC943E3CD00D42B59A9A0D1C530' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Snow_Whiteout_C, FadeinOut_Fade_BDCA5FC943E3CD00D42B59A9A0D1C530) == 0x0007D4, "Member 'AGCN_Loop_Snow_Whiteout_C::FadeinOut_Fade_BDCA5FC943E3CD00D42B59A9A0D1C530' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Snow_Whiteout_C, FadeinOut__Direction_BDCA5FC943E3CD00D42B59A9A0D1C530) == 0x0007D8, "Member 'AGCN_Loop_Snow_Whiteout_C::FadeinOut__Direction_BDCA5FC943E3CD00D42B59A9A0D1C530' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Snow_Whiteout_C, FadeinOut) == 0x0007E0, "Member 'AGCN_Loop_Snow_Whiteout_C::FadeinOut' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Snow_Whiteout_C, SoundOnFadeIn) == 0x0007E8, "Member 'AGCN_Loop_Snow_Whiteout_C::SoundOnFadeIn' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Snow_Whiteout_C, SoundOnFadeOut) == 0x0007F0, "Member 'AGCN_Loop_Snow_Whiteout_C::SoundOnFadeOut' has a wrong offset!");

}
