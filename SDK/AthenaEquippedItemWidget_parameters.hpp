#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaEquippedItemWidget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.ExecuteUbergraph_AthenaEquippedItemWidget
// 0x00C0 (0x00C0 - 0x0000)
struct AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F8C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortWeapon*                            K2Node_Event_NewWeapon;                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                            K2Node_Event_PrevWeapon;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_WeaponDataIsValid_ReturnValue;            // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F8D[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortWeaponItemDefinition*              CallFunc_GetWeaponData_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F8E[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0030(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F8F[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_1;                             // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_2;                             // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F90[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F91[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0070(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bHasBulletsPerClip;                   // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F92[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_3;                             // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bHasAmmo;                             // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F93[0x2];                                     // 0x0092(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_MagazineAmmoCount;                    // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SurplusAmmoCount;                     // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_TotalRemaining;                       // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F94[0x2];                                     // 0x00A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_1;                           // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UFortResourceItemDefinition*      K2Node_Event_Item;                                 // 0x00A8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_ResourceCount;                        // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F95[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_2;                           // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget) == 0x000008, "Wrong alignment on AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget");
static_assert(sizeof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget) == 0x0000C0, "Wrong size on AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, EntryPoint) == 0x000000, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, K2Node_Event_NewWeapon) == 0x000008, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::K2Node_Event_NewWeapon' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, K2Node_Event_PrevWeapon) == 0x000010, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::K2Node_Event_PrevWeapon' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, Temp_float_Variable) == 0x000018, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, CallFunc_WeaponDataIsValid_ReturnValue) == 0x00001C, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::CallFunc_WeaponDataIsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, CallFunc_GetWeaponData_ReturnValue) == 0x000020, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::CallFunc_GetWeaponData_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, CallFunc_GetDisplayName_ReturnValue) == 0x000030, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, Temp_bool_Variable) == 0x000048, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, Temp_float_Variable_1) == 0x00004C, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, Temp_float_Variable_2) == 0x000050, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::Temp_float_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, Temp_bool_Variable_1) == 0x000054, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000058, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, Temp_byte_Variable) == 0x000068, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000070, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, CallFunc_PlayAnimation_ReturnValue) == 0x000078, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, CallFunc_PlayAnimation_ReturnValue_1) == 0x000080, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, K2Node_Event_bHasBulletsPerClip) == 0x000088, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::K2Node_Event_bHasBulletsPerClip' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, Temp_float_Variable_3) == 0x00008C, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::Temp_float_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, K2Node_Select_Default) == 0x000090, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, K2Node_Event_bHasAmmo) == 0x000091, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::K2Node_Event_bHasAmmo' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, K2Node_Event_MagazineAmmoCount) == 0x000094, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::K2Node_Event_MagazineAmmoCount' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, K2Node_Event_SurplusAmmoCount) == 0x000098, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::K2Node_Event_SurplusAmmoCount' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, K2Node_Event_TotalRemaining) == 0x00009C, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::K2Node_Event_TotalRemaining' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, CallFunc_Greater_IntInt_ReturnValue) == 0x0000A0, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0000A1, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, K2Node_Select_Default_1) == 0x0000A4, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, K2Node_Event_Item) == 0x0000A8, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::K2Node_Event_Item' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, K2Node_Event_ResourceCount) == 0x0000B0, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::K2Node_Event_ResourceCount' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, Temp_bool_Variable_2) == 0x0000B4, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget, K2Node_Select_Default_2) == 0x0000B8, "Member 'AthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget::K2Node_Select_Default_2' has a wrong offset!");

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.BP_HandleWeaponEquipped
// 0x0010 (0x0010 - 0x0000)
struct AthenaEquippedItemWidget_C_BP_HandleWeaponEquipped final
{
public:
	class AFortWeapon*                            NewWeapon;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                            PrevWeapon;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaEquippedItemWidget_C_BP_HandleWeaponEquipped) == 0x000008, "Wrong alignment on AthenaEquippedItemWidget_C_BP_HandleWeaponEquipped");
