#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaBroadcastPlayersRemaining

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaBroadcastPlayersRemaining.AthenaBroadcastPlayersRemaining_C
// 0x01C8 (0x0420 - 0x0258)
class UAthenaBroadcastPlayersRemaining_C final : public UAthenaSpectatorPlayersLeftBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       TeamsElimScale;                                    // 0x0260(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       PlayersElimScale;                                  // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                PlayersLeft;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Team_Icon;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                TeamsLeft;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               TeamsSB;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                TotalPlayers;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                TotalTeams;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         DesignTime_PlayersLeft;                            // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DesignTime_TotalPlayers;                           // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DesignTime_TeamsLeft;                              // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DesignTime_TotalTeams;                             // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DesignTime_MaxSquadSize;                           // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6510[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              DefaultTeamIcon;                                   // 0x02B8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<int32, TSoftObjectPtr<class UTexture2D>> TeamIcons;                                         // 0x02E0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateFontInfo                         LargeFont;                                         // 0x0330(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                         MediumFont;                                        // 0x0380(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                         SmallFont;                                         // 0x03D0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaBroadcastPlayersRemaining(int32 EntryPoint);
	void UpdateMaxSquadSize(int32 MaxSquadSize);
	void UpdateTotalTeams(int32 InTotalTeams);
	void UpdateTeamsLeft(int32 InTeamsLeft);
	void UpdatePlayersLeft(int32 InPlayersLeft);
	void UpdateTotalPlayers(int32 InTotalPlayers);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaBroadcastPlayersRemaining_C">();
	}
	static class UAthenaBroadcastPlayersRemaining_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaBroadcastPlayersRemaining_C>();
	}
};
static_assert(alignof(UAthenaBroadcastPlayersRemaining_C) == 0x000008, "Wrong alignment on UAthenaBroadcastPlayersRemaining_C");
static_assert(sizeof(UAthenaBroadcastPlayersRemaining_C) == 0x000420, "Wrong size on UAthenaBroadcastPlayersRemaining_C");
static_assert(offsetof(UAthenaBroadcastPlayersRemaining_C, UberGraphFrame) == 0x000258, "Member 'UAthenaBroadcastPlayersRemaining_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastPlayersRemaining_C, TeamsElimScale) == 0x000260, "Member 'UAthenaBroadcastPlayersRemaining_C::TeamsElimScale' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastPlayersRemaining_C, PlayersElimScale) == 0x000268, "Member 'UAthenaBroadcastPlayersRemaining_C::PlayersElimScale' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastPlayersRemaining_C, PlayersLeft) == 0x000270, "Member 'UAthenaBroadcastPlayersRemaining_C::PlayersLeft' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastPlayersRemaining_C, Team_Icon) == 0x000278, "Member 'UAthenaBroadcastPlayersRemaining_C::Team_Icon' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastPlayersRemaining_C, TeamsLeft) == 0x000280, "Member 'UAthenaBroadcastPlayersRemaining_C::TeamsLeft' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastPlayersRemaining_C, TeamsSB) == 0x000288, "Member 'UAthenaBroadcastPlayersRemaining_C::TeamsSB' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastPlayersRemaining_C, TotalPlayers) == 0x000290, "Member 'UAthenaBroadcastPlayersRemaining_C::TotalPlayers' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastPlayersRemaining_C, TotalTeams) == 0x000298, "Member 'UAthenaBroadcastPlayersRemaining_C::TotalTeams' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastPlayersRemaining_C, DesignTime_PlayersLeft) == 0x0002A0, "Member 'UAthenaBroadcastPlayersRemaining_C::DesignTime_PlayersLeft' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastPlayersRemaining_C, DesignTime_TotalPlayers) == 0x0002A4, "Member 'UAthenaBroadcastPlayersRemaining_C::DesignTime_TotalPlayers' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastPlayersRemaining_C, DesignTime_TeamsLeft) == 0x0002A8, "Member 'UAthenaBroadcastPlayersRemaining_C::DesignTime_TeamsLeft' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastPlayersRemaining_C, DesignTime_TotalTeams) == 0x0002AC, "Member 'UAthenaBroadcastPlayersRemaining_C::DesignTime_TotalTeams' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastPlayersRemaining_C, DesignTime_MaxSquadSize) == 0x0002B0, "Member 'UAthenaBroadcastPlayersRemaining_C::DesignTime_MaxSquadSize' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastPlayersRemaining_C, DefaultTeamIcon) == 0x0002B8, "Member 'UAthenaBroadcastPlayersRemaining_C::DefaultTeamIcon' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastPlayersRemaining_C, TeamIcons) == 0x0002E0, "Member 'UAthenaBroadcastPlayersRemaining_C::TeamIcons' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastPlayersRemaining_C, LargeFont) == 0x000330, "Member 'UAthenaBroadcastPlayersRemaining_C::LargeFont' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastPlayersRemaining_C, MediumFont) == 0x000380, "Member 'UAthenaBroadcastPlayersRemaining_C::MediumFont' has a wrong offset!");
static_assert(offsetof(UAthenaBroadcastPlayersRemaining_C, SmallFont) == 0x0003D0, "Member 'UAthenaBroadcastPlayersRemaining_C::SmallFont' has a wrong offset!");

}
