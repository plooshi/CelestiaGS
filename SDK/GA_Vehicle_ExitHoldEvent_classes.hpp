#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Vehicle_ExitHoldEvent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C
// 0x0020 (0x0A98 - 0x0A78)
class UGA_Vehicle_ExitHoldEvent_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0A80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TriggerDuration;                                   // 0x0A88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EquippingCue;                                      // 0x0A8C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Vehicle_ExitHoldEvent(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void EventReceived_209BF560404B83EBEAA8DD8090C443AC(const struct FGameplayEventData& Payload);
	void EventReceived_7AE1D485464AEC7EB429C3877D33AF69(const struct FGameplayEventData& Payload);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Vehicle_ExitHoldEvent_C">();
	}
	static class UGA_Vehicle_ExitHoldEvent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Vehicle_ExitHoldEvent_C>();
	}
};
static_assert(alignof(UGA_Vehicle_ExitHoldEvent_C) == 0x000008, "Wrong alignment on UGA_Vehicle_ExitHoldEvent_C");
static_assert(sizeof(UGA_Vehicle_ExitHoldEvent_C) == 0x000A98, "Wrong size on UGA_Vehicle_ExitHoldEvent_C");
static_assert(offsetof(UGA_Vehicle_ExitHoldEvent_C, UberGraphFrame) == 0x000A78, "Member 'UGA_Vehicle_ExitHoldEvent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Vehicle_ExitHoldEvent_C, PlayerPawn) == 0x000A80, "Member 'UGA_Vehicle_ExitHoldEvent_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Vehicle_ExitHoldEvent_C, TriggerDuration) == 0x000A88, "Member 'UGA_Vehicle_ExitHoldEvent_C::TriggerDuration' has a wrong offset!");
static_assert(offsetof(UGA_Vehicle_ExitHoldEvent_C, EquippingCue) == 0x000A8C, "Member 'UGA_Vehicle_ExitHoldEvent_C::EquippingCue' has a wrong offset!");

}
