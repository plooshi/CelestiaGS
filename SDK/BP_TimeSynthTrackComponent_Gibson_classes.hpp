#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TimeSynthTrackComponent_Gibson

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "BP_TimeSynthTrackComponent_DataTracker_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TimeSynthTrackComponent_Gibson.BP_TimeSynthTrackComponent_Gibson_C
// 0x0028 (0x0238 - 0x0210)
class UBP_TimeSynthTrackComponent_Gibson_C final : public UBP_TimeSynthTrackComponent_DataTracker_C
{
public:
	uint8                                         Pad_7352[0x3];                                     // 0x0209(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           EventTag;                                          // 0x020C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           AccumulationTag_Unaware;                           // 0x0214(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           AccumulationTag_Alerted;                           // 0x021C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           AccumulationTag_Aggressive;                        // 0x0224(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         InterpFloat_Unaware;                               // 0x022C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InterpFloat_Alerted;                               // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InterpFloat_Aggressive;                            // 0x0234(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnDataTrackerUpdate();
	void GetRemainingEventCooldown(float* Cooldown);
	void HandleMixState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TimeSynthTrackComponent_Gibson_C">();
	}
	static class UBP_TimeSynthTrackComponent_Gibson_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TimeSynthTrackComponent_Gibson_C>();
	}
};
static_assert(alignof(UBP_TimeSynthTrackComponent_Gibson_C) == 0x000008, "Wrong alignment on UBP_TimeSynthTrackComponent_Gibson_C");
static_assert(sizeof(UBP_TimeSynthTrackComponent_Gibson_C) == 0x000238, "Wrong size on UBP_TimeSynthTrackComponent_Gibson_C");
static_assert(offsetof(UBP_TimeSynthTrackComponent_Gibson_C, EventTag) == 0x00020C, "Member 'UBP_TimeSynthTrackComponent_Gibson_C::EventTag' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_Gibson_C, AccumulationTag_Unaware) == 0x000214, "Member 'UBP_TimeSynthTrackComponent_Gibson_C::AccumulationTag_Unaware' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_Gibson_C, AccumulationTag_Alerted) == 0x00021C, "Member 'UBP_TimeSynthTrackComponent_Gibson_C::AccumulationTag_Alerted' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_Gibson_C, AccumulationTag_Aggressive) == 0x000224, "Member 'UBP_TimeSynthTrackComponent_Gibson_C::AccumulationTag_Aggressive' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_Gibson_C, InterpFloat_Unaware) == 0x00022C, "Member 'UBP_TimeSynthTrackComponent_Gibson_C::InterpFloat_Unaware' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_Gibson_C, InterpFloat_Alerted) == 0x000230, "Member 'UBP_TimeSynthTrackComponent_Gibson_C::InterpFloat_Alerted' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_Gibson_C, InterpFloat_Aggressive) == 0x000234, "Member 'UBP_TimeSynthTrackComponent_Gibson_C::InterpFloat_Aggressive' has a wrong offset!");

}
