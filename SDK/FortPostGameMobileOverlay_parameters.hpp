#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortPostGameMobileOverlay

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function FortPostGameMobileOverlay.FortPostGameMobileOverlay_C.ExecuteUbergraph_FortPostGameMobileOverlay
// 0x0060 (0x0060 - 0x0000)
struct FortPostGameMobileOverlay_C_ExecuteUbergraph_FortPostGameMobileOverlay final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5156[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromTag_ReturnValue; // 0x0008(0x0020)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5157[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_1; // 0x0038(0x0020)()
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue_1;                 // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FortPostGameMobileOverlay_C_ExecuteUbergraph_FortPostGameMobileOverlay) == 0x000008, "Wrong alignment on FortPostGameMobileOverlay_C_ExecuteUbergraph_FortPostGameMobileOverlay");
static_assert(sizeof(FortPostGameMobileOverlay_C_ExecuteUbergraph_FortPostGameMobileOverlay) == 0x000060, "Wrong size on FortPostGameMobileOverlay_C_ExecuteUbergraph_FortPostGameMobileOverlay");
static_assert(offsetof(FortPostGameMobileOverlay_C_ExecuteUbergraph_FortPostGameMobileOverlay, EntryPoint) == 0x000000, "Member 'FortPostGameMobileOverlay_C_ExecuteUbergraph_FortPostGameMobileOverlay::EntryPoint' has a wrong offset!");
static_assert(offsetof(FortPostGameMobileOverlay_C_ExecuteUbergraph_FortPostGameMobileOverlay, CallFunc_MakeGameplayTagContainerFromTag_ReturnValue) == 0x000008, "Member 'FortPostGameMobileOverlay_C_ExecuteUbergraph_FortPostGameMobileOverlay::CallFunc_MakeGameplayTagContainerFromTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortPostGameMobileOverlay_C_ExecuteUbergraph_FortPostGameMobileOverlay, K2Node_Event_IsDesignTime) == 0x000028, "Member 'FortPostGameMobileOverlay_C_ExecuteUbergraph_FortPostGameMobileOverlay::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(FortPostGameMobileOverlay_C_ExecuteUbergraph_FortPostGameMobileOverlay, CallFunc_GetContext_ReturnValue) == 0x000030, "Member 'FortPostGameMobileOverlay_C_ExecuteUbergraph_FortPostGameMobileOverlay::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortPostGameMobileOverlay_C_ExecuteUbergraph_FortPostGameMobileOverlay, CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_1) == 0x000038, "Member 'FortPostGameMobileOverlay_C_ExecuteUbergraph_FortPostGameMobileOverlay::CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FortPostGameMobileOverlay_C_ExecuteUbergraph_FortPostGameMobileOverlay, CallFunc_GetContext_ReturnValue_1) == 0x000058, "Member 'FortPostGameMobileOverlay_C_ExecuteUbergraph_FortPostGameMobileOverlay::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");

// Function FortPostGameMobileOverlay.FortPostGameMobileOverlay_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct FortPostGameMobileOverlay_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FortPostGameMobileOverlay_C_PreConstruct) == 0x000001, "Wrong alignment on FortPostGameMobileOverlay_C_PreConstruct");
static_assert(sizeof(FortPostGameMobileOverlay_C_PreConstruct) == 0x000001, "Wrong size on FortPostGameMobileOverlay_C_PreConstruct");
static_assert(offsetof(FortPostGameMobileOverlay_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'FortPostGameMobileOverlay_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
