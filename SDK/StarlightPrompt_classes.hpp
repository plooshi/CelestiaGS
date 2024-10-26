#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StarlightPrompt

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StarlightPrompt.StarlightPrompt_C
// 0x0038 (0x02E0 - 0x02A8)
class UStarlightPrompt_C final : public UFortHUDTagPromptWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Outro;                                             // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Shadow;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImagePromptBackground;                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Description;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Title;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StarlightPrompt(int32 EntryPoint);
	void CloseWidget();
	void OpenWidget(const struct FFortHUDTagPromptData& PrompData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StarlightPrompt_C">();
	}
	static class UStarlightPrompt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStarlightPrompt_C>();
	}
};
static_assert(alignof(UStarlightPrompt_C) == 0x000008, "Wrong alignment on UStarlightPrompt_C");
static_assert(sizeof(UStarlightPrompt_C) == 0x0002E0, "Wrong size on UStarlightPrompt_C");
static_assert(offsetof(UStarlightPrompt_C, UberGraphFrame) == 0x0002A8, "Member 'UStarlightPrompt_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStarlightPrompt_C, Outro) == 0x0002B0, "Member 'UStarlightPrompt_C::Outro' has a wrong offset!");
static_assert(offsetof(UStarlightPrompt_C, Intro) == 0x0002B8, "Member 'UStarlightPrompt_C::Intro' has a wrong offset!");
static_assert(offsetof(UStarlightPrompt_C, Image_Shadow) == 0x0002C0, "Member 'UStarlightPrompt_C::Image_Shadow' has a wrong offset!");
static_assert(offsetof(UStarlightPrompt_C, ImagePromptBackground) == 0x0002C8, "Member 'UStarlightPrompt_C::ImagePromptBackground' has a wrong offset!");
static_assert(offsetof(UStarlightPrompt_C, Text_Description) == 0x0002D0, "Member 'UStarlightPrompt_C::Text_Description' has a wrong offset!");
static_assert(offsetof(UStarlightPrompt_C, Text_Title) == 0x0002D8, "Member 'UStarlightPrompt_C::Text_Title' has a wrong offset!");

}

