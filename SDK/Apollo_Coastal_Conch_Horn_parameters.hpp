#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_Coastal_Conch_Horn

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function Apollo_Coastal_Conch_Horn.Apollo_Coastal_Conch_Horn_C.ExecuteUbergraph_Apollo_Coastal_Conch_Horn
// 0x0028 (0x0028 - 0x0000)
struct Apollo_Coastal_Conch_Horn_C_ExecuteUbergraph_Apollo_Coastal_Conch_Horn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_872C[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	const class AFortPawn*                        K2Node_Event_InteractingPawn;                      // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInteractionBeingAttempted                    K2Node_Event_InteractionBeingAttempted;            // 0x0010(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_872D[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Apollo_Coastal_Conch_Horn_C_ExecuteUbergraph_Apollo_Coastal_Conch_Horn) == 0x000008, "Wrong alignment on Apollo_Coastal_Conch_Horn_C_ExecuteUbergraph_Apollo_Coastal_Conch_Horn");
static_assert(sizeof(Apollo_Coastal_Conch_Horn_C_ExecuteUbergraph_Apollo_Coastal_Conch_Horn) == 0x000028, "Wrong size on Apollo_Coastal_Conch_Horn_C_ExecuteUbergraph_Apollo_Coastal_Conch_Horn");
static_assert(offsetof(Apollo_Coastal_Conch_Horn_C_ExecuteUbergraph_Apollo_Coastal_Conch_Horn, EntryPoint) == 0x000000, "Member 'Apollo_Coastal_Conch_Horn_C_ExecuteUbergraph_Apollo_Coastal_Conch_Horn::EntryPoint' has a wrong offset!");
static_assert(offsetof(Apollo_Coastal_Conch_Horn_C_ExecuteUbergraph_Apollo_Coastal_Conch_Horn, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'Apollo_Coastal_Conch_Horn_C_ExecuteUbergraph_Apollo_Coastal_Conch_Horn::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_Coastal_Conch_Horn_C_ExecuteUbergraph_Apollo_Coastal_Conch_Horn, K2Node_Event_InteractingPawn) == 0x000008, "Member 'Apollo_Coastal_Conch_Horn_C_ExecuteUbergraph_Apollo_Coastal_Conch_Horn::K2Node_Event_InteractingPawn' has a wrong offset!");
static_assert(offsetof(Apollo_Coastal_Conch_Horn_C_ExecuteUbergraph_Apollo_Coastal_Conch_Horn, K2Node_Event_InteractionBeingAttempted) == 0x000010, "Member 'Apollo_Coastal_Conch_Horn_C_ExecuteUbergraph_Apollo_Coastal_Conch_Horn::K2Node_Event_InteractionBeingAttempted' has a wrong offset!");
static_assert(offsetof(Apollo_Coastal_Conch_Horn_C_ExecuteUbergraph_Apollo_Coastal_Conch_Horn, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000014, "Member 'Apollo_Coastal_Conch_Horn_C_ExecuteUbergraph_Apollo_Coastal_Conch_Horn::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_Coastal_Conch_Horn_C_ExecuteUbergraph_Apollo_Coastal_Conch_Horn, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x000020, "Member 'Apollo_Coastal_Conch_Horn_C_ExecuteUbergraph_Apollo_Coastal_Conch_Horn::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");

// Function Apollo_Coastal_Conch_Horn.Apollo_Coastal_Conch_Horn_C.BlueprintOnInteract
// 0x0010 (0x0010 - 0x0000)
struct Apollo_Coastal_Conch_Horn_C_BlueprintOnInteract final
{
public:
	const class AFortPawn*                        InteractingPawn;                                   // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInteractionBeingAttempted                    InteractionBeingAttempted;                         // 0x0008(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Apollo_Coastal_Conch_Horn_C_BlueprintOnInteract) == 0x000008, "Wrong alignment on Apollo_Coastal_Conch_Horn_C_BlueprintOnInteract");
static_assert(sizeof(Apollo_Coastal_Conch_Horn_C_BlueprintOnInteract) == 0x000010, "Wrong size on Apollo_Coastal_Conch_Horn_C_BlueprintOnInteract");
static_assert(offsetof(Apollo_Coastal_Conch_Horn_C_BlueprintOnInteract, InteractingPawn) == 0x000000, "Member 'Apollo_Coastal_Conch_Horn_C_BlueprintOnInteract::InteractingPawn' has a wrong offset!");
static_assert(offsetof(Apollo_Coastal_Conch_Horn_C_BlueprintOnInteract, InteractionBeingAttempted) == 0x000008, "Member 'Apollo_Coastal_Conch_Horn_C_BlueprintOnInteract::InteractionBeingAttempted' has a wrong offset!");

// Function Apollo_Coastal_Conch_Horn.Apollo_Coastal_Conch_Horn_C.BlueprintCanInteract
// 0x0010 (0x0010 - 0x0000)
struct Apollo_Coastal_Conch_Horn_C_BlueprintCanInteract final
{
public:
	const class AFortPawn*                        InteractingPawn;                                   // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInteractionBeingAttempted                    InteractionBeingAttempted;                         // 0x0008(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETInteractionType                             InteractionType;                                   // 0x0009(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x000A(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Apollo_Coastal_Conch_Horn_C_BlueprintCanInteract) == 0x000008, "Wrong alignment on Apollo_Coastal_Conch_Horn_C_BlueprintCanInteract");
static_assert(sizeof(Apollo_Coastal_Conch_Horn_C_BlueprintCanInteract) == 0x000010, "Wrong size on Apollo_Coastal_Conch_Horn_C_BlueprintCanInteract");
static_assert(offsetof(Apollo_Coastal_Conch_Horn_C_BlueprintCanInteract, InteractingPawn) == 0x000000, "Member 'Apollo_Coastal_Conch_Horn_C_BlueprintCanInteract::InteractingPawn' has a wrong offset!");
static_assert(offsetof(Apollo_Coastal_Conch_Horn_C_BlueprintCanInteract, InteractionBeingAttempted) == 0x000008, "Member 'Apollo_Coastal_Conch_Horn_C_BlueprintCanInteract::InteractionBeingAttempted' has a wrong offset!");
static_assert(offsetof(Apollo_Coastal_Conch_Horn_C_BlueprintCanInteract, InteractionType) == 0x000009, "Member 'Apollo_Coastal_Conch_Horn_C_BlueprintCanInteract::InteractionType' has a wrong offset!");
static_assert(offsetof(Apollo_Coastal_Conch_Horn_C_BlueprintCanInteract, ReturnValue) == 0x00000A, "Member 'Apollo_Coastal_Conch_Horn_C_BlueprintCanInteract::ReturnValue' has a wrong offset!");

// Function Apollo_Coastal_Conch_Horn.Apollo_Coastal_Conch_Horn_C.BlueprintGetInteractionString
// 0x0028 (0x0028 - 0x0000)
struct Apollo_Coastal_Conch_Horn_C_BlueprintGetInteractionString final
{
public:
	const class AFortPawn*                        InteractingPawn;                                   // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInteractionBeingAttempted                    InteractionBeingAttempted;                         // 0x0008(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_872E[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ReturnValue;                                       // 0x0010(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(Apollo_Coastal_Conch_Horn_C_BlueprintGetInteractionString) == 0x000008, "Wrong alignment on Apollo_Coastal_Conch_Horn_C_BlueprintGetInteractionString");
static_assert(sizeof(Apollo_Coastal_Conch_Horn_C_BlueprintGetInteractionString) == 0x000028, "Wrong size on Apollo_Coastal_Conch_Horn_C_BlueprintGetInteractionString");
static_assert(offsetof(Apollo_Coastal_Conch_Horn_C_BlueprintGetInteractionString, InteractingPawn) == 0x000000, "Member 'Apollo_Coastal_Conch_Horn_C_BlueprintGetInteractionString::InteractingPawn' has a wrong offset!");
static_assert(offsetof(Apollo_Coastal_Conch_Horn_C_BlueprintGetInteractionString, InteractionBeingAttempted) == 0x000008, "Member 'Apollo_Coastal_Conch_Horn_C_BlueprintGetInteractionString::InteractionBeingAttempted' has a wrong offset!");
static_assert(offsetof(Apollo_Coastal_Conch_Horn_C_BlueprintGetInteractionString, ReturnValue) == 0x000010, "Member 'Apollo_Coastal_Conch_Horn_C_BlueprintGetInteractionString::ReturnValue' has a wrong offset!");

// Function Apollo_Coastal_Conch_Horn.Apollo_Coastal_Conch_Horn_C.GetIconPlacement
// 0x0040 (0x0040 - 0x0000)
struct Apollo_Coastal_Conch_Horn_C_GetIconPlacement final
{
public:
	const class AActor*                           SelfActor;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class AActor*                           ViewingActor;                                      // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OutLocation;                                       // 0x0010(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OutExtents;                                        // 0x001C(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Apollo_Coastal_Conch_Horn_C_GetIconPlacement) == 0x000008, "Wrong alignment on Apollo_Coastal_Conch_Horn_C_GetIconPlacement");
static_assert(sizeof(Apollo_Coastal_Conch_Horn_C_GetIconPlacement) == 0x000040, "Wrong size on Apollo_Coastal_Conch_Horn_C_GetIconPlacement");
static_assert(offsetof(Apollo_Coastal_Conch_Horn_C_GetIconPlacement, SelfActor) == 0x000000, "Member 'Apollo_Coastal_Conch_Horn_C_GetIconPlacement::SelfActor' has a wrong offset!");
static_assert(offsetof(Apollo_Coastal_Conch_Horn_C_GetIconPlacement, ViewingActor) == 0x000008, "Member 'Apollo_Coastal_Conch_Horn_C_GetIconPlacement::ViewingActor' has a wrong offset!");
static_assert(offsetof(Apollo_Coastal_Conch_Horn_C_GetIconPlacement, OutLocation) == 0x000010, "Member 'Apollo_Coastal_Conch_Horn_C_GetIconPlacement::OutLocation' has a wrong offset!");
static_assert(offsetof(Apollo_Coastal_Conch_Horn_C_GetIconPlacement, OutExtents) == 0x00001C, "Member 'Apollo_Coastal_Conch_Horn_C_GetIconPlacement::OutExtents' has a wrong offset!");
static_assert(offsetof(Apollo_Coastal_Conch_Horn_C_GetIconPlacement, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'Apollo_Coastal_Conch_Horn_C_GetIconPlacement::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_Coastal_Conch_Horn_C_GetIconPlacement, CallFunc_Add_VectorVector_ReturnValue) == 0x000034, "Member 'Apollo_Coastal_Conch_Horn_C_GetIconPlacement::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

}
