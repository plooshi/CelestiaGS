#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaCurieStatusWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaCurieStatusWidget.AthenaCurieStatusWidget_C
// 0x0058 (0x0330 - 0x02D8)
class UAthenaCurieStatusWidget_C final : public UAthenaCurieStatusWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnFire;                                            // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Drying;                                            // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_20;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_31;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Fire;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_FireAdd;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Glow;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  Switcher_FlameSize;                                // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsFireActive;                                      // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BFB[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           RemoveDryingTimer;                                 // 0x0328(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void SequenceEvent__ENTRYPOINTAthenaCurieStatusWidget_1();
	void SequenceEvent__ENTRYPOINTAthenaCurieStatusWidget_0();
	void DebugString(const struct FGameplayTag& GameplayTag, bool Add);
	void OnFireEvent();
	void DryingFireEventActive();
	void OnCurieStateAdded(const struct FGameplayTag& AddedState);
	void OnCurieStateRemoved(const struct FGameplayTag& RemovedState);
	void MarkFireActive();
	void ExecuteUbergraph_AthenaCurieStatusWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaCurieStatusWidget_C">();
	}
	static class UAthenaCurieStatusWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaCurieStatusWidget_C>();
	}
};
static_assert(alignof(UAthenaCurieStatusWidget_C) == 0x000008, "Wrong alignment on UAthenaCurieStatusWidget_C");
static_assert(sizeof(UAthenaCurieStatusWidget_C) == 0x000330, "Wrong size on UAthenaCurieStatusWidget_C");
static_assert(offsetof(UAthenaCurieStatusWidget_C, UberGraphFrame) == 0x0002D8, "Member 'UAthenaCurieStatusWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaCurieStatusWidget_C, OnFire) == 0x0002E0, "Member 'UAthenaCurieStatusWidget_C::OnFire' has a wrong offset!");
static_assert(offsetof(UAthenaCurieStatusWidget_C, Drying) == 0x0002E8, "Member 'UAthenaCurieStatusWidget_C::Drying' has a wrong offset!");
static_assert(offsetof(UAthenaCurieStatusWidget_C, Image_20) == 0x0002F0, "Member 'UAthenaCurieStatusWidget_C::Image_20' has a wrong offset!");
static_assert(offsetof(UAthenaCurieStatusWidget_C, Image_31) == 0x0002F8, "Member 'UAthenaCurieStatusWidget_C::Image_31' has a wrong offset!");
static_assert(offsetof(UAthenaCurieStatusWidget_C, Image_Fire) == 0x000300, "Member 'UAthenaCurieStatusWidget_C::Image_Fire' has a wrong offset!");
static_assert(offsetof(UAthenaCurieStatusWidget_C, Image_FireAdd) == 0x000308, "Member 'UAthenaCurieStatusWidget_C::Image_FireAdd' has a wrong offset!");
static_assert(offsetof(UAthenaCurieStatusWidget_C, Image_Glow) == 0x000310, "Member 'UAthenaCurieStatusWidget_C::Image_Glow' has a wrong offset!");
static_assert(offsetof(UAthenaCurieStatusWidget_C, Switcher_FlameSize) == 0x000318, "Member 'UAthenaCurieStatusWidget_C::Switcher_FlameSize' has a wrong offset!");
static_assert(offsetof(UAthenaCurieStatusWidget_C, IsFireActive) == 0x000320, "Member 'UAthenaCurieStatusWidget_C::IsFireActive' has a wrong offset!");
static_assert(offsetof(UAthenaCurieStatusWidget_C, RemoveDryingTimer) == 0x000328, "Member 'UAthenaCurieStatusWidget_C::RemoveDryingTimer' has a wrong offset!");

}
