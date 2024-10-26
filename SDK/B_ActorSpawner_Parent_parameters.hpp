#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ActorSpawner_Parent

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.ExecuteUbergraph_B_ActorSpawner_Parent
// 0x0150 (0x0150 - 0x0000)
struct B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValueAtLevel_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_RandomBoolWithWeight_ReturnValue;         // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8673[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortGameStateAthena*                   K2Node_CustomEvent_GameState;                      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UFortPlaylist*                    K2Node_CustomEvent_Playlist;                       // 0x0028(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  K2Node_CustomEvent_PlaylistContextTags;            // 0x0030(0x0020)(ConstParm)
	struct FGameplayTagContainer                  Temp_struct_Variable;                              // 0x0050(0x0020)()
	class UFortPlaylist*                          Temp_object_Variable;                              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                   Temp_object_Variable_1;                            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_CurrentPlaylistReady*  CallFunc_PlaylistDataReadyAsync_ReturnValue;       // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8674[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0090(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8675[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RowToBool_ReturnValue;                    // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8676[0x2];                                     // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0100(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingActor*                         K2Node_DynamicCast_AsBuilding_Actor;               // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent) == 0x000010, "Wrong alignment on B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent");
static_assert(sizeof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent) == 0x000150, "Wrong size on B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, EntryPoint) == 0x000000, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, CallFunc_GetValueAtLevel_ReturnValue) == 0x000004, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, CallFunc_FClamp_ReturnValue) == 0x000008, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, CallFunc_RandomBoolWithWeight_ReturnValue) == 0x00001C, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::CallFunc_RandomBoolWithWeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, K2Node_CustomEvent_GameState) == 0x000020, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::K2Node_CustomEvent_GameState' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, K2Node_CustomEvent_Playlist) == 0x000028, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::K2Node_CustomEvent_Playlist' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, K2Node_CustomEvent_PlaylistContextTags) == 0x000030, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::K2Node_CustomEvent_PlaylistContextTags' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, Temp_struct_Variable) == 0x000050, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, Temp_object_Variable) == 0x000070, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, Temp_object_Variable_1) == 0x000078, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, CallFunc_PlaylistDataReadyAsync_ReturnValue) == 0x000080, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::CallFunc_PlaylistDataReadyAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, CallFunc_GetTransform_ReturnValue) == 0x000090, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, CallFunc_IsValidClass_ReturnValue) == 0x0000C0, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, CallFunc_BreakTransform_Location) == 0x0000C4, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, CallFunc_BreakTransform_Rotation) == 0x0000D0, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, CallFunc_BreakTransform_Scale) == 0x0000DC, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, CallFunc_IsServer_ReturnValue) == 0x0000E8, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, CallFunc_RowToBool_ReturnValue) == 0x0000E9, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::CallFunc_RowToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, CallFunc_RandomFloatInRange_ReturnValue) == 0x0000EC, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x0000F0, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, CallFunc_Add_VectorVector_ReturnValue) == 0x0000F4, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, CallFunc_MakeTransform_ReturnValue) == 0x000100, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000130, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, CallFunc_FinishSpawningActor_ReturnValue) == 0x000138, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, K2Node_DynamicCast_AsBuilding_Actor) == 0x000140, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::K2Node_DynamicCast_AsBuilding_Actor' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent, K2Node_DynamicCast_bSuccess) == 0x000148, "Member 'B_ActorSpawner_Parent_C_ExecuteUbergraph_B_ActorSpawner_Parent::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.OnReady_3020151C426C42F77FE60292E2524DFC
// 0x0030 (0x0030 - 0x0000)
struct B_ActorSpawner_Parent_C_OnReady_3020151C426C42F77FE60292E2524DFC final
{
public:
	class AFortGameStateAthena*                   GameState;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UFortPlaylist*                    Playlist;                                          // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  PlaylistContextTags;                               // 0x0010(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(B_ActorSpawner_Parent_C_OnReady_3020151C426C42F77FE60292E2524DFC) == 0x000008, "Wrong alignment on B_ActorSpawner_Parent_C_OnReady_3020151C426C42F77FE60292E2524DFC");
static_assert(sizeof(B_ActorSpawner_Parent_C_OnReady_3020151C426C42F77FE60292E2524DFC) == 0x000030, "Wrong size on B_ActorSpawner_Parent_C_OnReady_3020151C426C42F77FE60292E2524DFC");
static_assert(offsetof(B_ActorSpawner_Parent_C_OnReady_3020151C426C42F77FE60292E2524DFC, GameState) == 0x000000, "Member 'B_ActorSpawner_Parent_C_OnReady_3020151C426C42F77FE60292E2524DFC::GameState' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_OnReady_3020151C426C42F77FE60292E2524DFC, Playlist) == 0x000008, "Member 'B_ActorSpawner_Parent_C_OnReady_3020151C426C42F77FE60292E2524DFC::Playlist' has a wrong offset!");
static_assert(offsetof(B_ActorSpawner_Parent_C_OnReady_3020151C426C42F77FE60292E2524DFC, PlaylistContextTags) == 0x000010, "Member 'B_ActorSpawner_Parent_C_OnReady_3020151C426C42F77FE60292E2524DFC::PlaylistContextTags' has a wrong offset!");

}

