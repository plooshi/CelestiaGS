#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LevelUpNotification

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function LevelUpNotification.LevelUpNotification_C.ExecuteUbergraph_LevelUpNotification
// 0x0118 (0x0118 - 0x0000)
struct LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6428[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_2;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_3;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortRarity                                   K2Node_CustomEvent_Rarity;                         // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6429[0x1];                                     // 0x0047(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue;              // 0x0048(0x0080)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_642A[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UFortItemDefinition*              K2Node_Event_RewardItem_1;                         // 0x00D0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_isLevelUp;                      // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_642B[0x2];                                     // 0x00DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00DC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_642C[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_Select_Default_1;                           // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_642D[0x4];                                     // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UFortItemDefinition*              K2Node_Event_RewardItem;                           // 0x0108(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortRarity                                   CallFunc_GetRarity_ReturnValue_1;                  // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification) == 0x000008, "Wrong alignment on LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification");
static_assert(sizeof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification) == 0x000118, "Wrong size on LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, EntryPoint) == 0x000000, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::EntryPoint' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000010, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, CallFunc_GetDynamicMaterial_ReturnValue_2) == 0x000018, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::CallFunc_GetDynamicMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, Temp_object_Variable) == 0x000020, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, CallFunc_GetDynamicMaterial_ReturnValue_3) == 0x000030, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::CallFunc_GetDynamicMaterial_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, Temp_object_Variable_1) == 0x000038, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, Temp_bool_Variable) == 0x000040, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, Temp_byte_Variable) == 0x000041, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, Temp_byte_Variable_1) == 0x000042, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, Temp_bool_Variable_1) == 0x000043, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, K2Node_CustomEvent_Rarity) == 0x000044, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::K2Node_CustomEvent_Rarity' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, K2Node_Event_IsDesignTime) == 0x000045, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000046, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, CallFunc_BPGetRarityData_ReturnValue) == 0x000048, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::CallFunc_BPGetRarityData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, K2Node_Select_Default) == 0x0000C8, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, K2Node_Event_RewardItem_1) == 0x0000D0, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::K2Node_Event_RewardItem_1' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, CallFunc_GetRarity_ReturnValue) == 0x0000D8, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, K2Node_CustomEvent_isLevelUp) == 0x0000D9, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::K2Node_CustomEvent_isLevelUp' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, K2Node_CreateDelegate_OutputDelegate) == 0x0000DC, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, K2Node_Select_Default_1) == 0x0000F0, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, CallFunc_GetEndTime_ReturnValue) == 0x0000F8, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, CallFunc_PlayAnimation_ReturnValue_1) == 0x000100, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, K2Node_Event_RewardItem) == 0x000108, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::K2Node_Event_RewardItem' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification, CallFunc_GetRarity_ReturnValue_1) == 0x000110, "Member 'LevelUpNotification_C_ExecuteUbergraph_LevelUpNotification::CallFunc_GetRarity_ReturnValue_1' has a wrong offset!");

// Function LevelUpNotification.LevelUpNotification_C.UpdateQuestRewardVisuals
// 0x0008 (0x0008 - 0x0000)
struct LevelUpNotification_C_UpdateQuestRewardVisuals final
{
public:
	const class UFortItemDefinition*              RewardItem;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LevelUpNotification_C_UpdateQuestRewardVisuals) == 0x000008, "Wrong alignment on LevelUpNotification_C_UpdateQuestRewardVisuals");
static_assert(sizeof(LevelUpNotification_C_UpdateQuestRewardVisuals) == 0x000008, "Wrong size on LevelUpNotification_C_UpdateQuestRewardVisuals");
static_assert(offsetof(LevelUpNotification_C_UpdateQuestRewardVisuals, RewardItem) == 0x000000, "Member 'LevelUpNotification_C_UpdateQuestRewardVisuals::RewardItem' has a wrong offset!");

// Function LevelUpNotification.LevelUpNotification_C.EventSetHeaderStyle
// 0x0001 (0x0001 - 0x0000)
struct LevelUpNotification_C_EventSetHeaderStyle final
{
public:
	bool                                          IsLevelUp;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LevelUpNotification_C_EventSetHeaderStyle) == 0x000001, "Wrong alignment on LevelUpNotification_C_EventSetHeaderStyle");
static_assert(sizeof(LevelUpNotification_C_EventSetHeaderStyle) == 0x000001, "Wrong size on LevelUpNotification_C_EventSetHeaderStyle");
static_assert(offsetof(LevelUpNotification_C_EventSetHeaderStyle, IsLevelUp) == 0x000000, "Member 'LevelUpNotification_C_EventSetHeaderStyle::IsLevelUp' has a wrong offset!");

// Function LevelUpNotification.LevelUpNotification_C.UpdateLevelUpVisuals
// 0x0008 (0x0008 - 0x0000)
struct LevelUpNotification_C_UpdateLevelUpVisuals final
{
public:
	const class UFortItemDefinition*              RewardItem;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LevelUpNotification_C_UpdateLevelUpVisuals) == 0x000008, "Wrong alignment on LevelUpNotification_C_UpdateLevelUpVisuals");
static_assert(sizeof(LevelUpNotification_C_UpdateLevelUpVisuals) == 0x000008, "Wrong size on LevelUpNotification_C_UpdateLevelUpVisuals");
static_assert(offsetof(LevelUpNotification_C_UpdateLevelUpVisuals, RewardItem) == 0x000000, "Member 'LevelUpNotification_C_UpdateLevelUpVisuals::RewardItem' has a wrong offset!");

// Function LevelUpNotification.LevelUpNotification_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct LevelUpNotification_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LevelUpNotification_C_PreConstruct) == 0x000001, "Wrong alignment on LevelUpNotification_C_PreConstruct");
static_assert(sizeof(LevelUpNotification_C_PreConstruct) == 0x000001, "Wrong size on LevelUpNotification_C_PreConstruct");
static_assert(offsetof(LevelUpNotification_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'LevelUpNotification_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function LevelUpNotification.LevelUpNotification_C.RarityVisuals
// 0x0001 (0x0001 - 0x0000)
struct LevelUpNotification_C_RarityVisuals final
{
public:
	EFortRarity                                   Rarity;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LevelUpNotification_C_RarityVisuals) == 0x000001, "Wrong alignment on LevelUpNotification_C_RarityVisuals");
static_assert(sizeof(LevelUpNotification_C_RarityVisuals) == 0x000001, "Wrong size on LevelUpNotification_C_RarityVisuals");
static_assert(offsetof(LevelUpNotification_C_RarityVisuals, Rarity) == 0x000000, "Member 'LevelUpNotification_C_RarityVisuals::Rarity' has a wrong offset!");

}

