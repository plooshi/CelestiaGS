#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProxGrenadeLauncher_Sk_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ProxGrenadeLauncher_Sk_AnimBP.ProxGrenadeLauncher_Sk_AnimBP_C
// 0x0100 (0x0370 - 0x0270)
class UProxGrenadeLauncher_Sk_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_8913[0x8];                                     // 0x0268(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0278(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x02A8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x02F0(0x0078)()

public:
	void ExecuteUbergraph_ProxGrenadeLauncher_Sk_AnimBP(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProxGrenadeLauncher_Sk_AnimBP_C">();
	}
	static class UProxGrenadeLauncher_Sk_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProxGrenadeLauncher_Sk_AnimBP_C>();
	}
};
static_assert(alignof(UProxGrenadeLauncher_Sk_AnimBP_C) == 0x000010, "Wrong alignment on UProxGrenadeLauncher_Sk_AnimBP_C");
static_assert(sizeof(UProxGrenadeLauncher_Sk_AnimBP_C) == 0x000370, "Wrong size on UProxGrenadeLauncher_Sk_AnimBP_C");
static_assert(offsetof(UProxGrenadeLauncher_Sk_AnimBP_C, UberGraphFrame) == 0x000270, "Member 'UProxGrenadeLauncher_Sk_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProxGrenadeLauncher_Sk_AnimBP_C, AnimGraphNode_Root) == 0x000278, "Member 'UProxGrenadeLauncher_Sk_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UProxGrenadeLauncher_Sk_AnimBP_C, AnimGraphNode_Slot) == 0x0002A8, "Member 'UProxGrenadeLauncher_Sk_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UProxGrenadeLauncher_Sk_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x0002F0, "Member 'UProxGrenadeLauncher_Sk_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");

}
