#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaServerShutdownWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaServerShutdownWidget.AthenaServerShutdownWidget_C
// 0x0028 (0x0290 - 0x0268)
class UAthenaServerShutdownWidget_C final : public UAthenaShutdownWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       Text_Countdown;                                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   StartingCountdownText;                             // 0x0278(0x0018)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_AthenaServerShutdownWidget(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnStopShowing(float RemainingTime);
	void OnStartShowing(float RemainingTime);
	void OnUpdateCountdown(float RemainingTime);
	void SetCountdownText(float RemainingTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaServerShutdownWidget_C">();
	}
	static class UAthenaServerShutdownWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaServerShutdownWidget_C>();
	}
};
static_assert(alignof(UAthenaServerShutdownWidget_C) == 0x000008, "Wrong alignment on UAthenaServerShutdownWidget_C");
static_assert(sizeof(UAthenaServerShutdownWidget_C) == 0x000290, "Wrong size on UAthenaServerShutdownWidget_C");
static_assert(offsetof(UAthenaServerShutdownWidget_C, UberGraphFrame) == 0x000268, "Member 'UAthenaServerShutdownWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaServerShutdownWidget_C, Text_Countdown) == 0x000270, "Member 'UAthenaServerShutdownWidget_C::Text_Countdown' has a wrong offset!");
static_assert(offsetof(UAthenaServerShutdownWidget_C, StartingCountdownText) == 0x000278, "Member 'UAthenaServerShutdownWidget_C::StartingCountdownText' has a wrong offset!");

}
