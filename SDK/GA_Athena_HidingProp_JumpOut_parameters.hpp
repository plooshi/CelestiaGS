#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_HidingProp_JumpOut

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_HidingProp_JumpOut.GA_Athena_HidingProp_JumpOut_C.ExecuteUbergraph_GA_Athena_HidingProp_JumpOut
// 0x0130 (0x0130 - 0x0000)
struct GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60E0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60E1[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface; // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60E2[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1; // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60E3[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x0050(0x00B0)()
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_1;     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60E4[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2; // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60E5[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_2; // 0x0118(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_2;     // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut) == 0x000008, "Wrong alignment on GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut");
static_assert(sizeof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut) == 0x000130, "Wrong size on GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, EntryPoint) == 0x000000, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, Temp_bool_Variable) == 0x000010, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x000018, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000029, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, Temp_bool_Variable_1) == 0x00002A, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, CallFunc_IsServer_ReturnValue) == 0x00002B, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000030, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1) == 0x000038, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, K2Node_MakeStruct_GameplayEventData) == 0x000050, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, CallFunc_HasMatchingGameplayTag_ReturnValue_1) == 0x000100, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::CallFunc_HasMatchingGameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2) == 0x000108, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, Temp_bool_Variable_2) == 0x000110, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_2) == 0x000118, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, K2Node_DynamicCast_bSuccess_2) == 0x000128, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, CallFunc_HasMatchingGameplayTag_ReturnValue_2) == 0x000129, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::CallFunc_HasMatchingGameplayTag_ReturnValue_2' has a wrong offset!");

// Function GA_Athena_HidingProp_JumpOut.GA_Athena_HidingProp_JumpOut_C.K2_CanActivateAbility
// 0x00E0 (0x00E0 - 0x0000)
struct GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0048)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayTagContainer                  RelevantTags;                                      // 0x0048(0x0020)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0068(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60E6[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 LocalAvatarActor;                                  // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x007E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x007F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface; // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60E7[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1; // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60E8[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_2; // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_1;     // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_2;     // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60E9[0x5];                                     // 0x00C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_3; // 0x00C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_3;     // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x00DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility) == 0x000008, "Wrong alignment on GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility");
static_assert(sizeof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility) == 0x0000E0, "Wrong size on GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, ActorInfo) == 0x000000, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, RelevantTags) == 0x000048, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::RelevantTags' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, ReturnValue) == 0x000068, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, LocalAvatarActor) == 0x000070, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::LocalAvatarActor' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, Temp_bool_Variable) == 0x000078, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, CallFunc_Not_PreBool_ReturnValue) == 0x000079, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, Temp_bool_Variable_1) == 0x00007A, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, Temp_bool_Variable_2) == 0x00007B, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, CallFunc_BooleanAND_ReturnValue) == 0x00007C, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, CallFunc_Not_PreBool_ReturnValue_1) == 0x00007D, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, CallFunc_BooleanAND_ReturnValue_1) == 0x00007E, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, CallFunc_IsValid_ReturnValue) == 0x00007F, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x000080, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000091, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1) == 0x000098, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess_1) == 0x0000A8, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_2) == 0x0000B0, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess_2) == 0x0000C0, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, CallFunc_HasMatchingGameplayTag_ReturnValue_1) == 0x0000C1, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::CallFunc_HasMatchingGameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, CallFunc_HasMatchingGameplayTag_ReturnValue_2) == 0x0000C2, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::CallFunc_HasMatchingGameplayTag_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_3) == 0x0000C8, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess_3) == 0x0000D8, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, Temp_bool_Variable_3) == 0x0000D9, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, CallFunc_HasMatchingGameplayTag_ReturnValue_3) == 0x0000DA, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::CallFunc_HasMatchingGameplayTag_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, CallFunc_Not_PreBool_ReturnValue_2) == 0x0000DB, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, CallFunc_BooleanAND_ReturnValue_2) == 0x0000DC, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

}
