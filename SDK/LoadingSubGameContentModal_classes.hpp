#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadingSubGameContentModal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LoadingSubGameContentModal.LoadingSubGameContentModal_C
// 0x0048 (0x0368 - 0x0320)
class ULoadingSubGameContentModal_C final : public UFortLoadingOnDemandContentModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Outro;                                             // 0x0328(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0330(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_Title;                             // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           DownloadingProgressBar;                            // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Modal_VertBox;                                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Content;                                      // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Progress;                                     // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void OnUpdatedProgress(float Percent);
	void OnInitialized();
	void ExecuteUbergraph_LoadingSubGameContentModal(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoadingSubGameContentModal_C">();
	}
	static class ULoadingSubGameContentModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoadingSubGameContentModal_C>();
	}
};
static_assert(alignof(ULoadingSubGameContentModal_C) == 0x000008, "Wrong alignment on ULoadingSubGameContentModal_C");
static_assert(sizeof(ULoadingSubGameContentModal_C) == 0x000368, "Wrong size on ULoadingSubGameContentModal_C");
static_assert(offsetof(ULoadingSubGameContentModal_C, UberGraphFrame) == 0x000320, "Member 'ULoadingSubGameContentModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, Outro) == 0x000328, "Member 'ULoadingSubGameContentModal_C::Outro' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, Intro) == 0x000330, "Member 'ULoadingSubGameContentModal_C::Intro' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, CommonTextBlock_Title) == 0x000338, "Member 'ULoadingSubGameContentModal_C::CommonTextBlock_Title' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, DownloadingProgressBar) == 0x000340, "Member 'ULoadingSubGameContentModal_C::DownloadingProgressBar' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, Lightbox) == 0x000348, "Member 'ULoadingSubGameContentModal_C::Lightbox' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, Modal_VertBox) == 0x000350, "Member 'ULoadingSubGameContentModal_C::Modal_VertBox' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, Text_Content) == 0x000358, "Member 'ULoadingSubGameContentModal_C::Text_Content' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, Text_Progress) == 0x000360, "Member 'ULoadingSubGameContentModal_C::Text_Progress' has a wrong offset!");

}
