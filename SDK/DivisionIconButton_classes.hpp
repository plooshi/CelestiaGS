#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DivisionIconButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DivisionIconButton.DivisionIconButton_C
// 0x0018 (0x0B90 - 0x0B78)
class UDivisionIconButton_C final : public UFortShowdownDivisionRankButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Selected;                                          // 0x0B80(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Hover;                                       // 0x0B88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void OnRankButtonSelected(bool bIsSelected);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_DivisionIconButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DivisionIconButton_C">();
	}
	static class UDivisionIconButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDivisionIconButton_C>();
	}
};
static_assert(alignof(UDivisionIconButton_C) == 0x000008, "Wrong alignment on UDivisionIconButton_C");
static_assert(sizeof(UDivisionIconButton_C) == 0x000B90, "Wrong size on UDivisionIconButton_C");
static_assert(offsetof(UDivisionIconButton_C, UberGraphFrame) == 0x000B78, "Member 'UDivisionIconButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDivisionIconButton_C, Selected) == 0x000B80, "Member 'UDivisionIconButton_C::Selected' has a wrong offset!");
static_assert(offsetof(UDivisionIconButton_C, Image_Hover) == 0x000B88, "Member 'UDivisionIconButton_C::Image_Hover' has a wrong offset!");

}
