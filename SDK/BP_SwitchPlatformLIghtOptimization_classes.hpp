#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SwitchPlatformLIghtOptimization

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SwitchPlatformLIghtOptimization.BP_SwitchPlatformLIghtOptimization_C
// 0x0038 (0x0258 - 0x0220)
class ABP_SwitchPlatformLIghtOptimization_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug;                                             // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5111[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Spotlights_PC;                                     // 0x0238(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	TArray<class AActor*>                         Spotlights_Switch;                                 // 0x0248(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)

public:
	void SwitchLights(bool EnableSwitchPlatform);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SwitchPlatformLIghtOptimization(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SwitchPlatformLIghtOptimization_C">();
	}
	static class ABP_SwitchPlatformLIghtOptimization_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SwitchPlatformLIghtOptimization_C>();
	}
};
static_assert(alignof(ABP_SwitchPlatformLIghtOptimization_C) == 0x000008, "Wrong alignment on ABP_SwitchPlatformLIghtOptimization_C");
static_assert(sizeof(ABP_SwitchPlatformLIghtOptimization_C) == 0x000258, "Wrong size on ABP_SwitchPlatformLIghtOptimization_C");
static_assert(offsetof(ABP_SwitchPlatformLIghtOptimization_C, UberGraphFrame) == 0x000220, "Member 'ABP_SwitchPlatformLIghtOptimization_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SwitchPlatformLIghtOptimization_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_SwitchPlatformLIghtOptimization_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SwitchPlatformLIghtOptimization_C, Debug) == 0x000230, "Member 'ABP_SwitchPlatformLIghtOptimization_C::Debug' has a wrong offset!");
static_assert(offsetof(ABP_SwitchPlatformLIghtOptimization_C, Spotlights_PC) == 0x000238, "Member 'ABP_SwitchPlatformLIghtOptimization_C::Spotlights_PC' has a wrong offset!");
static_assert(offsetof(ABP_SwitchPlatformLIghtOptimization_C, Spotlights_Switch) == 0x000248, "Member 'ABP_SwitchPlatformLIghtOptimization_C::Spotlights_Switch' has a wrong offset!");

}
