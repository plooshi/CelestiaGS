#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MenuScreen_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass MenuScreen_Athena.MenuScreen_Athena_C
// 0x1C30 (0x1FE0 - 0x03B0)
class UMenuScreen_Athena_C final : public UFrontendAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;                    // 0x03B8(0x0078)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x0430(0x0078)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x04A8(0x0078)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x0520(0x0078)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt_3;                    // 0x0598(0x00A0)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt_2;                    // 0x0638(0x00A0)()
	struct FAnimNode_LegIK                        AnimGraphNode_LegIK_2;                             // 0x06D8(0x00F8)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x07D0(0x0108)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_3;                              // 0x08D8(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0920(0x00C0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x09E0(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x0AA8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x0AD0(0x0028)()
	struct FAnimNode_LegIK                        AnimGraphNode_LegIK_1;                             // 0x0AF8(0x00F8)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone_5;                          // 0x0BF0(0x00F0)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone_4;                          // 0x0CE0(0x00F0)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone_3;                          // 0x0DD0(0x00F0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x0EC0(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x0F08(0x0048)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone_2;                          // 0x0F50(0x00F0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x1040(0x00C8)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_2;                   // 0x1108(0x00B0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x11B8(0x0048)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1200(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1220(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1240(0x0030)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x1270(0x0028)()
	struct FAnimNode_LegIK                        AnimGraphNode_LegIK;                               // 0x1298(0x00F8)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone_1;                          // 0x1390(0x00F0)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone;                            // 0x1480(0x00F0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x1570(0x0108)()
	struct FAnimNode_ModifyCurve                  AnimGraphNode_ModifyCurve;                         // 0x1678(0x0058)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_1;                   // 0x16D0(0x00B0)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x1780(0x00B0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x1830(0x0078)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x18A8(0x0078)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x1920(0x0078)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x1998(0x0078)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt_1;                    // 0x1A10(0x00A0)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt;                      // 0x1AB0(0x00A0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x1B50(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x1C58(0x0108)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x1D60(0x0078)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x1DD8(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x1EA0(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x1EC8(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x1EF0(0x00A0)()
	FMulticastInlineDelegateProperty_             MenuScreenDispatcher;                              // 0x1F90(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          HasBeenSelected;                                   // 0x1FA0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79C1[0x3];                                     // 0x1FA1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PoseInt;                                           // 0x1FA4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OffsetTranslate;                                   // 0x1FA8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               OffsetRotate;                                      // 0x1FB4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class APlayerPawn_Athena_C*                   PawnOwner;                                         // 0x1FC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartTime;                                         // 0x1FC8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PlayRate;                                          // 0x1FCC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HidePropTimeRemaining;                             // 0x1FD0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HidePropBones;                                     // 0x1FD4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void HidePropsForBlend(class UAnimMontage* NewMontage);
	void AnimNotify_playFacialAnim();
	void UserFocus();
	void AnimNotify_LeftB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_LayeredBoneBlend_8D2B60D44BBADFD01AC9A6BF39472D0B();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void AnimNotify_LobbySkydive_Diving();
	void AnimNotify_LobbySkydive_Gliding();
	void OnMontageStarted_Event_HideProps(class UAnimMontage* Montage);
	void OnMontageBlendingOut_Event_HideProps(class UAnimMontage* Montage, bool bInterrupted);
	void ExecuteUbergraph_MenuScreen_Athena(int32 EntryPoint);
	void MenuScreenDispatcher__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MenuScreen_Athena_C">();
	}
	static class UMenuScreen_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMenuScreen_Athena_C>();
	}
};
static_assert(alignof(UMenuScreen_Athena_C) == 0x000010, "Wrong alignment on UMenuScreen_Athena_C");
static_assert(sizeof(UMenuScreen_Athena_C) == 0x001FE0, "Wrong size on UMenuScreen_Athena_C");
static_assert(offsetof(UMenuScreen_Athena_C, UberGraphFrame) == 0x0003B0, "Member 'UMenuScreen_Athena_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_SequencePlayer_8) == 0x0003B8, "Member 'UMenuScreen_Athena_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_SequencePlayer_7) == 0x000430, "Member 'UMenuScreen_Athena_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_SequencePlayer_6) == 0x0004A8, "Member 'UMenuScreen_Athena_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_SequencePlayer_5) == 0x000520, "Member 'UMenuScreen_Athena_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_BlendListByInt_3) == 0x000598, "Member 'UMenuScreen_Athena_C::AnimGraphNode_BlendListByInt_3' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_BlendListByInt_2) == 0x000638, "Member 'UMenuScreen_Athena_C::AnimGraphNode_BlendListByInt_2' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_LegIK_2) == 0x0006D8, "Member 'UMenuScreen_Athena_C::AnimGraphNode_LegIK_2' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_ModifyBone_3) == 0x0007D0, "Member 'UMenuScreen_Athena_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_Slot_3) == 0x0008D8, "Member 'UMenuScreen_Athena_C::AnimGraphNode_Slot_3' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_LayeredBoneBlend) == 0x000920, "Member 'UMenuScreen_Athena_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_SaveCachedPose_2) == 0x0009E0, "Member 'UMenuScreen_Athena_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_UseCachedPose_4) == 0x000AA8, "Member 'UMenuScreen_Athena_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_UseCachedPose_3) == 0x000AD0, "Member 'UMenuScreen_Athena_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_LegIK_1) == 0x000AF8, "Member 'UMenuScreen_Athena_C::AnimGraphNode_LegIK_1' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_CopyBone_5) == 0x000BF0, "Member 'UMenuScreen_Athena_C::AnimGraphNode_CopyBone_5' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_CopyBone_4) == 0x000CE0, "Member 'UMenuScreen_Athena_C::AnimGraphNode_CopyBone_4' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_CopyBone_3) == 0x000DD0, "Member 'UMenuScreen_Athena_C::AnimGraphNode_CopyBone_3' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_Slot_2) == 0x000EC0, "Member 'UMenuScreen_Athena_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_Slot_1) == 0x000F08, "Member 'UMenuScreen_Athena_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_CopyBone_2) == 0x000F50, "Member 'UMenuScreen_Athena_C::AnimGraphNode_CopyBone_2' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_SaveCachedPose_1) == 0x001040, "Member 'UMenuScreen_Athena_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_BlendListByEnum_2) == 0x001108, "Member 'UMenuScreen_Athena_C::AnimGraphNode_BlendListByEnum_2' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_Slot) == 0x0011B8, "Member 'UMenuScreen_Athena_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_ComponentToLocalSpace) == 0x001200, "Member 'UMenuScreen_Athena_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_LocalToComponentSpace) == 0x001220, "Member 'UMenuScreen_Athena_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_Root) == 0x001240, "Member 'UMenuScreen_Athena_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_UseCachedPose_2) == 0x001270, "Member 'UMenuScreen_Athena_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_LegIK) == 0x001298, "Member 'UMenuScreen_Athena_C::AnimGraphNode_LegIK' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_CopyBone_1) == 0x001390, "Member 'UMenuScreen_Athena_C::AnimGraphNode_CopyBone_1' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_CopyBone) == 0x001480, "Member 'UMenuScreen_Athena_C::AnimGraphNode_CopyBone' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_ModifyBone_2) == 0x001570, "Member 'UMenuScreen_Athena_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_ModifyCurve) == 0x001678, "Member 'UMenuScreen_Athena_C::AnimGraphNode_ModifyCurve' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_BlendListByEnum_1) == 0x0016D0, "Member 'UMenuScreen_Athena_C::AnimGraphNode_BlendListByEnum_1' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_BlendListByEnum) == 0x001780, "Member 'UMenuScreen_Athena_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_SequencePlayer_4) == 0x001830, "Member 'UMenuScreen_Athena_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_SequencePlayer_3) == 0x0018A8, "Member 'UMenuScreen_Athena_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_SequencePlayer_2) == 0x001920, "Member 'UMenuScreen_Athena_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_SequencePlayer_1) == 0x001998, "Member 'UMenuScreen_Athena_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_BlendListByInt_1) == 0x001A10, "Member 'UMenuScreen_Athena_C::AnimGraphNode_BlendListByInt_1' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_BlendListByInt) == 0x001AB0, "Member 'UMenuScreen_Athena_C::AnimGraphNode_BlendListByInt' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_ModifyBone_1) == 0x001B50, "Member 'UMenuScreen_Athena_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_ModifyBone) == 0x001C58, "Member 'UMenuScreen_Athena_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_SequencePlayer) == 0x001D60, "Member 'UMenuScreen_Athena_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_SaveCachedPose) == 0x001DD8, "Member 'UMenuScreen_Athena_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_UseCachedPose_1) == 0x001EA0, "Member 'UMenuScreen_Athena_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_UseCachedPose) == 0x001EC8, "Member 'UMenuScreen_Athena_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_BlendListByBool) == 0x001EF0, "Member 'UMenuScreen_Athena_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, MenuScreenDispatcher) == 0x001F90, "Member 'UMenuScreen_Athena_C::MenuScreenDispatcher' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, HasBeenSelected) == 0x001FA0, "Member 'UMenuScreen_Athena_C::HasBeenSelected' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, PoseInt) == 0x001FA4, "Member 'UMenuScreen_Athena_C::PoseInt' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, OffsetTranslate) == 0x001FA8, "Member 'UMenuScreen_Athena_C::OffsetTranslate' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, OffsetRotate) == 0x001FB4, "Member 'UMenuScreen_Athena_C::OffsetRotate' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, PawnOwner) == 0x001FC0, "Member 'UMenuScreen_Athena_C::PawnOwner' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, StartTime) == 0x001FC8, "Member 'UMenuScreen_Athena_C::StartTime' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, PlayRate) == 0x001FCC, "Member 'UMenuScreen_Athena_C::PlayRate' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, HidePropTimeRemaining) == 0x001FD0, "Member 'UMenuScreen_Athena_C::HidePropTimeRemaining' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, HidePropBones) == 0x001FD4, "Member 'UMenuScreen_Athena_C::HidePropBones' has a wrong offset!");

}

