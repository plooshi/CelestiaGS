#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_Quest_Ring

#include "Basic.hpp"


namespace SDK::Params
{

// Function BGA_Quest_Ring.BGA_Quest_Ring_C.ExecuteUbergraph_BGA_Quest_Ring
// 0x0068 (0x0068 - 0x0000)
struct BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4149[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_414A[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_414B[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasCompletedQuest_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SendComplexCustomStatEvent_QuestActive;   // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SendComplexCustomStatEvent_QuestCompleted; // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_414C[0x5];                                     // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  K2Node_ComponentBoundEvent_PlayerController_2;     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  K2Node_ComponentBoundEvent_PlayerController_1;     // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetCompHiddenControllerOnly_ReturnValue;  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetCompHiddenControllerOnly_ReturnValue_1; // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_414D[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  K2Node_ComponentBoundEvent_PlayerController;       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring) == 0x000008, "Wrong alignment on BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring");
static_assert(sizeof(BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring) == 0x000068, "Wrong size on BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring");
static_assert(offsetof(BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring, EntryPoint) == 0x000000, "Member 'BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring::EntryPoint' has a wrong offset!");
static_assert(offsetof(BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring, K2Node_Event_OtherActor) == 0x000008, "Member 'BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000010, "Member 'BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000020, "Member 'BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring, CallFunc_GetQuestManager_ReturnValue) == 0x000030, "Member 'BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring, CallFunc_HasCompletedQuest_ReturnValue) == 0x000038, "Member 'BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring::CallFunc_HasCompletedQuest_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring, CallFunc_SendComplexCustomStatEvent_QuestActive) == 0x000039, "Member 'BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring::CallFunc_SendComplexCustomStatEvent_QuestActive' has a wrong offset!");
static_assert(offsetof(BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring, CallFunc_SendComplexCustomStatEvent_QuestCompleted) == 0x00003A, "Member 'BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring::CallFunc_SendComplexCustomStatEvent_QuestCompleted' has a wrong offset!");
static_assert(offsetof(BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring, K2Node_ComponentBoundEvent_PlayerController_2) == 0x000040, "Member 'BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring::K2Node_ComponentBoundEvent_PlayerController_2' has a wrong offset!");
static_assert(offsetof(BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring, K2Node_ComponentBoundEvent_PlayerController_1) == 0x000048, "Member 'BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring::K2Node_ComponentBoundEvent_PlayerController_1' has a wrong offset!");
static_assert(offsetof(BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring, CallFunc_SetCompHiddenControllerOnly_ReturnValue) == 0x000050, "Member 'BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring::CallFunc_SetCompHiddenControllerOnly_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring, CallFunc_SetCompHiddenControllerOnly_ReturnValue_1) == 0x000051, "Member 'BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring::CallFunc_SetCompHiddenControllerOnly_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring, K2Node_ComponentBoundEvent_PlayerController) == 0x000058, "Member 'BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring::K2Node_ComponentBoundEvent_PlayerController' has a wrong offset!");
static_assert(offsetof(BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring, CallFunc_IsDedicatedServer_ReturnValue) == 0x000060, "Member 'BGA_Quest_Ring_C_ExecuteUbergraph_BGA_Quest_Ring::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");

// Function BGA_Quest_Ring.BGA_Quest_Ring_C.BndEvt__QuestComponent_K2Node_ComponentBoundEvent_4_SimpleQuestComponentDelegate__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BGA_Quest_Ring_C_BndEvt__QuestComponent_K2Node_ComponentBoundEvent_4_SimpleQuestComponentDelegate__DelegateSignature final
{
public:
	class AFortPlayerController*                  PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BGA_Quest_Ring_C_BndEvt__QuestComponent_K2Node_ComponentBoundEvent_4_SimpleQuestComponentDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BGA_Quest_Ring_C_BndEvt__QuestComponent_K2Node_ComponentBoundEvent_4_SimpleQuestComponentDelegate__DelegateSignature");
static_assert(sizeof(BGA_Quest_Ring_C_BndEvt__QuestComponent_K2Node_ComponentBoundEvent_4_SimpleQuestComponentDelegate__DelegateSignature) == 0x000008, "Wrong size on BGA_Quest_Ring_C_BndEvt__QuestComponent_K2Node_ComponentBoundEvent_4_SimpleQuestComponentDelegate__DelegateSignature");
static_assert(offsetof(BGA_Quest_Ring_C_BndEvt__QuestComponent_K2Node_ComponentBoundEvent_4_SimpleQuestComponentDelegate__DelegateSignature, PlayerController) == 0x000000, "Member 'BGA_Quest_Ring_C_BndEvt__QuestComponent_K2Node_ComponentBoundEvent_4_SimpleQuestComponentDelegate__DelegateSignature::PlayerController' has a wrong offset!");

// Function BGA_Quest_Ring.BGA_Quest_Ring_C.BndEvt__QuestComponent_K2Node_ComponentBoundEvent_2_SimpleQuestComponentDelegate__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BGA_Quest_Ring_C_BndEvt__QuestComponent_K2Node_ComponentBoundEvent_2_SimpleQuestComponentDelegate__DelegateSignature final
{
public:
	class AFortPlayerController*                  PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BGA_Quest_Ring_C_BndEvt__QuestComponent_K2Node_ComponentBoundEvent_2_SimpleQuestComponentDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BGA_Quest_Ring_C_BndEvt__QuestComponent_K2Node_ComponentBoundEvent_2_SimpleQuestComponentDelegate__DelegateSignature");
static_assert(sizeof(BGA_Quest_Ring_C_BndEvt__QuestComponent_K2Node_ComponentBoundEvent_2_SimpleQuestComponentDelegate__DelegateSignature) == 0x000008, "Wrong size on BGA_Quest_Ring_C_BndEvt__QuestComponent_K2Node_ComponentBoundEvent_2_SimpleQuestComponentDelegate__DelegateSignature");
static_assert(offsetof(BGA_Quest_Ring_C_BndEvt__QuestComponent_K2Node_ComponentBoundEvent_2_SimpleQuestComponentDelegate__DelegateSignature, PlayerController) == 0x000000, "Member 'BGA_Quest_Ring_C_BndEvt__QuestComponent_K2Node_ComponentBoundEvent_2_SimpleQuestComponentDelegate__DelegateSignature::PlayerController' has a wrong offset!");

// Function BGA_Quest_Ring.BGA_Quest_Ring_C.BndEvt__QuestComponent_K2Node_ComponentBoundEvent_1_SimpleQuestComponentDelegate__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BGA_Quest_Ring_C_BndEvt__QuestComponent_K2Node_ComponentBoundEvent_1_SimpleQuestComponentDelegate__DelegateSignature final
{
public:
	class AFortPlayerController*                  PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BGA_Quest_Ring_C_BndEvt__QuestComponent_K2Node_ComponentBoundEvent_1_SimpleQuestComponentDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BGA_Quest_Ring_C_BndEvt__QuestComponent_K2Node_ComponentBoundEvent_1_SimpleQuestComponentDelegate__DelegateSignature");
static_assert(sizeof(BGA_Quest_Ring_C_BndEvt__QuestComponent_K2Node_ComponentBoundEvent_1_SimpleQuestComponentDelegate__DelegateSignature) == 0x000008, "Wrong size on BGA_Quest_Ring_C_BndEvt__QuestComponent_K2Node_ComponentBoundEvent_1_SimpleQuestComponentDelegate__DelegateSignature");
static_assert(offsetof(BGA_Quest_Ring_C_BndEvt__QuestComponent_K2Node_ComponentBoundEvent_1_SimpleQuestComponentDelegate__DelegateSignature, PlayerController) == 0x000000, "Member 'BGA_Quest_Ring_C_BndEvt__QuestComponent_K2Node_ComponentBoundEvent_1_SimpleQuestComponentDelegate__DelegateSignature::PlayerController' has a wrong offset!");

// Function BGA_Quest_Ring.BGA_Quest_Ring_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BGA_Quest_Ring_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BGA_Quest_Ring_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BGA_Quest_Ring_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BGA_Quest_Ring_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BGA_Quest_Ring_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BGA_Quest_Ring_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BGA_Quest_Ring_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function BGA_Quest_Ring.BGA_Quest_Ring_C.UpdateLoopingAudio
// 0x0001 (0x0001 - 0x0000)
struct BGA_Quest_Ring_C_UpdateLoopingAudio final
{
public:
	bool                                          CallFunc_IsPlaying_ReturnValue;                    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BGA_Quest_Ring_C_UpdateLoopingAudio) == 0x000001, "Wrong alignment on BGA_Quest_Ring_C_UpdateLoopingAudio");
static_assert(sizeof(BGA_Quest_Ring_C_UpdateLoopingAudio) == 0x000001, "Wrong size on BGA_Quest_Ring_C_UpdateLoopingAudio");
static_assert(offsetof(BGA_Quest_Ring_C_UpdateLoopingAudio, CallFunc_IsPlaying_ReturnValue) == 0x000000, "Member 'BGA_Quest_Ring_C_UpdateLoopingAudio::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");

}

