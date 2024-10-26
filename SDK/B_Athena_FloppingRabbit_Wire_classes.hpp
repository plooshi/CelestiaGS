#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Athena_FloppingRabbit_Wire

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C
// 0x0120 (0x03B0 - 0x0290)
class AB_Athena_FloppingRabbit_Wire_C final : public AFortHookGunRope
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        HookOffset;                                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Hook;                                              // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ItemSocket;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Tight_NewTrack_0_2BE8D2B34AFDAA1683CD80A41CD171EB; // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Tight__Direction_2BE8D2B34AFDAA1683CD80A41CD171EB; // 0x02BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65FA[0x3];                                     // 0x02BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Tight;                                             // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Reel_In_Tighten_1E0649734E07457DB41A579E4AB855B8;  // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Reel_In_Reel_Lerp_Controller_1E0649734E07457DB41A579E4AB855B8; // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Reel_In__Direction_1E0649734E07457DB41A579E4AB855B8; // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65FB[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Reel_In;                                           // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APrj_Athena_FloppingRabbit_C*           Projectile_Actor;                                  // 0x02E0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x02E8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class USoundBase*                             ReelSound;                                         // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             ReattachSound;                                     // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           RopeActiveTag;                                     // 0x0300(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           BlockIncomingPickups;                              // 0x0308(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  Change_Equipment_Tag;                              // 0x0310(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         ReelinPlayRate;                                    // 0x0330(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           T_Stop;                                            // 0x0334(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65FC[0x4];                                     // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           ReelMontage;                                       // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Toss;                                              // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65FD[0x3];                                     // 0x0349(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HookRelativeStartingLoc;                           // 0x034C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               HookRelativeStartingRot;                           // 0x0358(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CatchParticleOn;                                   // 0x0364(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_65FE[0x3];                                     // 0x0365(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           ReelWeaponMontage;                                 // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  T_FlopperSpawn;                                    // 0x0370(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                             Sound_Pickup;                                      // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPickup*>                    PickedUpPickups;                                   // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         RopeWidth;                                         // 0x03A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Athena_FloppingRabbit_Wire(int32 EntryPoint);
	void ActivateProjectileMovmentComponent(class UActorComponent* Target);
	void ReceiveBeginPlay();
	void StartReeling();
	void AttachNonFishingPickups(const class AFortPickup*& InputPin);
	void DropAndDestroy();
	void PlayMontage();
	void TightenRope();
	void OnCompleted_B5133DFD4E421DB08F1ED09C5E2197B4(class FName NotifyName);
	void OnBlendOut_B5133DFD4E421DB08F1ED09C5E2197B4(class FName NotifyName);
	void OnInterrupted_B5133DFD4E421DB08F1ED09C5E2197B4(class FName NotifyName);
	void OnNotifyBegin_B5133DFD4E421DB08F1ED09C5E2197B4(class FName NotifyName);
	void OnNotifyEnd_B5133DFD4E421DB08F1ED09C5E2197B4(class FName NotifyName);
	void Tight__UpdateFunc();
	void Tight__FinishedFunc();
	void Reel_In__UpdateFunc();
	void Reel_In__FinishedFunc();
	void OnRep_CatchParticleOn();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Athena_FloppingRabbit_Wire_C">();
	}
	static class AB_Athena_FloppingRabbit_Wire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Athena_FloppingRabbit_Wire_C>();
	}
};
static_assert(alignof(AB_Athena_FloppingRabbit_Wire_C) == 0x000008, "Wrong alignment on AB_Athena_FloppingRabbit_Wire_C");
static_assert(sizeof(AB_Athena_FloppingRabbit_Wire_C) == 0x0003B0, "Wrong size on AB_Athena_FloppingRabbit_Wire_C");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, UberGraphFrame) == 0x000290, "Member 'AB_Athena_FloppingRabbit_Wire_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, HookOffset) == 0x000298, "Member 'AB_Athena_FloppingRabbit_Wire_C::HookOffset' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, ParticleSystem) == 0x0002A0, "Member 'AB_Athena_FloppingRabbit_Wire_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, Hook) == 0x0002A8, "Member 'AB_Athena_FloppingRabbit_Wire_C::Hook' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, ItemSocket) == 0x0002B0, "Member 'AB_Athena_FloppingRabbit_Wire_C::ItemSocket' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, Tight_NewTrack_0_2BE8D2B34AFDAA1683CD80A41CD171EB) == 0x0002B8, "Member 'AB_Athena_FloppingRabbit_Wire_C::Tight_NewTrack_0_2BE8D2B34AFDAA1683CD80A41CD171EB' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, Tight__Direction_2BE8D2B34AFDAA1683CD80A41CD171EB) == 0x0002BC, "Member 'AB_Athena_FloppingRabbit_Wire_C::Tight__Direction_2BE8D2B34AFDAA1683CD80A41CD171EB' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, Tight) == 0x0002C0, "Member 'AB_Athena_FloppingRabbit_Wire_C::Tight' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, Reel_In_Tighten_1E0649734E07457DB41A579E4AB855B8) == 0x0002C8, "Member 'AB_Athena_FloppingRabbit_Wire_C::Reel_In_Tighten_1E0649734E07457DB41A579E4AB855B8' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, Reel_In_Reel_Lerp_Controller_1E0649734E07457DB41A579E4AB855B8) == 0x0002CC, "Member 'AB_Athena_FloppingRabbit_Wire_C::Reel_In_Reel_Lerp_Controller_1E0649734E07457DB41A579E4AB855B8' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, Reel_In__Direction_1E0649734E07457DB41A579E4AB855B8) == 0x0002D0, "Member 'AB_Athena_FloppingRabbit_Wire_C::Reel_In__Direction_1E0649734E07457DB41A579E4AB855B8' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, Reel_In) == 0x0002D8, "Member 'AB_Athena_FloppingRabbit_Wire_C::Reel_In' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, Projectile_Actor) == 0x0002E0, "Member 'AB_Athena_FloppingRabbit_Wire_C::Projectile_Actor' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, PlayerPawn) == 0x0002E8, "Member 'AB_Athena_FloppingRabbit_Wire_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, ReelSound) == 0x0002F0, "Member 'AB_Athena_FloppingRabbit_Wire_C::ReelSound' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, ReattachSound) == 0x0002F8, "Member 'AB_Athena_FloppingRabbit_Wire_C::ReattachSound' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, RopeActiveTag) == 0x000300, "Member 'AB_Athena_FloppingRabbit_Wire_C::RopeActiveTag' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, BlockIncomingPickups) == 0x000308, "Member 'AB_Athena_FloppingRabbit_Wire_C::BlockIncomingPickups' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, Change_Equipment_Tag) == 0x000310, "Member 'AB_Athena_FloppingRabbit_Wire_C::Change_Equipment_Tag' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, ReelinPlayRate) == 0x000330, "Member 'AB_Athena_FloppingRabbit_Wire_C::ReelinPlayRate' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, T_Stop) == 0x000334, "Member 'AB_Athena_FloppingRabbit_Wire_C::T_Stop' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, ReelMontage) == 0x000340, "Member 'AB_Athena_FloppingRabbit_Wire_C::ReelMontage' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, Toss) == 0x000348, "Member 'AB_Athena_FloppingRabbit_Wire_C::Toss' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, HookRelativeStartingLoc) == 0x00034C, "Member 'AB_Athena_FloppingRabbit_Wire_C::HookRelativeStartingLoc' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, HookRelativeStartingRot) == 0x000358, "Member 'AB_Athena_FloppingRabbit_Wire_C::HookRelativeStartingRot' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, CatchParticleOn) == 0x000364, "Member 'AB_Athena_FloppingRabbit_Wire_C::CatchParticleOn' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, ReelWeaponMontage) == 0x000368, "Member 'AB_Athena_FloppingRabbit_Wire_C::ReelWeaponMontage' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, T_FlopperSpawn) == 0x000370, "Member 'AB_Athena_FloppingRabbit_Wire_C::T_FlopperSpawn' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, Sound_Pickup) == 0x000390, "Member 'AB_Athena_FloppingRabbit_Wire_C::Sound_Pickup' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, PickedUpPickups) == 0x000398, "Member 'AB_Athena_FloppingRabbit_Wire_C::PickedUpPickups' has a wrong offset!");
static_assert(offsetof(AB_Athena_FloppingRabbit_Wire_C, RopeWidth) == 0x0003A8, "Member 'AB_Athena_FloppingRabbit_Wire_C::RopeWidth' has a wrong offset!");

}

