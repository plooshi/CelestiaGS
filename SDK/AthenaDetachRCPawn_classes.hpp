#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDetachRCPawn

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaDetachRCPawn.AthenaDetachRCPawn_C
// 0x0010 (0x02A8 - 0x0298)
class UAthenaDetachRCPawn_C final : public UFortHUDElementWidget
{
public:
	class UHorizontalBox*                         HBox_DetachRCPawn;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindWidget;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaDetachRCPawn_C">();
	}
	static class UAthenaDetachRCPawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaDetachRCPawn_C>();
	}
};
static_assert(alignof(UAthenaDetachRCPawn_C) == 0x000008, "Wrong alignment on UAthenaDetachRCPawn_C");
static_assert(sizeof(UAthenaDetachRCPawn_C) == 0x0002A8, "Wrong size on UAthenaDetachRCPawn_C");
static_assert(offsetof(UAthenaDetachRCPawn_C, HBox_DetachRCPawn) == 0x000298, "Member 'UAthenaDetachRCPawn_C::HBox_DetachRCPawn' has a wrong offset!");
static_assert(offsetof(UAthenaDetachRCPawn_C, KeybindWidget) == 0x0002A0, "Member 'UAthenaDetachRCPawn_C::KeybindWidget' has a wrong offset!");

}
