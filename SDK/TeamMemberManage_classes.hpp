#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TeamMemberManage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TeamMemberManage.TeamMemberManage_C
// 0x0050 (0x0518 - 0x04C8)
class UTeamMemberManage_C final : public UFortTeamMemberManage
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_LocalPlayerBannerEditor_C*          BP_LocalPlayerBannerEditor;                        // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         CloseButton;                                       // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      CloseProfileButton;                                // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  ContentSwitcher;                                   // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_8;                                           // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayCloseButton;                                // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               TeamMemberManageOptions;                           // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TeamMemberManage(int32 EntryPoint);
	void OpenBannerEditor();
	void BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void BP_OnDeactivated();
	void BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature(class FName IconId, class FName ColorId);
	void BP_OnActivated();
	void OnParticipationChanged(bool bIsParticipating);
	void BndEvt__CloseProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamMemberManage_C">();
	}
	static class UTeamMemberManage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamMemberManage_C>();
	}
};
static_assert(alignof(UTeamMemberManage_C) == 0x000008, "Wrong alignment on UTeamMemberManage_C");
static_assert(sizeof(UTeamMemberManage_C) == 0x000518, "Wrong size on UTeamMemberManage_C");
static_assert(offsetof(UTeamMemberManage_C, UberGraphFrame) == 0x0004C8, "Member 'UTeamMemberManage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTeamMemberManage_C, BP_LocalPlayerBannerEditor) == 0x0004D0, "Member 'UTeamMemberManage_C::BP_LocalPlayerBannerEditor' has a wrong offset!");
static_assert(offsetof(UTeamMemberManage_C, CloseButton) == 0x0004D8, "Member 'UTeamMemberManage_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UTeamMemberManage_C, CloseProfileButton) == 0x0004E0, "Member 'UTeamMemberManage_C::CloseProfileButton' has a wrong offset!");
static_assert(offsetof(UTeamMemberManage_C, ContentSwitcher) == 0x0004E8, "Member 'UTeamMemberManage_C::ContentSwitcher' has a wrong offset!");
static_assert(offsetof(UTeamMemberManage_C, Image_0) == 0x0004F0, "Member 'UTeamMemberManage_C::Image_0' has a wrong offset!");
static_assert(offsetof(UTeamMemberManage_C, Image_8) == 0x0004F8, "Member 'UTeamMemberManage_C::Image_8' has a wrong offset!");
static_assert(offsetof(UTeamMemberManage_C, Lightbox) == 0x000500, "Member 'UTeamMemberManage_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UTeamMemberManage_C, OverlayCloseButton) == 0x000508, "Member 'UTeamMemberManage_C::OverlayCloseButton' has a wrong offset!");
static_assert(offsetof(UTeamMemberManage_C, TeamMemberManageOptions) == 0x000510, "Member 'UTeamMemberManage_C::TeamMemberManageOptions' has a wrong offset!");

}

