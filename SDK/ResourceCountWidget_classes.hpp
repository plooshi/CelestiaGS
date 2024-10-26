#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ResourceCountWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ResourceCountWidget.ResourceCountWidget_C
// 0x00D8 (0x0308 - 0x0230)
class UResourceCountWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Background;                                        // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageResourceIcon;                                 // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                NumericTextCount;                                  // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFortResourceType                             ResourceType;                                      // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_7978[0x3];                                     // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ResourceCount;                                     // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         IconSize;                                          // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7979[0x4];                                     // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            CanAffordTextColor;                                // 0x0260(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            CanNotAffordTextColor;                             // 0x0288(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          UseBackgroundForAffordabilityFeedback;             // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_797A[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            CanNotAffordBackgroundColor;                       // 0x02B8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            CanAffordBackgroundColor;                          // 0x02E0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_ResourceCountWidget(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void UpdateIcon();
	void SetResourceCost(int32 Param_ResourceCount, bool Param_UseBackgroundForAffordabilityFeedback);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ResourceCountWidget_C">();
	}
	static class UResourceCountWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResourceCountWidget_C>();
	}
};
static_assert(alignof(UResourceCountWidget_C) == 0x000008, "Wrong alignment on UResourceCountWidget_C");
static_assert(sizeof(UResourceCountWidget_C) == 0x000308, "Wrong size on UResourceCountWidget_C");
static_assert(offsetof(UResourceCountWidget_C, UberGraphFrame) == 0x000230, "Member 'UResourceCountWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UResourceCountWidget_C, Background) == 0x000238, "Member 'UResourceCountWidget_C::Background' has a wrong offset!");
static_assert(offsetof(UResourceCountWidget_C, ImageResourceIcon) == 0x000240, "Member 'UResourceCountWidget_C::ImageResourceIcon' has a wrong offset!");
static_assert(offsetof(UResourceCountWidget_C, NumericTextCount) == 0x000248, "Member 'UResourceCountWidget_C::NumericTextCount' has a wrong offset!");
static_assert(offsetof(UResourceCountWidget_C, ResourceType) == 0x000250, "Member 'UResourceCountWidget_C::ResourceType' has a wrong offset!");
static_assert(offsetof(UResourceCountWidget_C, ResourceCount) == 0x000254, "Member 'UResourceCountWidget_C::ResourceCount' has a wrong offset!");
static_assert(offsetof(UResourceCountWidget_C, IconSize) == 0x000258, "Member 'UResourceCountWidget_C::IconSize' has a wrong offset!");
static_assert(offsetof(UResourceCountWidget_C, CanAffordTextColor) == 0x000260, "Member 'UResourceCountWidget_C::CanAffordTextColor' has a wrong offset!");
static_assert(offsetof(UResourceCountWidget_C, CanNotAffordTextColor) == 0x000288, "Member 'UResourceCountWidget_C::CanNotAffordTextColor' has a wrong offset!");
static_assert(offsetof(UResourceCountWidget_C, UseBackgroundForAffordabilityFeedback) == 0x0002B0, "Member 'UResourceCountWidget_C::UseBackgroundForAffordabilityFeedback' has a wrong offset!");
static_assert(offsetof(UResourceCountWidget_C, CanNotAffordBackgroundColor) == 0x0002B8, "Member 'UResourceCountWidget_C::CanNotAffordBackgroundColor' has a wrong offset!");
static_assert(offsetof(UResourceCountWidget_C, CanAffordBackgroundColor) == 0x0002E0, "Member 'UResourceCountWidget_C::CanAffordBackgroundColor' has a wrong offset!");

}

