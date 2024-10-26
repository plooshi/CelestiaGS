#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemPreviewSideSwap

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.LightControl
// 0x0018 (0x0018 - 0x0000)
struct ItemPreviewSideSwap_C_LightControl final
{
public:
	bool                                          Active;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsErebus_ReturnValue;                     // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMobileGame_ReturnValue;                 // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsErebus_ReturnValue_1;                   // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6881[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetShadowQuality_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemPreviewSideSwap_C_LightControl) == 0x000008, "Wrong alignment on ItemPreviewSideSwap_C_LightControl");
static_assert(sizeof(ItemPreviewSideSwap_C_LightControl) == 0x000018, "Wrong size on ItemPreviewSideSwap_C_LightControl");
static_assert(offsetof(ItemPreviewSideSwap_C_LightControl, Active) == 0x000000, "Member 'ItemPreviewSideSwap_C_LightControl::Active' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_LightControl, CallFunc_IsErebus_ReturnValue) == 0x000001, "Member 'ItemPreviewSideSwap_C_LightControl::CallFunc_IsErebus_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_LightControl, CallFunc_IsMobileGame_ReturnValue) == 0x000002, "Member 'ItemPreviewSideSwap_C_LightControl::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_LightControl, CallFunc_IsErebus_ReturnValue_1) == 0x000003, "Member 'ItemPreviewSideSwap_C_LightControl::CallFunc_IsErebus_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_LightControl, CallFunc_BooleanOR_ReturnValue) == 0x000004, "Member 'ItemPreviewSideSwap_C_LightControl::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_LightControl, CallFunc_GetGameUserSettings_ReturnValue) == 0x000008, "Member 'ItemPreviewSideSwap_C_LightControl::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_LightControl, CallFunc_GetShadowQuality_ReturnValue) == 0x000010, "Member 'ItemPreviewSideSwap_C_LightControl::CallFunc_GetShadowQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_LightControl, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000014, "Member 'ItemPreviewSideSwap_C_LightControl::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_LightControl, CallFunc_BooleanOR_ReturnValue_1) == 0x000015, "Member 'ItemPreviewSideSwap_C_LightControl::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_LightControl, CallFunc_BooleanOR_ReturnValue_2) == 0x000016, "Member 'ItemPreviewSideSwap_C_LightControl::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");

// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.SwitchPCLighting
// 0x0001 (0x0001 - 0x0000)
struct ItemPreviewSideSwap_C_SwitchPCLighting final
{
public:
	bool                                          Visibility;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemPreviewSideSwap_C_SwitchPCLighting) == 0x000001, "Wrong alignment on ItemPreviewSideSwap_C_SwitchPCLighting");
static_assert(sizeof(ItemPreviewSideSwap_C_SwitchPCLighting) == 0x000001, "Wrong size on ItemPreviewSideSwap_C_SwitchPCLighting");
static_assert(offsetof(ItemPreviewSideSwap_C_SwitchPCLighting, Visibility) == 0x000000, "Member 'ItemPreviewSideSwap_C_SwitchPCLighting::Visibility' has a wrong offset!");

// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.SwitchPCLighting_LOWDetail
// 0x0002 (0x0002 - 0x0000)
struct ItemPreviewSideSwap_C_SwitchPCLighting_LOWDetail final
{
public:
	bool                                          Visibility;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemPreviewSideSwap_C_SwitchPCLighting_LOWDetail) == 0x000001, "Wrong alignment on ItemPreviewSideSwap_C_SwitchPCLighting_LOWDetail");
static_assert(sizeof(ItemPreviewSideSwap_C_SwitchPCLighting_LOWDetail) == 0x000002, "Wrong size on ItemPreviewSideSwap_C_SwitchPCLighting_LOWDetail");
static_assert(offsetof(ItemPreviewSideSwap_C_SwitchPCLighting_LOWDetail, Visibility) == 0x000000, "Member 'ItemPreviewSideSwap_C_SwitchPCLighting_LOWDetail::Visibility' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_SwitchPCLighting_LOWDetail, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'ItemPreviewSideSwap_C_SwitchPCLighting_LOWDetail::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.SwitchMobileLighting
// 0x0002 (0x0002 - 0x0000)
struct ItemPreviewSideSwap_C_SwitchMobileLighting final
{
public:
	bool                                          Visibility;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemPreviewSideSwap_C_SwitchMobileLighting) == 0x000001, "Wrong alignment on ItemPreviewSideSwap_C_SwitchMobileLighting");
