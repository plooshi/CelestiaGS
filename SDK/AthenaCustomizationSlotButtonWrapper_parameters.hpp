#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaCustomizationSlotButtonWrapper

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.ResetPopulateAnimVisual
// 0x0010 (0x0010 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_ResetPopulateAnimVisual final
{
public:
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7086[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaCustomizationSlotButtonWrapper_C_ResetPopulateAnimVisual) == 0x000008, "Wrong alignment on AthenaCustomizationSlotButtonWrapper_C_ResetPopulateAnimVisual");
static_assert(sizeof(AthenaCustomizationSlotButtonWrapper_C_ResetPopulateAnimVisual) == 0x000010, "Wrong size on AthenaCustomizationSlotButtonWrapper_C_ResetPopulateAnimVisual");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ResetPopulateAnimVisual, CallFunc_GetEndTime_ReturnValue) == 0x000000, "Member 'AthenaCustomizationSlotButtonWrapper_C_ResetPopulateAnimVisual::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ResetPopulateAnimVisual, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'AthenaCustomizationSlotButtonWrapper_C_ResetPopulateAnimVisual::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.GetCustomizationSlotActiveState
// 0x0004 (0x0004 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState final
{
public:
	bool                                          bCosmeticAvaialble;                                // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bActive;                                           // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable; // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCustomizationSlotActiveState_bOutActive; // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState) == 0x000001, "Wrong alignment on AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState");
static_assert(sizeof(AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState) == 0x000004, "Wrong size on AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState, bCosmeticAvaialble) == 0x000000, "Member 'AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState::bCosmeticAvaialble' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState, bActive) == 0x000001, "Member 'AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState::bActive' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState, CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable) == 0x000002, "Member 'AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState::CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState, CallFunc_GetCustomizationSlotActiveState_bOutActive) == 0x000003, "Member 'AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState::CallFunc_GetCustomizationSlotActiveState_bOutActive' has a wrong offset!");

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.AnimPopulateInternal
// 0x0004 (0x0004 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_AnimPopulateInternal final
{
public:
	int32                                         ButtonIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaCustomizationSlotButtonWrapper_C_AnimPopulateInternal) == 0x000004, "Wrong alignment on AthenaCustomizationSlotButtonWrapper_C_AnimPopulateInternal");
static_assert(sizeof(AthenaCustomizationSlotButtonWrapper_C_AnimPopulateInternal) == 0x000004, "Wrong size on AthenaCustomizationSlotButtonWrapper_C_AnimPopulateInternal");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_AnimPopulateInternal, ButtonIndex) == 0x000000, "Member 'AthenaCustomizationSlotButtonWrapper_C_AnimPopulateInternal::ButtonIndex' has a wrong offset!");

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper
// 0x00A8 (0x00A8 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7087[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button_2;               // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanShowLockerSlotType_ReturnValue;        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7088[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button_1;               // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7089[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAthenaCustomizationParams             K2Node_MakeStruct_AthenaCustomizationParams;       // 0x0048(0x0048)()
	int32                                         K2Node_CustomEvent_ButtonIndex;                    // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_708A[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper) == 0x000008, "Wrong alignment on AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper");
static_assert(sizeof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper) == 0x0000A8, "Wrong size on AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, EntryPoint) == 0x000000, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, Temp_bool_Variable) == 0x000004, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, Temp_byte_Variable) == 0x000005, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, Temp_byte_Variable_1) == 0x000006, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, K2Node_ComponentBoundEvent_Button_2) == 0x000010, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, CallFunc_CanShowLockerSlotType_ReturnValue) == 0x000018, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::CallFunc_CanShowLockerSlotType_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, K2Node_ComponentBoundEvent_Button_1) == 0x000020, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, K2Node_Select_Default) == 0x000028, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, K2Node_ComponentBoundEvent_Button) == 0x000030, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, CallFunc_PlayAnimation_ReturnValue_1) == 0x000040, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, K2Node_MakeStruct_AthenaCustomizationParams) == 0x000048, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::K2Node_MakeStruct_AthenaCustomizationParams' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, K2Node_CustomEvent_ButtonIndex) == 0x000090, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::K2Node_CustomEvent_ButtonIndex' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, CallFunc_Add_IntInt_ReturnValue) == 0x000094, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000098, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, CallFunc_PlayAnimation_ReturnValue_2) == 0x0000A0, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.OnSlotHovered__DelegateSignature
// 0x0048 (0x0048 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature final
{
public:
	class UAthenaCustomizationSlotButtonWrapper_C* ButtonWrapper;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAthenaCustomizationCategory                  Param_CustomizationType;                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_708B[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   BannerLabel;                                       // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CustomizationDescription;                          // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Param_SubslotIndex;                                // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature) == 0x000008, "Wrong alignment on AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature");
static_assert(sizeof(AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature) == 0x000048, "Wrong size on AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature, ButtonWrapper) == 0x000000, "Member 'AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature::ButtonWrapper' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature, Param_CustomizationType) == 0x000008, "Member 'AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature::Param_CustomizationType' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature, BannerLabel) == 0x000010, "Member 'AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature::BannerLabel' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature, CustomizationDescription) == 0x000028, "Member 'AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature::CustomizationDescription' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature, Param_SubslotIndex) == 0x000040, "Member 'AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature::Param_SubslotIndex' has a wrong offset!");

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.OnSlotClicked__DelegateSignature
// 0x0050 (0x0050 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAthenaCustomizationParams             CustomizationParams;                               // 0x0008(0x0048)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(AthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature");
static_assert(sizeof(AthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature) == 0x000050, "Wrong size on AthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature::Button' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature, CustomizationParams) == 0x000008, "Member 'AthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature::CustomizationParams' has a wrong offset!");

}
