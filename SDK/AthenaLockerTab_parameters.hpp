#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLockerTab

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function AthenaLockerTab.AthenaLockerTab_C.AnimShowRandomDisclaimerEnabled
// 0x0028 (0x0028 - 0x0000)
struct AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56F6[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_56F7[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled) == 0x000008, "Wrong alignment on AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled");
static_assert(sizeof(AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled) == 0x000028, "Wrong size on AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled");
static_assert(offsetof(AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled, Show) == 0x000000, "Member 'AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled::Show' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function AthenaLockerTab.AthenaLockerTab_C.UpdatePresetButtonStyles
// 0x0028 (0x0028 - 0x0000)
struct AthenaLockerTab_C_UpdatePresetButtonStyles final
{
public:
	ECommonInputType                              InputPin;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHorizontalAlignment                          Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHorizontalAlignment                          Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHorizontalAlignment                          Temp_byte_Variable_2;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHorizontalAlignment                          Temp_byte_Variable_3;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              Temp_byte_Variable_4;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56F8[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconTextButton_C*                      K2Node_DynamicCast_AsIcon_Text_Button;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EHorizontalAlignment                          K2Node_Select_Default;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56F9[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconTextButton_C*                      K2Node_DynamicCast_AsIcon_Text_Button_1;           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaLockerTab_C_UpdatePresetButtonStyles) == 0x000008, "Wrong alignment on AthenaLockerTab_C_UpdatePresetButtonStyles");
static_assert(sizeof(AthenaLockerTab_C_UpdatePresetButtonStyles) == 0x000028, "Wrong size on AthenaLockerTab_C_UpdatePresetButtonStyles");
static_assert(offsetof(AthenaLockerTab_C_UpdatePresetButtonStyles, InputPin) == 0x000000, "Member 'AthenaLockerTab_C_UpdatePresetButtonStyles::InputPin' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_UpdatePresetButtonStyles, Temp_byte_Variable) == 0x000001, "Member 'AthenaLockerTab_C_UpdatePresetButtonStyles::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_UpdatePresetButtonStyles, Temp_byte_Variable_1) == 0x000002, "Member 'AthenaLockerTab_C_UpdatePresetButtonStyles::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_UpdatePresetButtonStyles, Temp_byte_Variable_2) == 0x000003, "Member 'AthenaLockerTab_C_UpdatePresetButtonStyles::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_UpdatePresetButtonStyles, Temp_byte_Variable_3) == 0x000004, "Member 'AthenaLockerTab_C_UpdatePresetButtonStyles::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_UpdatePresetButtonStyles, Temp_byte_Variable_4) == 0x000005, "Member 'AthenaLockerTab_C_UpdatePresetButtonStyles::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_UpdatePresetButtonStyles, K2Node_DynamicCast_AsIcon_Text_Button) == 0x000008, "Member 'AthenaLockerTab_C_UpdatePresetButtonStyles::K2Node_DynamicCast_AsIcon_Text_Button' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_UpdatePresetButtonStyles, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'AthenaLockerTab_C_UpdatePresetButtonStyles::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_UpdatePresetButtonStyles, K2Node_Select_Default) == 0x000011, "Member 'AthenaLockerTab_C_UpdatePresetButtonStyles::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_UpdatePresetButtonStyles, K2Node_DynamicCast_AsIcon_Text_Button_1) == 0x000018, "Member 'AthenaLockerTab_C_UpdatePresetButtonStyles::K2Node_DynamicCast_AsIcon_Text_Button_1' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_UpdatePresetButtonStyles, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'AthenaLockerTab_C_UpdatePresetButtonStyles::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function AthenaLockerTab.AthenaLockerTab_C.PlaySlotAnimationAndCenterSlot
// 0x0010 (0x0010 - 0x0000)
struct AthenaLockerTab_C_PlaySlotAnimationAndCenterSlot final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56FA[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaLockerTab_C_PlaySlotAnimationAndCenterSlot) == 0x000008, "Wrong alignment on AthenaLockerTab_C_PlaySlotAnimationAndCenterSlot");
static_assert(sizeof(AthenaLockerTab_C_PlaySlotAnimationAndCenterSlot) == 0x000010, "Wrong size on AthenaLockerTab_C_PlaySlotAnimationAndCenterSlot");
static_assert(offsetof(AthenaLockerTab_C_PlaySlotAnimationAndCenterSlot, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'AthenaLockerTab_C_PlaySlotAnimationAndCenterSlot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_PlaySlotAnimationAndCenterSlot, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'AthenaLockerTab_C_PlaySlotAnimationAndCenterSlot::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function AthenaLockerTab.AthenaLockerTab_C.PlayEquippedLockerMusic_STW
// 0x0028 (0x0028 - 0x0000)
struct AthenaLockerTab_C_PlayEquippedLockerMusic_STW final
{
public:
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;                   // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56FB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AFort_Entry_Music_Controller_BP_C*> CallFunc_GetAllActorsOfClass_OutActors;            // 0x0008(0x0010)(ReferenceParm, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56FC[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFort_Entry_Music_Controller_BP_C*      CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaLockerTab_C_PlayEquippedLockerMusic_STW) == 0x000008, "Wrong alignment on AthenaLockerTab_C_PlayEquippedLockerMusic_STW");
static_assert(sizeof(AthenaLockerTab_C_PlayEquippedLockerMusic_STW) == 0x000028, "Wrong size on AthenaLockerTab_C_PlayEquippedLockerMusic_STW");
static_assert(offsetof(AthenaLockerTab_C_PlayEquippedLockerMusic_STW, CallFunc_GetSubGame_ReturnValue) == 0x000000, "Member 'AthenaLockerTab_C_PlayEquippedLockerMusic_STW::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_PlayEquippedLockerMusic_STW, CallFunc_GetAllActorsOfClass_OutActors) == 0x000008, "Member 'AthenaLockerTab_C_PlayEquippedLockerMusic_STW::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_PlayEquippedLockerMusic_STW, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000018, "Member 'AthenaLockerTab_C_PlayEquippedLockerMusic_STW::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_PlayEquippedLockerMusic_STW, CallFunc_Array_Get_Item) == 0x000020, "Member 'AthenaLockerTab_C_PlayEquippedLockerMusic_STW::CallFunc_Array_Get_Item' has a wrong offset!");

// Function AthenaLockerTab.AthenaLockerTab_C.PlaySlotClickedAnimation
// 0x0018 (0x0018 - 0x0000)
struct AthenaLockerTab_C_PlaySlotClickedAnimation final
{
public:
	class UAthenaCustomizationSlotButton_C*       SlotToPlayAnimOn;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56FD[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaLockerTab_C_PlaySlotClickedAnimation) == 0x000008, "Wrong alignment on AthenaLockerTab_C_PlaySlotClickedAnimation");
static_assert(sizeof(AthenaLockerTab_C_PlaySlotClickedAnimation) == 0x000018, "Wrong size on AthenaLockerTab_C_PlaySlotClickedAnimation");
static_assert(offsetof(AthenaLockerTab_C_PlaySlotClickedAnimation, SlotToPlayAnimOn) == 0x000000, "Member 'AthenaLockerTab_C_PlaySlotClickedAnimation::SlotToPlayAnimOn' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_PlaySlotClickedAnimation, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'AthenaLockerTab_C_PlaySlotClickedAnimation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_PlaySlotClickedAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'AthenaLockerTab_C_PlaySlotClickedAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function AthenaLockerTab.AthenaLockerTab_C.BeginPickingCustomization
// 0x0078 (0x0078 - 0x0000)
struct AthenaLockerTab_C_BeginPickingCustomization final
{
public:
	class UCommonButton*                          WidgetToReturnFocusTo;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAthenaCustomizationParams             Param_CustomizationParams;                         // 0x0008(0x0048)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UAthenaCustomizationSlotButton_C*       SlotButton;                                        // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_2;      // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable; // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCustomizationSlotActiveState_bOutActive; // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56FE[0x2];                                     // 0x005E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaCustomizationSlotButton_C*       K2Node_DynamicCast_AsAthena_Customization_Slot_Button; // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56FF[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaLockerTab_C_BeginPickingCustomization) == 0x000008, "Wrong alignment on AthenaLockerTab_C_BeginPickingCustomization");
static_assert(sizeof(AthenaLockerTab_C_BeginPickingCustomization) == 0x000078, "Wrong size on AthenaLockerTab_C_BeginPickingCustomization");
static_assert(offsetof(AthenaLockerTab_C_BeginPickingCustomization, WidgetToReturnFocusTo) == 0x000000, "Member 'AthenaLockerTab_C_BeginPickingCustomization::WidgetToReturnFocusTo' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_BeginPickingCustomization, Param_CustomizationParams) == 0x000008, "Member 'AthenaLockerTab_C_BeginPickingCustomization::Param_CustomizationParams' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_BeginPickingCustomization, SlotButton) == 0x000050, "Member 'AthenaLockerTab_C_BeginPickingCustomization::SlotButton' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_BeginPickingCustomization, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000058, "Member 'AthenaLockerTab_C_BeginPickingCustomization::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_BeginPickingCustomization, CallFunc_NotEqual_ObjectObject_ReturnValue_1) == 0x000059, "Member 'AthenaLockerTab_C_BeginPickingCustomization::CallFunc_NotEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_BeginPickingCustomization, CallFunc_BooleanAND_ReturnValue) == 0x00005A, "Member 'AthenaLockerTab_C_BeginPickingCustomization::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_BeginPickingCustomization, CallFunc_NotEqual_ObjectObject_ReturnValue_2) == 0x00005B, "Member 'AthenaLockerTab_C_BeginPickingCustomization::CallFunc_NotEqual_ObjectObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_BeginPickingCustomization, CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable) == 0x00005C, "Member 'AthenaLockerTab_C_BeginPickingCustomization::CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_BeginPickingCustomization, CallFunc_GetCustomizationSlotActiveState_bOutActive) == 0x00005D, "Member 'AthenaLockerTab_C_BeginPickingCustomization::CallFunc_GetCustomizationSlotActiveState_bOutActive' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_BeginPickingCustomization, K2Node_DynamicCast_AsAthena_Customization_Slot_Button) == 0x000060, "Member 'AthenaLockerTab_C_BeginPickingCustomization::K2Node_DynamicCast_AsAthena_Customization_Slot_Button' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_BeginPickingCustomization, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'AthenaLockerTab_C_BeginPickingCustomization::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_BeginPickingCustomization, CallFunc_PlayAnimation_ReturnValue) == 0x000070, "Member 'AthenaLockerTab_C_BeginPickingCustomization::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function AthenaLockerTab.AthenaLockerTab_C.OnBeginPickingCustomizationSlot
// 0x0008 (0x0008 - 0x0000)
struct AthenaLockerTab_C_OnBeginPickingCustomizationSlot final
{
public:
	class UAthenaCustomizationSlotSelectorButton* SlotButton;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaLockerTab_C_OnBeginPickingCustomizationSlot) == 0x000008, "Wrong alignment on AthenaLockerTab_C_OnBeginPickingCustomizationSlot");
static_assert(sizeof(AthenaLockerTab_C_OnBeginPickingCustomizationSlot) == 0x000008, "Wrong size on AthenaLockerTab_C_OnBeginPickingCustomizationSlot");
static_assert(offsetof(AthenaLockerTab_C_OnBeginPickingCustomizationSlot, SlotButton) == 0x000000, "Member 'AthenaLockerTab_C_OnBeginPickingCustomizationSlot::SlotButton' has a wrong offset!");

// Function AthenaLockerTab.AthenaLockerTab_C.OnInputMethodChanged_Event_0
// 0x0001 (0x0001 - 0x0000)
struct AthenaLockerTab_C_OnInputMethodChanged_Event_0 final
{
public:
	ECommonInputType                              bNewInputType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaLockerTab_C_OnInputMethodChanged_Event_0) == 0x000001, "Wrong alignment on AthenaLockerTab_C_OnInputMethodChanged_Event_0");