static_assert(sizeof(ItemPreviewSideSwap_C_SwitchMobileLighting) == 0x000002, "Wrong size on ItemPreviewSideSwap_C_SwitchMobileLighting");
static_assert(offsetof(ItemPreviewSideSwap_C_SwitchMobileLighting, Visibility) == 0x000000, "Member 'ItemPreviewSideSwap_C_SwitchMobileLighting::Visibility' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_SwitchMobileLighting, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'ItemPreviewSideSwap_C_SwitchMobileLighting::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnReadyToSwap
// 0x0010 (0x0010 - 0x0000)
struct ItemPreviewSideSwap_C_OnReadyToSwap final
{
public:
	const class UFortAccountItemDefinition*       PrimaryRequestedItem;                              // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSceneTransitionOptions                Options;                                           // 0x0008(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(ItemPreviewSideSwap_C_OnReadyToSwap) == 0x000008, "Wrong alignment on ItemPreviewSideSwap_C_OnReadyToSwap");
static_assert(sizeof(ItemPreviewSideSwap_C_OnReadyToSwap) == 0x000010, "Wrong size on ItemPreviewSideSwap_C_OnReadyToSwap");
static_assert(offsetof(ItemPreviewSideSwap_C_OnReadyToSwap, PrimaryRequestedItem) == 0x000000, "Member 'ItemPreviewSideSwap_C_OnReadyToSwap::PrimaryRequestedItem' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_OnReadyToSwap, Options) == 0x000008, "Member 'ItemPreviewSideSwap_C_OnReadyToSwap::Options' has a wrong offset!");

// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnNewSceneRequested
// 0x0010 (0x0010 - 0x0000)
struct ItemPreviewSideSwap_C_OnNewSceneRequested final
{
public:
	const class UFortAccountItemDefinition*       PrimaryRequestedItem;                              // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSceneTransitionOptions                TransitionOptions;                                 // 0x0008(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(ItemPreviewSideSwap_C_OnNewSceneRequested) == 0x000008, "Wrong alignment on ItemPreviewSideSwap_C_OnNewSceneRequested");
static_assert(sizeof(ItemPreviewSideSwap_C_OnNewSceneRequested) == 0x000010, "Wrong size on ItemPreviewSideSwap_C_OnNewSceneRequested");
static_assert(offsetof(ItemPreviewSideSwap_C_OnNewSceneRequested, PrimaryRequestedItem) == 0x000000, "Member 'ItemPreviewSideSwap_C_OnNewSceneRequested::PrimaryRequestedItem' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_OnNewSceneRequested, TransitionOptions) == 0x000008, "Member 'ItemPreviewSideSwap_C_OnNewSceneRequested::TransitionOptions' has a wrong offset!");

// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnTargetZoomLevelSet
// 0x0004 (0x0004 - 0x0000)
struct ItemPreviewSideSwap_C_OnTargetZoomLevelSet final
{
public:
	float                                         Param_TargetZoomLevel;                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemPreviewSideSwap_C_OnTargetZoomLevelSet) == 0x000004, "Wrong alignment on ItemPreviewSideSwap_C_OnTargetZoomLevelSet");
static_assert(sizeof(ItemPreviewSideSwap_C_OnTargetZoomLevelSet) == 0x000004, "Wrong size on ItemPreviewSideSwap_C_OnTargetZoomLevelSet");
static_assert(offsetof(ItemPreviewSideSwap_C_OnTargetZoomLevelSet, Param_TargetZoomLevel) == 0x000000, "Member 'ItemPreviewSideSwap_C_OnTargetZoomLevelSet::Param_TargetZoomLevel' has a wrong offset!");

// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.ExecuteUbergraph_ItemPreviewSideSwap
// 0x01A0 (0x01A0 - 0x0000)
struct ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6882[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0040(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_2;              // 0x0070(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_3;              // 0x00A0(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6883[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00D4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_A_Execution_Happened_Variable;           // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_B_Execution_Happened_Variable;           // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00E6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6884[0x1];                                     // 0x00E7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	const class UFortAccountItemDefinition*       K2Node_Event_PrimaryRequestedItem_1;               // 0x00E8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSceneTransitionOptions                K2Node_Event_Options;                              // 0x00F0(0x0001)(ConstParm, NoDestructor)
	EFortItemType                                 CallFunc_GetItemType_ReturnValue;                  // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x00F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x00F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00F6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00F7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6885[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UFortAccountItemDefinition*       K2Node_Event_PrimaryRequestedItem;                 // 0x0100(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSceneTransitionOptions                K2Node_Event_TransitionOptions;                    // 0x0108(0x0001)(ConstParm, NoDestructor)
	bool                                          Temp_bool_B_Execution_Happened_Variable_1;         // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_A_Execution_Happened_Variable_1;         // 0x010B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6886[0x3];                                     // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetShadowQuality_ReturnValue;             // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMobileGame_ReturnValue;                 // 0x011D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6887[0x2];                                     // 0x011E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_4;              // 0x0120(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6888[0xF];                                     // 0x0151(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_5;              // 0x0160(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6889[0x2];                                     // 0x0192(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_TargetZoomLevel;                      // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap) == 0x000010, "Wrong alignment on ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap");
static_assert(sizeof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap) == 0x0001A0, "Wrong size on ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, EntryPoint) == 0x000000, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, CallFunc_MakeTransform_ReturnValue) == 0x000010, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, CallFunc_MakeTransform_ReturnValue_1) == 0x000040, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, CallFunc_MakeTransform_ReturnValue_2) == 0x000070, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::CallFunc_MakeTransform_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, CallFunc_MakeTransform_ReturnValue_3) == 0x0000A0, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::CallFunc_MakeTransform_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, K2Node_SwitchEnum_CmpSuccess) == 0x0000D0, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, K2Node_CreateDelegate_OutputDelegate) == 0x0000D4, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, Temp_bool_A_Execution_Happened_Variable) == 0x0000E4, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::Temp_bool_A_Execution_Happened_Variable' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, Temp_bool_B_Execution_Happened_Variable) == 0x0000E5, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::Temp_bool_B_Execution_Happened_Variable' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, CallFunc_BooleanAND_ReturnValue) == 0x0000E6, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, K2Node_Event_PrimaryRequestedItem_1) == 0x0000E8, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::K2Node_Event_PrimaryRequestedItem_1' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, K2Node_Event_Options) == 0x0000F0, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::K2Node_Event_Options' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, CallFunc_GetItemType_ReturnValue) == 0x0000F1, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::CallFunc_GetItemType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, K2Node_SwitchEnum_CmpSuccess_1) == 0x0000F2, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000F3, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000F4, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0000F5, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, CallFunc_BooleanOR_ReturnValue) == 0x0000F6, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, CallFunc_BooleanOR_ReturnValue_1) == 0x0000F7, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, CallFunc_Not_PreBool_ReturnValue) == 0x0000F8, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, K2Node_Event_PrimaryRequestedItem) == 0x000100, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::K2Node_Event_PrimaryRequestedItem' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, K2Node_Event_TransitionOptions) == 0x000108, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::K2Node_Event_TransitionOptions' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, Temp_bool_B_Execution_Happened_Variable_1) == 0x000109, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::Temp_bool_B_Execution_Happened_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, K2Node_SwitchEnum_CmpSuccess_2) == 0x00010A, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, Temp_bool_A_Execution_Happened_Variable_1) == 0x00010B, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::Temp_bool_A_Execution_Happened_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, CallFunc_BooleanAND_ReturnValue_1) == 0x00010C, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, CallFunc_GetGameUserSettings_ReturnValue) == 0x000110, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, CallFunc_GetShadowQuality_ReturnValue) == 0x000118, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::CallFunc_GetShadowQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00011C, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, CallFunc_IsMobileGame_ReturnValue) == 0x00011D, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, CallFunc_MakeTransform_ReturnValue_4) == 0x000120, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::CallFunc_MakeTransform_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, CallFunc_BooleanOR_ReturnValue_2) == 0x000150, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, CallFunc_MakeTransform_ReturnValue_5) == 0x000160, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::CallFunc_MakeTransform_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000190, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000191, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, K2Node_Event_TargetZoomLevel) == 0x000194, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::K2Node_Event_TargetZoomLevel' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, CallFunc_Less_FloatFloat_ReturnValue) == 0x000198, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000199, "Member 'ItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.On New Item Spawned__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ItemPreviewSideSwap_C_On_New_Item_Spawned__DelegateSignature final
{
public:
	bool                                          Should_Show_Floor;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemPreviewSideSwap_C_On_New_Item_Spawned__DelegateSignature) == 0x000001, "Wrong alignment on ItemPreviewSideSwap_C_On_New_Item_Spawned__DelegateSignature");
static_assert(sizeof(ItemPreviewSideSwap_C_On_New_Item_Spawned__DelegateSignature) == 0x000001, "Wrong size on ItemPreviewSideSwap_C_On_New_Item_Spawned__DelegateSignature");
static_assert(offsetof(ItemPreviewSideSwap_C_On_New_Item_Spawned__DelegateSignature, Should_Show_Floor) == 0x000000, "Member 'ItemPreviewSideSwap_C_On_New_Item_Spawned__DelegateSignature::Should_Show_Floor' has a wrong offset!");

}

