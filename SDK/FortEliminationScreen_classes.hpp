#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortEliminationScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FortEliminationScreen.FortEliminationScreen_C
// 0x0018 (0x0398 - 0x0380)
class UFortEliminationScreen_C final : public UFortEliminationScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro;                                             // 0x0388(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_interactionblock;                            // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FortEliminationScreen(int32 EntryPoint);
	void PlayIntroAnimation();
	void SetContinueButtonText(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortEliminationScreen_C">();
	}
	static class UFortEliminationScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortEliminationScreen_C>();
	}
};
static_assert(alignof(UFortEliminationScreen_C) == 0x000008, "Wrong alignment on UFortEliminationScreen_C");
static_assert(sizeof(UFortEliminationScreen_C) == 0x000398, "Wrong size on UFortEliminationScreen_C");
static_assert(offsetof(UFortEliminationScreen_C, UberGraphFrame) == 0x000380, "Member 'UFortEliminationScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFortEliminationScreen_C, Intro) == 0x000388, "Member 'UFortEliminationScreen_C::Intro' has a wrong offset!");
static_assert(offsetof(UFortEliminationScreen_C, Image_interactionblock) == 0x000390, "Member 'UFortEliminationScreen_C::Image_interactionblock' has a wrong offset!");

}
