#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Curie_ElectricBody

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_Curie_ElectricBody.GCNL_Curie_ElectricBody_C
// 0x0020 (0x07E0 - 0x07C0)
class AGCNL_Curie_ElectricBody_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundCue*                              Curie_Body_Sound;                                  // 0x07C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Mesh;                                              // 0x07D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Curie_Body_Audio_Component;                        // 0x07D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCNL_Curie_ElectricBody(int32 EntryPoint);
	void ReceiveDestroyed();
	void OnApplication(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Curie_ElectricBody_C">();
	}
	static class AGCNL_Curie_ElectricBody_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Curie_ElectricBody_C>();
	}
};
static_assert(alignof(AGCNL_Curie_ElectricBody_C) == 0x000008, "Wrong alignment on AGCNL_Curie_ElectricBody_C");
static_assert(sizeof(AGCNL_Curie_ElectricBody_C) == 0x0007E0, "Wrong size on AGCNL_Curie_ElectricBody_C");
static_assert(offsetof(AGCNL_Curie_ElectricBody_C, UberGraphFrame) == 0x0007C0, "Member 'AGCNL_Curie_ElectricBody_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Curie_ElectricBody_C, Curie_Body_Sound) == 0x0007C8, "Member 'AGCNL_Curie_ElectricBody_C::Curie_Body_Sound' has a wrong offset!");
static_assert(offsetof(AGCNL_Curie_ElectricBody_C, Mesh) == 0x0007D0, "Member 'AGCNL_Curie_ElectricBody_C::Mesh' has a wrong offset!");
static_assert(offsetof(AGCNL_Curie_ElectricBody_C, Curie_Body_Audio_Component) == 0x0007D8, "Member 'AGCNL_Curie_ElectricBody_C::Curie_Body_Audio_Component' has a wrong offset!");

}
