#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_Held_Petrol_Pump

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BGA_Held_Petrol_Pump.BGA_Held_Petrol_Pump_C
// 0x0088 (0x0838 - 0x07B0)
class ABGA_Held_Petrol_Pump_C final : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x07B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortHeldObjectComponent*               FortHeldObject;                                    // 0x07C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortProjectileMovementComponent*       FortProjectileMovement;                            // 0x07C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AApollo_GasPump_Valet_C*                Pump;                                              // 0x07D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x07D8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84E4[0x4];                                     // 0x07E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           DistanceCheckTimer;                                // 0x07E8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              Pawn;                                              // 0x07F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         PumpTetherRange;                                   // 0x07F8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         InteractTime;                                      // 0x0818(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BGA_Held_Petrol_Pump(int32 EntryPoint);
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_0_OnHeldObjectDropped__DelegateSignature();
	void PumpDistanceCheck();
	void ReceiveBeginPlay();

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const;
	bool BlueprintGetInteractionTime(const class AFortPawn* InteractingPawn, float* OutInteractionTime, const EInteractionBeingAttempted InteractionBeingAttempted) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_Held_Petrol_Pump_C">();
	}
	static class ABGA_Held_Petrol_Pump_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_Held_Petrol_Pump_C>();
	}
};
static_assert(alignof(ABGA_Held_Petrol_Pump_C) == 0x000008, "Wrong alignment on ABGA_Held_Petrol_Pump_C");
static_assert(sizeof(ABGA_Held_Petrol_Pump_C) == 0x000838, "Wrong size on ABGA_Held_Petrol_Pump_C");
static_assert(offsetof(ABGA_Held_Petrol_Pump_C, UberGraphFrame) == 0x0007B0, "Member 'ABGA_Held_Petrol_Pump_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABGA_Held_Petrol_Pump_C, Sphere) == 0x0007B8, "Member 'ABGA_Held_Petrol_Pump_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABGA_Held_Petrol_Pump_C, FortHeldObject) == 0x0007C0, "Member 'ABGA_Held_Petrol_Pump_C::FortHeldObject' has a wrong offset!");
static_assert(offsetof(ABGA_Held_Petrol_Pump_C, FortProjectileMovement) == 0x0007C8, "Member 'ABGA_Held_Petrol_Pump_C::FortProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABGA_Held_Petrol_Pump_C, Pump) == 0x0007D0, "Member 'ABGA_Held_Petrol_Pump_C::Pump' has a wrong offset!");
static_assert(offsetof(ABGA_Held_Petrol_Pump_C, Location) == 0x0007D8, "Member 'ABGA_Held_Petrol_Pump_C::Location' has a wrong offset!");
static_assert(offsetof(ABGA_Held_Petrol_Pump_C, DistanceCheckTimer) == 0x0007E8, "Member 'ABGA_Held_Petrol_Pump_C::DistanceCheckTimer' has a wrong offset!");
static_assert(offsetof(ABGA_Held_Petrol_Pump_C, Pawn) == 0x0007F0, "Member 'ABGA_Held_Petrol_Pump_C::Pawn' has a wrong offset!");
static_assert(offsetof(ABGA_Held_Petrol_Pump_C, PumpTetherRange) == 0x0007F8, "Member 'ABGA_Held_Petrol_Pump_C::PumpTetherRange' has a wrong offset!");
static_assert(offsetof(ABGA_Held_Petrol_Pump_C, InteractTime) == 0x000818, "Member 'ABGA_Held_Petrol_Pump_C::InteractTime' has a wrong offset!");

}
