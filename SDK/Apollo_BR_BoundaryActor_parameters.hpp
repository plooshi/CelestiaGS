#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_BR_BoundaryActor

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function Apollo_BR_BoundaryActor.Apollo_BR_BoundaryActor_C.ExecuteUbergraph_Apollo_BR_BoundaryActor
// 0x0050 (0x0050 - 0x0000)
struct Apollo_BR_BoundaryActor_C_ExecuteUbergraph_Apollo_BR_BoundaryActor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_PlaylistName;                   // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_772B[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  K2Node_CustomEvent_PlaylistContextTags;            // 0x0010(0x0020)(ConstParm)
	TDelegate<void(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)> K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	class AFortGameStateAthena*                   CallFunc_GetFortAthenaGameState_AsFort_Game_State_Athena; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Apollo_BR_BoundaryActor_C_ExecuteUbergraph_Apollo_BR_BoundaryActor) == 0x000008, "Wrong alignment on Apollo_BR_BoundaryActor_C_ExecuteUbergraph_Apollo_BR_BoundaryActor");
static_assert(sizeof(Apollo_BR_BoundaryActor_C_ExecuteUbergraph_Apollo_BR_BoundaryActor) == 0x000050, "Wrong size on Apollo_BR_BoundaryActor_C_ExecuteUbergraph_Apollo_BR_BoundaryActor");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_ExecuteUbergraph_Apollo_BR_BoundaryActor, EntryPoint) == 0x000000, "Member 'Apollo_BR_BoundaryActor_C_ExecuteUbergraph_Apollo_BR_BoundaryActor::EntryPoint' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_ExecuteUbergraph_Apollo_BR_BoundaryActor, K2Node_CustomEvent_PlaylistName) == 0x000004, "Member 'Apollo_BR_BoundaryActor_C_ExecuteUbergraph_Apollo_BR_BoundaryActor::K2Node_CustomEvent_PlaylistName' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_ExecuteUbergraph_Apollo_BR_BoundaryActor, K2Node_CustomEvent_PlaylistContextTags) == 0x000010, "Member 'Apollo_BR_BoundaryActor_C_ExecuteUbergraph_Apollo_BR_BoundaryActor::K2Node_CustomEvent_PlaylistContextTags' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_ExecuteUbergraph_Apollo_BR_BoundaryActor, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'Apollo_BR_BoundaryActor_C_ExecuteUbergraph_Apollo_BR_BoundaryActor::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_ExecuteUbergraph_Apollo_BR_BoundaryActor, CallFunc_GetFortAthenaGameState_AsFort_Game_State_Athena) == 0x000040, "Member 'Apollo_BR_BoundaryActor_C_ExecuteUbergraph_Apollo_BR_BoundaryActor::CallFunc_GetFortAthenaGameState_AsFort_Game_State_Athena' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_ExecuteUbergraph_Apollo_BR_BoundaryActor, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'Apollo_BR_BoundaryActor_C_ExecuteUbergraph_Apollo_BR_BoundaryActor::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function Apollo_BR_BoundaryActor.Apollo_BR_BoundaryActor_C.PlaylistHasLoaded
// 0x0028 (0x0028 - 0x0000)
struct Apollo_BR_BoundaryActor_C_PlaylistHasLoaded final
{
public:
	class FName                                   PlaylistName;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  PlaylistContextTags;                               // 0x0008(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Apollo_BR_BoundaryActor_C_PlaylistHasLoaded) == 0x000008, "Wrong alignment on Apollo_BR_BoundaryActor_C_PlaylistHasLoaded");
static_assert(sizeof(Apollo_BR_BoundaryActor_C_PlaylistHasLoaded) == 0x000028, "Wrong size on Apollo_BR_BoundaryActor_C_PlaylistHasLoaded");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_PlaylistHasLoaded, PlaylistName) == 0x000000, "Member 'Apollo_BR_BoundaryActor_C_PlaylistHasLoaded::PlaylistName' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_PlaylistHasLoaded, PlaylistContextTags) == 0x000008, "Member 'Apollo_BR_BoundaryActor_C_PlaylistHasLoaded::PlaylistContextTags' has a wrong offset!");

