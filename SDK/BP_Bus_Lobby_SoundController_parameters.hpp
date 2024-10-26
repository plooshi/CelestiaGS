#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Bus_Lobby_SoundController

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Bus_Lobby_SoundController.BP_Bus_Lobby_SoundController_C.ExecuteUbergraph_BP_Bus_Lobby_SoundController
// 0x0088 (0x0088 - 0x0000)
struct BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8433[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8434[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IFortSafeZoneInterface> K2Node_CustomEvent_SafeZoneInterface;              // 0x0030(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EAthenaGamePhaseStep                          K2Node_CustomEvent_GamePhaseStep;                  // 0x0040(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8435[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAthena_GameState_C*                    K2Node_DynamicCast_AsAthena_Game_State;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8436[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_2;         // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, EAthenaGamePhaseStep GamePhaseStep)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController) == 0x000008, "Wrong alignment on BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController");
static_assert(sizeof(BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController) == 0x000088, "Wrong size on BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController, EntryPoint) == 0x000000, "Member 'BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000004, "Member 'BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController, CallFunc_IsDedicatedServer_ReturnValue) == 0x000024, "Member 'BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController, CallFunc_GetGameState_ReturnValue) == 0x000028, "Member 'BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController, K2Node_CustomEvent_SafeZoneInterface) == 0x000030, "Member 'BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController::K2Node_CustomEvent_SafeZoneInterface' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController, K2Node_CustomEvent_GamePhaseStep) == 0x000040, "Member 'BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController::K2Node_CustomEvent_GamePhaseStep' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController, K2Node_DynamicCast_AsAthena_Game_State) == 0x000048, "Member 'BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController::K2Node_DynamicCast_AsAthena_Game_State' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController, K2Node_SwitchEnum_CmpSuccess) == 0x000051, "Member 'BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000058, "Member 'BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController, CallFunc_SpawnSoundAttached_ReturnValue_1) == 0x000060, "Member 'BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController::CallFunc_SpawnSoundAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController, CallFunc_SpawnSoundAttached_ReturnValue_2) == 0x000068, "Member 'BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController::CallFunc_SpawnSoundAttached_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController, K2Node_CreateDelegate_OutputDelegate_1) == 0x000070, "Member 'BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController, K2Node_Event_EndPlayReason) == 0x000080, "Member 'BP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController::K2Node_Event_EndPlayReason' has a wrong offset!");

// Function BP_Bus_Lobby_SoundController.BP_Bus_Lobby_SoundController_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_Bus_Lobby_SoundController_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Bus_Lobby_SoundController_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_Bus_Lobby_SoundController_C_ReceiveEndPlay");
static_assert(sizeof(BP_Bus_Lobby_SoundController_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_Bus_Lobby_SoundController_C_ReceiveEndPlay");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_Bus_Lobby_SoundController_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_Bus_Lobby_SoundController.BP_Bus_Lobby_SoundController_C.On Game Phase Step Changed
// 0x0018 (0x0018 - 0x0000)
struct BP_Bus_Lobby_SoundController_C_On_Game_Phase_Step_Changed final
{
public:
	TScriptInterface<class IFortSafeZoneInterface> SafeZoneInterface;                                 // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	EAthenaGamePhaseStep                          GamePhaseStep;                                     // 0x0010(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Bus_Lobby_SoundController_C_On_Game_Phase_Step_Changed) == 0x000008, "Wrong alignment on BP_Bus_Lobby_SoundController_C_On_Game_Phase_Step_Changed");
static_assert(sizeof(BP_Bus_Lobby_SoundController_C_On_Game_Phase_Step_Changed) == 0x000018, "Wrong size on BP_Bus_Lobby_SoundController_C_On_Game_Phase_Step_Changed");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_On_Game_Phase_Step_Changed, SafeZoneInterface) == 0x000000, "Member 'BP_Bus_Lobby_SoundController_C_On_Game_Phase_Step_Changed::SafeZoneInterface' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_On_Game_Phase_Step_Changed, GamePhaseStep) == 0x000010, "Member 'BP_Bus_Lobby_SoundController_C_On_Game_Phase_Step_Changed::GamePhaseStep' has a wrong offset!");

// Function BP_Bus_Lobby_SoundController.BP_Bus_Lobby_SoundController_C.GetBattleBusAsset
// 0x0030 (0x0030 - 0x0000)
struct BP_Bus_Lobby_SoundController_C_GetBattleBusAsset final
{
public:
	class UAthenaBattleBusItemDefinition*         BattleBus;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*            CallFunc_GetLocalPlayer_FirstLocalPC;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                   K2Node_DynamicCast_AsFort_Game_State_Athena;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8437[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaBattleBusItemDefinition*         CallFunc_GetBattleBusForPlayer_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Bus_Lobby_SoundController_C_GetBattleBusAsset) == 0x000008, "Wrong alignment on BP_Bus_Lobby_SoundController_C_GetBattleBusAsset");
static_assert(sizeof(BP_Bus_Lobby_SoundController_C_GetBattleBusAsset) == 0x000030, "Wrong size on BP_Bus_Lobby_SoundController_C_GetBattleBusAsset");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_GetBattleBusAsset, BattleBus) == 0x000000, "Member 'BP_Bus_Lobby_SoundController_C_GetBattleBusAsset::BattleBus' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_GetBattleBusAsset, CallFunc_GetLocalPlayer_FirstLocalPC) == 0x000008, "Member 'BP_Bus_Lobby_SoundController_C_GetBattleBusAsset::CallFunc_GetLocalPlayer_FirstLocalPC' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_GetBattleBusAsset, CallFunc_GetGameState_ReturnValue) == 0x000010, "Member 'BP_Bus_Lobby_SoundController_C_GetBattleBusAsset::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_GetBattleBusAsset, K2Node_DynamicCast_AsFort_Game_State_Athena) == 0x000018, "Member 'BP_Bus_Lobby_SoundController_C_GetBattleBusAsset::K2Node_DynamicCast_AsFort_Game_State_Athena' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_GetBattleBusAsset, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_Bus_Lobby_SoundController_C_GetBattleBusAsset::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_GetBattleBusAsset, CallFunc_GetBattleBusForPlayer_ReturnValue) == 0x000028, "Member 'BP_Bus_Lobby_SoundController_C_GetBattleBusAsset::CallFunc_GetBattleBusForPlayer_ReturnValue' has a wrong offset!");

