#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CreativePortalHUDSwitcher

#include "Basic.hpp"


namespace SDK::Params
{

// Function CreativePortalHUDSwitcher.CreativePortalHUDSwitcher_C.SetupPortalEventBinding
// 0x0030 (0x0030 - 0x0000)
struct CreativePortalHUDSwitcher_C_SetupPortalEventBinding final
{
public:
	class ABGA_IslandPortal_C*                    InPortal;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBind;                                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53C9[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bPlayerLookingAtScreen)>  K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bPlayerLookingAtScreen)>  K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(CreativePortalHUDSwitcher_C_SetupPortalEventBinding) == 0x000008, "Wrong alignment on CreativePortalHUDSwitcher_C_SetupPortalEventBinding");
static_assert(sizeof(CreativePortalHUDSwitcher_C_SetupPortalEventBinding) == 0x000030, "Wrong size on CreativePortalHUDSwitcher_C_SetupPortalEventBinding");
static_assert(offsetof(CreativePortalHUDSwitcher_C_SetupPortalEventBinding, InPortal) == 0x000000, "Member 'CreativePortalHUDSwitcher_C_SetupPortalEventBinding::InPortal' has a wrong offset!");
static_assert(offsetof(CreativePortalHUDSwitcher_C_SetupPortalEventBinding, bBind) == 0x000008, "Member 'CreativePortalHUDSwitcher_C_SetupPortalEventBinding::bBind' has a wrong offset!");
static_assert(offsetof(CreativePortalHUDSwitcher_C_SetupPortalEventBinding, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'CreativePortalHUDSwitcher_C_SetupPortalEventBinding::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CreativePortalHUDSwitcher_C_SetupPortalEventBinding, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'CreativePortalHUDSwitcher_C_SetupPortalEventBinding::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function CreativePortalHUDSwitcher.CreativePortalHUDSwitcher_C.SetActivePortalDisplayWidget
// 0x0010 (0x0010 - 0x0000)
struct CreativePortalHUDSwitcher_C_SetActivePortalDisplayWidget final
{
public:
	bool                                          bIsLookingAtCodeScreen;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53CA[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CreativePortalHUDSwitcher_C_SetActivePortalDisplayWidget) == 0x000008, "Wrong alignment on CreativePortalHUDSwitcher_C_SetActivePortalDisplayWidget");
static_assert(sizeof(CreativePortalHUDSwitcher_C_SetActivePortalDisplayWidget) == 0x000010, "Wrong size on CreativePortalHUDSwitcher_C_SetActivePortalDisplayWidget");
static_assert(offsetof(CreativePortalHUDSwitcher_C_SetActivePortalDisplayWidget, bIsLookingAtCodeScreen) == 0x000000, "Member 'CreativePortalHUDSwitcher_C_SetActivePortalDisplayWidget::bIsLookingAtCodeScreen' has a wrong offset!");
static_assert(offsetof(CreativePortalHUDSwitcher_C_SetActivePortalDisplayWidget, Temp_bool_Variable) == 0x000001, "Member 'CreativePortalHUDSwitcher_C_SetActivePortalDisplayWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CreativePortalHUDSwitcher_C_SetActivePortalDisplayWidget, K2Node_Select_Default) == 0x000008, "Member 'CreativePortalHUDSwitcher_C_SetActivePortalDisplayWidget::K2Node_Select_Default' has a wrong offset!");

// Function CreativePortalHUDSwitcher.CreativePortalHUDSwitcher_C.InitFromObject
// 0x0008 (0x0008 - 0x0000)
struct CreativePortalHUDSwitcher_C_InitFromObject final
{
public:
	class UObject*                                InitObject;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CreativePortalHUDSwitcher_C_InitFromObject) == 0x000008, "Wrong alignment on CreativePortalHUDSwitcher_C_InitFromObject");
static_assert(sizeof(CreativePortalHUDSwitcher_C_InitFromObject) == 0x000008, "Wrong size on CreativePortalHUDSwitcher_C_InitFromObject");
static_assert(offsetof(CreativePortalHUDSwitcher_C_InitFromObject, InitObject) == 0x000000, "Member 'CreativePortalHUDSwitcher_C_InitFromObject::InitObject' has a wrong offset!");

// Function CreativePortalHUDSwitcher.CreativePortalHUDSwitcher_C.ExecuteUbergraph_CreativePortalHUDSwitcher
// 0x0060 (0x0060 - 0x0000)
struct CreativePortalHUDSwitcher_C_ExecuteUbergraph_CreativePortalHUDSwitcher final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53CB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetActiveWidget_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICreativePortalHUDDetailsInterface_C> K2Node_DynamicCast_AsCreative_Portal_HUDDetails_Interface; // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53CC[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_InitObject;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABGA_IslandPortal_C*                    K2Node_DynamicCast_AsBGA_Island_Portal;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53CD[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IFortInitializeFromObjectInterface> CallFunc_InitFromObject_self_CastInput;            // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IFortInitializeFromObjectInterface> CallFunc_InitFromObject_self_CastInput_1;          // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CreativePortalHUDSwitcher_C_ExecuteUbergraph_CreativePortalHUDSwitcher) == 0x000008, "Wrong alignment on CreativePortalHUDSwitcher_C_ExecuteUbergraph_CreativePortalHUDSwitcher");
static_assert(sizeof(CreativePortalHUDSwitcher_C_ExecuteUbergraph_CreativePortalHUDSwitcher) == 0x000060, "Wrong size on CreativePortalHUDSwitcher_C_ExecuteUbergraph_CreativePortalHUDSwitcher");
static_assert(offsetof(CreativePortalHUDSwitcher_C_ExecuteUbergraph_CreativePortalHUDSwitcher, EntryPoint) == 0x000000, "Member 'CreativePortalHUDSwitcher_C_ExecuteUbergraph_CreativePortalHUDSwitcher::EntryPoint' has a wrong offset!");
static_assert(offsetof(CreativePortalHUDSwitcher_C_ExecuteUbergraph_CreativePortalHUDSwitcher, CallFunc_GetActiveWidget_ReturnValue) == 0x000008, "Member 'CreativePortalHUDSwitcher_C_ExecuteUbergraph_CreativePortalHUDSwitcher::CallFunc_GetActiveWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreativePortalHUDSwitcher_C_ExecuteUbergraph_CreativePortalHUDSwitcher, K2Node_DynamicCast_AsCreative_Portal_HUDDetails_Interface) == 0x000010, "Member 'CreativePortalHUDSwitcher_C_ExecuteUbergraph_CreativePortalHUDSwitcher::K2Node_DynamicCast_AsCreative_Portal_HUDDetails_Interface' has a wrong offset!");
static_assert(offsetof(CreativePortalHUDSwitcher_C_ExecuteUbergraph_CreativePortalHUDSwitcher, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'CreativePortalHUDSwitcher_C_ExecuteUbergraph_CreativePortalHUDSwitcher::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CreativePortalHUDSwitcher_C_ExecuteUbergraph_CreativePortalHUDSwitcher, K2Node_Event_InitObject) == 0x000028, "Member 'CreativePortalHUDSwitcher_C_ExecuteUbergraph_CreativePortalHUDSwitcher::K2Node_Event_InitObject' has a wrong offset!");
static_assert(offsetof(CreativePortalHUDSwitcher_C_ExecuteUbergraph_CreativePortalHUDSwitcher, K2Node_DynamicCast_AsBGA_Island_Portal) == 0x000030, "Member 'CreativePortalHUDSwitcher_C_ExecuteUbergraph_CreativePortalHUDSwitcher::K2Node_DynamicCast_AsBGA_Island_Portal' has a wrong offset!");
static_assert(offsetof(CreativePortalHUDSwitcher_C_ExecuteUbergraph_CreativePortalHUDSwitcher, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'CreativePortalHUDSwitcher_C_ExecuteUbergraph_CreativePortalHUDSwitcher::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CreativePortalHUDSwitcher_C_ExecuteUbergraph_CreativePortalHUDSwitcher, CallFunc_InitFromObject_self_CastInput) == 0x000040, "Member 'CreativePortalHUDSwitcher_C_ExecuteUbergraph_CreativePortalHUDSwitcher::CallFunc_InitFromObject_self_CastInput' has a wrong offset!");
static_assert(offsetof(CreativePortalHUDSwitcher_C_ExecuteUbergraph_CreativePortalHUDSwitcher, CallFunc_InitFromObject_self_CastInput_1) == 0x000050, "Member 'CreativePortalHUDSwitcher_C_ExecuteUbergraph_CreativePortalHUDSwitcher::CallFunc_InitFromObject_self_CastInput_1' has a wrong offset!");

}
