#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BuiltInEmotePopUP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BuiltInEmotePopUP.BuiltInEmotePopUP_C
// 0x0020 (0x0308 - 0x02E8)
class UBuiltInEmotePopUP_C final : public UFortStoreSkinDetailsPopup
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeAnim;                                          // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       IntroAnim;                                         // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_ItemRarity;                                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void RequestFadeIn();
	void RequuestFadeOut();
	void ExecuteUbergraph_BuiltInEmotePopUP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BuiltInEmotePopUP_C">();
	}
	static class UBuiltInEmotePopUP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuiltInEmotePopUP_C>();
	}
};
static_assert(alignof(UBuiltInEmotePopUP_C) == 0x000008, "Wrong alignment on UBuiltInEmotePopUP_C");
static_assert(sizeof(UBuiltInEmotePopUP_C) == 0x000308, "Wrong size on UBuiltInEmotePopUP_C");
static_assert(offsetof(UBuiltInEmotePopUP_C, UberGraphFrame) == 0x0002E8, "Member 'UBuiltInEmotePopUP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBuiltInEmotePopUP_C, FadeAnim) == 0x0002F0, "Member 'UBuiltInEmotePopUP_C::FadeAnim' has a wrong offset!");
static_assert(offsetof(UBuiltInEmotePopUP_C, IntroAnim) == 0x0002F8, "Member 'UBuiltInEmotePopUP_C::IntroAnim' has a wrong offset!");
static_assert(offsetof(UBuiltInEmotePopUP_C, Border_ItemRarity) == 0x000300, "Member 'UBuiltInEmotePopUP_C::Border_ItemRarity' has a wrong offset!");

}
