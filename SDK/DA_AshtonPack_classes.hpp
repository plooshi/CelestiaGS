#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DA_AshtonPack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DA_AshtonPack.DA_AshtonPack_C
// 0x0088 (0x0D28 - 0x0CA0)
class ADA_AshtonPack_C final : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0CA0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         TimePressed;                                       // 0x0CA8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PunchPicker;                                       // 0x0CAC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasLanded;                                         // 0x0CB0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BB9[0x7];                                     // 0x0CB1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  AshtonAbilityTags;                                 // 0x0CB8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  GC_JumpTrails;                                     // 0x0CD8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  GC_SkydiveTrails;                                  // 0x0CF8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           PrimaryFireEventTag;                               // 0x0D18(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           SecondaryFireEventTag;                             // 0x0D20(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DA_AshtonPack(int32 EntryPoint);
	void Landed(const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper);
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DA_AshtonPack_C">();
	}
	static class ADA_AshtonPack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADA_AshtonPack_C>();
	}
};
static_assert(alignof(ADA_AshtonPack_C) == 0x000008, "Wrong alignment on ADA_AshtonPack_C");
static_assert(sizeof(ADA_AshtonPack_C) == 0x000D28, "Wrong size on ADA_AshtonPack_C");
static_assert(offsetof(ADA_AshtonPack_C, UberGraphFrame) == 0x000CA0, "Member 'ADA_AshtonPack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ADA_AshtonPack_C, TimePressed) == 0x000CA8, "Member 'ADA_AshtonPack_C::TimePressed' has a wrong offset!");
static_assert(offsetof(ADA_AshtonPack_C, PunchPicker) == 0x000CAC, "Member 'ADA_AshtonPack_C::PunchPicker' has a wrong offset!");
static_assert(offsetof(ADA_AshtonPack_C, HasLanded) == 0x000CB0, "Member 'ADA_AshtonPack_C::HasLanded' has a wrong offset!");
static_assert(offsetof(ADA_AshtonPack_C, AshtonAbilityTags) == 0x000CB8, "Member 'ADA_AshtonPack_C::AshtonAbilityTags' has a wrong offset!");
static_assert(offsetof(ADA_AshtonPack_C, GC_JumpTrails) == 0x000CD8, "Member 'ADA_AshtonPack_C::GC_JumpTrails' has a wrong offset!");
static_assert(offsetof(ADA_AshtonPack_C, GC_SkydiveTrails) == 0x000CF8, "Member 'ADA_AshtonPack_C::GC_SkydiveTrails' has a wrong offset!");
static_assert(offsetof(ADA_AshtonPack_C, PrimaryFireEventTag) == 0x000D18, "Member 'ADA_AshtonPack_C::PrimaryFireEventTag' has a wrong offset!");
static_assert(offsetof(ADA_AshtonPack_C, SecondaryFireEventTag) == 0x000D20, "Member 'ADA_AshtonPack_C::SecondaryFireEventTag' has a wrong offset!");

}
