#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameSettingsDetailView

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GameSettingsDetailView.GameSettingsDetailView_C
// 0x0000 (0x02F8 - 0x02F8)
class UGameSettingsDetailView_C final : public UFortSettingDetailView
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GameSettingsDetailView_C">();
	}
	static class UGameSettingsDetailView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameSettingsDetailView_C>();
	}
};
static_assert(alignof(UGameSettingsDetailView_C) == 0x000008, "Wrong alignment on UGameSettingsDetailView_C");
static_assert(sizeof(UGameSettingsDetailView_C) == 0x0002F8, "Wrong size on UGameSettingsDetailView_C");

}
