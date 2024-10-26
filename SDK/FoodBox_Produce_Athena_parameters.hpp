#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FoodBox_Produce_Athena

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function FoodBox_Produce_Athena.FoodBox_Produce_Athena_C.ExecuteUbergraph_FoodBox_Produce_Athena
// 0x00F0 (0x00F0 - 0x0000)
struct FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78C5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortGameStateAthena*                   K2Node_CustomEvent_GameState;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UFortPlaylist*                    K2Node_CustomEvent_Playlist;                       // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  K2Node_CustomEvent_PlaylistContextTags;            // 0x0018(0x0020)(ConstParm)
	struct FGameplayTagContainer                  Temp_struct_Variable;                              // 0x0038(0x0020)()
	class UFortPlaylist*                          Temp_object_Variable;                              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                   Temp_object_Variable_1;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_CurrentPlaylistReady*  CallFunc_PlaylistDataReadyAsync_ReturnValue;       // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RowToBool_ReturnValue;                    // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RowToBool_ReturnValue_1;                  // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78C6[0x1];                                     // 0x0073(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)> K2Node_CreateDelegate_OutputDelegate;              // 0x0074(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0094(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78C7[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78C8[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78C9[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena) == 0x000008, "Wrong alignment on FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena");
static_assert(sizeof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena) == 0x0000F0, "Wrong size on FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, EntryPoint) == 0x000000, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::EntryPoint' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, K2Node_CustomEvent_GameState) == 0x000008, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::K2Node_CustomEvent_GameState' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, K2Node_CustomEvent_Playlist) == 0x000010, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::K2Node_CustomEvent_Playlist' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, K2Node_CustomEvent_PlaylistContextTags) == 0x000018, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::K2Node_CustomEvent_PlaylistContextTags' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, Temp_struct_Variable) == 0x000038, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, Temp_object_Variable) == 0x000058, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, Temp_object_Variable_1) == 0x000060, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, CallFunc_PlaylistDataReadyAsync_ReturnValue) == 0x000068, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::CallFunc_PlaylistDataReadyAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, CallFunc_RowToBool_ReturnValue) == 0x000071, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::CallFunc_RowToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, CallFunc_RowToBool_ReturnValue_1) == 0x000072, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::CallFunc_RowToBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, K2Node_CreateDelegate_OutputDelegate) == 0x000074, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, CallFunc_RandomFloatInRange_ReturnValue) == 0x000084, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000088, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000094, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, CallFunc_BreakRotator_Roll) == 0x0000A0, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, CallFunc_BreakRotator_Pitch) == 0x0000A4, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, CallFunc_BreakRotator_Yaw) == 0x0000A8, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, CallFunc_IsValid_ReturnValue_1) == 0x0000AC, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000B0, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, CallFunc_MakeRotator_ReturnValue) == 0x0000B4, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000C0, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, CallFunc_IsValid_ReturnValue_2) == 0x0000CC, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, CallFunc_Add_VectorVector_ReturnValue) == 0x0000D0, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x0000E0, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0000E8, "Member 'FoodBox_Produce_Athena_C_ExecuteUbergraph_FoodBox_Produce_Athena::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

// Function FoodBox_Produce_Athena.FoodBox_Produce_Athena_C.OnReady_EFE0878D4B86C33587E1CD940720F63C
// 0x0030 (0x0030 - 0x0000)
struct FoodBox_Produce_Athena_C_OnReady_EFE0878D4B86C33587E1CD940720F63C final
{
public:
	class AFortGameStateAthena*                   GameState;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UFortPlaylist*                    Playlist;                                          // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  PlaylistContextTags;                               // 0x0010(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(FoodBox_Produce_Athena_C_OnReady_EFE0878D4B86C33587E1CD940720F63C) == 0x000008, "Wrong alignment on FoodBox_Produce_Athena_C_OnReady_EFE0878D4B86C33587E1CD940720F63C");
static_assert(sizeof(FoodBox_Produce_Athena_C_OnReady_EFE0878D4B86C33587E1CD940720F63C) == 0x000030, "Wrong size on FoodBox_Produce_Athena_C_OnReady_EFE0878D4B86C33587E1CD940720F63C");
static_assert(offsetof(FoodBox_Produce_Athena_C_OnReady_EFE0878D4B86C33587E1CD940720F63C, GameState) == 0x000000, "Member 'FoodBox_Produce_Athena_C_OnReady_EFE0878D4B86C33587E1CD940720F63C::GameState' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_OnReady_EFE0878D4B86C33587E1CD940720F63C, Playlist) == 0x000008, "Member 'FoodBox_Produce_Athena_C_OnReady_EFE0878D4B86C33587E1CD940720F63C::Playlist' has a wrong offset!");
static_assert(offsetof(FoodBox_Produce_Athena_C_OnReady_EFE0878D4B86C33587E1CD940720F63C, PlaylistContextTags) == 0x000010, "Member 'FoodBox_Produce_Athena_C_OnReady_EFE0878D4B86C33587E1CD940720F63C::PlaylistContextTags' has a wrong offset!");

}

