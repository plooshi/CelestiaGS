#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AccoladesWidget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AccoladesWidget.AccoladesWidget_C
// 0x0100 (0x0418 - 0x0318)
class UAccoladesWidget_C final : public UAthenaAccoladesWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       XPScreenLayout;                                    // 0x0320(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro_upgrade;                                     // 0x0328(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Outro;                                             // 0x0330(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0338(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAccoladeImageWidget_C*                 AccoladeImageWidget;                               // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Glow;                                        // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon;                                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_IconGlow;                                    // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Shadow;                                      // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_TitleBG;                                     // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayMinusAccoladeBG;                            // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_TopContainer;                              // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_TopOffset;                                 // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                Text_Amount;                                       // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Description;                                  // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Source;                                       // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Title;                                        // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_IconType;                           // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           WaitForCloseTimer;                                 // 0x03B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFortAccoladeItemDefinition*            ActiveAccolade;                                    // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsXPLayout;                                        // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E8B[0x7];                                     // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FGameplayTag, struct FVector2D>   PlaylistOffsetMap;                                 // 0x03C8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnLoaded_42C1E3304A6E5CBB7635A59CA611DCD6(class UObject* Loaded);
	void OnLoaded_24BD5DAE46F596BC70B7E59F0D6B65D6(class UObject* Loaded);
	void OnReady_87FB469E46481823A085CF9D9C0F4984(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void OpenWidget(const class UFortAccoladeItemDefinition* AccoladeDef, const int32& XpValue, const class FText& DisplayName);
	void CloseWidget();
	void Construct();
	void SetAccoladeVisuals(class UFortAccoladeItemDefinition* ItemDef);
	void WaitForClose();
	void DoClose_();
	void FinishedLoadingTextures();
	void OnStompedByOtherWidget();
	void EventXPLayout(class FName Placement);
	void EventAdded();
	void ExecuteUbergraph_AccoladesWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AccoladesWidget_C">();
	}
	static class UAccoladesWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAccoladesWidget_C>();
	}
};
static_assert(alignof(UAccoladesWidget_C) == 0x000008, "Wrong alignment on UAccoladesWidget_C");
static_assert(sizeof(UAccoladesWidget_C) == 0x000418, "Wrong size on UAccoladesWidget_C");
static_assert(offsetof(UAccoladesWidget_C, UberGraphFrame) == 0x000318, "Member 'UAccoladesWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAccoladesWidget_C, XPScreenLayout) == 0x000320, "Member 'UAccoladesWidget_C::XPScreenLayout' has a wrong offset!");
static_assert(offsetof(UAccoladesWidget_C, Intro_upgrade) == 0x000328, "Member 'UAccoladesWidget_C::Intro_upgrade' has a wrong offset!");
static_assert(offsetof(UAccoladesWidget_C, Outro) == 0x000330, "Member 'UAccoladesWidget_C::Outro' has a wrong offset!");
static_assert(offsetof(UAccoladesWidget_C, Intro) == 0x000338, "Member 'UAccoladesWidget_C::Intro' has a wrong offset!");
static_assert(offsetof(UAccoladesWidget_C, AccoladeImageWidget) == 0x000340, "Member 'UAccoladesWidget_C::AccoladeImageWidget' has a wrong offset!");
static_assert(offsetof(UAccoladesWidget_C, Image_Glow) == 0x000348, "Member 'UAccoladesWidget_C::Image_Glow' has a wrong offset!");
static_assert(offsetof(UAccoladesWidget_C, Image_Icon) == 0x000350, "Member 'UAccoladesWidget_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UAccoladesWidget_C, Image_IconGlow) == 0x000358, "Member 'UAccoladesWidget_C::Image_IconGlow' has a wrong offset!");
static_assert(offsetof(UAccoladesWidget_C, Image_Shadow) == 0x000360, "Member 'UAccoladesWidget_C::Image_Shadow' has a wrong offset!");
static_assert(offsetof(UAccoladesWidget_C, Image_TitleBG) == 0x000368, "Member 'UAccoladesWidget_C::Image_TitleBG' has a wrong offset!");
static_assert(offsetof(UAccoladesWidget_C, OverlayMinusAccoladeBG) == 0x000370, "Member 'UAccoladesWidget_C::OverlayMinusAccoladeBG' has a wrong offset!");
static_assert(offsetof(UAccoladesWidget_C, Overlay_TopContainer) == 0x000378, "Member 'UAccoladesWidget_C::Overlay_TopContainer' has a wrong offset!");
static_assert(offsetof(UAccoladesWidget_C, Overlay_TopOffset) == 0x000380, "Member 'UAccoladesWidget_C::Overlay_TopOffset' has a wrong offset!");
static_assert(offsetof(UAccoladesWidget_C, Text_Amount) == 0x000388, "Member 'UAccoladesWidget_C::Text_Amount' has a wrong offset!");
static_assert(offsetof(UAccoladesWidget_C, Text_Description) == 0x000390, "Member 'UAccoladesWidget_C::Text_Description' has a wrong offset!");
static_assert(offsetof(UAccoladesWidget_C, Text_Source) == 0x000398, "Member 'UAccoladesWidget_C::Text_Source' has a wrong offset!");
static_assert(offsetof(UAccoladesWidget_C, Text_Title) == 0x0003A0, "Member 'UAccoladesWidget_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UAccoladesWidget_C, WidgetSwitcher_IconType) == 0x0003A8, "Member 'UAccoladesWidget_C::WidgetSwitcher_IconType' has a wrong offset!");
static_assert(offsetof(UAccoladesWidget_C, WaitForCloseTimer) == 0x0003B0, "Member 'UAccoladesWidget_C::WaitForCloseTimer' has a wrong offset!");
static_assert(offsetof(UAccoladesWidget_C, ActiveAccolade) == 0x0003B8, "Member 'UAccoladesWidget_C::ActiveAccolade' has a wrong offset!");
static_assert(offsetof(UAccoladesWidget_C, IsXPLayout) == 0x0003C0, "Member 'UAccoladesWidget_C::IsXPLayout' has a wrong offset!");
static_assert(offsetof(UAccoladesWidget_C, PlaylistOffsetMap) == 0x0003C8, "Member 'UAccoladesWidget_C::PlaylistOffsetMap' has a wrong offset!");

}
