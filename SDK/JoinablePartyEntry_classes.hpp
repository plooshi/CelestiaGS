#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JoinablePartyEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass JoinablePartyEntry.JoinablePartyEntry_C
// 0x00B0 (0x0C68 - 0x0BB8)
class UJoinablePartyEntry_C final : public UFortJoinablePartyListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BB8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Selected;                                          // 0x0BC0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hovered;                                           // 0x0BC8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                AnimatedInputBorder;                               // 0x0BD0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow;                                             // 0x0BD8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_OnlineStatusIndicator;                      // 0x0BE0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;                   // 0x0BE8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                EntryBorder;                                       // 0x0BF0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Exclamation;                                       // 0x0BF8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;                         // 0x0C00(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstance*                      InviteMaterial;                                    // 0x0C08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      DefaultMaterial;                                   // 0x0C10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            InviteFontColor;                                   // 0x0C18(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            DefaultFontColor;                                  // 0x0C40(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_JoinablePartyEntry(int32 EntryPoint);
	void OnInviteStatusUpdated(bool bIsInvited);
	void BP_OnHovered();
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnUnhovered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"JoinablePartyEntry_C">();
	}
	static class UJoinablePartyEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJoinablePartyEntry_C>();
	}
};
static_assert(alignof(UJoinablePartyEntry_C) == 0x000008, "Wrong alignment on UJoinablePartyEntry_C");
static_assert(sizeof(UJoinablePartyEntry_C) == 0x000C68, "Wrong size on UJoinablePartyEntry_C");
static_assert(offsetof(UJoinablePartyEntry_C, UberGraphFrame) == 0x000BB8, "Member 'UJoinablePartyEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UJoinablePartyEntry_C, Selected) == 0x000BC0, "Member 'UJoinablePartyEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(UJoinablePartyEntry_C, Hovered) == 0x000BC8, "Member 'UJoinablePartyEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(UJoinablePartyEntry_C, AnimatedInputBorder) == 0x000BD0, "Member 'UJoinablePartyEntry_C::AnimatedInputBorder' has a wrong offset!");
static_assert(offsetof(UJoinablePartyEntry_C, Arrow) == 0x000BD8, "Member 'UJoinablePartyEntry_C::Arrow' has a wrong offset!");
static_assert(offsetof(UJoinablePartyEntry_C, Border_OnlineStatusIndicator) == 0x000BE0, "Member 'UJoinablePartyEntry_C::Border_OnlineStatusIndicator' has a wrong offset!");
static_assert(offsetof(UJoinablePartyEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x000BE8, "Member 'UJoinablePartyEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(UJoinablePartyEntry_C, EntryBorder) == 0x000BF0, "Member 'UJoinablePartyEntry_C::EntryBorder' has a wrong offset!");
static_assert(offsetof(UJoinablePartyEntry_C, Exclamation) == 0x000BF8, "Member 'UJoinablePartyEntry_C::Exclamation' has a wrong offset!");
static_assert(offsetof(UJoinablePartyEntry_C, UserActionMenuInputButton) == 0x000C00, "Member 'UJoinablePartyEntry_C::UserActionMenuInputButton' has a wrong offset!");
static_assert(offsetof(UJoinablePartyEntry_C, InviteMaterial) == 0x000C08, "Member 'UJoinablePartyEntry_C::InviteMaterial' has a wrong offset!");
static_assert(offsetof(UJoinablePartyEntry_C, DefaultMaterial) == 0x000C10, "Member 'UJoinablePartyEntry_C::DefaultMaterial' has a wrong offset!");
static_assert(offsetof(UJoinablePartyEntry_C, InviteFontColor) == 0x000C18, "Member 'UJoinablePartyEntry_C::InviteFontColor' has a wrong offset!");
static_assert(offsetof(UJoinablePartyEntry_C, DefaultFontColor) == 0x000C40, "Member 'UJoinablePartyEntry_C::DefaultFontColor' has a wrong offset!");

}
