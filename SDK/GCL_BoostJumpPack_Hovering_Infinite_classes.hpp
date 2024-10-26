#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCL_BoostJumpPack_Hovering_Infinite

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C
// 0x0040 (0x08F8 - 0x08B8)
class AGCL_BoostJumpPack_Hovering_Infinite_C : public AGameplayCueNotify_Jetpack_Hovering
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          bJetpackAudioEnabled;                              // 0x08C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71E2[0x7];                                     // 0x08C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             SoundOnStart;                                      // 0x08C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundOnStop;                                       // 0x08D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundLoopOnIdle;                                   // 0x08D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundLoopOnAccel;                                  // 0x08E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundOnThrust;                                     // 0x08E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsFirstJump;                                      // 0x08F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite(int32 EntryPoint);
	void On_Pawn_Landed(const struct FHitResult& Hit);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void SetJetpackAudioEnabled(bool Enabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCL_BoostJumpPack_Hovering_Infinite_C">();
	}
	static class AGCL_BoostJumpPack_Hovering_Infinite_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCL_BoostJumpPack_Hovering_Infinite_C>();
	}
};
static_assert(alignof(AGCL_BoostJumpPack_Hovering_Infinite_C) == 0x000008, "Wrong alignment on AGCL_BoostJumpPack_Hovering_Infinite_C");
static_assert(sizeof(AGCL_BoostJumpPack_Hovering_Infinite_C) == 0x0008F8, "Wrong size on AGCL_BoostJumpPack_Hovering_Infinite_C");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_Infinite_C, UberGraphFrame) == 0x0008B8, "Member 'AGCL_BoostJumpPack_Hovering_Infinite_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_Infinite_C, bJetpackAudioEnabled) == 0x0008C0, "Member 'AGCL_BoostJumpPack_Hovering_Infinite_C::bJetpackAudioEnabled' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_Infinite_C, SoundOnStart) == 0x0008C8, "Member 'AGCL_BoostJumpPack_Hovering_Infinite_C::SoundOnStart' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_Infinite_C, SoundOnStop) == 0x0008D0, "Member 'AGCL_BoostJumpPack_Hovering_Infinite_C::SoundOnStop' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_Infinite_C, SoundLoopOnIdle) == 0x0008D8, "Member 'AGCL_BoostJumpPack_Hovering_Infinite_C::SoundLoopOnIdle' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_Infinite_C, SoundLoopOnAccel) == 0x0008E0, "Member 'AGCL_BoostJumpPack_Hovering_Infinite_C::SoundLoopOnAccel' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_Infinite_C, SoundOnThrust) == 0x0008E8, "Member 'AGCL_BoostJumpPack_Hovering_Infinite_C::SoundOnThrust' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_Hovering_Infinite_C, bIsFirstJump) == 0x0008F0, "Member 'AGCL_BoostJumpPack_Hovering_Infinite_C::bIsFirstJump' has a wrong offset!");

}

