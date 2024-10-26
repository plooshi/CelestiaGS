#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaQuestActor_SW__P1_Install

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BGA_BaseQuestObject_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AthenaQuestActor_SW__P1_Install.AthenaQuestActor_SW__P1_Install_C
// 0x0060 (0x0830 - 0x07D0)
class AAthenaQuestActor_SW__P1_Install_C final : public ABGA_BaseQuestObject_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AthenaQuestActor_SW__P1_Install_C;  // 0x07D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x07D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_Quest_SWShip_Engine1;                            // 0x07E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_Quest_SWShip_Engine;                             // 0x07E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Scale_Anim_Location_Offset_2_15CA12BC4A10C503FF1EB5BB05D7389B; // 0x07F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Scale_Anim_Scale_15CA12BC4A10C503FF1EB5BB05D7389B; // 0x07FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Scale_Anim__Direction_15CA12BC4A10C503FF1EB5BB05D7389B; // 0x0800(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81C9[0x7];                                     // 0x0801(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Scale_Anim;                                        // 0x0808(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SuccessSound;                                      // 0x0810(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        SuccessFX;                                         // 0x0818(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                   SuccessShakeFeedback;                              // 0x0820(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TestVisuals;                                       // 0x0828(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_AthenaQuestActor_SW__P1_Install(int32 EntryPoint);
	void CompleteInteraction(class AFortPlayerController* PC);
	void Test();
	void HandleQuestComponentSuccessEvent(class AFortPlayerController* Player);
	void BlueprintOnInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted);
	void ReceiveBeginPlay();
	void Scale_Anim__UpdateFunc();
	void Scale_Anim__FinishedFunc();

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const;
	class FText BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaQuestActor_SW__P1_Install_C">();
	}
	static class AAthenaQuestActor_SW__P1_Install_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthenaQuestActor_SW__P1_Install_C>();
	}
};
static_assert(alignof(AAthenaQuestActor_SW__P1_Install_C) == 0x000008, "Wrong alignment on AAthenaQuestActor_SW__P1_Install_C");
static_assert(sizeof(AAthenaQuestActor_SW__P1_Install_C) == 0x000830, "Wrong size on AAthenaQuestActor_SW__P1_Install_C");
static_assert(offsetof(AAthenaQuestActor_SW__P1_Install_C, UberGraphFrame_AthenaQuestActor_SW__P1_Install_C) == 0x0007D0, "Member 'AAthenaQuestActor_SW__P1_Install_C::UberGraphFrame_AthenaQuestActor_SW__P1_Install_C' has a wrong offset!");
static_assert(offsetof(AAthenaQuestActor_SW__P1_Install_C, Sphere) == 0x0007D8, "Member 'AAthenaQuestActor_SW__P1_Install_C::Sphere' has a wrong offset!");
static_assert(offsetof(AAthenaQuestActor_SW__P1_Install_C, S_Quest_SWShip_Engine1) == 0x0007E0, "Member 'AAthenaQuestActor_SW__P1_Install_C::S_Quest_SWShip_Engine1' has a wrong offset!");
static_assert(offsetof(AAthenaQuestActor_SW__P1_Install_C, S_Quest_SWShip_Engine) == 0x0007E8, "Member 'AAthenaQuestActor_SW__P1_Install_C::S_Quest_SWShip_Engine' has a wrong offset!");
static_assert(offsetof(AAthenaQuestActor_SW__P1_Install_C, Scale_Anim_Location_Offset_2_15CA12BC4A10C503FF1EB5BB05D7389B) == 0x0007F0, "Member 'AAthenaQuestActor_SW__P1_Install_C::Scale_Anim_Location_Offset_2_15CA12BC4A10C503FF1EB5BB05D7389B' has a wrong offset!");
static_assert(offsetof(AAthenaQuestActor_SW__P1_Install_C, Scale_Anim_Scale_15CA12BC4A10C503FF1EB5BB05D7389B) == 0x0007FC, "Member 'AAthenaQuestActor_SW__P1_Install_C::Scale_Anim_Scale_15CA12BC4A10C503FF1EB5BB05D7389B' has a wrong offset!");
static_assert(offsetof(AAthenaQuestActor_SW__P1_Install_C, Scale_Anim__Direction_15CA12BC4A10C503FF1EB5BB05D7389B) == 0x000800, "Member 'AAthenaQuestActor_SW__P1_Install_C::Scale_Anim__Direction_15CA12BC4A10C503FF1EB5BB05D7389B' has a wrong offset!");
static_assert(offsetof(AAthenaQuestActor_SW__P1_Install_C, Scale_Anim) == 0x000808, "Member 'AAthenaQuestActor_SW__P1_Install_C::Scale_Anim' has a wrong offset!");
static_assert(offsetof(AAthenaQuestActor_SW__P1_Install_C, SuccessSound) == 0x000810, "Member 'AAthenaQuestActor_SW__P1_Install_C::SuccessSound' has a wrong offset!");
static_assert(offsetof(AAthenaQuestActor_SW__P1_Install_C, SuccessFX) == 0x000818, "Member 'AAthenaQuestActor_SW__P1_Install_C::SuccessFX' has a wrong offset!");
static_assert(offsetof(AAthenaQuestActor_SW__P1_Install_C, SuccessShakeFeedback) == 0x000820, "Member 'AAthenaQuestActor_SW__P1_Install_C::SuccessShakeFeedback' has a wrong offset!");
static_assert(offsetof(AAthenaQuestActor_SW__P1_Install_C, TestVisuals) == 0x000828, "Member 'AAthenaQuestActor_SW__P1_Install_C::TestVisuals' has a wrong offset!");

}

