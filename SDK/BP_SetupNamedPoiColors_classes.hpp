#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SetupNamedPoiColors

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SetupNamedPoiColors.BP_SetupNamedPoiColors_C
// 0x00F0 (0x0310 - 0x0220)
class ABP_SetupNamedPoiColors_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                         SnowPoiFont;                                       // 0x0230(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class AFortGameStateAthena*                   BRGameState;                                       // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PendingMinimapRefresh;                             // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DidEverRepNotify;                                  // 0x0289(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_791A[0x2];                                     // 0x028A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           GoldenPoiFontColor;                                // 0x028C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_791B[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         GoldenPoiFont;                                     // 0x02A0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FLinearColor                           SnowPoiFontColor;                                  // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           UndiscoveredPoiColor;                              // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SetupNamedPoiColors(int32 EntryPoint);
	void OnCurrentPlaylistLoaded_Bind(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags);
	void UpdateNamedPoiColorDelegate_Bind();
	void RefreshCalendar__Authority_Only_();
	void RefreshMapLocations();
	void ReceiveBeginPlay();
	void OnReady_48C0CAD94148AE3E93FCDD8F6267DB95();
	void OnReady_734C353B401F21D840C0A0BFD0A60019(class AGameStateBase* GameState);
	void OnReady_734C353B401F21D840C0A0BF35BB4063(class AGameStateBase* GameState);
	void OnReady_734C353B401F21D840C0A0BF8E84199F(class AGameStateBase* GameState);
	void MakeLocationsVisibleInSnow(const struct FGameplayTagContainer& LocationTags);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SetupNamedPoiColors_C">();
	}
	static class ABP_SetupNamedPoiColors_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SetupNamedPoiColors_C>();
	}
};
static_assert(alignof(ABP_SetupNamedPoiColors_C) == 0x000008, "Wrong alignment on ABP_SetupNamedPoiColors_C");
static_assert(sizeof(ABP_SetupNamedPoiColors_C) == 0x000310, "Wrong size on ABP_SetupNamedPoiColors_C");
static_assert(offsetof(ABP_SetupNamedPoiColors_C, UberGraphFrame) == 0x000220, "Member 'ABP_SetupNamedPoiColors_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SetupNamedPoiColors_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_SetupNamedPoiColors_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SetupNamedPoiColors_C, SnowPoiFont) == 0x000230, "Member 'ABP_SetupNamedPoiColors_C::SnowPoiFont' has a wrong offset!");
static_assert(offsetof(ABP_SetupNamedPoiColors_C, BRGameState) == 0x000280, "Member 'ABP_SetupNamedPoiColors_C::BRGameState' has a wrong offset!");
static_assert(offsetof(ABP_SetupNamedPoiColors_C, PendingMinimapRefresh) == 0x000288, "Member 'ABP_SetupNamedPoiColors_C::PendingMinimapRefresh' has a wrong offset!");
static_assert(offsetof(ABP_SetupNamedPoiColors_C, DidEverRepNotify) == 0x000289, "Member 'ABP_SetupNamedPoiColors_C::DidEverRepNotify' has a wrong offset!");
static_assert(offsetof(ABP_SetupNamedPoiColors_C, GoldenPoiFontColor) == 0x00028C, "Member 'ABP_SetupNamedPoiColors_C::GoldenPoiFontColor' has a wrong offset!");
static_assert(offsetof(ABP_SetupNamedPoiColors_C, GoldenPoiFont) == 0x0002A0, "Member 'ABP_SetupNamedPoiColors_C::GoldenPoiFont' has a wrong offset!");
static_assert(offsetof(ABP_SetupNamedPoiColors_C, SnowPoiFontColor) == 0x0002F0, "Member 'ABP_SetupNamedPoiColors_C::SnowPoiFontColor' has a wrong offset!");
static_assert(offsetof(ABP_SetupNamedPoiColors_C, UndiscoveredPoiColor) == 0x000300, "Member 'ABP_SetupNamedPoiColors_C::UndiscoveredPoiColor' has a wrong offset!");

}

