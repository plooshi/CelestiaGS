#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_EmotePreviewDisplay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.CleanupDynamicSounds
// 0x0030 (0x0030 - 0x0000)
struct B_EmotePreviewDisplay_C_CleanupDynamicSounds final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77D9[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_Array_Get_Item_1;                         // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_EmotePreviewDisplay_C_CleanupDynamicSounds) == 0x000008, "Wrong alignment on B_EmotePreviewDisplay_C_CleanupDynamicSounds");
static_assert(sizeof(B_EmotePreviewDisplay_C_CleanupDynamicSounds) == 0x000030, "Wrong size on B_EmotePreviewDisplay_C_CleanupDynamicSounds");
static_assert(offsetof(B_EmotePreviewDisplay_C_CleanupDynamicSounds, Temp_int_Variable) == 0x000000, "Member 'B_EmotePreviewDisplay_C_CleanupDynamicSounds::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_CleanupDynamicSounds, Temp_int_Variable_1) == 0x000004, "Member 'B_EmotePreviewDisplay_C_CleanupDynamicSounds::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_CleanupDynamicSounds, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'B_EmotePreviewDisplay_C_CleanupDynamicSounds::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_CleanupDynamicSounds, CallFunc_Add_IntInt_ReturnValue_1) == 0x00000C, "Member 'B_EmotePreviewDisplay_C_CleanupDynamicSounds::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_CleanupDynamicSounds, CallFunc_Array_Get_Item) == 0x000010, "Member 'B_EmotePreviewDisplay_C_CleanupDynamicSounds::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_CleanupDynamicSounds, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'B_EmotePreviewDisplay_C_CleanupDynamicSounds::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_CleanupDynamicSounds, CallFunc_Less_IntInt_ReturnValue) == 0x00001C, "Member 'B_EmotePreviewDisplay_C_CleanupDynamicSounds::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_CleanupDynamicSounds, CallFunc_Array_Get_Item_1) == 0x000020, "Member 'B_EmotePreviewDisplay_C_CleanupDynamicSounds::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_CleanupDynamicSounds, CallFunc_Array_Length_ReturnValue_1) == 0x000028, "Member 'B_EmotePreviewDisplay_C_CleanupDynamicSounds::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_CleanupDynamicSounds, CallFunc_Less_IntInt_ReturnValue_1) == 0x00002C, "Member 'B_EmotePreviewDisplay_C_CleanupDynamicSounds::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.ApplyEmoteToPet
// 0x0040 (0x0040 - 0x0000)
struct B_EmotePreviewDisplay_C_ApplyEmoteToPet final
{
public:
	bool                                          IsRemoval;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77DA[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77DB[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77DC[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPetAnimInstance*                   K2Node_DynamicCast_AsFort_Pet_Anim_Instance;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_EmotePreviewDisplay_C_ApplyEmoteToPet) == 0x000008, "Wrong alignment on B_EmotePreviewDisplay_C_ApplyEmoteToPet");
static_assert(sizeof(B_EmotePreviewDisplay_C_ApplyEmoteToPet) == 0x000040, "Wrong size on B_EmotePreviewDisplay_C_ApplyEmoteToPet");
static_assert(offsetof(B_EmotePreviewDisplay_C_ApplyEmoteToPet, IsRemoval) == 0x000000, "Member 'B_EmotePreviewDisplay_C_ApplyEmoteToPet::IsRemoval' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ApplyEmoteToPet, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'B_EmotePreviewDisplay_C_ApplyEmoteToPet::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ApplyEmoteToPet, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'B_EmotePreviewDisplay_C_ApplyEmoteToPet::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ApplyEmoteToPet, CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue) == 0x000018, "Member 'B_EmotePreviewDisplay_C_ApplyEmoteToPet::CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ApplyEmoteToPet, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'B_EmotePreviewDisplay_C_ApplyEmoteToPet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ApplyEmoteToPet, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'B_EmotePreviewDisplay_C_ApplyEmoteToPet::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ApplyEmoteToPet, CallFunc_GetAnimInstance_ReturnValue) == 0x000028, "Member 'B_EmotePreviewDisplay_C_ApplyEmoteToPet::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ApplyEmoteToPet, K2Node_DynamicCast_AsFort_Pet_Anim_Instance) == 0x000030, "Member 'B_EmotePreviewDisplay_C_ApplyEmoteToPet::K2Node_DynamicCast_AsFort_Pet_Anim_Instance' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ApplyEmoteToPet, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'B_EmotePreviewDisplay_C_ApplyEmoteToPet::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.OnLoaded_638F148342254A777E929B88915A8958
// 0x0008 (0x0008 - 0x0000)
struct B_EmotePreviewDisplay_C_OnLoaded_638F148342254A777E929B88915A8958 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_EmotePreviewDisplay_C_OnLoaded_638F148342254A777E929B88915A8958) == 0x000008, "Wrong alignment on B_EmotePreviewDisplay_C_OnLoaded_638F148342254A777E929B88915A8958");
static_assert(sizeof(B_EmotePreviewDisplay_C_OnLoaded_638F148342254A777E929B88915A8958) == 0x000008, "Wrong size on B_EmotePreviewDisplay_C_OnLoaded_638F148342254A777E929B88915A8958");
static_assert(offsetof(B_EmotePreviewDisplay_C_OnLoaded_638F148342254A777E929B88915A8958, Loaded) == 0x000000, "Member 'B_EmotePreviewDisplay_C_OnLoaded_638F148342254A777E929B88915A8958::Loaded' has a wrong offset!");

// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.PreviewEmote
// 0x0008 (0x0008 - 0x0000)
struct B_EmotePreviewDisplay_C_PreviewEmote final
{
public:
	const class UFortMontageItemDefinitionBase*   Emote;                                             // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_EmotePreviewDisplay_C_PreviewEmote) == 0x000008, "Wrong alignment on B_EmotePreviewDisplay_C_PreviewEmote");
static_assert(sizeof(B_EmotePreviewDisplay_C_PreviewEmote) == 0x000008, "Wrong size on B_EmotePreviewDisplay_C_PreviewEmote");
static_assert(offsetof(B_EmotePreviewDisplay_C_PreviewEmote, Emote) == 0x000000, "Member 'B_EmotePreviewDisplay_C_PreviewEmote::Emote' has a wrong offset!");

// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.PerformSpecialAction
// 0x0008 (0x0008 - 0x0000)
struct B_EmotePreviewDisplay_C_PerformSpecialAction final
{
public:
	class FName                                   ActionName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_EmotePreviewDisplay_C_PerformSpecialAction) == 0x000004, "Wrong alignment on B_EmotePreviewDisplay_C_PerformSpecialAction");
static_assert(sizeof(B_EmotePreviewDisplay_C_PerformSpecialAction) == 0x000008, "Wrong size on B_EmotePreviewDisplay_C_PerformSpecialAction");
static_assert(offsetof(B_EmotePreviewDisplay_C_PerformSpecialAction, ActionName) == 0x000000, "Member 'B_EmotePreviewDisplay_C_PerformSpecialAction::ActionName' has a wrong offset!");

// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct B_EmotePreviewDisplay_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_EmotePreviewDisplay_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on B_EmotePreviewDisplay_C_ReceiveEndPlay");
static_assert(sizeof(B_EmotePreviewDisplay_C_ReceiveEndPlay) == 0x000001, "Wrong size on B_EmotePreviewDisplay_C_ReceiveEndPlay");
static_assert(offsetof(B_EmotePreviewDisplay_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'B_EmotePreviewDisplay_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.ExecuteUbergraph_B_EmotePreviewDisplay
// 0x0210 (0x0210 - 0x0000)
struct B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77DD[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_ActionName;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77DE[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           K2Node_DynamicCast_AsAnim_Montage;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77DF[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UFortMontageItemDefinitionBase*   K2Node_Event_Emote;                                // 0x0030(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortEmojiPreviewComponent*             CallFunc_GetComponentByClass_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77E0[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x005C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_77E1[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable;                              // 0x0070(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue_1;                 // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortEmojiPreviewComponent*             CallFunc_AddComponent_ReturnValue;                 // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_1; // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77E2[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x00C0(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0108(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77E3[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ShouldPlayRandomSectionByName_ReturnValue; // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77E4[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaShoutItemDefinition*             K2Node_DynamicCast_AsAthena_Shout_Item_Definition; // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77E5[0x5];                                     // 0x013B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaEmojiItemDefinition*             K2Node_DynamicCast_AsAthena_Emoji_Item_Definition; // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77E6[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_PickRandomSectionByName_ReturnValue;      // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue_2;                 // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_2; // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortCustomGender                             CallFunc_GetCharacterGender_ReturnValue;           // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortCustomBodyType                           CallFunc_GetCharacterBodyType_ReturnValue;         // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77E7[0x6];                                     // 0x016A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UAnimMontage>            CallFunc_GetFrontendPreviewAnimation_ReturnValue;  // 0x0170(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77E8[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable_1;                            // 0x01A0(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue_3;                 // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_3; // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortEmojiPreviewComponent*             CallFunc_AddComponent_ReturnValue_1;               // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortEmojiPreviewComponent*             CallFunc_GetComponentByClass_ReturnValue_1;        // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AnimMontage_LocalJumpToRandomSection_ReturnValue; // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77E9[0x3];                                     // 0x01F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_PlayLocalAnimMontage_ReturnValue;         // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77EA[0x4];                                     // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSoundComponent_SpawnedComponent;     // 0x0200(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay) == 0x000010, "Wrong alignment on B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay");
static_assert(sizeof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay) == 0x000210, "Wrong size on B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, EntryPoint) == 0x000000, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, K2Node_Event_ActionName) == 0x000008, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::K2Node_Event_ActionName' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, K2Node_Event_EndPlayReason) == 0x000010, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, Temp_object_Variable) == 0x000018, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, K2Node_DynamicCast_AsAnim_Montage) == 0x000020, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::K2Node_DynamicCast_AsAnim_Montage' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, K2Node_Event_Emote) == 0x000030, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::K2Node_Event_Emote' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetContext_ReturnValue) == 0x000038, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue) == 0x000040, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, K2Node_CustomEvent_Loaded) == 0x000048, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetComponentByClass_ReturnValue) == 0x000050, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, K2Node_CreateDelegate_OutputDelegate) == 0x00005C, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, Temp_struct_Variable) == 0x000070, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetContext_ReturnValue_1) == 0x0000A0, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_AddComponent_ReturnValue) == 0x0000A8, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_1) == 0x0000B0, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_IsValid_ReturnValue_2) == 0x0000B8, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetTransform_ReturnValue) == 0x0000C0, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_BreakTransform_Location) == 0x0000F0, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_BreakTransform_Rotation) == 0x0000FC, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_BreakTransform_Scale) == 0x000108, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000118, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetAnimInstance_ReturnValue) == 0x000120, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_ShouldPlayRandomSectionByName_ReturnValue) == 0x000128, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_ShouldPlayRandomSectionByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, K2Node_DynamicCast_AsAthena_Shout_Item_Definition) == 0x000130, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::K2Node_DynamicCast_AsAthena_Shout_Item_Definition' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, K2Node_DynamicCast_bSuccess_1) == 0x000138, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_Not_PreBool_ReturnValue) == 0x000139, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_BooleanAND_ReturnValue) == 0x00013A, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, K2Node_DynamicCast_AsAthena_Emoji_Item_Definition) == 0x000140, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::K2Node_DynamicCast_AsAthena_Emoji_Item_Definition' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, K2Node_DynamicCast_bSuccess_2) == 0x000148, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_RandomFloatInRange_ReturnValue) == 0x00014C, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_PickRandomSectionByName_ReturnValue) == 0x000150, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_PickRandomSectionByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetContext_ReturnValue_2) == 0x000158, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetContext_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_2) == 0x000160, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetCharacterGender_ReturnValue) == 0x000168, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetCharacterGender_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetCharacterBodyType_ReturnValue) == 0x000169, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetCharacterBodyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetFrontendPreviewAnimation_ReturnValue) == 0x000170, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetFrontendPreviewAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000198, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, Temp_struct_Variable_1) == 0x0001A0, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetContext_ReturnValue_3) == 0x0001D0, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetContext_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_3) == 0x0001D8, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_AddComponent_ReturnValue_1) == 0x0001E0, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_AddComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetComponentByClass_ReturnValue_1) == 0x0001E8, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_AnimMontage_LocalJumpToRandomSection_ReturnValue) == 0x0001F0, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_AnimMontage_LocalJumpToRandomSection_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_IsValid_ReturnValue_3) == 0x0001F4, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_PlayLocalAnimMontage_ReturnValue) == 0x0001F8, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_PlayLocalAnimMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_SpawnSoundComponent_SpawnedComponent) == 0x000200, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_SpawnSoundComponent_SpawnedComponent' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_Array_Add_ReturnValue) == 0x000208, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

}
