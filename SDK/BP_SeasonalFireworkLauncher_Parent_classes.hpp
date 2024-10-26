#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SeasonalFireworkLauncher_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Prop_QuestInteractable_Parent_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SeasonalFireworkLauncher_Parent.BP_SeasonalFireworkLauncher_Parent_C
// 0x00E0 (0x0DA0 - 0x0CC0)
class ABP_SeasonalFireworkLauncher_Parent_C : public AProp_QuestInteractable_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SeasonalFireworkLauncher_Parent_C; // 0x0CC0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow;                                             // 0x0CC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               InitialFuse;                                       // 0x0CD0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               FuseSparks;                                        // 0x0CD8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FireworkMesh;                                      // 0x0CE0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Fuse;                                              // 0x0CE8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Muzzle;                                            // 0x0CF0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_FrozenFireworkLauncher;                         // 0x0CF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         T_SparkTimeline_FuseMovementUp_3D8037404718A23242B3D9AA50238A88; // 0x0D00(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            T_SparkTimeline__Direction_3D8037404718A23242B3D9AA50238A88; // 0x0D04(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78DB[0x3];                                     // 0x0D05(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     T_SparkTimeline;                                   // 0x0D08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         T_ShrinkFrozenFirework_ShrinkTime_8A4F54204E8EDD61D8D9B4B3FA7C71FF; // 0x0D10(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            T_ShrinkFrozenFirework__Direction_8A4F54204E8EDD61D8D9B4B3FA7C71FF; // 0x0D14(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78DC[0x3];                                     // 0x0D15(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     T_ShrinkFrozenFirework;                            // 0x0D18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        NewVar_0;                                          // 0x0D20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInteractLocked;                                   // 0x0D28(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bHideExtraMesh;                                    // 0x0D29(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78DD[0x6];                                     // 0x0D2A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              PlayerPawn;                                        // 0x0D30(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartingSparkLoc;                                  // 0x0D38(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78DE[0xC];                                     // 0x0D44(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             NewVar_1;                                          // 0x0D50(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                             FireRocketSound;                                   // 0x0D80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HotFixOnOff;                                       // 0x0D88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78DF[0x4];                                     // 0x0D8C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCurveTableRowHandle                   HotFixVal;                                         // 0x0D90(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SeasonalFireworkLauncher_Parent(int32 EntryPoint);
	void BlueprintOnInteract(const class AFortPawn* Param_InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted);
	void ReceiveBeginPlay();
	void UnlockInteract();
	void PlaySuccessFX();
	void StartFuse();
	void T_SparkTimeline__UpdateFunc();
	void T_SparkTimeline__FinishedFunc();
	void T_ShrinkFrozenFirework__UpdateFunc();
	void T_ShrinkFrozenFirework__FinishedFunc();
	void UserConstructionScript();

	bool BlueprintCanInteract(const class AFortPawn* Param_InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const;
	class FText BlueprintGetInteractionString(const class AFortPawn* Param_InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SeasonalFireworkLauncher_Parent_C">();
	}
	static class ABP_SeasonalFireworkLauncher_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SeasonalFireworkLauncher_Parent_C>();
	}
};
static_assert(alignof(ABP_SeasonalFireworkLauncher_Parent_C) == 0x000010, "Wrong alignment on ABP_SeasonalFireworkLauncher_Parent_C");
static_assert(sizeof(ABP_SeasonalFireworkLauncher_Parent_C) == 0x000DA0, "Wrong size on ABP_SeasonalFireworkLauncher_Parent_C");
static_assert(offsetof(ABP_SeasonalFireworkLauncher_Parent_C, UberGraphFrame_BP_SeasonalFireworkLauncher_Parent_C) == 0x000CC0, "Member 'ABP_SeasonalFireworkLauncher_Parent_C::UberGraphFrame_BP_SeasonalFireworkLauncher_Parent_C' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFireworkLauncher_Parent_C, Arrow) == 0x000CC8, "Member 'ABP_SeasonalFireworkLauncher_Parent_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFireworkLauncher_Parent_C, InitialFuse) == 0x000CD0, "Member 'ABP_SeasonalFireworkLauncher_Parent_C::InitialFuse' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFireworkLauncher_Parent_C, FuseSparks) == 0x000CD8, "Member 'ABP_SeasonalFireworkLauncher_Parent_C::FuseSparks' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFireworkLauncher_Parent_C, FireworkMesh) == 0x000CE0, "Member 'ABP_SeasonalFireworkLauncher_Parent_C::FireworkMesh' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFireworkLauncher_Parent_C, Fuse) == 0x000CE8, "Member 'ABP_SeasonalFireworkLauncher_Parent_C::Fuse' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFireworkLauncher_Parent_C, Muzzle) == 0x000CF0, "Member 'ABP_SeasonalFireworkLauncher_Parent_C::Muzzle' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFireworkLauncher_Parent_C, SM_FrozenFireworkLauncher) == 0x000CF8, "Member 'ABP_SeasonalFireworkLauncher_Parent_C::SM_FrozenFireworkLauncher' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFireworkLauncher_Parent_C, T_SparkTimeline_FuseMovementUp_3D8037404718A23242B3D9AA50238A88) == 0x000D00, "Member 'ABP_SeasonalFireworkLauncher_Parent_C::T_SparkTimeline_FuseMovementUp_3D8037404718A23242B3D9AA50238A88' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFireworkLauncher_Parent_C, T_SparkTimeline__Direction_3D8037404718A23242B3D9AA50238A88) == 0x000D04, "Member 'ABP_SeasonalFireworkLauncher_Parent_C::T_SparkTimeline__Direction_3D8037404718A23242B3D9AA50238A88' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFireworkLauncher_Parent_C, T_SparkTimeline) == 0x000D08, "Member 'ABP_SeasonalFireworkLauncher_Parent_C::T_SparkTimeline' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFireworkLauncher_Parent_C, T_ShrinkFrozenFirework_ShrinkTime_8A4F54204E8EDD61D8D9B4B3FA7C71FF) == 0x000D10, "Member 'ABP_SeasonalFireworkLauncher_Parent_C::T_ShrinkFrozenFirework_ShrinkTime_8A4F54204E8EDD61D8D9B4B3FA7C71FF' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFireworkLauncher_Parent_C, T_ShrinkFrozenFirework__Direction_8A4F54204E8EDD61D8D9B4B3FA7C71FF) == 0x000D14, "Member 'ABP_SeasonalFireworkLauncher_Parent_C::T_ShrinkFrozenFirework__Direction_8A4F54204E8EDD61D8D9B4B3FA7C71FF' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFireworkLauncher_Parent_C, T_ShrinkFrozenFirework) == 0x000D18, "Member 'ABP_SeasonalFireworkLauncher_Parent_C::T_ShrinkFrozenFirework' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFireworkLauncher_Parent_C, NewVar_0) == 0x000D20, "Member 'ABP_SeasonalFireworkLauncher_Parent_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFireworkLauncher_Parent_C, bInteractLocked) == 0x000D28, "Member 'ABP_SeasonalFireworkLauncher_Parent_C::bInteractLocked' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFireworkLauncher_Parent_C, bHideExtraMesh) == 0x000D29, "Member 'ABP_SeasonalFireworkLauncher_Parent_C::bHideExtraMesh' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFireworkLauncher_Parent_C, PlayerPawn) == 0x000D30, "Member 'ABP_SeasonalFireworkLauncher_Parent_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFireworkLauncher_Parent_C, StartingSparkLoc) == 0x000D38, "Member 'ABP_SeasonalFireworkLauncher_Parent_C::StartingSparkLoc' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFireworkLauncher_Parent_C, NewVar_1) == 0x000D50, "Member 'ABP_SeasonalFireworkLauncher_Parent_C::NewVar_1' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFireworkLauncher_Parent_C, FireRocketSound) == 0x000D80, "Member 'ABP_SeasonalFireworkLauncher_Parent_C::FireRocketSound' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFireworkLauncher_Parent_C, HotFixOnOff) == 0x000D88, "Member 'ABP_SeasonalFireworkLauncher_Parent_C::HotFixOnOff' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalFireworkLauncher_Parent_C, HotFixVal) == 0x000D90, "Member 'ABP_SeasonalFireworkLauncher_Parent_C::HotFixVal' has a wrong offset!");

}