// Function Apollo_BR_BoundaryActor.Apollo_BR_BoundaryActor_C.IsInCreativePlaylist
// 0x0018 (0x0018 - 0x0000)
struct Apollo_BR_BoundaryActor_C_IsInCreativePlaylist final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_772C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortGameStateAthena*                   CallFunc_GetFortAthenaGameState_AsFort_Game_State_Athena; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCreativeOrPlaygroundModePlaylist_ReturnValue; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Apollo_BR_BoundaryActor_C_IsInCreativePlaylist) == 0x000008, "Wrong alignment on Apollo_BR_BoundaryActor_C_IsInCreativePlaylist");
static_assert(sizeof(Apollo_BR_BoundaryActor_C_IsInCreativePlaylist) == 0x000018, "Wrong size on Apollo_BR_BoundaryActor_C_IsInCreativePlaylist");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_IsInCreativePlaylist, ReturnValue) == 0x000000, "Member 'Apollo_BR_BoundaryActor_C_IsInCreativePlaylist::ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_IsInCreativePlaylist, CallFunc_GetFortAthenaGameState_AsFort_Game_State_Athena) == 0x000008, "Member 'Apollo_BR_BoundaryActor_C_IsInCreativePlaylist::CallFunc_GetFortAthenaGameState_AsFort_Game_State_Athena' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_IsInCreativePlaylist, CallFunc_IsCreativeOrPlaygroundModePlaylist_ReturnValue) == 0x000010, "Member 'Apollo_BR_BoundaryActor_C_IsInCreativePlaylist::CallFunc_IsCreativeOrPlaygroundModePlaylist_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_IsInCreativePlaylist, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'Apollo_BR_BoundaryActor_C_IsInCreativePlaylist::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function Apollo_BR_BoundaryActor.Apollo_BR_BoundaryActor_C.TurnOffBlockingKillAndBoundaries
// 0x0040 (0x0040 - 0x0000)
struct Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries final
{
public:
	class FName                                   CONST_CollisionProfileNoCollision;                 // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABlockingVolume*                        CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKillZVolume*                           CallFunc_Array_Get_Item_1;                         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_772D[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries) == 0x000008, "Wrong alignment on Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries");
static_assert(sizeof(Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries) == 0x000040, "Wrong size on Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries, CONST_CollisionProfileNoCollision) == 0x000000, "Member 'Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries::CONST_CollisionProfileNoCollision' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries, Temp_int_Loop_Counter_Variable_1) == 0x00000C, "Member 'Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries, Temp_int_Array_Index_Variable) == 0x000018, "Member 'Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries, Temp_int_Array_Index_Variable_1) == 0x00001C, "Member 'Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries, CallFunc_Array_Get_Item) == 0x000020, "Member 'Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries, CallFunc_Array_Get_Item_1) == 0x000028, "Member 'Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries, CallFunc_Array_Length_ReturnValue_1) == 0x000038, "Member 'Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries, CallFunc_Less_IntInt_ReturnValue_1) == 0x00003D, "Member 'Apollo_BR_BoundaryActor_C_TurnOffBlockingKillAndBoundaries::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function Apollo_BR_BoundaryActor.Apollo_BR_BoundaryActor_C.GetFortAthenaGameState
// 0x0020 (0x0020 - 0x0000)
struct Apollo_BR_BoundaryActor_C_GetFortAthenaGameState final
{
public:
	class AFortGameStateAthena*                   AsFort_Game_State_Athena;                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                   K2Node_DynamicCast_AsFort_Game_State_Athena;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Apollo_BR_BoundaryActor_C_GetFortAthenaGameState) == 0x000008, "Wrong alignment on Apollo_BR_BoundaryActor_C_GetFortAthenaGameState");
static_assert(sizeof(Apollo_BR_BoundaryActor_C_GetFortAthenaGameState) == 0x000020, "Wrong size on Apollo_BR_BoundaryActor_C_GetFortAthenaGameState");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_GetFortAthenaGameState, AsFort_Game_State_Athena) == 0x000000, "Member 'Apollo_BR_BoundaryActor_C_GetFortAthenaGameState::AsFort_Game_State_Athena' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_GetFortAthenaGameState, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'Apollo_BR_BoundaryActor_C_GetFortAthenaGameState::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_GetFortAthenaGameState, K2Node_DynamicCast_AsFort_Game_State_Athena) == 0x000010, "Member 'Apollo_BR_BoundaryActor_C_GetFortAthenaGameState::K2Node_DynamicCast_AsFort_Game_State_Athena' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_GetFortAthenaGameState, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'Apollo_BR_BoundaryActor_C_GetFortAthenaGameState::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function Apollo_BR_BoundaryActor.Apollo_BR_BoundaryActor_C.PlaylistChangedTryTurnOffBoundaries
// 0x0028 (0x0028 - 0x0000)
struct Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries final
{
public:
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_772E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_772F[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInCreativePlaylist_ReturnValue;         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7730[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries) == 0x000004, "Wrong alignment on Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries");
static_assert(sizeof(Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries) == 0x000028, "Wrong size on Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries, Temp_bool_True_if_break_was_hit_Variable) == 0x000000, "Member 'Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries, Temp_int_Array_Index_Variable) == 0x000004, "Member 'Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries, CallFunc_IsInCreativePlaylist_ReturnValue) == 0x000010, "Member 'Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries::CallFunc_IsInCreativePlaylist_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries, CallFunc_Array_Get_Item) == 0x000018, "Member 'Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000024, "Member 'Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries, CallFunc_Less_IntInt_ReturnValue) == 0x000025, "Member 'Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries, CallFunc_BooleanAND_ReturnValue) == 0x000026, "Member 'Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries, CallFunc_BooleanAND_ReturnValue_1) == 0x000027, "Member 'Apollo_BR_BoundaryActor_C_PlaylistChangedTryTurnOffBoundaries::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

}
