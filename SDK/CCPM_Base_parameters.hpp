#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CCPM_Base

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CCPM_Base.CCPM_Base_C.overrideCharacterPartType
// 0x0018 (0x0018 - 0x0000)
struct CCPM_Base_C_OverrideCharacterPartType final
{
public:
	EFortCustomPartType                           Part_Type;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C06[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        CallFunc_GetAssociatedPlayerPawn_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshForPartType_ReturnValue;   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CCPM_Base_C_OverrideCharacterPartType) == 0x000008, "Wrong alignment on CCPM_Base_C_OverrideCharacterPartType");
static_assert(sizeof(CCPM_Base_C_OverrideCharacterPartType) == 0x000018, "Wrong size on CCPM_Base_C_OverrideCharacterPartType");
static_assert(offsetof(CCPM_Base_C_OverrideCharacterPartType, Part_Type) == 0x000000, "Member 'CCPM_Base_C_OverrideCharacterPartType::Part_Type' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_OverrideCharacterPartType, CallFunc_GetAssociatedPlayerPawn_ReturnValue) == 0x000008, "Member 'CCPM_Base_C_OverrideCharacterPartType::CallFunc_GetAssociatedPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_OverrideCharacterPartType, CallFunc_GetSkeletalMeshForPartType_ReturnValue) == 0x000010, "Member 'CCPM_Base_C_OverrideCharacterPartType::CallFunc_GetSkeletalMeshForPartType_ReturnValue' has a wrong offset!");

// Function CCPM_Base.CCPM_Base_C.attachParticleSystem
// 0x0018 (0x0018 - 0x0000)
struct CCPM_Base_C_AttachParticleSystem final
{
public:
	class UParticleSystemComponent*               Particle_System_Component;                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Socket_Name;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CCPM_Base_C_AttachParticleSystem) == 0x000008, "Wrong alignment on CCPM_Base_C_AttachParticleSystem");
static_assert(sizeof(CCPM_Base_C_AttachParticleSystem) == 0x000018, "Wrong size on CCPM_Base_C_AttachParticleSystem");
static_assert(offsetof(CCPM_Base_C_AttachParticleSystem, Particle_System_Component) == 0x000000, "Member 'CCPM_Base_C_AttachParticleSystem::Particle_System_Component' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_AttachParticleSystem, Socket_Name) == 0x000008, "Member 'CCPM_Base_C_AttachParticleSystem::Socket_Name' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_AttachParticleSystem, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000010, "Member 'CCPM_Base_C_AttachParticleSystem::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");

