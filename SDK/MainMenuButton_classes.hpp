#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenuButton

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenuButton.MainMenuButton_C
// 0x0000 (0x0C30 - 0x0C30)
class UMainMenuButton_C final : public UFortMainMenuButton
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenuButton_C">();
	}
	static class UMainMenuButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainMenuButton_C>();
	}
};
static_assert(alignof(UMainMenuButton_C) == 0x000008, "Wrong alignment on UMainMenuButton_C");
static_assert(sizeof(UMainMenuButton_C) == 0x000C30, "Wrong size on UMainMenuButton_C");

}
