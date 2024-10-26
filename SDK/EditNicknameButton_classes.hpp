#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EditNicknameButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EditNicknameButton.EditNicknameButton_C
// 0x0018 (0x0BC0 - 0x0BA8)
class UEditNicknameButton_C final : public UFortEditNicknameButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BA8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnHovered;                                         // 0x0BB0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                ClickCapture;                                      // 0x0BB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EditNicknameButton(int32 EntryPoint);
	void BP_OnUnhovered();
	void BP_OnHovered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EditNicknameButton_C">();
	}
	static class UEditNicknameButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditNicknameButton_C>();
	}
};
static_assert(alignof(UEditNicknameButton_C) == 0x000008, "Wrong alignment on UEditNicknameButton_C");
static_assert(sizeof(UEditNicknameButton_C) == 0x000BC0, "Wrong size on UEditNicknameButton_C");
static_assert(offsetof(UEditNicknameButton_C, UberGraphFrame) == 0x000BA8, "Member 'UEditNicknameButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEditNicknameButton_C, OnHovered) == 0x000BB0, "Member 'UEditNicknameButton_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UEditNicknameButton_C, ClickCapture) == 0x000BB8, "Member 'UEditNicknameButton_C::ClickCapture' has a wrong offset!");

}