// Function CCPM_Base.CCPM_Base_C.UserConstructionScript
// 0x00E0 (0x00E0 - 0x0000)
struct CCPM_Base_C_UserConstructionScript final
{
public:
	class FString                                 ComponentName;                                     // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CascadeComponent;                                  // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MeshComponent;                                     // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C07[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children;           // 0x0040(0x0010)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_Array_Get_Item;                           // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C08[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C09[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FName>                           K2Node_MakeArray_Array_1;                          // 0x00B8(0x0010)(ReferenceParm, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C0A[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CCPM_Base_C_UserConstructionScript) == 0x000008, "Wrong alignment on CCPM_Base_C_UserConstructionScript");
static_assert(sizeof(CCPM_Base_C_UserConstructionScript) == 0x0000E0, "Wrong size on CCPM_Base_C_UserConstructionScript");
static_assert(offsetof(CCPM_Base_C_UserConstructionScript, ComponentName) == 0x000000, "Member 'CCPM_Base_C_UserConstructionScript::ComponentName' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_UserConstructionScript, CascadeComponent) == 0x000010, "Member 'CCPM_Base_C_UserConstructionScript::CascadeComponent' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_UserConstructionScript, MeshComponent) == 0x000018, "Member 'CCPM_Base_C_UserConstructionScript::MeshComponent' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_UserConstructionScript, Temp_int_Array_Index_Variable) == 0x000020, "Member 'CCPM_Base_C_UserConstructionScript::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_UserConstructionScript, CallFunc_GetDisplayName_ReturnValue) == 0x000028, "Member 'CCPM_Base_C_UserConstructionScript::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_UserConstructionScript, CallFunc_Conv_StringToName_ReturnValue) == 0x000038, "Member 'CCPM_Base_C_UserConstructionScript::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_UserConstructionScript, CallFunc_GetChildrenComponents_Children) == 0x000040, "Member 'CCPM_Base_C_UserConstructionScript::CallFunc_GetChildrenComponents_Children' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_UserConstructionScript, K2Node_MakeArray_Array) == 0x000050, "Member 'CCPM_Base_C_UserConstructionScript::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x000060, "Member 'CCPM_Base_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_UserConstructionScript, CallFunc_GetDisplayName_ReturnValue_1) == 0x000068, "Member 'CCPM_Base_C_UserConstructionScript::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x000078, "Member 'CCPM_Base_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_UserConstructionScript, CallFunc_Concat_StrStr_ReturnValue) == 0x000080, "Member 'CCPM_Base_C_UserConstructionScript::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_UserConstructionScript, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000090, "Member 'CCPM_Base_C_UserConstructionScript::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_UserConstructionScript, Temp_int_Loop_Counter_Variable) == 0x0000A0, "Member 'CCPM_Base_C_UserConstructionScript::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_UserConstructionScript, CallFunc_Conv_NameToString_ReturnValue) == 0x0000A8, "Member 'CCPM_Base_C_UserConstructionScript::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_UserConstructionScript, K2Node_MakeArray_Array_1) == 0x0000B8, "Member 'CCPM_Base_C_UserConstructionScript::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_UserConstructionScript, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000C8, "Member 'CCPM_Base_C_UserConstructionScript::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x0000D8, "Member 'CCPM_Base_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x0000DC, "Member 'CCPM_Base_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function CCPM_Base.CCPM_Base_C.PlayerMovementTick
// 0x001C (0x001C - 0x0000)
struct CCPM_Base_C_PlayerMovementTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OldLocation;                                       // 0x0004(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OldVelocity;                                       // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CCPM_Base_C_PlayerMovementTick) == 0x000004, "Wrong alignment on CCPM_Base_C_PlayerMovementTick");
static_assert(sizeof(CCPM_Base_C_PlayerMovementTick) == 0x00001C, "Wrong size on CCPM_Base_C_PlayerMovementTick");
static_assert(offsetof(CCPM_Base_C_PlayerMovementTick, DeltaSeconds) == 0x000000, "Member 'CCPM_Base_C_PlayerMovementTick::DeltaSeconds' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_PlayerMovementTick, OldLocation) == 0x000004, "Member 'CCPM_Base_C_PlayerMovementTick::OldLocation' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_PlayerMovementTick, OldVelocity) == 0x000010, "Member 'CCPM_Base_C_PlayerMovementTick::OldVelocity' has a wrong offset!");

// Function CCPM_Base.CCPM_Base_C.isHiddingInProp
// 0x0001 (0x0001 - 0x0000)
struct CCPM_Base_C_IsHiddingInProp final
{
public:
	bool                                          IsHidden;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CCPM_Base_C_IsHiddingInProp) == 0x000001, "Wrong alignment on CCPM_Base_C_IsHiddingInProp");
static_assert(sizeof(CCPM_Base_C_IsHiddingInProp) == 0x000001, "Wrong size on CCPM_Base_C_IsHiddingInProp");
static_assert(offsetof(CCPM_Base_C_IsHiddingInProp, IsHidden) == 0x000000, "Member 'CCPM_Base_C_IsHiddingInProp::IsHidden' has a wrong offset!");

