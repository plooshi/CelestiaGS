#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActionDetailsSourceKeybindWidget

#include "Basic.hpp"

#include "KeybindWidget_classes.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C
// 0x0010 (0x08C8 - 0x08B8)
class UActionDetailsSourceKeybindWidget_C : public UKeybindWidget_C
{
public:
	TScriptInterface<class IFortGlobalActionDetailsDataSource> ActionSource;                                      // 0x08B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void HandleActionSourceValueChange(class UObject* Source);
	void BindActionSourceEvents();
	void UnbindActionSourceEvents();
	void SetActionSource(TScriptInterface<class IFortGlobalActionDetailsDataSource> Value);
	void UpdateInputAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ActionDetailsSourceKeybindWidget_C">();
	}
	static class UActionDetailsSourceKeybindWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActionDetailsSourceKeybindWidget_C>();
	}
};
static_assert(alignof(UActionDetailsSourceKeybindWidget_C) == 0x000008, "Wrong alignment on UActionDetailsSourceKeybindWidget_C");
static_assert(sizeof(UActionDetailsSourceKeybindWidget_C) == 0x0008C8, "Wrong size on UActionDetailsSourceKeybindWidget_C");
static_assert(offsetof(UActionDetailsSourceKeybindWidget_C, ActionSource) == 0x0008B8, "Member 'UActionDetailsSourceKeybindWidget_C::ActionSource' has a wrong offset!");

}
