#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Athena_Envitem_SilkyVeteran

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_Athena_Envitem_SilkyVeteran.GCNL_Athena_Envitem_SilkyVeteran_C
// 0x0050 (0x0810 - 0x07C0)
class AGCNL_Athena_Envitem_SilkyVeteran_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*               NewVar_0;                                          // 0x07C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       FX_MIDs;                                           // 0x07D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FName>                           FX_Module_Names;                                   // 0x07E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         VatRadius;                                         // 0x07F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86E9[0x4];                                     // 0x07F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawnAthena*                  PlayerPawn;                                        // 0x07F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               SplashFX;                                          // 0x0800(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         VatRadius_Mesh;                                    // 0x0808(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCNL_Athena_Envitem_SilkyVeteran(int32 EntryPoint);
	void Crouch_Check(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void Set_FX_MIDs(const struct FGameplayCueParameters& Gameplay_Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Athena_Envitem_SilkyVeteran_C">();
	}
	static class AGCNL_Athena_Envitem_SilkyVeteran_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Athena_Envitem_SilkyVeteran_C>();
	}
};
static_assert(alignof(AGCNL_Athena_Envitem_SilkyVeteran_C) == 0x000008, "Wrong alignment on AGCNL_Athena_Envitem_SilkyVeteran_C");
static_assert(sizeof(AGCNL_Athena_Envitem_SilkyVeteran_C) == 0x000810, "Wrong size on AGCNL_Athena_Envitem_SilkyVeteran_C");
static_assert(offsetof(AGCNL_Athena_Envitem_SilkyVeteran_C, UberGraphFrame) == 0x0007C0, "Member 'AGCNL_Athena_Envitem_SilkyVeteran_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Envitem_SilkyVeteran_C, NewVar_0) == 0x0007C8, "Member 'AGCNL_Athena_Envitem_SilkyVeteran_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Envitem_SilkyVeteran_C, FX_MIDs) == 0x0007D0, "Member 'AGCNL_Athena_Envitem_SilkyVeteran_C::FX_MIDs' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Envitem_SilkyVeteran_C, FX_Module_Names) == 0x0007E0, "Member 'AGCNL_Athena_Envitem_SilkyVeteran_C::FX_Module_Names' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Envitem_SilkyVeteran_C, VatRadius) == 0x0007F0, "Member 'AGCNL_Athena_Envitem_SilkyVeteran_C::VatRadius' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Envitem_SilkyVeteran_C, PlayerPawn) == 0x0007F8, "Member 'AGCNL_Athena_Envitem_SilkyVeteran_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Envitem_SilkyVeteran_C, SplashFX) == 0x000800, "Member 'AGCNL_Athena_Envitem_SilkyVeteran_C::SplashFX' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Envitem_SilkyVeteran_C, VatRadius_Mesh) == 0x000808, "Member 'AGCNL_Athena_Envitem_SilkyVeteran_C::VatRadius_Mesh' has a wrong offset!");

}

