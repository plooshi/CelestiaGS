#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tiered_Chest_Athena_Flopper_Proto

#include "Basic.hpp"


namespace SDK::Params
{

// Function Tiered_Chest_Athena_Flopper_Proto.Tiered_Chest_Athena_Flopper_Proto_C.ExecuteUbergraph_Tiered_Chest_Athena_Flopper_Proto
// 0x0020 (0x0020 - 0x0000)
struct Tiered_Chest_Athena_Flopper_Proto_C_ExecuteUbergraph_Tiered_Chest_Athena_Flopper_Proto final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_652E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortWaterBodyActor*                    K2Node_ComponentBoundEvent_WaterBody;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWaterInteractionComponent*         K2Node_ComponentBoundEvent_WaterInteractionComponent; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsFirstBody;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Tiered_Chest_Athena_Flopper_Proto_C_ExecuteUbergraph_Tiered_Chest_Athena_Flopper_Proto) == 0x000008, "Wrong alignment on Tiered_Chest_Athena_Flopper_Proto_C_ExecuteUbergraph_Tiered_Chest_Athena_Flopper_Proto");
static_assert(sizeof(Tiered_Chest_Athena_Flopper_Proto_C_ExecuteUbergraph_Tiered_Chest_Athena_Flopper_Proto) == 0x000020, "Wrong size on Tiered_Chest_Athena_Flopper_Proto_C_ExecuteUbergraph_Tiered_Chest_Athena_Flopper_Proto");
static_assert(offsetof(Tiered_Chest_Athena_Flopper_Proto_C_ExecuteUbergraph_Tiered_Chest_Athena_Flopper_Proto, EntryPoint) == 0x000000, "Member 'Tiered_Chest_Athena_Flopper_Proto_C_ExecuteUbergraph_Tiered_Chest_Athena_Flopper_Proto::EntryPoint' has a wrong offset!");
static_assert(offsetof(Tiered_Chest_Athena_Flopper_Proto_C_ExecuteUbergraph_Tiered_Chest_Athena_Flopper_Proto, K2Node_ComponentBoundEvent_WaterBody) == 0x000008, "Member 'Tiered_Chest_Athena_Flopper_Proto_C_ExecuteUbergraph_Tiered_Chest_Athena_Flopper_Proto::K2Node_ComponentBoundEvent_WaterBody' has a wrong offset!");
static_assert(offsetof(Tiered_Chest_Athena_Flopper_Proto_C_ExecuteUbergraph_Tiered_Chest_Athena_Flopper_Proto, K2Node_ComponentBoundEvent_WaterInteractionComponent) == 0x000010, "Member 'Tiered_Chest_Athena_Flopper_Proto_C_ExecuteUbergraph_Tiered_Chest_Athena_Flopper_Proto::K2Node_ComponentBoundEvent_WaterInteractionComponent' has a wrong offset!");
static_assert(offsetof(Tiered_Chest_Athena_Flopper_Proto_C_ExecuteUbergraph_Tiered_Chest_Athena_Flopper_Proto, K2Node_ComponentBoundEvent_bIsFirstBody) == 0x000018, "Member 'Tiered_Chest_Athena_Flopper_Proto_C_ExecuteUbergraph_Tiered_Chest_Athena_Flopper_Proto::K2Node_ComponentBoundEvent_bIsFirstBody' has a wrong offset!");

// Function Tiered_Chest_Athena_Flopper_Proto.Tiered_Chest_Athena_Flopper_Proto_C.BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct Tiered_Chest_Athena_Flopper_Proto_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature final
{
public:
	class AFortWaterBodyActor*                    WaterBody;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWaterInteractionComponent*         WaterInteractionComponent;                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsFirstBody;                                      // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Tiered_Chest_Athena_Flopper_Proto_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature) == 0x000008, "Wrong alignment on Tiered_Chest_Athena_Flopper_Proto_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature");
static_assert(sizeof(Tiered_Chest_Athena_Flopper_Proto_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature) == 0x000018, "Wrong size on Tiered_Chest_Athena_Flopper_Proto_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature");
static_assert(offsetof(Tiered_Chest_Athena_Flopper_Proto_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature, WaterBody) == 0x000000, "Member 'Tiered_Chest_Athena_Flopper_Proto_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature::WaterBody' has a wrong offset!");
static_assert(offsetof(Tiered_Chest_Athena_Flopper_Proto_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature, WaterInteractionComponent) == 0x000008, "Member 'Tiered_Chest_Athena_Flopper_Proto_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature::WaterInteractionComponent' has a wrong offset!");
static_assert(offsetof(Tiered_Chest_Athena_Flopper_Proto_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature, bIsFirstBody) == 0x000010, "Member 'Tiered_Chest_Athena_Flopper_Proto_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature::bIsFirstBody' has a wrong offset!");

}
