#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengePunchCardEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChallengePunchCardEntry.ChallengePunchCardEntry_C
// 0x00B8 (0x0350 - 0x0298)
class UChallengePunchCardEntry_C final : public UAthenaChallengePunchCardEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       PlaceStamp;                                        // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_Date;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ConnectorLeft;                               // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ConnectorRight;                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_EmptySocket;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Flare;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Spark;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Stamp;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Entry;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_SlotState;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_FrontendXPLabel;                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           AccentColor01;                                     // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           AccentColor02;                                     // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BaseColor01;                                       // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BaseColor02;                                       // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxRotation;                                       // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Min__Rotation;                                     // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Min_Translation;                                   // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Max_Translation;                                   // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Min_Scale;                                         // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Max_Scale;                                         // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnPlacedEntry();
	void SetIsFirstSlot();
	void SetIsLastSlot();
	void SetToDefaultSlot();
	void SetIsNonsequentialSlot();
	void SetStyle(const struct FFortChallengePunchCardStyles& PunchStyle);
	void Play_Place_Stamp();
	void ExecuteUbergraph_ChallengePunchCardEntry(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChallengePunchCardEntry_C">();
	}
	static class UChallengePunchCardEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChallengePunchCardEntry_C>();
	}
};
static_assert(alignof(UChallengePunchCardEntry_C) == 0x000008, "Wrong alignment on UChallengePunchCardEntry_C");
static_assert(sizeof(UChallengePunchCardEntry_C) == 0x000350, "Wrong size on UChallengePunchCardEntry_C");
static_assert(offsetof(UChallengePunchCardEntry_C, UberGraphFrame) == 0x000298, "Member 'UChallengePunchCardEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChallengePunchCardEntry_C, PlaceStamp) == 0x0002A0, "Member 'UChallengePunchCardEntry_C::PlaceStamp' has a wrong offset!");
static_assert(offsetof(UChallengePunchCardEntry_C, Border_Date) == 0x0002A8, "Member 'UChallengePunchCardEntry_C::Border_Date' has a wrong offset!");
static_assert(offsetof(UChallengePunchCardEntry_C, Image_ConnectorLeft) == 0x0002B0, "Member 'UChallengePunchCardEntry_C::Image_ConnectorLeft' has a wrong offset!");
static_assert(offsetof(UChallengePunchCardEntry_C, Image_ConnectorRight) == 0x0002B8, "Member 'UChallengePunchCardEntry_C::Image_ConnectorRight' has a wrong offset!");
static_assert(offsetof(UChallengePunchCardEntry_C, Image_EmptySocket) == 0x0002C0, "Member 'UChallengePunchCardEntry_C::Image_EmptySocket' has a wrong offset!");
static_assert(offsetof(UChallengePunchCardEntry_C, Image_Flare) == 0x0002C8, "Member 'UChallengePunchCardEntry_C::Image_Flare' has a wrong offset!");
static_assert(offsetof(UChallengePunchCardEntry_C, Image_Spark) == 0x0002D0, "Member 'UChallengePunchCardEntry_C::Image_Spark' has a wrong offset!");
static_assert(offsetof(UChallengePunchCardEntry_C, Overlay_Stamp) == 0x0002D8, "Member 'UChallengePunchCardEntry_C::Overlay_Stamp' has a wrong offset!");
static_assert(offsetof(UChallengePunchCardEntry_C, SizeBox_Entry) == 0x0002E0, "Member 'UChallengePunchCardEntry_C::SizeBox_Entry' has a wrong offset!");
static_assert(offsetof(UChallengePunchCardEntry_C, Switcher_SlotState) == 0x0002E8, "Member 'UChallengePunchCardEntry_C::Switcher_SlotState' has a wrong offset!");
static_assert(offsetof(UChallengePunchCardEntry_C, Text_FrontendXPLabel) == 0x0002F0, "Member 'UChallengePunchCardEntry_C::Text_FrontendXPLabel' has a wrong offset!");
static_assert(offsetof(UChallengePunchCardEntry_C, AccentColor01) == 0x0002F8, "Member 'UChallengePunchCardEntry_C::AccentColor01' has a wrong offset!");
static_assert(offsetof(UChallengePunchCardEntry_C, AccentColor02) == 0x000308, "Member 'UChallengePunchCardEntry_C::AccentColor02' has a wrong offset!");
static_assert(offsetof(UChallengePunchCardEntry_C, BaseColor01) == 0x000318, "Member 'UChallengePunchCardEntry_C::BaseColor01' has a wrong offset!");
static_assert(offsetof(UChallengePunchCardEntry_C, BaseColor02) == 0x000328, "Member 'UChallengePunchCardEntry_C::BaseColor02' has a wrong offset!");
static_assert(offsetof(UChallengePunchCardEntry_C, MaxRotation) == 0x000338, "Member 'UChallengePunchCardEntry_C::MaxRotation' has a wrong offset!");
static_assert(offsetof(UChallengePunchCardEntry_C, Min__Rotation) == 0x00033C, "Member 'UChallengePunchCardEntry_C::Min__Rotation' has a wrong offset!");
static_assert(offsetof(UChallengePunchCardEntry_C, Min_Translation) == 0x000340, "Member 'UChallengePunchCardEntry_C::Min_Translation' has a wrong offset!");
static_assert(offsetof(UChallengePunchCardEntry_C, Max_Translation) == 0x000344, "Member 'UChallengePunchCardEntry_C::Max_Translation' has a wrong offset!");
static_assert(offsetof(UChallengePunchCardEntry_C, Min_Scale) == 0x000348, "Member 'UChallengePunchCardEntry_C::Min_Scale' has a wrong offset!");
static_assert(offsetof(UChallengePunchCardEntry_C, Max_Scale) == 0x00034C, "Member 'UChallengePunchCardEntry_C::Max_Scale' has a wrong offset!");

}

