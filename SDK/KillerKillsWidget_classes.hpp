#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KillerKillsWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass KillerKillsWidget.KillerKillsWidget_C
// 0x0018 (0x0248 - 0x0230)
class UKillerKillsWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_30;                                          // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_NumOfKills;                                   // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_KillerKillsWidget(int32 EntryPoint);
	void Set_Num_Of_Kills(int32 Num_Of_Kills);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KillerKillsWidget_C">();
	}
	static class UKillerKillsWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKillerKillsWidget_C>();
	}
};
static_assert(alignof(UKillerKillsWidget_C) == 0x000008, "Wrong alignment on UKillerKillsWidget_C");
static_assert(sizeof(UKillerKillsWidget_C) == 0x000248, "Wrong size on UKillerKillsWidget_C");
static_assert(offsetof(UKillerKillsWidget_C, UberGraphFrame) == 0x000230, "Member 'UKillerKillsWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKillerKillsWidget_C, Image_30) == 0x000238, "Member 'UKillerKillsWidget_C::Image_30' has a wrong offset!");
static_assert(offsetof(UKillerKillsWidget_C, Text_NumOfKills) == 0x000240, "Member 'UKillerKillsWidget_C::Text_NumOfKills' has a wrong offset!");

}
