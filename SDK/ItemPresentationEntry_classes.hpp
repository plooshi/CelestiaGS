#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemPresentationEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemPresentationEntry.ItemPresentationEntry_C
// 0x0030 (0x0C80 - 0x0C50)
class UItemPresentationEntry_C final : public UFortItemPresentationEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C50(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Selected;                                          // 0x0C58(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0C60(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hovered;                                           // 0x0C68(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Content;                                   // 0x0C70(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsSelected;                                       // 0x0C78(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bCanHover;                                         // 0x0C79(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void PlayIntro(float TimeBeforeStart);
	void HandelDeselectedAnim();
	void HandleSelectedAnim();
	void HandleUnhover();
	void HandleHover();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void DelayIntroAnimation();
	void Construct();
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void BP_OnSelected();
	void BP_OnDeselected();
	void ExecuteUbergraph_ItemPresentationEntry(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemPresentationEntry_C">();
	}
	static class UItemPresentationEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemPresentationEntry_C>();
	}
};
static_assert(alignof(UItemPresentationEntry_C) == 0x000008, "Wrong alignment on UItemPresentationEntry_C");
static_assert(sizeof(UItemPresentationEntry_C) == 0x000C80, "Wrong size on UItemPresentationEntry_C");
static_assert(offsetof(UItemPresentationEntry_C, UberGraphFrame) == 0x000C50, "Member 'UItemPresentationEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemPresentationEntry_C, Selected) == 0x000C58, "Member 'UItemPresentationEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(UItemPresentationEntry_C, Intro) == 0x000C60, "Member 'UItemPresentationEntry_C::Intro' has a wrong offset!");
static_assert(offsetof(UItemPresentationEntry_C, Hovered) == 0x000C68, "Member 'UItemPresentationEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(UItemPresentationEntry_C, Overlay_Content) == 0x000C70, "Member 'UItemPresentationEntry_C::Overlay_Content' has a wrong offset!");
static_assert(offsetof(UItemPresentationEntry_C, bIsSelected) == 0x000C78, "Member 'UItemPresentationEntry_C::bIsSelected' has a wrong offset!");
static_assert(offsetof(UItemPresentationEntry_C, bCanHover) == 0x000C79, "Member 'UItemPresentationEntry_C::bCanHover' has a wrong offset!");

}
