#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TimeSynthTrackComponent_SpicySake

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "BP_TimeSynthTrackComponent_DataTracker_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TimeSynthTrackComponent_SpicySake.BP_TimeSynthTrackComponent_SpicySake_C
// 0x0020 (0x0230 - 0x0210)
class UBP_TimeSynthTrackComponent_SpicySake_C final : public UBP_TimeSynthTrackComponent_DataTracker_C
{
public:
	uint8                                         Pad_7367[0x3];                                     // 0x0209(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InterpFloat_Circling;                              // 0x020C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InterpFloat_Attacking;                             // 0x0210(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EventTag_Circling;                                 // 0x0214(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EventTag_Attacking;                                // 0x021C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         CirclingID;                                        // 0x0224(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AttackID;                                          // 0x0228(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Attack_FacingID;                                   // 0x022C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnDataTrackerUpdate();
	void GetRemainingEventCooldown(float* Cooldown);
	void HandleMixState();
	void OnDataTrackerStart();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TimeSynthTrackComponent_SpicySake_C">();
	}
	static class UBP_TimeSynthTrackComponent_SpicySake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TimeSynthTrackComponent_SpicySake_C>();
	}
};
static_assert(alignof(UBP_TimeSynthTrackComponent_SpicySake_C) == 0x000008, "Wrong alignment on UBP_TimeSynthTrackComponent_SpicySake_C");
static_assert(sizeof(UBP_TimeSynthTrackComponent_SpicySake_C) == 0x000230, "Wrong size on UBP_TimeSynthTrackComponent_SpicySake_C");
static_assert(offsetof(UBP_TimeSynthTrackComponent_SpicySake_C, InterpFloat_Circling) == 0x00020C, "Member 'UBP_TimeSynthTrackComponent_SpicySake_C::InterpFloat_Circling' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_SpicySake_C, InterpFloat_Attacking) == 0x000210, "Member 'UBP_TimeSynthTrackComponent_SpicySake_C::InterpFloat_Attacking' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_SpicySake_C, EventTag_Circling) == 0x000214, "Member 'UBP_TimeSynthTrackComponent_SpicySake_C::EventTag_Circling' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_SpicySake_C, EventTag_Attacking) == 0x00021C, "Member 'UBP_TimeSynthTrackComponent_SpicySake_C::EventTag_Attacking' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_SpicySake_C, CirclingID) == 0x000224, "Member 'UBP_TimeSynthTrackComponent_SpicySake_C::CirclingID' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_SpicySake_C, AttackID) == 0x000228, "Member 'UBP_TimeSynthTrackComponent_SpicySake_C::AttackID' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_SpicySake_C, Attack_FacingID) == 0x00022C, "Member 'UBP_TimeSynthTrackComponent_SpicySake_C::Attack_FacingID' has a wrong offset!");

}
