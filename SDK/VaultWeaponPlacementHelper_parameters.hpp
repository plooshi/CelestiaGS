#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VaultWeaponPlacementHelper

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnFrontEndCameraChanged
// 0x0003 (0x0003 - 0x0000)
struct VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged final
{
public:
	EFrontEndCamera                               NewCamera;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFrontEndCamera                               OldCamera;                                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged) == 0x000001, "Wrong alignment on VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged");
static_assert(sizeof(VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged) == 0x000003, "Wrong size on VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged");
static_assert(offsetof(VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged, NewCamera) == 0x000000, "Member 'VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged::NewCamera' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged, OldCamera) == 0x000001, "Member 'VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged::OldCamera' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.InitializeContextEvents
// 0x0018 (0x0018 - 0x0000)
struct VaultWeaponPlacementHelper_C_InitializeContextEvents final
{
public:
	TDelegate<void(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultWeaponPlacementHelper_C_InitializeContextEvents) == 0x000008, "Wrong alignment on VaultWeaponPlacementHelper_C_InitializeContextEvents");
static_assert(sizeof(VaultWeaponPlacementHelper_C_InitializeContextEvents) == 0x000018, "Wrong size on VaultWeaponPlacementHelper_C_InitializeContextEvents");
static_assert(offsetof(VaultWeaponPlacementHelper_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'VaultWeaponPlacementHelper_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_InitializeContextEvents, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'VaultWeaponPlacementHelper_C_InitializeContextEvents::CallFunc_GetContext_ReturnValue' has a wrong offset!");

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ExecuteUbergraph_VaultWeaponPlacementHelper
// 0x0004 (0x0004 - 0x0000)
struct VaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper) == 0x000004, "Wrong alignment on VaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper");
static_assert(sizeof(VaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper) == 0x000004, "Wrong size on VaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper");
static_assert(offsetof(VaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper, EntryPoint) == 0x000000, "Member 'VaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper::EntryPoint' has a wrong offset!");

}
