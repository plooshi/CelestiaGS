#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Athena_BuriedChest_Spawner

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "AIModule_structs.hpp"


namespace SDK::Params
{

// Function B_Athena_BuriedChest_Spawner.B_Athena_BuriedChest_Spawner_C.ExecuteUbergraph_B_Athena_BuriedChest_Spawner
// 0x0130 (0x0130 - 0x0000)
struct B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RowToBool_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81F1[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class AFortGameStateAthena*                   K2Node_CustomEvent_GameState;                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UFortPlaylist*                    K2Node_CustomEvent_Playlist;                       // 0x0020(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  K2Node_CustomEvent_PlaylistContextTags;            // 0x0028(0x0020)(ConstParm)
	TDelegate<void(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTagContainer                  Temp_struct_Variable;                              // 0x0058(0x0020)()
	class UFortPlaylist*                          Temp_object_Variable;                              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                   Temp_object_Variable_1;                            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_CurrentPlaylistReady*  CallFunc_PlaylistDataReadyAsync_ReturnValue;       // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81F2[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEnvQueryInstanceBlueprintWrapper*      CallFunc_RunEQSQuery_ReturnValue;                  // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81F3[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UEnvQueryInstanceBlueprintWrapper*      K2Node_CustomEvent_QueryInstance;                  // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEnvQueryStatus                               K2Node_CustomEvent_QueryStatus;                    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81F4[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        CallFunc_GetQueryResultsAsLocations_ResultLocations; // 0x00C0(0x0010)(ReferenceParm, HasGetValueTypeHash)
	bool                                          CallFunc_GetQueryResultsAsLocations_ReturnValue;   // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckForSpawnRate_ReturnValue;            // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81F5[0xE];                                     // 0x00D2(0x000E)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00E0(0x0030)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81F6[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_Athena_BuriedChest_C*             CallFunc_FinishSpawningActor_ReturnValue;          // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner) == 0x000010, "Wrong alignment on B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner");
static_assert(sizeof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner) == 0x000130, "Wrong size on B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, EntryPoint) == 0x000000, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, CallFunc_RowToBool_ReturnValue) == 0x000004, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::CallFunc_RowToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, K2Node_CustomEvent_GameState) == 0x000018, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::K2Node_CustomEvent_GameState' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, K2Node_CustomEvent_Playlist) == 0x000020, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::K2Node_CustomEvent_Playlist' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, K2Node_CustomEvent_PlaylistContextTags) == 0x000028, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::K2Node_CustomEvent_PlaylistContextTags' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, K2Node_CreateDelegate_OutputDelegate_1) == 0x000048, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, Temp_struct_Variable) == 0x000058, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, Temp_object_Variable) == 0x000078, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, Temp_object_Variable_1) == 0x000080, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, CallFunc_PlaylistDataReadyAsync_ReturnValue) == 0x000088, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::CallFunc_PlaylistDataReadyAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, CallFunc_RandomFloatInRange_ReturnValue) == 0x000094, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, CallFunc_RunEQSQuery_ReturnValue) == 0x000098, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::CallFunc_RunEQSQuery_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, CallFunc_MakeRotator_ReturnValue) == 0x0000A0, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, CallFunc_IsServer_ReturnValue) == 0x0000AC, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, K2Node_CustomEvent_QueryInstance) == 0x0000B0, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::K2Node_CustomEvent_QueryInstance' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, K2Node_CustomEvent_QueryStatus) == 0x0000B8, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::K2Node_CustomEvent_QueryStatus' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, CallFunc_GetQueryResultsAsLocations_ResultLocations) == 0x0000C0, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::CallFunc_GetQueryResultsAsLocations_ResultLocations' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, CallFunc_GetQueryResultsAsLocations_ReturnValue) == 0x0000D0, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::CallFunc_GetQueryResultsAsLocations_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, CallFunc_CheckForSpawnRate_ReturnValue) == 0x0000D1, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::CallFunc_CheckForSpawnRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, CallFunc_MakeTransform_ReturnValue) == 0x0000E0, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000110, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000118, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, CallFunc_FinishSpawningActor_ReturnValue) == 0x000120, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x000128, "Member 'B_Athena_BuriedChest_Spawner_C_ExecuteUbergraph_B_Athena_BuriedChest_Spawner::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");

// Function B_Athena_BuriedChest_Spawner.B_Athena_BuriedChest_Spawner_C.EQSFinished
// 0x0010 (0x0010 - 0x0000)
struct B_Athena_BuriedChest_Spawner_C_EQSFinished final
{
public:
	class UEnvQueryInstanceBlueprintWrapper*      QueryInstance;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEnvQueryStatus                               QueryStatus;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Athena_BuriedChest_Spawner_C_EQSFinished) == 0x000008, "Wrong alignment on B_Athena_BuriedChest_Spawner_C_EQSFinished");
static_assert(sizeof(B_Athena_BuriedChest_Spawner_C_EQSFinished) == 0x000010, "Wrong size on B_Athena_BuriedChest_Spawner_C_EQSFinished");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_EQSFinished, QueryInstance) == 0x000000, "Member 'B_Athena_BuriedChest_Spawner_C_EQSFinished::QueryInstance' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_EQSFinished, QueryStatus) == 0x000008, "Member 'B_Athena_BuriedChest_Spawner_C_EQSFinished::QueryStatus' has a wrong offset!");

// Function B_Athena_BuriedChest_Spawner.B_Athena_BuriedChest_Spawner_C.OnReady_3CC8EEA44ECD5BB2C05F4DB46D35F02D
// 0x0030 (0x0030 - 0x0000)
struct B_Athena_BuriedChest_Spawner_C_OnReady_3CC8EEA44ECD5BB2C05F4DB46D35F02D final
{
public:
	class AFortGameStateAthena*                   GameState;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UFortPlaylist*                    Playlist;                                          // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  PlaylistContextTags;                               // 0x0010(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(B_Athena_BuriedChest_Spawner_C_OnReady_3CC8EEA44ECD5BB2C05F4DB46D35F02D) == 0x000008, "Wrong alignment on B_Athena_BuriedChest_Spawner_C_OnReady_3CC8EEA44ECD5BB2C05F4DB46D35F02D");
static_assert(sizeof(B_Athena_BuriedChest_Spawner_C_OnReady_3CC8EEA44ECD5BB2C05F4DB46D35F02D) == 0x000030, "Wrong size on B_Athena_BuriedChest_Spawner_C_OnReady_3CC8EEA44ECD5BB2C05F4DB46D35F02D");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_OnReady_3CC8EEA44ECD5BB2C05F4DB46D35F02D, GameState) == 0x000000, "Member 'B_Athena_BuriedChest_Spawner_C_OnReady_3CC8EEA44ECD5BB2C05F4DB46D35F02D::GameState' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_OnReady_3CC8EEA44ECD5BB2C05F4DB46D35F02D, Playlist) == 0x000008, "Member 'B_Athena_BuriedChest_Spawner_C_OnReady_3CC8EEA44ECD5BB2C05F4DB46D35F02D::Playlist' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_OnReady_3CC8EEA44ECD5BB2C05F4DB46D35F02D, PlaylistContextTags) == 0x000010, "Member 'B_Athena_BuriedChest_Spawner_C_OnReady_3CC8EEA44ECD5BB2C05F4DB46D35F02D::PlaylistContextTags' has a wrong offset!");

