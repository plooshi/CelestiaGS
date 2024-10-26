#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveStreamHUDElement

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LiveStreamHUDElement.LiveStreamHUDElement_C
// 0x0058 (0x0300 - 0x02A8)
class ULiveStreamHUDElement_C final : public ULiveStreamHUDElement
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                BorderRoot;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                HideInstructions;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   Text_HideInstructions;                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               VideoPlayerSlot;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   VideoPlayerClass;                                  // 0x02D0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class ULiveStreamStandalonePlayer*            VideoPlayer;                                       // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnComplete_74112BA8413888C7EAD38CA589F3B588(class UUserWidget* UserWidget);
	void InitializeVideoPlayer();
	void VideoPlayerReady();
	void CreateVideoPlayer();
	void DestroyVideoPlayer();
	void ExecuteUbergraph_LiveStreamHUDElement(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LiveStreamHUDElement_C">();
	}
	static class ULiveStreamHUDElement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveStreamHUDElement_C>();
	}
};
static_assert(alignof(ULiveStreamHUDElement_C) == 0x000008, "Wrong alignment on ULiveStreamHUDElement_C");
static_assert(sizeof(ULiveStreamHUDElement_C) == 0x000300, "Wrong size on ULiveStreamHUDElement_C");
static_assert(offsetof(ULiveStreamHUDElement_C, UberGraphFrame) == 0x0002A8, "Member 'ULiveStreamHUDElement_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULiveStreamHUDElement_C, BorderRoot) == 0x0002B0, "Member 'ULiveStreamHUDElement_C::BorderRoot' has a wrong offset!");
static_assert(offsetof(ULiveStreamHUDElement_C, HideInstructions) == 0x0002B8, "Member 'ULiveStreamHUDElement_C::HideInstructions' has a wrong offset!");
static_assert(offsetof(ULiveStreamHUDElement_C, Text_HideInstructions) == 0x0002C0, "Member 'ULiveStreamHUDElement_C::Text_HideInstructions' has a wrong offset!");
static_assert(offsetof(ULiveStreamHUDElement_C, VideoPlayerSlot) == 0x0002C8, "Member 'ULiveStreamHUDElement_C::VideoPlayerSlot' has a wrong offset!");
static_assert(offsetof(ULiveStreamHUDElement_C, VideoPlayerClass) == 0x0002D0, "Member 'ULiveStreamHUDElement_C::VideoPlayerClass' has a wrong offset!");
static_assert(offsetof(ULiveStreamHUDElement_C, VideoPlayer) == 0x0002F8, "Member 'ULiveStreamHUDElement_C::VideoPlayer' has a wrong offset!");

}

