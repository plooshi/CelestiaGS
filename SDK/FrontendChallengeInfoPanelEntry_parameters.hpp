#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontendChallengeInfoPanelEntry

#include "Basic.hpp"


namespace SDK::Params
{

// Function FrontendChallengeInfoPanelEntry.FrontendChallengeInfoPanelEntry_C.ExecuteUbergraph_FrontendChallengeInfoPanelEntry
// 0x0018 (0x0018 - 0x0000)
struct FrontendChallengeInfoPanelEntry_C_ExecuteUbergraph_FrontendChallengeInfoPanelEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7835[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FrontendChallengeInfoPanelEntry_C_ExecuteUbergraph_FrontendChallengeInfoPanelEntry) == 0x000008, "Wrong alignment on FrontendChallengeInfoPanelEntry_C_ExecuteUbergraph_FrontendChallengeInfoPanelEntry");
static_assert(sizeof(FrontendChallengeInfoPanelEntry_C_ExecuteUbergraph_FrontendChallengeInfoPanelEntry) == 0x000018, "Wrong size on FrontendChallengeInfoPanelEntry_C_ExecuteUbergraph_FrontendChallengeInfoPanelEntry");
static_assert(offsetof(FrontendChallengeInfoPanelEntry_C_ExecuteUbergraph_FrontendChallengeInfoPanelEntry, EntryPoint) == 0x000000, "Member 'FrontendChallengeInfoPanelEntry_C_ExecuteUbergraph_FrontendChallengeInfoPanelEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(FrontendChallengeInfoPanelEntry_C_ExecuteUbergraph_FrontendChallengeInfoPanelEntry, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'FrontendChallengeInfoPanelEntry_C_ExecuteUbergraph_FrontendChallengeInfoPanelEntry::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontendChallengeInfoPanelEntry_C_ExecuteUbergraph_FrontendChallengeInfoPanelEntry, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'FrontendChallengeInfoPanelEntry_C_ExecuteUbergraph_FrontendChallengeInfoPanelEntry::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}
