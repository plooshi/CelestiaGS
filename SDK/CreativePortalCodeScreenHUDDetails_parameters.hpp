#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CreativePortalCodeScreenHUDDetails

#include "Basic.hpp"


namespace SDK::Params
{

// Function CreativePortalCodeScreenHUDDetails.CreativePortalCodeScreenHUDDetails_C.SetupPortalEventBinding
// 0x0030 (0x0030 - 0x0000)
struct CreativePortalCodeScreenHUDDetails_C_SetupPortalEventBinding final
{
public:
	class ABGA_IslandPortal_C*                    InPortal;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBind;                                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65A6[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bIsCurated, bool bIsLinkCode, bool bIsUserInitiatedLoad)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bIsCurated, bool bIsLinkCode, bool bIsUserInitiatedLoad)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(CreativePortalCodeScreenHUDDetails_C_SetupPortalEventBinding) == 0x000008, "Wrong alignment on CreativePortalCodeScreenHUDDetails_C_SetupPortalEventBinding");
static_assert(sizeof(CreativePortalCodeScreenHUDDetails_C_SetupPortalEventBinding) == 0x000030, "Wrong size on CreativePortalCodeScreenHUDDetails_C_SetupPortalEventBinding");
static_assert(offsetof(CreativePortalCodeScreenHUDDetails_C_SetupPortalEventBinding, InPortal) == 0x000000, "Member 'CreativePortalCodeScreenHUDDetails_C_SetupPortalEventBinding::InPortal' has a wrong offset!");
static_assert(offsetof(CreativePortalCodeScreenHUDDetails_C_SetupPortalEventBinding, bBind) == 0x000008, "Member 'CreativePortalCodeScreenHUDDetails_C_SetupPortalEventBinding::bBind' has a wrong offset!");
static_assert(offsetof(CreativePortalCodeScreenHUDDetails_C_SetupPortalEventBinding, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'CreativePortalCodeScreenHUDDetails_C_SetupPortalEventBinding::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CreativePortalCodeScreenHUDDetails_C_SetupPortalEventBinding, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'CreativePortalCodeScreenHUDDetails_C_SetupPortalEventBinding::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function CreativePortalCodeScreenHUDDetails.CreativePortalCodeScreenHUDDetails_C.SetCuratedStatus
// 0x0050 (0x0050 - 0x0000)
struct CreativePortalCodeScreenHUDDetails_C_SetCuratedStatus final
{
public:
	bool                                          bIsFeatured;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsLinkCode;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsUserInitiatedLoad;                              // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65A7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0020(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0038(0x0018)()
};
static_assert(alignof(CreativePortalCodeScreenHUDDetails_C_SetCuratedStatus) == 0x000008, "Wrong alignment on CreativePortalCodeScreenHUDDetails_C_SetCuratedStatus");
static_assert(sizeof(CreativePortalCodeScreenHUDDetails_C_SetCuratedStatus) == 0x000050, "Wrong size on CreativePortalCodeScreenHUDDetails_C_SetCuratedStatus");
static_assert(offsetof(CreativePortalCodeScreenHUDDetails_C_SetCuratedStatus, bIsFeatured) == 0x000000, "Member 'CreativePortalCodeScreenHUDDetails_C_SetCuratedStatus::bIsFeatured' has a wrong offset!");
static_assert(offsetof(CreativePortalCodeScreenHUDDetails_C_SetCuratedStatus, bIsLinkCode) == 0x000001, "Member 'CreativePortalCodeScreenHUDDetails_C_SetCuratedStatus::bIsLinkCode' has a wrong offset!");
static_assert(offsetof(CreativePortalCodeScreenHUDDetails_C_SetCuratedStatus, bIsUserInitiatedLoad) == 0x000002, "Member 'CreativePortalCodeScreenHUDDetails_C_SetCuratedStatus::bIsUserInitiatedLoad' has a wrong offset!");
static_assert(offsetof(CreativePortalCodeScreenHUDDetails_C_SetCuratedStatus, Temp_bool_Variable) == 0x000003, "Member 'CreativePortalCodeScreenHUDDetails_C_SetCuratedStatus::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CreativePortalCodeScreenHUDDetails_C_SetCuratedStatus, Temp_text_Variable) == 0x000008, "Member 'CreativePortalCodeScreenHUDDetails_C_SetCuratedStatus::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(CreativePortalCodeScreenHUDDetails_C_SetCuratedStatus, Temp_text_Variable_1) == 0x000020, "Member 'CreativePortalCodeScreenHUDDetails_C_SetCuratedStatus::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(CreativePortalCodeScreenHUDDetails_C_SetCuratedStatus, K2Node_Select_Default) == 0x000038, "Member 'CreativePortalCodeScreenHUDDetails_C_SetCuratedStatus::K2Node_Select_Default' has a wrong offset!");

// Function CreativePortalCodeScreenHUDDetails.CreativePortalCodeScreenHUDDetails_C.InitFromObject
// 0x0008 (0x0008 - 0x0000)
struct CreativePortalCodeScreenHUDDetails_C_InitFromObject final
{
public:
	class UObject*                                InitObject;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CreativePortalCodeScreenHUDDetails_C_InitFromObject) == 0x000008, "Wrong alignment on CreativePortalCodeScreenHUDDetails_C_InitFromObject");
static_assert(sizeof(CreativePortalCodeScreenHUDDetails_C_InitFromObject) == 0x000008, "Wrong size on CreativePortalCodeScreenHUDDetails_C_InitFromObject");
static_assert(offsetof(CreativePortalCodeScreenHUDDetails_C_InitFromObject, InitObject) == 0x000000, "Member 'CreativePortalCodeScreenHUDDetails_C_InitFromObject::InitObject' has a wrong offset!");

// Function CreativePortalCodeScreenHUDDetails.CreativePortalCodeScreenHUDDetails_C.ExecuteUbergraph_CreativePortalCodeScreenHUDDetails
// 0x0028 (0x0028 - 0x0000)
struct CreativePortalCodeScreenHUDDetails_C_ExecuteUbergraph_CreativePortalCodeScreenHUDDetails final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65A8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_Event_InitObject;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABGA_IslandPortal_C*                    K2Node_DynamicCast_AsBGA_Island_Portal;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CreativePortalCodeScreenHUDDetails_C_ExecuteUbergraph_CreativePortalCodeScreenHUDDetails) == 0x000008, "Wrong alignment on CreativePortalCodeScreenHUDDetails_C_ExecuteUbergraph_CreativePortalCodeScreenHUDDetails");
static_assert(sizeof(CreativePortalCodeScreenHUDDetails_C_ExecuteUbergraph_CreativePortalCodeScreenHUDDetails) == 0x000028, "Wrong size on CreativePortalCodeScreenHUDDetails_C_ExecuteUbergraph_CreativePortalCodeScreenHUDDetails");
static_assert(offsetof(CreativePortalCodeScreenHUDDetails_C_ExecuteUbergraph_CreativePortalCodeScreenHUDDetails, EntryPoint) == 0x000000, "Member 'CreativePortalCodeScreenHUDDetails_C_ExecuteUbergraph_CreativePortalCodeScreenHUDDetails::EntryPoint' has a wrong offset!");
static_assert(offsetof(CreativePortalCodeScreenHUDDetails_C_ExecuteUbergraph_CreativePortalCodeScreenHUDDetails, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'CreativePortalCodeScreenHUDDetails_C_ExecuteUbergraph_CreativePortalCodeScreenHUDDetails::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreativePortalCodeScreenHUDDetails_C_ExecuteUbergraph_CreativePortalCodeScreenHUDDetails, K2Node_Event_InitObject) == 0x000010, "Member 'CreativePortalCodeScreenHUDDetails_C_ExecuteUbergraph_CreativePortalCodeScreenHUDDetails::K2Node_Event_InitObject' has a wrong offset!");
static_assert(offsetof(CreativePortalCodeScreenHUDDetails_C_ExecuteUbergraph_CreativePortalCodeScreenHUDDetails, K2Node_DynamicCast_AsBGA_Island_Portal) == 0x000018, "Member 'CreativePortalCodeScreenHUDDetails_C_ExecuteUbergraph_CreativePortalCodeScreenHUDDetails::K2Node_DynamicCast_AsBGA_Island_Portal' has a wrong offset!");
static_assert(offsetof(CreativePortalCodeScreenHUDDetails_C_ExecuteUbergraph_CreativePortalCodeScreenHUDDetails, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'CreativePortalCodeScreenHUDDetails_C_ExecuteUbergraph_CreativePortalCodeScreenHUDDetails::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
