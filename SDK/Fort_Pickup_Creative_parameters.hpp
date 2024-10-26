#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Fort_Pickup_Creative

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Fort_Pickup_Creative.Fort_Pickup_Creative_C.BndEvt__PickupSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct Fort_Pickup_Creative_C_BndEvt__PickupSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5609[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Fort_Pickup_Creative_C_BndEvt__PickupSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Fort_Pickup_Creative_C_BndEvt__PickupSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(Fort_Pickup_Creative_C_BndEvt__PickupSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000B0, "Wrong size on Fort_Pickup_Creative_C_BndEvt__PickupSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(Fort_Pickup_Creative_C_BndEvt__PickupSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Fort_Pickup_Creative_C_BndEvt__PickupSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Fort_Pickup_Creative_C_BndEvt__PickupSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Fort_Pickup_Creative_C_BndEvt__PickupSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Fort_Pickup_Creative_C_BndEvt__PickupSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Fort_Pickup_Creative_C_BndEvt__PickupSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Fort_Pickup_Creative_C_BndEvt__PickupSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Fort_Pickup_Creative_C_BndEvt__PickupSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Fort_Pickup_Creative_C_BndEvt__PickupSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'Fort_Pickup_Creative_C_BndEvt__PickupSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(Fort_Pickup_Creative_C_BndEvt__PickupSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'Fort_Pickup_Creative_C_BndEvt__PickupSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function Fort_Pickup_Creative.Fort_Pickup_Creative_C.ExecuteUbergraph_Fort_Pickup_Creative
// 0x0118 (0x0118 - 0x0000)
struct Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_560A[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0030(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_560B[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortAthenaVehicle*                     K2Node_DynamicCast_AsFort_Athena_Vehicle;          // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_560C[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_560D[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IFortVehicleInterface> CallFunc_GetAllPassengers_self_CastInput;          // 0x00E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class AFortPlayerPawn*>                CallFunc_GetAllPassengers_ReturnValue;             // 0x00F0(0x0010)(ReferenceParm, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_560E[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        CallFunc_Array_Get_Item;                           // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative) == 0x000008, "Wrong alignment on Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative");
static_assert(sizeof(Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative) == 0x000118, "Wrong size on Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative");
static_assert(offsetof(Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative, EntryPoint) == 0x000000, "Member 'Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative, Temp_int_Array_Index_Variable) == 0x000004, "Member 'Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000010, "Member 'Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative, K2Node_ComponentBoundEvent_OtherActor) == 0x000018, "Member 'Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative, K2Node_ComponentBoundEvent_OtherComp) == 0x000020, "Member 'Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000028, "Member 'Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative, K2Node_ComponentBoundEvent_bFromSweep) == 0x00002C, "Member 'Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative, K2Node_ComponentBoundEvent_SweepResult) == 0x000030, "Member 'Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative, K2Node_DynamicCast_AsFort_Athena_Vehicle) == 0x0000C0, "Member 'Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative::K2Node_DynamicCast_AsFort_Athena_Vehicle' has a wrong offset!");
static_assert(offsetof(Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative, K2Node_DynamicCast_AsFort_Pawn) == 0x0000D0, "Member 'Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative, K2Node_DynamicCast_bSuccess_1) == 0x0000D8, "Member 'Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative, CallFunc_GetAllPassengers_self_CastInput) == 0x0000E0, "Member 'Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative::CallFunc_GetAllPassengers_self_CastInput' has a wrong offset!");
static_assert(offsetof(Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative, CallFunc_GetAllPassengers_ReturnValue) == 0x0000F0, "Member 'Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative::CallFunc_GetAllPassengers_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative, CallFunc_Array_Length_ReturnValue) == 0x000100, "Member 'Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative, CallFunc_Array_Get_Item) == 0x000108, "Member 'Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative, CallFunc_Less_IntInt_ReturnValue) == 0x000110, "Member 'Fort_Pickup_Creative_C_ExecuteUbergraph_Fort_Pickup_Creative::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

