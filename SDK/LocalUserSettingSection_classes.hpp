#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LocalUserSettingSection

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LocalUserSettingSection.LocalUserSettingSection_C
// 0x0000 (0x02B0 - 0x02B0)
class ULocalUserSettingSection_C final : public UFortLocalUserSettingsSection
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LocalUserSettingSection_C">();
	}
	static class ULocalUserSettingSection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalUserSettingSection_C>();
	}
};
static_assert(alignof(ULocalUserSettingSection_C) == 0x000008, "Wrong alignment on ULocalUserSettingSection_C");
static_assert(sizeof(ULocalUserSettingSection_C) == 0x0002B0, "Wrong size on ULocalUserSettingSection_C");

}