static_assert(sizeof(AthenaLockerTab_C_OnInputMethodChanged_Event_0) == 0x000001, "Wrong size on AthenaLockerTab_C_OnInputMethodChanged_Event_0");
static_assert(offsetof(AthenaLockerTab_C_OnInputMethodChanged_Event_0, bNewInputType) == 0x000000, "Member 'AthenaLockerTab_C_OnInputMethodChanged_Event_0::bNewInputType' has a wrong offset!");

// Function AthenaLockerTab.AthenaLockerTab_C.OnRefreshForNewLoadout
// 0x0018 (0x0018 - 0x0000)
struct AthenaLockerTab_C_OnRefreshForNewLoadout final
{
public:
	class FString                                 LoadoutName;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          bIsShuffleTile;                                    // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaLockerTab_C_OnRefreshForNewLoadout) == 0x000008, "Wrong alignment on AthenaLockerTab_C_OnRefreshForNewLoadout");
static_assert(sizeof(AthenaLockerTab_C_OnRefreshForNewLoadout) == 0x000018, "Wrong size on AthenaLockerTab_C_OnRefreshForNewLoadout");
static_assert(offsetof(AthenaLockerTab_C_OnRefreshForNewLoadout, LoadoutName) == 0x000000, "Member 'AthenaLockerTab_C_OnRefreshForNewLoadout::LoadoutName' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_OnRefreshForNewLoadout, bIsShuffleTile) == 0x000010, "Member 'AthenaLockerTab_C_OnRefreshForNewLoadout::bIsShuffleTile' has a wrong offset!");

// Function AthenaLockerTab.AthenaLockerTab_C.ExecuteUbergraph_AthenaLockerTab
// 0x01A0 (0x01A0 - 0x0000)
struct AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5700[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5701[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0018(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0030(0x0018)()
	class FText                                   Temp_text_Variable_2;                              // 0x0048(0x0018)()
	class UAthenaCustomizationSlotSelectorButton* K2Node_Event_SlotButton;                           // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButton_C*       K2Node_DynamicCast_AsAthena_Customization_Slot_Button; // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5702[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAthenaCustomizationParams             K2Node_MakeStruct_AthenaCustomizationParams;       // 0x0088(0x0048)()
	struct FAthenaCustomizationParams             K2Node_MakeStruct_AthenaCustomizationParams_1;     // 0x00D0(0x0048)()
	bool                                          CallFunc_ShouldDisplayNextRandomPresetName_ReturnValue; // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;                  // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5703[0x5];                                     // 0x011B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_LoadoutName;                          // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsShuffleTile;                       // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5704[0x6];                                     // 0x013A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_1;                           // 0x0140(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x015A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5705[0x5];                                     // 0x015B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0160(0x0018)()
	class FText                                   K2Node_Select_Default_3;                           // 0x0178(0x0018)()
	class USoloButton_C*                          K2Node_DynamicCast_AsSolo_Button;                  // 0x0190(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab) == 0x000008, "Wrong alignment on AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab");
static_assert(sizeof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab) == 0x0001A0, "Wrong size on AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, EntryPoint) == 0x000000, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_bool_Variable) == 0x000004, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_byte_Variable) == 0x000010, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_byte_Variable_1) == 0x000011, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_bool_Variable_1) == 0x000012, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_byte_Variable_2) == 0x000013, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_byte_Variable_3) == 0x000014, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_bool_Variable_2) == 0x000015, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_text_Variable) == 0x000018, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_text_Variable_1) == 0x000030, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_text_Variable_2) == 0x000048, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_Event_SlotButton) == 0x000060, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_Event_SlotButton' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_DynamicCast_AsAthena_Customization_Slot_Button) == 0x000068, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_DynamicCast_AsAthena_Customization_Slot_Button' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_PlayAnimation_ReturnValue_1) == 0x000078, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_PlayAnimation_ReturnValue_2) == 0x000080, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_MakeStruct_AthenaCustomizationParams) == 0x000088, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_MakeStruct_AthenaCustomizationParams' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_MakeStruct_AthenaCustomizationParams_1) == 0x0000D0, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_MakeStruct_AthenaCustomizationParams_1' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_ShouldDisplayNextRandomPresetName_ReturnValue) == 0x000118, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_ShouldDisplayNextRandomPresetName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_CustomEvent_bNewInputType) == 0x000119, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_CustomEvent_bNewInputType' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_bool_Variable_3) == 0x00011A, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_PlayAnimationForward_ReturnValue) == 0x000120, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_Event_LoadoutName) == 0x000128, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_Event_LoadoutName' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_Event_bIsShuffleTile) == 0x000138, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_Event_bIsShuffleTile' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_Select_Default) == 0x000139, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_Select_Default_1) == 0x000140, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_BooleanAND_ReturnValue) == 0x000158, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000159, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_Select_Default_2) == 0x00015A, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_Conv_StringToText_ReturnValue) == 0x000160, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_Select_Default_3) == 0x000178, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_DynamicCast_AsSolo_Button) == 0x000190, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_DynamicCast_AsSolo_Button' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_DynamicCast_bSuccess_1) == 0x000198, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

