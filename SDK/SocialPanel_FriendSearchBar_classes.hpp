#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialPanel_FriendSearchBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C
// 0x0038 (0x0C40 - 0x0C08)
class USocialPanel_FriendSearchBar_C final : public UFortFriendSearchButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C08(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnHovered;                                         // 0x0C10(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 AddFriendBanIcon;                                  // 0x0C18(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ClickCapture;                                      // 0x0C20(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   RichText_CannotAddFriends;                         // 0x0C28(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   RichText_SocialBan;                                // 0x0C30(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMobileImage*                       SharingIcon;                                       // 0x0C38(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SocialPanel_FriendSearchBar(int32 EntryPoint);
	void BP_OnUnhovered();
	void BP_OnHovered();
	struct FEventReply On_ClickCapture_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialPanel_FriendSearchBar_C">();
	}
	static class USocialPanel_FriendSearchBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialPanel_FriendSearchBar_C>();
	}
};
static_assert(alignof(USocialPanel_FriendSearchBar_C) == 0x000008, "Wrong alignment on USocialPanel_FriendSearchBar_C");
static_assert(sizeof(USocialPanel_FriendSearchBar_C) == 0x000C40, "Wrong size on USocialPanel_FriendSearchBar_C");
static_assert(offsetof(USocialPanel_FriendSearchBar_C, UberGraphFrame) == 0x000C08, "Member 'USocialPanel_FriendSearchBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendSearchBar_C, OnHovered) == 0x000C10, "Member 'USocialPanel_FriendSearchBar_C::OnHovered' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendSearchBar_C, AddFriendBanIcon) == 0x000C18, "Member 'USocialPanel_FriendSearchBar_C::AddFriendBanIcon' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendSearchBar_C, ClickCapture) == 0x000C20, "Member 'USocialPanel_FriendSearchBar_C::ClickCapture' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendSearchBar_C, RichText_CannotAddFriends) == 0x000C28, "Member 'USocialPanel_FriendSearchBar_C::RichText_CannotAddFriends' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendSearchBar_C, RichText_SocialBan) == 0x000C30, "Member 'USocialPanel_FriendSearchBar_C::RichText_SocialBan' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendSearchBar_C, SharingIcon) == 0x000C38, "Member 'USocialPanel_FriendSearchBar_C::SharingIcon' has a wrong offset!");

}

