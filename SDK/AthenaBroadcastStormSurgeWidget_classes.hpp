#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaBroadcastStormSurgeWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaBroadcastStormSurgeWidget.AthenaBroadcastStormSurgeWidget_C
// 0x0088 (0x0338 - 0x02B0)
class UAthenaBroadcastStormSurgeWidget_C final : public UAthenaStormSurgeWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       BelowDmg_Close;                                    // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       BelowDmg_Open;                                     // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AboveDmg_Close;                                    // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AboveDmg_Open;                                     // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       DMGLoad;                                           // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       AboveDMG;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaStormSurgeIconWidget_C*          AthenaStormSurgeIconWidget;                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       BelowDMG;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_0;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               DmgThresh_SizeBox;                                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StormSurgeIcon_NoBkg;                              // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SurgeIcon_SizeBox;                                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ThresholdText;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsBacchus;                                         // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsDisplaying;                                     // 0x0321(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bAboveIsOpen;                                      // 0x0322(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bBelowIsOpen;                                      // 0x0323(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E74[0x4];                                     // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             SoundBelowOpen;                                    // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundAboveOpen;                                    // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaBroadcastStormSurgeWidget(int32 EntryPoint);
	void OnFollowedPlayerChanged(class AFortPlayerControllerSpectating* SpectatingPC, class AFortPlayerState* FollowedPlayerState);
	void Construct();
	void OnUpdateThresholdDisplay(const class FText& Param_ThresholdText, EStormSurgeThresholdType ThresholdType);
	void OnStopDisplaying();
	void OnStartDisplaying(const class FText& TitleText);
	void PreConstruct(bool IsDesignTime);
	void Anim_Load();
	void Anim_AboveDMGOpen();
	void Anim_AboveDMGClose();
	void Anim_BelowDMGOpen();
	void Anim_BelowDMGClose();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaBroadcastStormSurgeWidget_C">();
	}
	static class UAthenaBroadcastStormSurgeWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaBroadcastStormSurgeWidget_C>();
	}
};
static_assert(alignof(UAthenaBroadcastStormSurgeWidget_C) == 0x000008, "Wrong alignment on UAthenaBroadcastStormSurgeWidget_C");
static_assert(sizeof(UAthenaBroadcastStormSurgeWidget_C) == 0x000338, "Wrong size on UAthenaBroadcastStormSurgeWidget_C");
static_assert(offsetof(UAthenaBroadcastStormSurgeWidget_C, UberGraphFrame) == 0x0002B0, "Member 'UAthenaBroadcastStormSurgeWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastStormSurgeWidget_C, BelowDmg_Close) == 0x0002B8, "Member 'UAthenaBroadcastStormSurgeWidget_C::BelowDmg_Close' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastStormSurgeWidget_C, BelowDmg_Open) == 0x0002C0, "Member 'UAthenaBroadcastStormSurgeWidget_C::BelowDmg_Open' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastStormSurgeWidget_C, AboveDmg_Close) == 0x0002C8, "Member 'UAthenaBroadcastStormSurgeWidget_C::AboveDmg_Close' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastStormSurgeWidget_C, AboveDmg_Open) == 0x0002D0, "Member 'UAthenaBroadcastStormSurgeWidget_C::AboveDmg_Open' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastStormSurgeWidget_C, DMGLoad) == 0x0002D8, "Member 'UAthenaBroadcastStormSurgeWidget_C::DMGLoad' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastStormSurgeWidget_C, AboveDMG) == 0x0002E0, "Member 'UAthenaBroadcastStormSurgeWidget_C::AboveDMG' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastStormSurgeWidget_C, AthenaStormSurgeIconWidget) == 0x0002E8, "Member 'UAthenaBroadcastStormSurgeWidget_C::AthenaStormSurgeIconWidget' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastStormSurgeWidget_C, BelowDMG) == 0x0002F0, "Member 'UAthenaBroadcastStormSurgeWidget_C::BelowDMG' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastStormSurgeWidget_C, CommonBorder_0) == 0x0002F8, "Member 'UAthenaBroadcastStormSurgeWidget_C::CommonBorder_0' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastStormSurgeWidget_C, DmgThresh_SizeBox) == 0x000300, "Member 'UAthenaBroadcastStormSurgeWidget_C::DmgThresh_SizeBox' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastStormSurgeWidget_C, StormSurgeIcon_NoBkg) == 0x000308, "Member 'UAthenaBroadcastStormSurgeWidget_C::StormSurgeIcon_NoBkg' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastStormSurgeWidget_C, SurgeIcon_SizeBox) == 0x000310, "Member 'UAthenaBroadcastStormSurgeWidget_C::SurgeIcon_SizeBox' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastStormSurgeWidget_C, ThresholdText) == 0x000318, "Member 'UAthenaBroadcastStormSurgeWidget_C::ThresholdText' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastStormSurgeWidget_C, IsBacchus) == 0x000320, "Member 'UAthenaBroadcastStormSurgeWidget_C::IsBacchus' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastStormSurgeWidget_C, bIsDisplaying) == 0x000321, "Member 'UAthenaBroadcastStormSurgeWidget_C::bIsDisplaying' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastStormSurgeWidget_C, bAboveIsOpen) == 0x000322, "Member 'UAthenaBroadcastStormSurgeWidget_C::bAboveIsOpen' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastStormSurgeWidget_C, bBelowIsOpen) == 0x000323, "Member 'UAthenaBroadcastStormSurgeWidget_C::bBelowIsOpen' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastStormSurgeWidget_C, SoundBelowOpen) == 0x000328, "Member 'UAthenaBroadcastStormSurgeWidget_C::SoundBelowOpen' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastStormSurgeWidget_C, SoundAboveOpen) == 0x000330, "Member 'UAthenaBroadcastStormSurgeWidget_C::SoundAboveOpen' has a wrong offset!");

}
