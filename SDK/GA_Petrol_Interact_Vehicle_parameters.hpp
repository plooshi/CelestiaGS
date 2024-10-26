#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Petrol_Interact_Vehicle

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Petrol_Interact_Vehicle.GA_Petrol_Interact_Vehicle_C.ExecuteUbergraph_GA_Petrol_Interact_Vehicle
// 0x0050 (0x0050 - 0x0000)
struct GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67AC[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67AD[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_PetrolWeapon_C*                      K2Node_DynamicCast_AsB_Petrol_Weapon;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67AE[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_Petrol_Pump_Handle_C*                K2Node_DynamicCast_AsB_Petrol_Pump_Handle;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle) == 0x000008, "Wrong alignment on GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle");
static_assert(sizeof(GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle) == 0x000050, "Wrong size on GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle");
static_assert(offsetof(GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle, EntryPoint) == 0x000000, "Member 'GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle, CallFunc_IsServer_ReturnValue) == 0x000004, "Member 'GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000008, "Member 'GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000010, "Member 'GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000018, "Member 'GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000028, "Member 'GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle, K2Node_DynamicCast_AsB_Petrol_Weapon) == 0x000030, "Member 'GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle::K2Node_DynamicCast_AsB_Petrol_Weapon' has a wrong offset!");
static_assert(offsetof(GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle, K2Node_DynamicCast_AsB_Petrol_Pump_Handle) == 0x000040, "Member 'GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle::K2Node_DynamicCast_AsB_Petrol_Pump_Handle' has a wrong offset!");
static_assert(offsetof(GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle, K2Node_DynamicCast_bSuccess_2) == 0x000048, "Member 'GA_Petrol_Interact_Vehicle_C_ExecuteUbergraph_GA_Petrol_Interact_Vehicle::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

}

