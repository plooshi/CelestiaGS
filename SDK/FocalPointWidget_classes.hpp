#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FocalPointWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FocalPointWidget.FocalPointWidget_C
// 0x0030 (0x02C8 - 0x0298)
class UFocalPointWidget_C final : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro;                                             // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_ActionDescription;                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BGShadow;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_XFalloff;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindWidget_Hotkey;                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void FocalPointActorChanged(class AActor* FocalPointActor);
	void EventShowWidget(bool Show);
	void KeybindsChanged();
	void OnFocalPointUseChanged(class AFortPlayerControllerAthena* NewParam, class AActor* Actor, bool NewParam2);
	void Destruct();
	void ExecuteUbergraph_FocalPointWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FocalPointWidget_C">();
	}
	static class UFocalPointWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFocalPointWidget_C>();
	}
};
static_assert(alignof(UFocalPointWidget_C) == 0x000008, "Wrong alignment on UFocalPointWidget_C");
static_assert(sizeof(UFocalPointWidget_C) == 0x0002C8, "Wrong size on UFocalPointWidget_C");
static_assert(offsetof(UFocalPointWidget_C, UberGraphFrame) == 0x000298, "Member 'UFocalPointWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFocalPointWidget_C, Intro) == 0x0002A0, "Member 'UFocalPointWidget_C::Intro' has a wrong offset!");
static_assert(offsetof(UFocalPointWidget_C, CommonTextBlock_ActionDescription) == 0x0002A8, "Member 'UFocalPointWidget_C::CommonTextBlock_ActionDescription' has a wrong offset!");
static_assert(offsetof(UFocalPointWidget_C, Image_BGShadow) == 0x0002B0, "Member 'UFocalPointWidget_C::Image_BGShadow' has a wrong offset!");
static_assert(offsetof(UFocalPointWidget_C, Image_XFalloff) == 0x0002B8, "Member 'UFocalPointWidget_C::Image_XFalloff' has a wrong offset!");
static_assert(offsetof(UFocalPointWidget_C, KeybindWidget_Hotkey) == 0x0002C0, "Member 'UFocalPointWidget_C::KeybindWidget_Hotkey' has a wrong offset!");

}
