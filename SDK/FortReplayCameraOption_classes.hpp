#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortReplayCameraOption

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "IconTextButton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FortReplayCameraOption.FortReplayCameraOption_C
// 0x0010 (0x0C80 - 0x0C70)
class UFortReplayCameraOption_C final : public UIconTextButton_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_FortReplayCameraOption_C;           // 0x0C70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	ESpectatorCameraType                          CameraType;                                        // 0x0C78(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FortReplayCameraOption(int32 EntryPoint);
	void Construct();
	void BP_OnClicked();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortReplayCameraOption_C">();
	}
	static class UFortReplayCameraOption_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortReplayCameraOption_C>();
	}
};
static_assert(alignof(UFortReplayCameraOption_C) == 0x000008, "Wrong alignment on UFortReplayCameraOption_C");
static_assert(sizeof(UFortReplayCameraOption_C) == 0x000C80, "Wrong size on UFortReplayCameraOption_C");
static_assert(offsetof(UFortReplayCameraOption_C, UberGraphFrame_FortReplayCameraOption_C) == 0x000C70, "Member 'UFortReplayCameraOption_C::UberGraphFrame_FortReplayCameraOption_C' has a wrong offset!");
static_assert(offsetof(UFortReplayCameraOption_C, CameraType) == 0x000C78, "Member 'UFortReplayCameraOption_C::CameraType' has a wrong offset!");

}