// Function CCPM_Base.CCPM_Base_C.ExecuteUbergraph_CCPM_Base
// 0x00E8 (0x00E8 - 0x0000)
struct CCPM_Base_C_ExecuteUbergraph_CCPM_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C0B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        CallFunc_GetAssociatedPlayerPawn_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInVehicle_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDrivingVehicle_ReturnValue;             // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_CustomEvent_DeltaSeconds;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_OldLocation;                    // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_OldVelocity;                    // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_isHidden;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C0C[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        CallFunc_GetAssociatedPlayerPawn_ReturnValue_1;    // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena_1;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C0D[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        CallFunc_GetAssociatedPlayerPawn_ReturnValue_2;    // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C0E[0x1];                                     // 0x0063(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0074(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool IsHidden)>                K2Node_CreateDelegate_OutputDelegate_2;            // 0x0084(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0094(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7C0F[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        CallFunc_GetAssociatedPlayerPawn_ReturnValue_3;    // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena_2;         // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C10[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMeshComponent*                         CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue; // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInFrontend_ReturnValue;                 // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C11[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSkydiving_ReturnValue;                  // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base) == 0x000008, "Wrong alignment on CCPM_Base_C_ExecuteUbergraph_CCPM_Base");
static_assert(sizeof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base) == 0x0000E8, "Wrong size on CCPM_Base_C_ExecuteUbergraph_CCPM_Base");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, EntryPoint) == 0x000000, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, CallFunc_GetAssociatedPlayerPawn_ReturnValue) == 0x000008, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::CallFunc_GetAssociatedPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x000010, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, CallFunc_IsInVehicle_ReturnValue) == 0x000019, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::CallFunc_IsInVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, CallFunc_IsDrivingVehicle_ReturnValue) == 0x00001A, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::CallFunc_IsDrivingVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, CallFunc_BooleanOR_ReturnValue) == 0x00001B, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, K2Node_CustomEvent_DeltaSeconds) == 0x00001C, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::K2Node_CustomEvent_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, K2Node_CustomEvent_OldLocation) == 0x000020, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::K2Node_CustomEvent_OldLocation' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, K2Node_CustomEvent_OldVelocity) == 0x00002C, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::K2Node_CustomEvent_OldVelocity' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, K2Node_CustomEvent_isHidden) == 0x000038, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::K2Node_CustomEvent_isHidden' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, Temp_bool_IsClosed_Variable) == 0x000039, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, Temp_bool_Has_Been_Initd_Variable) == 0x00003A, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, Temp_bool_IsClosed_Variable_1) == 0x00003B, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, Temp_bool_Has_Been_Initd_Variable_1) == 0x00003C, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, CallFunc_GetAssociatedPlayerPawn_ReturnValue_1) == 0x000040, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::CallFunc_GetAssociatedPlayerPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, K2Node_DynamicCast_AsPlayer_Pawn_Athena_1) == 0x000048, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::K2Node_DynamicCast_AsPlayer_Pawn_Athena_1' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, CallFunc_GetAssociatedPlayerPawn_ReturnValue_2) == 0x000058, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::CallFunc_GetAssociatedPlayerPawn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000060, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, CallFunc_IsValid_ReturnValue) == 0x000061, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, CallFunc_BooleanAND_ReturnValue) == 0x000062, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, K2Node_CreateDelegate_OutputDelegate) == 0x000064, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, K2Node_CreateDelegate_OutputDelegate_1) == 0x000074, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, K2Node_CreateDelegate_OutputDelegate_2) == 0x000084, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, K2Node_CreateDelegate_OutputDelegate_3) == 0x000094, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, CallFunc_GetAssociatedPlayerPawn_ReturnValue_3) == 0x0000A8, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::CallFunc_GetAssociatedPlayerPawn_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, K2Node_DynamicCast_AsPlayer_Pawn_Athena_2) == 0x0000B0, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::K2Node_DynamicCast_AsPlayer_Pawn_Athena_2' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, K2Node_DynamicCast_bSuccess_2) == 0x0000B8, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue) == 0x0000C0, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, CallFunc_IsInFrontend_ReturnValue) == 0x0000C8, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::CallFunc_IsInFrontend_ReturnValue' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, CallFunc_GetPlayerPawn_ReturnValue) == 0x0000D0, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0000D8, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, K2Node_DynamicCast_bSuccess_3) == 0x0000E0, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, CallFunc_IsSkydiving_ReturnValue) == 0x0000E1, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::CallFunc_IsSkydiving_ReturnValue' has a wrong offset!");
static_assert(offsetof(CCPM_Base_C_ExecuteUbergraph_CCPM_Base, CallFunc_IsValid_ReturnValue_1) == 0x0000E2, "Member 'CCPM_Base_C_ExecuteUbergraph_CCPM_Base::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}
