#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortPostGameMobileOverlay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FortPostGameMobileOverlay.FortPostGameMobileOverlay_C
// 0x0018 (0x0278 - 0x0260)
class UFortPostGameMobileOverlay_C final : public UFortPostGameMobileButtonOverlay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton_EmoteMenu_C*                    Button_EmoteMenu;                                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHamburgerButton_C*                     Button_HamburgerMenu;                              // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FortPostGameMobileOverlay(int32 EntryPoint);
	void Destruct();
	void Construct();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortPostGameMobileOverlay_C">();
	}
	static class UFortPostGameMobileOverlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPostGameMobileOverlay_C>();
	}
};
static_assert(alignof(UFortPostGameMobileOverlay_C) == 0x000008, "Wrong alignment on UFortPostGameMobileOverlay_C");
static_assert(sizeof(UFortPostGameMobileOverlay_C) == 0x000278, "Wrong size on UFortPostGameMobileOverlay_C");
static_assert(offsetof(UFortPostGameMobileOverlay_C, UberGraphFrame) == 0x000260, "Member 'UFortPostGameMobileOverlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFortPostGameMobileOverlay_C, Button_EmoteMenu) == 0x000268, "Member 'UFortPostGameMobileOverlay_C::Button_EmoteMenu' has a wrong offset!");
static_assert(offsetof(UFortPostGameMobileOverlay_C, Button_HamburgerMenu) == 0x000270, "Member 'UFortPostGameMobileOverlay_C::Button_HamburgerMenu' has a wrong offset!");

}