// Function B_Athena_BuriedChest_Spawner.B_Athena_BuriedChest_Spawner_C.UserConstructionScript
// 0x0010 (0x0010 - 0x0000)
struct B_Athena_BuriedChest_Spawner_C_UserConstructionScript final
{
public:
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValueAtLevel_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Athena_BuriedChest_Spawner_C_UserConstructionScript) == 0x000004, "Wrong alignment on B_Athena_BuriedChest_Spawner_C_UserConstructionScript");
static_assert(sizeof(B_Athena_BuriedChest_Spawner_C_UserConstructionScript) == 0x000010, "Wrong size on B_Athena_BuriedChest_Spawner_C_UserConstructionScript");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_UserConstructionScript, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000000, "Member 'B_Athena_BuriedChest_Spawner_C_UserConstructionScript::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_UserConstructionScript, CallFunc_GetValueAtLevel_ReturnValue) == 0x00000C, "Member 'B_Athena_BuriedChest_Spawner_C_UserConstructionScript::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");

// Function B_Athena_BuriedChest_Spawner.B_Athena_BuriedChest_Spawner_C.CheckForSpawnRate
// 0x0014 (0x0014 - 0x0000)
struct B_Athena_BuriedChest_Spawner_C_CheckForSpawnRate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81F7[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetValueAtLevel_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValueAtLevel_ReturnValue_1;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBoolWithWeight_ReturnValue;         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_Athena_BuriedChest_Spawner_C_CheckForSpawnRate) == 0x000004, "Wrong alignment on B_Athena_BuriedChest_Spawner_C_CheckForSpawnRate");
static_assert(sizeof(B_Athena_BuriedChest_Spawner_C_CheckForSpawnRate) == 0x000014, "Wrong size on B_Athena_BuriedChest_Spawner_C_CheckForSpawnRate");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_CheckForSpawnRate, ReturnValue) == 0x000000, "Member 'B_Athena_BuriedChest_Spawner_C_CheckForSpawnRate::ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_CheckForSpawnRate, CallFunc_GetValueAtLevel_ReturnValue) == 0x000004, "Member 'B_Athena_BuriedChest_Spawner_C_CheckForSpawnRate::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_CheckForSpawnRate, CallFunc_GetValueAtLevel_ReturnValue_1) == 0x000008, "Member 'B_Athena_BuriedChest_Spawner_C_CheckForSpawnRate::CallFunc_GetValueAtLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_CheckForSpawnRate, CallFunc_RandomFloatInRange_ReturnValue) == 0x00000C, "Member 'B_Athena_BuriedChest_Spawner_C_CheckForSpawnRate::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_BuriedChest_Spawner_C_CheckForSpawnRate, CallFunc_RandomBoolWithWeight_ReturnValue) == 0x000010, "Member 'B_Athena_BuriedChest_Spawner_C_CheckForSpawnRate::CallFunc_RandomBoolWithWeight_ReturnValue' has a wrong offset!");

}
