#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SK_Hoagie_Protomesh_CtrlRig

#include "Basic.hpp"

#include "ControlRig_structs.hpp"
#include "ControlRig_classes.hpp"


namespace SDK
{

// ControlRigBlueprintGeneratedClass SK_Hoagie_Protomesh_CtrlRig.SK_Hoagie_Protomesh_CtrlRig_C
// 0x0870 (0x0BD0 - 0x0360)
class USK_Hoagie_Protomesh_CtrlRig_C final : public UControlRig
{
public:
	struct FRigUnit_BeginExecution                BeginExecution;                                    // 0x0360(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneTransform              SetBoneTransform;                                  // 0x0380(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneTransform              SetBoneTransform_0;                                // 0x03F0(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneTransform              SetBoneTransform_1;                                // 0x0460(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneTransform              SetBoneTransform_2;                                // 0x04D0(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneTransform              SetBoneTransform_3;                                // 0x0540(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneTransform              SetBoneTransform_4;                                // 0x05B0(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneTransform              SetBoneTransform_5;                                // 0x0620(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform       GetInitialBoneTransform;                           // 0x0690(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform       GetInitialBoneTransform_0;                         // 0x06F0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform       GetInitialBoneTransform_1;                         // 0x0750(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform       GetInitialBoneTransform_2;                         // 0x07B0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform       GetInitialBoneTransform_3;                         // 0x0810(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform       GetInitialBoneTransform_4;                         // 0x0870(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform       GetInitialBoneTransform_5;                         // 0x08D0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform              GetBoneTransform;                                  // 0x0930(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform              GetBoneTransform_0;                                // 0x0990(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform              GetBoneTransform_1;                                // 0x09F0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform              GetBoneTransform_2;                                // 0x0A50(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform              GetBoneTransform_3;                                // 0x0AB0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform              GetBoneTransform_4;                                // 0x0B10(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform              GetBoneTransform_5;                                // 0x0B70(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SK_Hoagie_Protomesh_CtrlRig_C">();
	}
	static class USK_Hoagie_Protomesh_CtrlRig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USK_Hoagie_Protomesh_CtrlRig_C>();
	}
};
static_assert(alignof(USK_Hoagie_Protomesh_CtrlRig_C) == 0x000010, "Wrong alignment on USK_Hoagie_Protomesh_CtrlRig_C");
static_assert(sizeof(USK_Hoagie_Protomesh_CtrlRig_C) == 0x000BD0, "Wrong size on USK_Hoagie_Protomesh_CtrlRig_C");
static_assert(offsetof(USK_Hoagie_Protomesh_CtrlRig_C, BeginExecution) == 0x000360, "Member 'USK_Hoagie_Protomesh_CtrlRig_C::BeginExecution' has a wrong offset!");
static_assert(offsetof(USK_Hoagie_Protomesh_CtrlRig_C, SetBoneTransform) == 0x000380, "Member 'USK_Hoagie_Protomesh_CtrlRig_C::SetBoneTransform' has a wrong offset!");
static_assert(offsetof(USK_Hoagie_Protomesh_CtrlRig_C, SetBoneTransform_0) == 0x0003F0, "Member 'USK_Hoagie_Protomesh_CtrlRig_C::SetBoneTransform_0' has a wrong offset!");
static_assert(offsetof(USK_Hoagie_Protomesh_CtrlRig_C, SetBoneTransform_1) == 0x000460, "Member 'USK_Hoagie_Protomesh_CtrlRig_C::SetBoneTransform_1' has a wrong offset!");
static_assert(offsetof(USK_Hoagie_Protomesh_CtrlRig_C, SetBoneTransform_2) == 0x0004D0, "Member 'USK_Hoagie_Protomesh_CtrlRig_C::SetBoneTransform_2' has a wrong offset!");
static_assert(offsetof(USK_Hoagie_Protomesh_CtrlRig_C, SetBoneTransform_3) == 0x000540, "Member 'USK_Hoagie_Protomesh_CtrlRig_C::SetBoneTransform_3' has a wrong offset!");
static_assert(offsetof(USK_Hoagie_Protomesh_CtrlRig_C, SetBoneTransform_4) == 0x0005B0, "Member 'USK_Hoagie_Protomesh_CtrlRig_C::SetBoneTransform_4' has a wrong offset!");
static_assert(offsetof(USK_Hoagie_Protomesh_CtrlRig_C, SetBoneTransform_5) == 0x000620, "Member 'USK_Hoagie_Protomesh_CtrlRig_C::SetBoneTransform_5' has a wrong offset!");
static_assert(offsetof(USK_Hoagie_Protomesh_CtrlRig_C, GetInitialBoneTransform) == 0x000690, "Member 'USK_Hoagie_Protomesh_CtrlRig_C::GetInitialBoneTransform' has a wrong offset!");
static_assert(offsetof(USK_Hoagie_Protomesh_CtrlRig_C, GetInitialBoneTransform_0) == 0x0006F0, "Member 'USK_Hoagie_Protomesh_CtrlRig_C::GetInitialBoneTransform_0' has a wrong offset!");
static_assert(offsetof(USK_Hoagie_Protomesh_CtrlRig_C, GetInitialBoneTransform_1) == 0x000750, "Member 'USK_Hoagie_Protomesh_CtrlRig_C::GetInitialBoneTransform_1' has a wrong offset!");
static_assert(offsetof(USK_Hoagie_Protomesh_CtrlRig_C, GetInitialBoneTransform_2) == 0x0007B0, "Member 'USK_Hoagie_Protomesh_CtrlRig_C::GetInitialBoneTransform_2' has a wrong offset!");
static_assert(offsetof(USK_Hoagie_Protomesh_CtrlRig_C, GetInitialBoneTransform_3) == 0x000810, "Member 'USK_Hoagie_Protomesh_CtrlRig_C::GetInitialBoneTransform_3' has a wrong offset!");
static_assert(offsetof(USK_Hoagie_Protomesh_CtrlRig_C, GetInitialBoneTransform_4) == 0x000870, "Member 'USK_Hoagie_Protomesh_CtrlRig_C::GetInitialBoneTransform_4' has a wrong offset!");
static_assert(offsetof(USK_Hoagie_Protomesh_CtrlRig_C, GetInitialBoneTransform_5) == 0x0008D0, "Member 'USK_Hoagie_Protomesh_CtrlRig_C::GetInitialBoneTransform_5' has a wrong offset!");
static_assert(offsetof(USK_Hoagie_Protomesh_CtrlRig_C, GetBoneTransform) == 0x000930, "Member 'USK_Hoagie_Protomesh_CtrlRig_C::GetBoneTransform' has a wrong offset!");
static_assert(offsetof(USK_Hoagie_Protomesh_CtrlRig_C, GetBoneTransform_0) == 0x000990, "Member 'USK_Hoagie_Protomesh_CtrlRig_C::GetBoneTransform_0' has a wrong offset!");
static_assert(offsetof(USK_Hoagie_Protomesh_CtrlRig_C, GetBoneTransform_1) == 0x0009F0, "Member 'USK_Hoagie_Protomesh_CtrlRig_C::GetBoneTransform_1' has a wrong offset!");
static_assert(offsetof(USK_Hoagie_Protomesh_CtrlRig_C, GetBoneTransform_2) == 0x000A50, "Member 'USK_Hoagie_Protomesh_CtrlRig_C::GetBoneTransform_2' has a wrong offset!");
static_assert(offsetof(USK_Hoagie_Protomesh_CtrlRig_C, GetBoneTransform_3) == 0x000AB0, "Member 'USK_Hoagie_Protomesh_CtrlRig_C::GetBoneTransform_3' has a wrong offset!");
static_assert(offsetof(USK_Hoagie_Protomesh_CtrlRig_C, GetBoneTransform_4) == 0x000B10, "Member 'USK_Hoagie_Protomesh_CtrlRig_C::GetBoneTransform_4' has a wrong offset!");
static_assert(offsetof(USK_Hoagie_Protomesh_CtrlRig_C, GetBoneTransform_5) == 0x000B70, "Member 'USK_Hoagie_Protomesh_CtrlRig_C::GetBoneTransform_5' has a wrong offset!");

}

