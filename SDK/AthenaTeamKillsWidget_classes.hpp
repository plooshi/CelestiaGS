#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaTeamKillsWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaTeamKillsWidget.AthenaTeamKillsWidget_C
// 0x0008 (0x02B0 - 0x02A8)
class UAthenaTeamKillsWidget_C final : public UAthenaPlayerTeamKillsBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void Construct();
	void ExecuteUbergraph_AthenaTeamKillsWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaTeamKillsWidget_C">();
	}
	static class UAthenaTeamKillsWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaTeamKillsWidget_C>();
	}
};
static_assert(alignof(UAthenaTeamKillsWidget_C) == 0x000008, "Wrong alignment on UAthenaTeamKillsWidget_C");
static_assert(sizeof(UAthenaTeamKillsWidget_C) == 0x0002B0, "Wrong size on UAthenaTeamKillsWidget_C");
static_assert(offsetof(UAthenaTeamKillsWidget_C, UberGraphFrame) == 0x0002A8, "Member 'UAthenaTeamKillsWidget_C::UberGraphFrame' has a wrong offset!");

}
