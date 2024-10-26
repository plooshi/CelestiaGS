#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLocker_ItemInfo

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function AthenaLocker_ItemInfo.AthenaLocker_ItemInfo_C.UpdateRarityWidgets
// 0x00A0 (0x00A0 - 0x0000)
struct AthenaLocker_ItemInfo_C_UpdateRarityWidgets final
{
public:
	struct FFortColorPalette                      InColor;                                           // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	EFortRarity                                   InRarity;                                          // 0x0050(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_526F[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemSeriesDefinition*              InSeries;                                          // 0x0058(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HideRarity;                                        // 0x0060(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNullItem_Is_Null_Item;                  // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNullItem_Is_Null_Item_1;                // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5270[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5271[0x5];                                     // 0x008B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets) == 0x000008, "Wrong alignment on AthenaLocker_ItemInfo_C_UpdateRarityWidgets");
static_assert(sizeof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets) == 0x0000A0, "Wrong size on AthenaLocker_ItemInfo_C_UpdateRarityWidgets");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, InColor) == 0x000000, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::InColor' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, InRarity) == 0x000050, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::InRarity' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, InSeries) == 0x000058, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::InSeries' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, HideRarity) == 0x000060, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::HideRarity' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, CallFunc_IsNullItem_Is_Null_Item) == 0x000061, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::CallFunc_IsNullItem_Is_Null_Item' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, CallFunc_IsNullItem_Is_Null_Item_1) == 0x000062, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::CallFunc_IsNullItem_Is_Null_Item_1' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, Temp_bool_Variable) == 0x000063, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, Temp_bool_Variable_1) == 0x000064, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, K2Node_Select_Default) == 0x000068, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, K2Node_Select_Default_1) == 0x000078, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, Temp_byte_Variable) == 0x000088, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, Temp_byte_Variable_1) == 0x000089, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, Temp_bool_Variable_2) == 0x00008A, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000090, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, K2Node_Select_Default_2) == 0x000098, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::K2Node_Select_Default_2' has a wrong offset!");

// Function AthenaLocker_ItemInfo.AthenaLocker_ItemInfo_C.OnItemDefinitionSet
// 0x0008 (0x0008 - 0x0000)
struct AthenaLocker_ItemInfo_C_OnItemDefinitionSet final
{
public:
	const class UFortItemDefinition*              ItemDefinition;                                    // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaLocker_ItemInfo_C_OnItemDefinitionSet) == 0x000008, "Wrong alignment on AthenaLocker_ItemInfo_C_OnItemDefinitionSet");
static_assert(sizeof(AthenaLocker_ItemInfo_C_OnItemDefinitionSet) == 0x000008, "Wrong size on AthenaLocker_ItemInfo_C_OnItemDefinitionSet");
static_assert(offsetof(AthenaLocker_ItemInfo_C_OnItemDefinitionSet, ItemDefinition) == 0x000000, "Member 'AthenaLocker_ItemInfo_C_OnItemDefinitionSet::ItemDefinition' has a wrong offset!");

// Function AthenaLocker_ItemInfo.AthenaLocker_ItemInfo_C.ExecuteUbergraph_AthenaLocker_ItemInfo
// 0x00B8 (0x00B8 - 0x0000)
struct AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortColorPalette                      CallFunc_BPGetRarityColorPalette_ReturnValue;      // 0x0004(0x0050)(NoDestructor)
	uint8                                         Pad_5272[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UFortItemDefinition*              K2Node_Event_ItemDefinition;                       // 0x0058(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5273[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortColorPalette                      CallFunc_GetRarityOrSeriesColors_ReturnValue;      // 0x0064(0x0050)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo) == 0x000008, "Wrong alignment on AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo");
static_assert(sizeof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo) == 0x0000B8, "Wrong size on AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, EntryPoint) == 0x000000, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, CallFunc_BPGetRarityColorPalette_ReturnValue) == 0x000004, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::CallFunc_BPGetRarityColorPalette_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, K2Node_Event_ItemDefinition) == 0x000058, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::K2Node_Event_ItemDefinition' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, CallFunc_GetRarity_ReturnValue) == 0x000060, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, CallFunc_GetRarityOrSeriesColors_ReturnValue) == 0x000064, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::CallFunc_GetRarityOrSeriesColors_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, CallFunc_IsValid_ReturnValue) == 0x0000B4, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

