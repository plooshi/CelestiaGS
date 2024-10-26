#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaIndicatorLayer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaIndicatorLayer.AthenaIndicatorLayer_C
// 0x0080 (0x03D8 - 0x0358)
class UAthenaIndicatorLayer_C final : public UAthenaIndicatorLayerBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UInterestIndicatorWidget_C*>     AvailableInterestIndicators;                       // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UInterestIndicatorWidget_C*>     ActiveInterestIndicators;                          // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          ShowInteractionWidget;                             // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A97[0x7];                                     // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   SoftCreativeInfoIndicator;                         // 0x0388(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   SoftCreativePlayerInfoIndicator;                   // 0x03B0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaIndicatorLayer(int32 EntryPoint);
	void Destruct();
	void Construct();
	void OnLoaded_B8452F9043C3C2A55EA7759DF18A2345(class UClass* Loaded);
	void OnReady_E8925CF449ED5EC2B87AD4AA3B994A28(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void OnLoaded_0BEC012C4A6FDC641FED58A2C3D8BCE1(class UClass* Loaded);
	void CreateInterestIndicatorWidget();
	void HandleOnPointOfInterestAdded(class AActor* PointOfInterest, const class FText& DisplayText, class UTexture2D* DisplayImage, bool SpecifyColor, const struct FLinearColor& ImageColor);
	void HandleOnPointOfInterestRemoved(class AActor* PointOfInterest);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaIndicatorLayer_C">();
	}
	static class UAthenaIndicatorLayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaIndicatorLayer_C>();
	}
};
static_assert(alignof(UAthenaIndicatorLayer_C) == 0x000008, "Wrong alignment on UAthenaIndicatorLayer_C");
static_assert(sizeof(UAthenaIndicatorLayer_C) == 0x0003D8, "Wrong size on UAthenaIndicatorLayer_C");
static_assert(offsetof(UAthenaIndicatorLayer_C, UberGraphFrame) == 0x000358, "Member 'UAthenaIndicatorLayer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaIndicatorLayer_C, AvailableInterestIndicators) == 0x000360, "Member 'UAthenaIndicatorLayer_C::AvailableInterestIndicators' has a wrong offset!");
static_assert(offsetof(UAthenaIndicatorLayer_C, ActiveInterestIndicators) == 0x000370, "Member 'UAthenaIndicatorLayer_C::ActiveInterestIndicators' has a wrong offset!");
static_assert(offsetof(UAthenaIndicatorLayer_C, ShowInteractionWidget) == 0x000380, "Member 'UAthenaIndicatorLayer_C::ShowInteractionWidget' has a wrong offset!");
static_assert(offsetof(UAthenaIndicatorLayer_C, SoftCreativeInfoIndicator) == 0x000388, "Member 'UAthenaIndicatorLayer_C::SoftCreativeInfoIndicator' has a wrong offset!");
static_assert(offsetof(UAthenaIndicatorLayer_C, SoftCreativePlayerInfoIndicator) == 0x0003B0, "Member 'UAthenaIndicatorLayer_C::SoftCreativePlayerInfoIndicator' has a wrong offset!");

}

