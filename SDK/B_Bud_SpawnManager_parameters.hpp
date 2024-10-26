#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Bud_SpawnManager

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function B_Bud_SpawnManager.B_Bud_SpawnManager_C.ExecuteUbergraph_B_Bud_SpawnManager
// 0x0108 (0x0108 - 0x0000)
struct B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_871F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  Temp_struct_Variable;                              // 0x0008(0x0020)()
	bool                                          CallFunc_RowToBool_ReturnValue;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8720[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortPlaylist*                          Temp_object_Variable;                              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlaylistAthena*                    K2Node_DynamicCast_AsFort_Playlist_Athena;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8721[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortGameStateAthena*                   Temp_object_Variable_1;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortPlaylistType                             CallFunc_GetPlaylistType_ReturnValue;              // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8722[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAsyncAction_CurrentPlaylistReady*  CallFunc_PlaylistDataReadyAsync_ReturnValue;       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8723[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8724[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACBGA_Spawner_Bud_C*                    CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8725[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8726[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8727[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetValueAtLevel_ReturnValue;              // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8728[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortGameStateAthena*                   K2Node_CustomEvent_GameState;                      // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UFortPlaylist*                    K2Node_CustomEvent_Playlist;                       // 0x00B0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  K2Node_CustomEvent_PlaylistContextTags;            // 0x00B8(0x0020)(ConstParm)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)> K2Node_CreateDelegate_OutputDelegate;              // 0x00E0(0x0010)(ZeroConstructor, NoDestructor)
	class ACBGA_Spawner_Bud_C*                    CallFunc_Array_Get_Item_1;                         // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8729[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager) == 0x000008, "Wrong alignment on B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager");
static_assert(sizeof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager) == 0x000108, "Wrong size on B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, EntryPoint) == 0x000000, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, Temp_struct_Variable) == 0x000008, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, CallFunc_RowToBool_ReturnValue) == 0x000028, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::CallFunc_RowToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, Temp_object_Variable) == 0x000030, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, K2Node_DynamicCast_AsFort_Playlist_Athena) == 0x000038, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::K2Node_DynamicCast_AsFort_Playlist_Athena' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, Temp_object_Variable_1) == 0x000048, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, CallFunc_GetPlaylistType_ReturnValue) == 0x000050, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::CallFunc_GetPlaylistType_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, CallFunc_PlaylistDataReadyAsync_ReturnValue) == 0x000058, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::CallFunc_PlaylistDataReadyAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, K2Node_SwitchEnum_CmpSuccess) == 0x000060, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, CallFunc_IsValid_ReturnValue) == 0x000061, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, CallFunc_Array_Length_ReturnValue) == 0x000064, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, CallFunc_Array_Length_ReturnValue_1) == 0x000068, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, Temp_int_Array_Index_Variable) == 0x00006C, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, Temp_int_Loop_Counter_Variable) == 0x000070, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, CallFunc_Array_Get_Item) == 0x000078, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, CallFunc_Add_IntInt_ReturnValue) == 0x000080, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, CallFunc_IsValid_ReturnValue_1) == 0x000084, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, Temp_int_Array_Index_Variable_1) == 0x000088, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, Temp_int_Loop_Counter_Variable_1) == 0x00008C, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, CallFunc_Less_IntInt_ReturnValue) == 0x000090, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, CallFunc_Add_IntInt_ReturnValue_1) == 0x000094, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, CallFunc_Array_Length_ReturnValue_2) == 0x000098, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, CallFunc_Greater_IntInt_ReturnValue) == 0x00009C, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, CallFunc_GetValueAtLevel_ReturnValue) == 0x0000A0, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, K2Node_CustomEvent_GameState) == 0x0000A8, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::K2Node_CustomEvent_GameState' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, K2Node_CustomEvent_Playlist) == 0x0000B0, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::K2Node_CustomEvent_Playlist' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, K2Node_CustomEvent_PlaylistContextTags) == 0x0000B8, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::K2Node_CustomEvent_PlaylistContextTags' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, CallFunc_FTrunc_ReturnValue) == 0x0000D8, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, CallFunc_Clamp_ReturnValue) == 0x0000DC, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, K2Node_CreateDelegate_OutputDelegate) == 0x0000E0, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, CallFunc_Array_Get_Item_1) == 0x0000F0, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, CallFunc_IsValid_ReturnValue_2) == 0x0000F8, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, CallFunc_Array_Length_ReturnValue_3) == 0x0000FC, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager, CallFunc_Less_IntInt_ReturnValue_1) == 0x000100, "Member 'B_Bud_SpawnManager_C_ExecuteUbergraph_B_Bud_SpawnManager::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function B_Bud_SpawnManager.B_Bud_SpawnManager_C.OnReady_59A6292946E7CBBB86A139A79EBFA51B
// 0x0030 (0x0030 - 0x0000)
struct B_Bud_SpawnManager_C_OnReady_59A6292946E7CBBB86A139A79EBFA51B final
{
public:
	class AFortGameStateAthena*                   GameState;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UFortPlaylist*                    Playlist;                                          // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  PlaylistContextTags;                               // 0x0010(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(B_Bud_SpawnManager_C_OnReady_59A6292946E7CBBB86A139A79EBFA51B) == 0x000008, "Wrong alignment on B_Bud_SpawnManager_C_OnReady_59A6292946E7CBBB86A139A79EBFA51B");
static_assert(sizeof(B_Bud_SpawnManager_C_OnReady_59A6292946E7CBBB86A139A79EBFA51B) == 0x000030, "Wrong size on B_Bud_SpawnManager_C_OnReady_59A6292946E7CBBB86A139A79EBFA51B");
static_assert(offsetof(B_Bud_SpawnManager_C_OnReady_59A6292946E7CBBB86A139A79EBFA51B, GameState) == 0x000000, "Member 'B_Bud_SpawnManager_C_OnReady_59A6292946E7CBBB86A139A79EBFA51B::GameState' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_OnReady_59A6292946E7CBBB86A139A79EBFA51B, Playlist) == 0x000008, "Member 'B_Bud_SpawnManager_C_OnReady_59A6292946E7CBBB86A139A79EBFA51B::Playlist' has a wrong offset!");
static_assert(offsetof(B_Bud_SpawnManager_C_OnReady_59A6292946E7CBBB86A139A79EBFA51B, PlaylistContextTags) == 0x000010, "Member 'B_Bud_SpawnManager_C_OnReady_59A6292946E7CBBB86A139A79EBFA51B::PlaylistContextTags' has a wrong offset!");

}

