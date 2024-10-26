#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Frontend_EventLevel_NavObject_BPFlag

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Frontend_EventLevel_NavObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Frontend_EventLevel_NavObject_BPFlag.BP_Frontend_EventLevel_NavObject_BPFlag_C
// 0x0090 (0x0560 - 0x04D0)
class ABP_Frontend_EventLevel_NavObject_BPFlag_C final : public ABP_Frontend_EventLevel_NavObject_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Onex1plane;                                        // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight_Silver;                                  // 0x04E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Door_Glint;                                        // 0x04E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight_gold;                                    // 0x04F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Flag;                                              // 0x04F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         FadeGlint_NewTrack_0_F79FB5E045E9529E5A39E791D4E73EFC; // 0x0500(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FadeGlint__Direction_F79FB5E045E9529E5A39E791D4E73EFC; // 0x0504(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_755F[0x3];                                     // 0x0505(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FadeGlint;                                         // 0x0508(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_TimeInxeconds_C43806374F74102F914F5FB480AC08C7; // 0x0510(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_C43806374F74102F914F5FB480AC08C7; // 0x0514(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_C43806374F74102F914F5FB480AC08C7; // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7560[0x7];                                     // 0x0519(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0520(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Mid_1;                                             // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     ElevatorMaterial_override;                         // 0x0530(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        OpeningSound;                                      // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeInSeconds;                                     // 0x0540(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7561[0x4];                                     // 0x0544(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        ClosingSound;                                      // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugPurchased;                                    // 0x0550(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7562[0x7];                                     // 0x0551(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MID_GLOW;                                          // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetBattlePassVisualState(bool Purchased);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void FadeGlint__FinishedFunc();
	void FadeGlint__UpdateFunc();
	void ReceiveActorOnClicked(const struct FKey& ButtonPressed);
	void UpdateVisuals();
	void ReceiveActorEndCursorOver();
	void Open_Door_Sound();
	void Close_Door_Sound();
	void ReceiveActorBeginCursorOver();
	void ReceiveBeginPlay();
	void OnInitializeForPlayer();
	void ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_BPFlag(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Frontend_EventLevel_NavObject_BPFlag_C">();
	}
	static class ABP_Frontend_EventLevel_NavObject_BPFlag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Frontend_EventLevel_NavObject_BPFlag_C>();
	}
};
static_assert(alignof(ABP_Frontend_EventLevel_NavObject_BPFlag_C) == 0x000008, "Wrong alignment on ABP_Frontend_EventLevel_NavObject_BPFlag_C");
static_assert(sizeof(ABP_Frontend_EventLevel_NavObject_BPFlag_C) == 0x000560, "Wrong size on ABP_Frontend_EventLevel_NavObject_BPFlag_C");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BPFlag_C, UberGraphFrame) == 0x0004D0, "Member 'ABP_Frontend_EventLevel_NavObject_BPFlag_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BPFlag_C, Onex1plane) == 0x0004D8, "Member 'ABP_Frontend_EventLevel_NavObject_BPFlag_C::Onex1plane' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BPFlag_C, SpotLight_Silver) == 0x0004E0, "Member 'ABP_Frontend_EventLevel_NavObject_BPFlag_C::SpotLight_Silver' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BPFlag_C, Door_Glint) == 0x0004E8, "Member 'ABP_Frontend_EventLevel_NavObject_BPFlag_C::Door_Glint' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BPFlag_C, SpotLight_gold) == 0x0004F0, "Member 'ABP_Frontend_EventLevel_NavObject_BPFlag_C::SpotLight_gold' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BPFlag_C, Flag) == 0x0004F8, "Member 'ABP_Frontend_EventLevel_NavObject_BPFlag_C::Flag' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BPFlag_C, FadeGlint_NewTrack_0_F79FB5E045E9529E5A39E791D4E73EFC) == 0x000500, "Member 'ABP_Frontend_EventLevel_NavObject_BPFlag_C::FadeGlint_NewTrack_0_F79FB5E045E9529E5A39E791D4E73EFC' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BPFlag_C, FadeGlint__Direction_F79FB5E045E9529E5A39E791D4E73EFC) == 0x000504, "Member 'ABP_Frontend_EventLevel_NavObject_BPFlag_C::FadeGlint__Direction_F79FB5E045E9529E5A39E791D4E73EFC' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BPFlag_C, FadeGlint) == 0x000508, "Member 'ABP_Frontend_EventLevel_NavObject_BPFlag_C::FadeGlint' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BPFlag_C, Timeline_0_TimeInxeconds_C43806374F74102F914F5FB480AC08C7) == 0x000510, "Member 'ABP_Frontend_EventLevel_NavObject_BPFlag_C::Timeline_0_TimeInxeconds_C43806374F74102F914F5FB480AC08C7' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BPFlag_C, Timeline_0_NewTrack_0_C43806374F74102F914F5FB480AC08C7) == 0x000514, "Member 'ABP_Frontend_EventLevel_NavObject_BPFlag_C::Timeline_0_NewTrack_0_C43806374F74102F914F5FB480AC08C7' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BPFlag_C, Timeline_0__Direction_C43806374F74102F914F5FB480AC08C7) == 0x000518, "Member 'ABP_Frontend_EventLevel_NavObject_BPFlag_C::Timeline_0__Direction_C43806374F74102F914F5FB480AC08C7' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BPFlag_C, Timeline_0) == 0x000520, "Member 'ABP_Frontend_EventLevel_NavObject_BPFlag_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BPFlag_C, Mid_1) == 0x000528, "Member 'ABP_Frontend_EventLevel_NavObject_BPFlag_C::Mid_1' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BPFlag_C, ElevatorMaterial_override) == 0x000530, "Member 'ABP_Frontend_EventLevel_NavObject_BPFlag_C::ElevatorMaterial_override' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BPFlag_C, OpeningSound) == 0x000538, "Member 'ABP_Frontend_EventLevel_NavObject_BPFlag_C::OpeningSound' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BPFlag_C, TimeInSeconds) == 0x000540, "Member 'ABP_Frontend_EventLevel_NavObject_BPFlag_C::TimeInSeconds' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BPFlag_C, ClosingSound) == 0x000548, "Member 'ABP_Frontend_EventLevel_NavObject_BPFlag_C::ClosingSound' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BPFlag_C, DebugPurchased) == 0x000550, "Member 'ABP_Frontend_EventLevel_NavObject_BPFlag_C::DebugPurchased' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BPFlag_C, MID_GLOW) == 0x000558, "Member 'ABP_Frontend_EventLevel_NavObject_BPFlag_C::MID_GLOW' has a wrong offset!");

}

