#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ResourceFeedWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ResourceFeedWidget.ResourceFeedWidget_C
// 0x0020 (0x0320 - 0x0300)
class UResourceFeedWidget_C final : public UFortResourceFeed
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   FadeOutAnimation;                                  // 0x0308(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ResourceGainedAnimation;                           // 0x0310(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   WeakpointHitAnimation;                             // 0x0318(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void OnCameraTypeChanged(class AFortPlayerControllerSpectating* SpectatorPC, ESpectatorCameraType NewCameraType);
	void OnFollowPlayerChanged(class AFortPlayerControllerSpectating* SpectatorPC, class AFortPlayerState* NewFollowedPlayer);
	void OnFadeOut();
	void OnResourceGained();
	void OnWeakpointHit();
	void OnAnimationsFinished(class FName Param_Name);
	void ExecuteUbergraph_ResourceFeedWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ResourceFeedWidget_C">();
	}
	static class UResourceFeedWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResourceFeedWidget_C>();
	}
};
static_assert(alignof(UResourceFeedWidget_C) == 0x000008, "Wrong alignment on UResourceFeedWidget_C");
static_assert(sizeof(UResourceFeedWidget_C) == 0x000320, "Wrong size on UResourceFeedWidget_C");
static_assert(offsetof(UResourceFeedWidget_C, UberGraphFrame) == 0x000300, "Member 'UResourceFeedWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UResourceFeedWidget_C, FadeOutAnimation) == 0x000308, "Member 'UResourceFeedWidget_C::FadeOutAnimation' has a wrong offset!");
static_assert(offsetof(UResourceFeedWidget_C, ResourceGainedAnimation) == 0x000310, "Member 'UResourceFeedWidget_C::ResourceGainedAnimation' has a wrong offset!");
static_assert(offsetof(UResourceFeedWidget_C, WeakpointHitAnimation) == 0x000318, "Member 'UResourceFeedWidget_C::WeakpointHitAnimation' has a wrong offset!");

}

