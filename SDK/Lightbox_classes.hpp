#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lightbox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Lightbox.Lightbox_C
// 0x0090 (0x02E8 - 0x0258)
class ULightbox_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeOut;                                           // 0x0260(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_Darken;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ClickCatcher;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Content;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Dimmer;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonVisibilityWidget*                WindowButtons;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               WindowsOverlay;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWindowchromebuttons_C*                 WindowTitleBar;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             IntroEnded;                                        // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OutroEnded;                                        // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          ShowWindowControlButtons;                          // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_55AC[0x3];                                     // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DimAmount;                                         // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BackgroundColor;                                   // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void IntroEnded__DelegateSignature();
	void OutroEnded__DelegateSignature();
	void ExecuteUbergraph_Lightbox(int32 EntryPoint);
	void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_0();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Destruct();
	void Intro();
	void Outro();
	void AddContent(class UCommonUserWidget* Param_Content);
	void RemoveContent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Lightbox_C">();
	}
	static class ULightbox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULightbox_C>();
	}
};
static_assert(alignof(ULightbox_C) == 0x000008, "Wrong alignment on ULightbox_C");
static_assert(sizeof(ULightbox_C) == 0x0002E8, "Wrong size on ULightbox_C");
static_assert(offsetof(ULightbox_C, UberGraphFrame) == 0x000258, "Member 'ULightbox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULightbox_C, FadeOut) == 0x000260, "Member 'ULightbox_C::FadeOut' has a wrong offset!");
static_assert(offsetof(ULightbox_C, FadeIn) == 0x000268, "Member 'ULightbox_C::FadeIn' has a wrong offset!");
static_assert(offsetof(ULightbox_C, Border_Darken) == 0x000270, "Member 'ULightbox_C::Border_Darken' has a wrong offset!");
static_assert(offsetof(ULightbox_C, ClickCatcher) == 0x000278, "Member 'ULightbox_C::ClickCatcher' has a wrong offset!");
static_assert(offsetof(ULightbox_C, Content) == 0x000280, "Member 'ULightbox_C::Content' has a wrong offset!");
static_assert(offsetof(ULightbox_C, Dimmer) == 0x000288, "Member 'ULightbox_C::Dimmer' has a wrong offset!");
static_assert(offsetof(ULightbox_C, SafeZone_0) == 0x000290, "Member 'ULightbox_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(ULightbox_C, WindowButtons) == 0x000298, "Member 'ULightbox_C::WindowButtons' has a wrong offset!");
static_assert(offsetof(ULightbox_C, WindowsOverlay) == 0x0002A0, "Member 'ULightbox_C::WindowsOverlay' has a wrong offset!");
static_assert(offsetof(ULightbox_C, WindowTitleBar) == 0x0002A8, "Member 'ULightbox_C::WindowTitleBar' has a wrong offset!");
static_assert(offsetof(ULightbox_C, IntroEnded) == 0x0002B0, "Member 'ULightbox_C::IntroEnded' has a wrong offset!");
static_assert(offsetof(ULightbox_C, OutroEnded) == 0x0002C0, "Member 'ULightbox_C::OutroEnded' has a wrong offset!");
static_assert(offsetof(ULightbox_C, ShowWindowControlButtons) == 0x0002D0, "Member 'ULightbox_C::ShowWindowControlButtons' has a wrong offset!");
static_assert(offsetof(ULightbox_C, DimAmount) == 0x0002D4, "Member 'ULightbox_C::DimAmount' has a wrong offset!");
static_assert(offsetof(ULightbox_C, BackgroundColor) == 0x0002D8, "Member 'ULightbox_C::BackgroundColor' has a wrong offset!");

}