// Function BP_Bus_Lobby_SoundController.BP_Bus_Lobby_SoundController_C.GetLocalPlayer
// 0x0040 (0x0040 - 0x0000)
struct BP_Bus_Lobby_SoundController_C_GetLocalPlayer final
{
public:
	class AFortPlayerControllerAthena*            FirstLocalPC;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerController*>          CallFunc_GetLocalFortPlayerControllers_ReturnValue; // 0x0008(0x0010)(ReferenceParm, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8438[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8439[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerControllerAthena*            K2Node_DynamicCast_AsFort_Player_Controller_Athena; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Bus_Lobby_SoundController_C_GetLocalPlayer) == 0x000008, "Wrong alignment on BP_Bus_Lobby_SoundController_C_GetLocalPlayer");
static_assert(sizeof(BP_Bus_Lobby_SoundController_C_GetLocalPlayer) == 0x000040, "Wrong size on BP_Bus_Lobby_SoundController_C_GetLocalPlayer");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_GetLocalPlayer, FirstLocalPC) == 0x000000, "Member 'BP_Bus_Lobby_SoundController_C_GetLocalPlayer::FirstLocalPC' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_GetLocalPlayer, CallFunc_GetLocalFortPlayerControllers_ReturnValue) == 0x000008, "Member 'BP_Bus_Lobby_SoundController_C_GetLocalPlayer::CallFunc_GetLocalFortPlayerControllers_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_GetLocalPlayer, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BP_Bus_Lobby_SoundController_C_GetLocalPlayer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_GetLocalPlayer, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_Bus_Lobby_SoundController_C_GetLocalPlayer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_GetLocalPlayer, CallFunc_Greater_IntInt_ReturnValue) == 0x000028, "Member 'BP_Bus_Lobby_SoundController_C_GetLocalPlayer::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_GetLocalPlayer, K2Node_DynamicCast_AsFort_Player_Controller_Athena) == 0x000030, "Member 'BP_Bus_Lobby_SoundController_C_GetLocalPlayer::K2Node_DynamicCast_AsFort_Player_Controller_Athena' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_GetLocalPlayer, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_Bus_Lobby_SoundController_C_GetLocalPlayer::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_Bus_Lobby_SoundController.BP_Bus_Lobby_SoundController_C.ConfigureSounds
// 0x0020 (0x0020 - 0x0000)
struct BP_Bus_Lobby_SoundController_C_ConfigureSounds final
{
public:
	class UAthenaBattleBusItemDefinition*         CallFunc_GetBattleBusAsset_BattleBus;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CallFunc_GetLobbyLoopingMusic_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CallFunc_GetLobbyLoopingSound_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CallFunc_GetIgnitionSound_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Bus_Lobby_SoundController_C_ConfigureSounds) == 0x000008, "Wrong alignment on BP_Bus_Lobby_SoundController_C_ConfigureSounds");
static_assert(sizeof(BP_Bus_Lobby_SoundController_C_ConfigureSounds) == 0x000020, "Wrong size on BP_Bus_Lobby_SoundController_C_ConfigureSounds");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_ConfigureSounds, CallFunc_GetBattleBusAsset_BattleBus) == 0x000000, "Member 'BP_Bus_Lobby_SoundController_C_ConfigureSounds::CallFunc_GetBattleBusAsset_BattleBus' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_ConfigureSounds, CallFunc_GetLobbyLoopingMusic_ReturnValue) == 0x000008, "Member 'BP_Bus_Lobby_SoundController_C_ConfigureSounds::CallFunc_GetLobbyLoopingMusic_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_ConfigureSounds, CallFunc_GetLobbyLoopingSound_ReturnValue) == 0x000010, "Member 'BP_Bus_Lobby_SoundController_C_ConfigureSounds::CallFunc_GetLobbyLoopingSound_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bus_Lobby_SoundController_C_ConfigureSounds, CallFunc_GetIgnitionSound_ReturnValue) == 0x000018, "Member 'BP_Bus_Lobby_SoundController_C_ConfigureSounds::CallFunc_GetIgnitionSound_ReturnValue' has a wrong offset!");

}

