#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP13_BuildABrella

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP13_BuildABrella.BP13_BuildABrella_C
// 0x0130 (0x03A0 - 0x0270)
class ABP13_BuildABrella_C final : public AFortCosmeticDisplayActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        PlayAudio;                                         // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CanopyTags;                                        // 0x0280(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  ShaftTags;                                         // 0x02A0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TopperTags;                                        // 0x02C0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  HandleTags;                                        // 0x02E0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                             HandleSound;                                       // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             TopperSound;                                       // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             ShaftSound;                                        // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CanopySound;                                       // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CanopyVariantName;                                 // 0x0320(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  ShaftVariantName;                                  // 0x0340(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TopperVariantName;                                 // 0x0360(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  BottomCapVariantName;                              // 0x0380(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void UpdateTransitionVFX(const struct FGameplayTag& Variant_Channel);
	void UpdateAudio(const struct FGameplayTag& Variant_Channel);
	void ReceiveBeginPlay();
	void OnVariantChanged(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& OldVariantTag, const struct FGameplayTag& NewVariantTag);
	void ExecuteUbergraph_BP13_BuildABrella(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP13_BuildABrella_C">();
	}
	static class ABP13_BuildABrella_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP13_BuildABrella_C>();
	}
};
static_assert(alignof(ABP13_BuildABrella_C) == 0x000008, "Wrong alignment on ABP13_BuildABrella_C");
static_assert(sizeof(ABP13_BuildABrella_C) == 0x0003A0, "Wrong size on ABP13_BuildABrella_C");
static_assert(offsetof(ABP13_BuildABrella_C, UberGraphFrame) == 0x000270, "Member 'ABP13_BuildABrella_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP13_BuildABrella_C, PlayAudio) == 0x000278, "Member 'ABP13_BuildABrella_C::PlayAudio' has a wrong offset!");
static_assert(offsetof(ABP13_BuildABrella_C, CanopyTags) == 0x000280, "Member 'ABP13_BuildABrella_C::CanopyTags' has a wrong offset!");
static_assert(offsetof(ABP13_BuildABrella_C, ShaftTags) == 0x0002A0, "Member 'ABP13_BuildABrella_C::ShaftTags' has a wrong offset!");
static_assert(offsetof(ABP13_BuildABrella_C, TopperTags) == 0x0002C0, "Member 'ABP13_BuildABrella_C::TopperTags' has a wrong offset!");
static_assert(offsetof(ABP13_BuildABrella_C, HandleTags) == 0x0002E0, "Member 'ABP13_BuildABrella_C::HandleTags' has a wrong offset!");
static_assert(offsetof(ABP13_BuildABrella_C, HandleSound) == 0x000300, "Member 'ABP13_BuildABrella_C::HandleSound' has a wrong offset!");
static_assert(offsetof(ABP13_BuildABrella_C, TopperSound) == 0x000308, "Member 'ABP13_BuildABrella_C::TopperSound' has a wrong offset!");
static_assert(offsetof(ABP13_BuildABrella_C, ShaftSound) == 0x000310, "Member 'ABP13_BuildABrella_C::ShaftSound' has a wrong offset!");
static_assert(offsetof(ABP13_BuildABrella_C, CanopySound) == 0x000318, "Member 'ABP13_BuildABrella_C::CanopySound' has a wrong offset!");
static_assert(offsetof(ABP13_BuildABrella_C, CanopyVariantName) == 0x000320, "Member 'ABP13_BuildABrella_C::CanopyVariantName' has a wrong offset!");
static_assert(offsetof(ABP13_BuildABrella_C, ShaftVariantName) == 0x000340, "Member 'ABP13_BuildABrella_C::ShaftVariantName' has a wrong offset!");
static_assert(offsetof(ABP13_BuildABrella_C, TopperVariantName) == 0x000360, "Member 'ABP13_BuildABrella_C::TopperVariantName' has a wrong offset!");
static_assert(offsetof(ABP13_BuildABrella_C, BottomCapVariantName) == 0x000380, "Member 'ABP13_BuildABrella_C::BottomCapVariantName' has a wrong offset!");

}

