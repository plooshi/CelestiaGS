#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FeaturedCreativeContent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FeaturedCreativeContent.FeaturedCreativeContent_C
// 0x0040 (0x0270 - 0x0230)
class UFeaturedCreativeContent_C final : public UFeaturedCreativeContent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Base;                                              // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCMSImageSlideShow_C*                   CMSImageSlideShow;                                 // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       IslandCreator;                                     // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       IslandDetails;                                     // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       IslandName;                                        // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FCreativeAdData>                CurrentAds;                                        // 0x0260(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void SetFeaturedContentDetails(int32 Param_Index);
	void OnSetupAds(const TArray<class FString>& MediaURLs, const TArray<struct FCreativeAdData>& AdMetadata);
	void BndEvt__CMSImageSlideShow_K2Node_ComponentBoundEvent_0_CarouselIndexChanged__DelegateSignature(int32 CurrentPageIndex);
	void ExecuteUbergraph_FeaturedCreativeContent(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FeaturedCreativeContent_C">();
	}
	static class UFeaturedCreativeContent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFeaturedCreativeContent_C>();
	}
};
static_assert(alignof(UFeaturedCreativeContent_C) == 0x000008, "Wrong alignment on UFeaturedCreativeContent_C");
static_assert(sizeof(UFeaturedCreativeContent_C) == 0x000270, "Wrong size on UFeaturedCreativeContent_C");
static_assert(offsetof(UFeaturedCreativeContent_C, UberGraphFrame) == 0x000230, "Member 'UFeaturedCreativeContent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFeaturedCreativeContent_C, Base) == 0x000238, "Member 'UFeaturedCreativeContent_C::Base' has a wrong offset!");
static_assert(offsetof(UFeaturedCreativeContent_C, CMSImageSlideShow) == 0x000240, "Member 'UFeaturedCreativeContent_C::CMSImageSlideShow' has a wrong offset!");
static_assert(offsetof(UFeaturedCreativeContent_C, IslandCreator) == 0x000248, "Member 'UFeaturedCreativeContent_C::IslandCreator' has a wrong offset!");
static_assert(offsetof(UFeaturedCreativeContent_C, IslandDetails) == 0x000250, "Member 'UFeaturedCreativeContent_C::IslandDetails' has a wrong offset!");
static_assert(offsetof(UFeaturedCreativeContent_C, IslandName) == 0x000258, "Member 'UFeaturedCreativeContent_C::IslandName' has a wrong offset!");
static_assert(offsetof(UFeaturedCreativeContent_C, CurrentAds) == 0x000260, "Member 'UFeaturedCreativeContent_C::CurrentAds' has a wrong offset!");

}
