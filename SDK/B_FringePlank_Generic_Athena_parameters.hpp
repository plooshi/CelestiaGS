#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_FringePlank_Generic_Athena

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_FringePlank_Generic_Athena.B_FringePlank_Generic_Athena_C.ExecuteUbergraph_B_FringePlank_Generic_Athena
// 0x0068 (0x0068 - 0x0000)
struct B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C92[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C93[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Persistent_Fire;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C94[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C95[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRemainingAmmo_ReturnValue;             // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_GetInventoryGUID_ReturnValue;             // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C96[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_K2_RemoveItemFromPlayerByGuid_ReturnValue; // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena) == 0x000008, "Wrong alignment on B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena");
static_assert(sizeof(B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena) == 0x000068, "Wrong size on B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena");
static_assert(offsetof(B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena, EntryPoint) == 0x000000, "Member 'B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena, CallFunc_GetInstigator_ReturnValue) == 0x000008, "Member 'B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000010, "Member 'B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena, CallFunc_GetInstigator_ReturnValue_1) == 0x000020, "Member 'B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena::CallFunc_GetInstigator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena, K2Node_Event_Persistent_Fire) == 0x000028, "Member 'B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena::K2Node_Event_Persistent_Fire' has a wrong offset!");
static_assert(offsetof(B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x000030, "Member 'B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000040, "Member 'B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena, CallFunc_GetRemainingAmmo_ReturnValue) == 0x000048, "Member 'B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena::CallFunc_GetRemainingAmmo_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena, CallFunc_GetInventoryGUID_ReturnValue) == 0x00004C, "Member 'B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena::CallFunc_GetInventoryGUID_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00005C, "Member 'B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena, CallFunc_K2_RemoveItemFromPlayerByGuid_ReturnValue) == 0x000060, "Member 'B_FringePlank_Generic_Athena_C_ExecuteUbergraph_B_FringePlank_Generic_Athena::CallFunc_K2_RemoveItemFromPlayerByGuid_ReturnValue' has a wrong offset!");

// Function B_FringePlank_Generic_Athena.B_FringePlank_Generic_Athena_C.Muzzle Flash FX
// 0x0001 (0x0001 - 0x0000)
struct B_FringePlank_Generic_Athena_C_Muzzle_Flash_FX final
{
public:
	bool                                          Persistent_Fire;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_FringePlank_Generic_Athena_C_Muzzle_Flash_FX) == 0x000001, "Wrong alignment on B_FringePlank_Generic_Athena_C_Muzzle_Flash_FX");
static_assert(sizeof(B_FringePlank_Generic_Athena_C_Muzzle_Flash_FX) == 0x000001, "Wrong size on B_FringePlank_Generic_Athena_C_Muzzle_Flash_FX");
static_assert(offsetof(B_FringePlank_Generic_Athena_C_Muzzle_Flash_FX, Persistent_Fire) == 0x000000, "Member 'B_FringePlank_Generic_Athena_C_Muzzle_Flash_FX::Persistent_Fire' has a wrong offset!");

}
