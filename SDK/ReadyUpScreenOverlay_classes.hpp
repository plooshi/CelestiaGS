#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReadyUpScreenOverlay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ReadyUpScreenOverlay.ReadyUpScreenOverlay_C
// 0x0090 (0x03C0 - 0x0330)
class UReadyUpScreenOverlay_C final : public UAthenaReadyUpScreenOverlay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InitialCountdownState;                             // 0x0338(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Countdown;                                         // 0x0340(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAthenaServerShutdownWidget_C*          AthenaServerShutdownWidget;                        // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInGameSocialUserWidget_C*              InGameSlot_0;                                      // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInGameSocialUserWidget_C*              InGameSlot_1;                                      // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInGameSocialUserWidget_C*              InGameSlot_2;                                      // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInLobbySocialUserWidget_C*             LobbySlot_0;                                       // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInLobbySocialUserWidget_C*             LobbySlot_1;                                       // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInLobbySocialUserWidget_C*             LobbySlot_2;                                       // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInGameSocialUserWidget_C*              LocalPlayerSlot;                                   // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPostGameBottomBarWidget_C*             PostGameBottomBarWidget;                           // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         SocialUserBox;                                     // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_ErrorHeader;                                  // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Waiting;                                      // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   CachedErrorText;                                   // 0x03A8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_ReadyUpScreenOverlay(int32 EntryPoint);
	void Destruct();
	void OnCountdownStarted();
	void OnExitToLobbyCountdownProgressed(float CountdownValue);
	void OnMatchmakingFinished(bool bSuccess);
	void OnMatchmakingStarted();
	void OnCancelReadyUp();
	void OnReadyUp();
	void OnCountdownProgressed();
	void PreConstruct(bool IsDesignTime);
	void UpdateExitToLobbyCountdownText(float CountdownValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ReadyUpScreenOverlay_C">();
	}
	static class UReadyUpScreenOverlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReadyUpScreenOverlay_C>();
	}
};
static_assert(alignof(UReadyUpScreenOverlay_C) == 0x000008, "Wrong alignment on UReadyUpScreenOverlay_C");
static_assert(sizeof(UReadyUpScreenOverlay_C) == 0x0003C0, "Wrong size on UReadyUpScreenOverlay_C");
static_assert(offsetof(UReadyUpScreenOverlay_C, UberGraphFrame) == 0x000330, "Member 'UReadyUpScreenOverlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UReadyUpScreenOverlay_C, InitialCountdownState) == 0x000338, "Member 'UReadyUpScreenOverlay_C::InitialCountdownState' has a wrong offset!");
static_assert(offsetof(UReadyUpScreenOverlay_C, Countdown) == 0x000340, "Member 'UReadyUpScreenOverlay_C::Countdown' has a wrong offset!");
static_assert(offsetof(UReadyUpScreenOverlay_C, AthenaServerShutdownWidget) == 0x000348, "Member 'UReadyUpScreenOverlay_C::AthenaServerShutdownWidget' has a wrong offset!");
static_assert(offsetof(UReadyUpScreenOverlay_C, InGameSlot_0) == 0x000350, "Member 'UReadyUpScreenOverlay_C::InGameSlot_0' has a wrong offset!");
static_assert(offsetof(UReadyUpScreenOverlay_C, InGameSlot_1) == 0x000358, "Member 'UReadyUpScreenOverlay_C::InGameSlot_1' has a wrong offset!");
static_assert(offsetof(UReadyUpScreenOverlay_C, InGameSlot_2) == 0x000360, "Member 'UReadyUpScreenOverlay_C::InGameSlot_2' has a wrong offset!");
static_assert(offsetof(UReadyUpScreenOverlay_C, LobbySlot_0) == 0x000368, "Member 'UReadyUpScreenOverlay_C::LobbySlot_0' has a wrong offset!");
static_assert(offsetof(UReadyUpScreenOverlay_C, LobbySlot_1) == 0x000370, "Member 'UReadyUpScreenOverlay_C::LobbySlot_1' has a wrong offset!");
static_assert(offsetof(UReadyUpScreenOverlay_C, LobbySlot_2) == 0x000378, "Member 'UReadyUpScreenOverlay_C::LobbySlot_2' has a wrong offset!");
static_assert(offsetof(UReadyUpScreenOverlay_C, LocalPlayerSlot) == 0x000380, "Member 'UReadyUpScreenOverlay_C::LocalPlayerSlot' has a wrong offset!");
static_assert(offsetof(UReadyUpScreenOverlay_C, PostGameBottomBarWidget) == 0x000388, "Member 'UReadyUpScreenOverlay_C::PostGameBottomBarWidget' has a wrong offset!");
static_assert(offsetof(UReadyUpScreenOverlay_C, SocialUserBox) == 0x000390, "Member 'UReadyUpScreenOverlay_C::SocialUserBox' has a wrong offset!");
static_assert(offsetof(UReadyUpScreenOverlay_C, Text_ErrorHeader) == 0x000398, "Member 'UReadyUpScreenOverlay_C::Text_ErrorHeader' has a wrong offset!");
static_assert(offsetof(UReadyUpScreenOverlay_C, Text_Waiting) == 0x0003A0, "Member 'UReadyUpScreenOverlay_C::Text_Waiting' has a wrong offset!");
static_assert(offsetof(UReadyUpScreenOverlay_C, CachedErrorText) == 0x0003A8, "Member 'UReadyUpScreenOverlay_C::CachedErrorText' has a wrong offset!");

}