static_assert(sizeof(AthenaEquippedItemWidget_C_BP_HandleWeaponEquipped) == 0x000010, "Wrong size on AthenaEquippedItemWidget_C_BP_HandleWeaponEquipped");
static_assert(offsetof(AthenaEquippedItemWidget_C_BP_HandleWeaponEquipped, NewWeapon) == 0x000000, "Member 'AthenaEquippedItemWidget_C_BP_HandleWeaponEquipped::NewWeapon' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_BP_HandleWeaponEquipped, PrevWeapon) == 0x000008, "Member 'AthenaEquippedItemWidget_C_BP_HandleWeaponEquipped::PrevWeapon' has a wrong offset!");

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.BP_HandleResourceTypeChanged
// 0x0010 (0x0010 - 0x0000)
struct AthenaEquippedItemWidget_C_BP_HandleResourceTypeChanged final
{
public:
	const class UFortResourceItemDefinition*      Item;                                              // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ResourceCount;                                     // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaEquippedItemWidget_C_BP_HandleResourceTypeChanged) == 0x000008, "Wrong alignment on AthenaEquippedItemWidget_C_BP_HandleResourceTypeChanged");
static_assert(sizeof(AthenaEquippedItemWidget_C_BP_HandleResourceTypeChanged) == 0x000010, "Wrong size on AthenaEquippedItemWidget_C_BP_HandleResourceTypeChanged");
static_assert(offsetof(AthenaEquippedItemWidget_C_BP_HandleResourceTypeChanged, Item) == 0x000000, "Member 'AthenaEquippedItemWidget_C_BP_HandleResourceTypeChanged::Item' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_BP_HandleResourceTypeChanged, ResourceCount) == 0x000008, "Member 'AthenaEquippedItemWidget_C_BP_HandleResourceTypeChanged::ResourceCount' has a wrong offset!");

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.BP_HandleAmmoCountChanged
// 0x000C (0x000C - 0x0000)
struct AthenaEquippedItemWidget_C_BP_HandleAmmoCountChanged final
{
public:
	int32                                         MagazineAmmoCount;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SurplusAmmoCount;                                  // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalRemaining;                                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaEquippedItemWidget_C_BP_HandleAmmoCountChanged) == 0x000004, "Wrong alignment on AthenaEquippedItemWidget_C_BP_HandleAmmoCountChanged");
static_assert(sizeof(AthenaEquippedItemWidget_C_BP_HandleAmmoCountChanged) == 0x00000C, "Wrong size on AthenaEquippedItemWidget_C_BP_HandleAmmoCountChanged");
static_assert(offsetof(AthenaEquippedItemWidget_C_BP_HandleAmmoCountChanged, MagazineAmmoCount) == 0x000000, "Member 'AthenaEquippedItemWidget_C_BP_HandleAmmoCountChanged::MagazineAmmoCount' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_BP_HandleAmmoCountChanged, SurplusAmmoCount) == 0x000004, "Member 'AthenaEquippedItemWidget_C_BP_HandleAmmoCountChanged::SurplusAmmoCount' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_BP_HandleAmmoCountChanged, TotalRemaining) == 0x000008, "Member 'AthenaEquippedItemWidget_C_BP_HandleAmmoCountChanged::TotalRemaining' has a wrong offset!");

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.BP_HandleHasAmmoChanged
// 0x0001 (0x0001 - 0x0000)
struct AthenaEquippedItemWidget_C_BP_HandleHasAmmoChanged final
{
public:
	bool                                          bHasAmmo;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaEquippedItemWidget_C_BP_HandleHasAmmoChanged) == 0x000001, "Wrong alignment on AthenaEquippedItemWidget_C_BP_HandleHasAmmoChanged");
static_assert(sizeof(AthenaEquippedItemWidget_C_BP_HandleHasAmmoChanged) == 0x000001, "Wrong size on AthenaEquippedItemWidget_C_BP_HandleHasAmmoChanged");
static_assert(offsetof(AthenaEquippedItemWidget_C_BP_HandleHasAmmoChanged, bHasAmmo) == 0x000000, "Member 'AthenaEquippedItemWidget_C_BP_HandleHasAmmoChanged::bHasAmmo' has a wrong offset!");

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.BP_HandleHasBulletsPerClipChanged
// 0x0001 (0x0001 - 0x0000)
struct AthenaEquippedItemWidget_C_BP_HandleHasBulletsPerClipChanged final
{
public:
	bool                                          bHasBulletsPerClip;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaEquippedItemWidget_C_BP_HandleHasBulletsPerClipChanged) == 0x000001, "Wrong alignment on AthenaEquippedItemWidget_C_BP_HandleHasBulletsPerClipChanged");
static_assert(sizeof(AthenaEquippedItemWidget_C_BP_HandleHasBulletsPerClipChanged) == 0x000001, "Wrong size on AthenaEquippedItemWidget_C_BP_HandleHasBulletsPerClipChanged");
static_assert(offsetof(AthenaEquippedItemWidget_C_BP_HandleHasBulletsPerClipChanged, bHasBulletsPerClip) == 0x000000, "Member 'AthenaEquippedItemWidget_C_BP_HandleHasBulletsPerClipChanged::bHasBulletsPerClip' has a wrong offset!");

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateWidgetColor
// 0x0060 (0x0060 - 0x0000)
struct AthenaEquippedItemWidget_C_UpdateWidgetColor final
{
public:
	bool                                          HasAmmo;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F96[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F97[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F98[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0038(0x0028)()
};
static_assert(alignof(AthenaEquippedItemWidget_C_UpdateWidgetColor) == 0x000008, "Wrong alignment on AthenaEquippedItemWidget_C_UpdateWidgetColor");
static_assert(sizeof(AthenaEquippedItemWidget_C_UpdateWidgetColor) == 0x000060, "Wrong size on AthenaEquippedItemWidget_C_UpdateWidgetColor");
static_assert(offsetof(AthenaEquippedItemWidget_C_UpdateWidgetColor, HasAmmo) == 0x000000, "Member 'AthenaEquippedItemWidget_C_UpdateWidgetColor::HasAmmo' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_UpdateWidgetColor, Temp_bool_Variable) == 0x000001, "Member 'AthenaEquippedItemWidget_C_UpdateWidgetColor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_UpdateWidgetColor, Temp_float_Variable) == 0x000004, "Member 'AthenaEquippedItemWidget_C_UpdateWidgetColor::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_UpdateWidgetColor, Temp_float_Variable_1) == 0x000008, "Member 'AthenaEquippedItemWidget_C_UpdateWidgetColor::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_UpdateWidgetColor, Temp_bool_Variable_1) == 0x00000C, "Member 'AthenaEquippedItemWidget_C_UpdateWidgetColor::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_UpdateWidgetColor, K2Node_Select_Default) == 0x000010, "Member 'AthenaEquippedItemWidget_C_UpdateWidgetColor::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_UpdateWidgetColor, Temp_struct_Variable) == 0x000014, "Member 'AthenaEquippedItemWidget_C_UpdateWidgetColor::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_UpdateWidgetColor, K2Node_Select_Default_1) == 0x000024, "Member 'AthenaEquippedItemWidget_C_UpdateWidgetColor::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemWidget_C_UpdateWidgetColor, K2Node_MakeStruct_SlateColor) == 0x000038, "Member 'AthenaEquippedItemWidget_C_UpdateWidgetColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");

}

