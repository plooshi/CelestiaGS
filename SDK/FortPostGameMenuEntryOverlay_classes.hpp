#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortPostGameMenuEntryOverlay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FortPostGameMenuEntryOverlay.FortPostGameMenuEntryOverlay_C
// 0x0080 (0x02C0 - 0x0240)
class UFortPostGameMenuEntryOverlay_C final : public UFortPostGameMenuEntryOverlay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                          BorderSkew;                                        // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           HoverBGColor;                                      // 0x0250(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           NormalBGColor;                                     // 0x0260(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            HoverTextColor;                                    // 0x0270(0x0028)(Edit, BlueprintVisible)
	struct FSlateColor                            NormalTextColor;                                   // 0x0298(0x0028)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_FortPostGameMenuEntryOverlay(int32 EntryPoint);
	void OnUnhovered();
	void OnHovered();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortPostGameMenuEntryOverlay_C">();
	}
	static class UFortPostGameMenuEntryOverlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPostGameMenuEntryOverlay_C>();
	}
};
static_assert(alignof(UFortPostGameMenuEntryOverlay_C) == 0x000008, "Wrong alignment on UFortPostGameMenuEntryOverlay_C");
static_assert(sizeof(UFortPostGameMenuEntryOverlay_C) == 0x0002C0, "Wrong size on UFortPostGameMenuEntryOverlay_C");
static_assert(offsetof(UFortPostGameMenuEntryOverlay_C, UberGraphFrame) == 0x000240, "Member 'UFortPostGameMenuEntryOverlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFortPostGameMenuEntryOverlay_C, BorderSkew) == 0x000248, "Member 'UFortPostGameMenuEntryOverlay_C::BorderSkew' has a wrong offset!");
static_assert(offsetof(UFortPostGameMenuEntryOverlay_C, HoverBGColor) == 0x000250, "Member 'UFortPostGameMenuEntryOverlay_C::HoverBGColor' has a wrong offset!");
static_assert(offsetof(UFortPostGameMenuEntryOverlay_C, NormalBGColor) == 0x000260, "Member 'UFortPostGameMenuEntryOverlay_C::NormalBGColor' has a wrong offset!");
static_assert(offsetof(UFortPostGameMenuEntryOverlay_C, HoverTextColor) == 0x000270, "Member 'UFortPostGameMenuEntryOverlay_C::HoverTextColor' has a wrong offset!");
static_assert(offsetof(UFortPostGameMenuEntryOverlay_C, NormalTextColor) == 0x000298, "Member 'UFortPostGameMenuEntryOverlay_C::NormalTextColor' has a wrong offset!");

}

