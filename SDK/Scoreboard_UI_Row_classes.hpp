#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Scoreboard_UI_Row

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Scoreboard_UI_Row.Scoreboard_UI_Row_C
// 0x0240 (0x0470 - 0x0230)
class UScoreboard_UI_Row_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimWinnerCallout;                                 // 0x0238(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USpacer*                                BottomPad;                                         // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DataBox1;                                          // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DataBox2;                                          // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DataBox3;                                          // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DataBox4;                                          // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DataBox5;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               DataHolder1;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               DataHolder2;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               DataHolder3;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               DataHolder4;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               DataHolder5;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         DataHolderHBOX_1;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         DataHolderHBOX_2;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         DataHolderHBOX_3;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         DataHolderHBOX_4;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         DataHolderHBOX_5;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         DataHorizontalBox;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HeroPortrait;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_60;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_62;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_65;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_196;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_197;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_198;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                LocalPlayerCallout;                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NameBox;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  PlacementIndicator_Switcher;                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PlacementIndicatorBox;                             // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboard_Bronze_C*                   Scoreboard_Bronze;                                 // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboard_Gold_C*                     Scoreboard_Gold;                                   // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboard_Silver_C*                   Scoreboard_Silver;                                 // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                TeamColor_Backing;                                 // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TotalData;                                         // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               TotalDataHolder;                                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WinnerCallout;                                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             WinsData;                                          // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               WinsDataHolder;                                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTextBlock*>                     DataBoxes;                                         // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class USizeBox*>                       DataHolders;                                       // 0x0378(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FLinearColor                           BorderColor;                                       // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FMinigameScoreboardValue>       ScoreboardValues;                                  // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateColor                            HighlightColor;                                    // 0x03A8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bDisplayWins;                                      // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_6A83[0x7];                                     // 0x03D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UHorizontalBox*>                 DataHolderHBOXs;                                   // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         TotalNumPlayers;                                   // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_6A84[0x4];                                     // 0x03EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMinigameScoreboardPlayerRow           PlayerBucketData;                                  // 0x03F0(0x0040)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          bIngameScorerow;                                   // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_6A85[0x7];                                     // 0x0431(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            NormalTextColor;                                   // 0x0438(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsTeamGame;                                       // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_6A86[0x3];                                     // 0x0461(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MedalStanding;                                     // 0x0464(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         TeamColorParam;                                    // 0x0468(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EMinigameWinCondition                         WinCondition;                                      // 0x046C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bShowCumulativeScoreboard;                         // 0x046D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void WinnerCalloutAnim();
	void UpdateMedalStanding();
	void UpdateRowVisuals();
	void UpdatePlayerData(const struct FMinigameScoreboardPlayerRow& Param_PlayerBucketData);
	void FillStatData(TArray<struct FMinigameScoreboardValue>& StatValues);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Scoreboard_UI_Row(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Scoreboard_UI_Row_C">();
	}
	static class UScoreboard_UI_Row_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScoreboard_UI_Row_C>();
	}
};
static_assert(alignof(UScoreboard_UI_Row_C) == 0x000008, "Wrong alignment on UScoreboard_UI_Row_C");
static_assert(sizeof(UScoreboard_UI_Row_C) == 0x000470, "Wrong size on UScoreboard_UI_Row_C");
static_assert(offsetof(UScoreboard_UI_Row_C, UberGraphFrame) == 0x000230, "Member 'UScoreboard_UI_Row_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, AnimWinnerCallout) == 0x000238, "Member 'UScoreboard_UI_Row_C::AnimWinnerCallout' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, BottomPad) == 0x000240, "Member 'UScoreboard_UI_Row_C::BottomPad' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, DataBox1) == 0x000248, "Member 'UScoreboard_UI_Row_C::DataBox1' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, DataBox2) == 0x000250, "Member 'UScoreboard_UI_Row_C::DataBox2' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, DataBox3) == 0x000258, "Member 'UScoreboard_UI_Row_C::DataBox3' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, DataBox4) == 0x000260, "Member 'UScoreboard_UI_Row_C::DataBox4' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, DataBox5) == 0x000268, "Member 'UScoreboard_UI_Row_C::DataBox5' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, DataHolder1) == 0x000270, "Member 'UScoreboard_UI_Row_C::DataHolder1' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, DataHolder2) == 0x000278, "Member 'UScoreboard_UI_Row_C::DataHolder2' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, DataHolder3) == 0x000280, "Member 'UScoreboard_UI_Row_C::DataHolder3' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, DataHolder4) == 0x000288, "Member 'UScoreboard_UI_Row_C::DataHolder4' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, DataHolder5) == 0x000290, "Member 'UScoreboard_UI_Row_C::DataHolder5' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, DataHolderHBOX_1) == 0x000298, "Member 'UScoreboard_UI_Row_C::DataHolderHBOX_1' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, DataHolderHBOX_2) == 0x0002A0, "Member 'UScoreboard_UI_Row_C::DataHolderHBOX_2' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, DataHolderHBOX_3) == 0x0002A8, "Member 'UScoreboard_UI_Row_C::DataHolderHBOX_3' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, DataHolderHBOX_4) == 0x0002B0, "Member 'UScoreboard_UI_Row_C::DataHolderHBOX_4' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, DataHolderHBOX_5) == 0x0002B8, "Member 'UScoreboard_UI_Row_C::DataHolderHBOX_5' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, DataHorizontalBox) == 0x0002C0, "Member 'UScoreboard_UI_Row_C::DataHorizontalBox' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, HeroPortrait) == 0x0002C8, "Member 'UScoreboard_UI_Row_C::HeroPortrait' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, Image_60) == 0x0002D0, "Member 'UScoreboard_UI_Row_C::Image_60' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, Image_62) == 0x0002D8, "Member 'UScoreboard_UI_Row_C::Image_62' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, Image_65) == 0x0002E0, "Member 'UScoreboard_UI_Row_C::Image_65' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, Image_196) == 0x0002E8, "Member 'UScoreboard_UI_Row_C::Image_196' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, Image_197) == 0x0002F0, "Member 'UScoreboard_UI_Row_C::Image_197' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, Image_198) == 0x0002F8, "Member 'UScoreboard_UI_Row_C::Image_198' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, LocalPlayerCallout) == 0x000300, "Member 'UScoreboard_UI_Row_C::LocalPlayerCallout' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, NameBox) == 0x000308, "Member 'UScoreboard_UI_Row_C::NameBox' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, PlacementIndicator_Switcher) == 0x000310, "Member 'UScoreboard_UI_Row_C::PlacementIndicator_Switcher' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, PlacementIndicatorBox) == 0x000318, "Member 'UScoreboard_UI_Row_C::PlacementIndicatorBox' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, Scoreboard_Bronze) == 0x000320, "Member 'UScoreboard_UI_Row_C::Scoreboard_Bronze' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, Scoreboard_Gold) == 0x000328, "Member 'UScoreboard_UI_Row_C::Scoreboard_Gold' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, Scoreboard_Silver) == 0x000330, "Member 'UScoreboard_UI_Row_C::Scoreboard_Silver' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, TeamColor_Backing) == 0x000338, "Member 'UScoreboard_UI_Row_C::TeamColor_Backing' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, TotalData) == 0x000340, "Member 'UScoreboard_UI_Row_C::TotalData' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, TotalDataHolder) == 0x000348, "Member 'UScoreboard_UI_Row_C::TotalDataHolder' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, WinnerCallout) == 0x000350, "Member 'UScoreboard_UI_Row_C::WinnerCallout' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, WinsData) == 0x000358, "Member 'UScoreboard_UI_Row_C::WinsData' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, WinsDataHolder) == 0x000360, "Member 'UScoreboard_UI_Row_C::WinsDataHolder' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, DataBoxes) == 0x000368, "Member 'UScoreboard_UI_Row_C::DataBoxes' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, DataHolders) == 0x000378, "Member 'UScoreboard_UI_Row_C::DataHolders' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, BorderColor) == 0x000388, "Member 'UScoreboard_UI_Row_C::BorderColor' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, ScoreboardValues) == 0x000398, "Member 'UScoreboard_UI_Row_C::ScoreboardValues' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, HighlightColor) == 0x0003A8, "Member 'UScoreboard_UI_Row_C::HighlightColor' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, bDisplayWins) == 0x0003D0, "Member 'UScoreboard_UI_Row_C::bDisplayWins' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, DataHolderHBOXs) == 0x0003D8, "Member 'UScoreboard_UI_Row_C::DataHolderHBOXs' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, TotalNumPlayers) == 0x0003E8, "Member 'UScoreboard_UI_Row_C::TotalNumPlayers' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, PlayerBucketData) == 0x0003F0, "Member 'UScoreboard_UI_Row_C::PlayerBucketData' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, bIngameScorerow) == 0x000430, "Member 'UScoreboard_UI_Row_C::bIngameScorerow' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, NormalTextColor) == 0x000438, "Member 'UScoreboard_UI_Row_C::NormalTextColor' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, bIsTeamGame) == 0x000460, "Member 'UScoreboard_UI_Row_C::bIsTeamGame' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, MedalStanding) == 0x000464, "Member 'UScoreboard_UI_Row_C::MedalStanding' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, TeamColorParam) == 0x000468, "Member 'UScoreboard_UI_Row_C::TeamColorParam' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, WinCondition) == 0x00046C, "Member 'UScoreboard_UI_Row_C::WinCondition' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_Row_C, bShowCumulativeScoreboard) == 0x00046D, "Member 'UScoreboard_UI_Row_C::bShowCumulativeScoreboard' has a wrong offset!");

}
