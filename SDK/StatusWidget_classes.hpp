#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatusWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StatusWidget.StatusWidget_C
// 0x0008 (0x04B8 - 0x04B0)
class UStatusWidget_C final : public UFortLoginStatus
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void SetContinueButtonText(const class FText& ContinueText);
	void ExecuteUbergraph_StatusWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StatusWidget_C">();
	}
	static class UStatusWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatusWidget_C>();
	}
};
static_assert(alignof(UStatusWidget_C) == 0x000008, "Wrong alignment on UStatusWidget_C");
static_assert(sizeof(UStatusWidget_C) == 0x0004B8, "Wrong size on UStatusWidget_C");
static_assert(offsetof(UStatusWidget_C, UberGraphFrame) == 0x0004B0, "Member 'UStatusWidget_C::UberGraphFrame' has a wrong offset!");

}
