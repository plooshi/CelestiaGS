#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SimpleFeatured_YellowButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C
// 0x0058 (0x0BE8 - 0x0B90)
class USimpleFeatured_YellowButton_C final : public UFortSimpleFeaturedYellowButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B90(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Pressed;                                           // 0x0B98(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       TextBounce;                                        // 0x0BA0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x0BA8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_Container;                                  // 0x0BB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ButtonBacking;                                     // 0x0BB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_ButtonAction;                                 // 0x0BC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_SecondaryText;                                // 0x0BC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Button_Description;                                // 0x0BD0(0x0018)(Edit, BlueprintVisible)

public:
	void HandleSize();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnClicked();
	void SetText(const class FText& NewText);
	void ChangeSecondaryText(const class FText& NewText);
	void RefreshUI();
	void ExecuteUbergraph_SimpleFeatured_YellowButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SimpleFeatured_YellowButton_C">();
	}
	static class USimpleFeatured_YellowButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimpleFeatured_YellowButton_C>();
	}
};
static_assert(alignof(USimpleFeatured_YellowButton_C) == 0x000008, "Wrong alignment on USimpleFeatured_YellowButton_C");
static_assert(sizeof(USimpleFeatured_YellowButton_C) == 0x000BE8, "Wrong size on USimpleFeatured_YellowButton_C");
static_assert(offsetof(USimpleFeatured_YellowButton_C, UberGraphFrame) == 0x000B90, "Member 'USimpleFeatured_YellowButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USimpleFeatured_YellowButton_C, Pressed) == 0x000B98, "Member 'USimpleFeatured_YellowButton_C::Pressed' has a wrong offset!");
static_assert(offsetof(USimpleFeatured_YellowButton_C, TextBounce) == 0x000BA0, "Member 'USimpleFeatured_YellowButton_C::TextBounce' has a wrong offset!");
static_assert(offsetof(USimpleFeatured_YellowButton_C, Hover) == 0x000BA8, "Member 'USimpleFeatured_YellowButton_C::Hover' has a wrong offset!");
static_assert(offsetof(USimpleFeatured_YellowButton_C, Border_Container) == 0x000BB0, "Member 'USimpleFeatured_YellowButton_C::Border_Container' has a wrong offset!");
static_assert(offsetof(USimpleFeatured_YellowButton_C, ButtonBacking) == 0x000BB8, "Member 'USimpleFeatured_YellowButton_C::ButtonBacking' has a wrong offset!");
static_assert(offsetof(USimpleFeatured_YellowButton_C, Text_ButtonAction) == 0x000BC0, "Member 'USimpleFeatured_YellowButton_C::Text_ButtonAction' has a wrong offset!");
static_assert(offsetof(USimpleFeatured_YellowButton_C, Text_SecondaryText) == 0x000BC8, "Member 'USimpleFeatured_YellowButton_C::Text_SecondaryText' has a wrong offset!");
static_assert(offsetof(USimpleFeatured_YellowButton_C, Button_Description) == 0x000BD0, "Member 'USimpleFeatured_YellowButton_C::Button_Description' has a wrong offset!");

}
