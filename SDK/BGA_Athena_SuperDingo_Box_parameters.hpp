#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_Athena_SuperDingo_Box

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function BGA_Athena_SuperDingo_Box.BGA_Athena_SuperDingo_Box_C.FindRarityToItemsAndColor
// 0x0014 (0x0014 - 0x0000)
struct BGA_Athena_SuperDingo_Box_C_FindRarityToItemsAndColor final
{
public:
	struct FColor                                 CallFunc_Map_Find_Value;                           // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_736F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Map_Find_Value_1;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BGA_Athena_SuperDingo_Box_C_FindRarityToItemsAndColor) == 0x000004, "Wrong alignment on BGA_Athena_SuperDingo_Box_C_FindRarityToItemsAndColor");
static_assert(sizeof(BGA_Athena_SuperDingo_Box_C_FindRarityToItemsAndColor) == 0x000014, "Wrong size on BGA_Athena_SuperDingo_Box_C_FindRarityToItemsAndColor");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_FindRarityToItemsAndColor, CallFunc_Map_Find_Value) == 0x000000, "Member 'BGA_Athena_SuperDingo_Box_C_FindRarityToItemsAndColor::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_FindRarityToItemsAndColor, CallFunc_Map_Find_ReturnValue) == 0x000004, "Member 'BGA_Athena_SuperDingo_Box_C_FindRarityToItemsAndColor::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_FindRarityToItemsAndColor, CallFunc_Map_Find_Value_1) == 0x000008, "Member 'BGA_Athena_SuperDingo_Box_C_FindRarityToItemsAndColor::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_FindRarityToItemsAndColor, CallFunc_Map_Find_ReturnValue_1) == 0x000010, "Member 'BGA_Athena_SuperDingo_Box_C_FindRarityToItemsAndColor::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");

// Function BGA_Athena_SuperDingo_Box.BGA_Athena_SuperDingo_Box_C.StopSim
// 0x008C (0x008C - 0x0000)
struct BGA_Athena_SuperDingo_Box_C_StopSim final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x008C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BGA_Athena_SuperDingo_Box_C_StopSim) == 0x000004, "Wrong alignment on BGA_Athena_SuperDingo_Box_C_StopSim");
static_assert(sizeof(BGA_Athena_SuperDingo_Box_C_StopSim) == 0x00008C, "Wrong size on BGA_Athena_SuperDingo_Box_C_StopSim");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_StopSim, Hit) == 0x000000, "Member 'BGA_Athena_SuperDingo_Box_C_StopSim::Hit' has a wrong offset!");

// Function BGA_Athena_SuperDingo_Box.BGA_Athena_SuperDingo_Box_C.ExecuteUbergraph_BGA_Athena_SuperDingo_Box
// 0x03C8 (0x03C8 - 0x0000)
struct BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x0004(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7370[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFortItemEntry>                 CallFunc_PickLootDrops_OutLootToDrop;              // 0x00A0(0x0010)(ReferenceParm, HasGetValueTypeHash)
	bool                                          CallFunc_PickLootDrops_ReturnValue;                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7371[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7372[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7373[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortItemEntry                         CallFunc_Array_Get_Item;                           // 0x00D8(0x0160)()
	class UFortWorldItemDefinition*               K2Node_DynamicCast_AsFort_World_Item_Definition;   // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7374[0x3];                                     // 0x0241(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0244(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPickup*                            CallFunc_K2_SpawnPickupInWorld_ReturnValue;        // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortItemEntry                         CallFunc_GetItemEntry_ReturnValue;                 // 0x0258(0x0160)(ConstParm)
	class UFortWeaponItemDefinition*              K2Node_DynamicCast_AsFort_Weapon_Item_Definition;  // 0x03B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box) == 0x000008, "Wrong alignment on BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box");
static_assert(sizeof(BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box) == 0x0003C8, "Wrong size on BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box, EntryPoint) == 0x000000, "Member 'BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box::EntryPoint' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box, K2Node_Event_Hit) == 0x000004, "Member 'BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000090, "Member 'BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box, CallFunc_PickLootDrops_OutLootToDrop) == 0x0000A0, "Member 'BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box::CallFunc_PickLootDrops_OutLootToDrop' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box, CallFunc_PickLootDrops_ReturnValue) == 0x0000B0, "Member 'BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box::CallFunc_PickLootDrops_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box, CallFunc_GetActorForwardVector_ReturnValue) == 0x0000B4, "Member 'BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box, CallFunc_Array_Length_ReturnValue) == 0x0000C0, "Member 'BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box, CallFunc_IsServer_ReturnValue) == 0x0000C4, "Member 'BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box, Temp_int_Loop_Counter_Variable) == 0x0000C8, "Member 'BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box, CallFunc_Less_IntInt_ReturnValue) == 0x0000CC, "Member 'BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box, CallFunc_Add_IntInt_ReturnValue) == 0x0000D0, "Member 'BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box, Temp_int_Array_Index_Variable) == 0x0000D4, "Member 'BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box, CallFunc_Array_Get_Item) == 0x0000D8, "Member 'BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box, K2Node_DynamicCast_AsFort_World_Item_Definition) == 0x000238, "Member 'BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box::K2Node_DynamicCast_AsFort_World_Item_Definition' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box, K2Node_DynamicCast_bSuccess) == 0x000240, "Member 'BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box, CallFunc_Add_VectorVector_ReturnValue) == 0x000244, "Member 'BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box, CallFunc_K2_SpawnPickupInWorld_ReturnValue) == 0x000250, "Member 'BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box::CallFunc_K2_SpawnPickupInWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box, CallFunc_GetItemEntry_ReturnValue) == 0x000258, "Member 'BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box::CallFunc_GetItemEntry_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box, K2Node_DynamicCast_AsFort_Weapon_Item_Definition) == 0x0003B8, "Member 'BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box::K2Node_DynamicCast_AsFort_Weapon_Item_Definition' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box, K2Node_DynamicCast_bSuccess_1) == 0x0003C0, "Member 'BGA_Athena_SuperDingo_Box_C_ExecuteUbergraph_BGA_Athena_SuperDingo_Box::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

