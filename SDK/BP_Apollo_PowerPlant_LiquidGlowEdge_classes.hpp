#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Apollo_PowerPlant_LiquidGlowEdge

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Apollo_PowerPlant_LiquidGlowEdge.BP_Apollo_PowerPlant_LiquidGlowEdge_C
// 0x0038 (0x0258 - 0x0220)
class ABP_Apollo_PowerPlant_LiquidGlowEdge_C final : public AActor
{
public:
	class UParticleSystemComponent*               P_Apollo_PowerPlant_CoolingTower_TopSteam;         // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Apollo_PowerPlant_CoolingTower_LiquidSteam3;     // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Apollo_PowerPlant_CoolingTower_LiquidSteam2;     // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Apollo_PowerPlant_CoolingTower_LiquidSteam1;     // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Apollo_PowerPlant_CoolingTower_LiquidSteam;      // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Apollo_Powerplant_Liquid_EdgeGlow_01;           // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Apollo_PowerPlant_LiquidGlowEdge_C">();
	}
	static class ABP_Apollo_PowerPlant_LiquidGlowEdge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Apollo_PowerPlant_LiquidGlowEdge_C>();
	}
};
static_assert(alignof(ABP_Apollo_PowerPlant_LiquidGlowEdge_C) == 0x000008, "Wrong alignment on ABP_Apollo_PowerPlant_LiquidGlowEdge_C");
static_assert(sizeof(ABP_Apollo_PowerPlant_LiquidGlowEdge_C) == 0x000258, "Wrong size on ABP_Apollo_PowerPlant_LiquidGlowEdge_C");
static_assert(offsetof(ABP_Apollo_PowerPlant_LiquidGlowEdge_C, P_Apollo_PowerPlant_CoolingTower_TopSteam) == 0x000220, "Member 'ABP_Apollo_PowerPlant_LiquidGlowEdge_C::P_Apollo_PowerPlant_CoolingTower_TopSteam' has a wrong offset!");
static_assert(offsetof(ABP_Apollo_PowerPlant_LiquidGlowEdge_C, P_Apollo_PowerPlant_CoolingTower_LiquidSteam3) == 0x000228, "Member 'ABP_Apollo_PowerPlant_LiquidGlowEdge_C::P_Apollo_PowerPlant_CoolingTower_LiquidSteam3' has a wrong offset!");
static_assert(offsetof(ABP_Apollo_PowerPlant_LiquidGlowEdge_C, P_Apollo_PowerPlant_CoolingTower_LiquidSteam2) == 0x000230, "Member 'ABP_Apollo_PowerPlant_LiquidGlowEdge_C::P_Apollo_PowerPlant_CoolingTower_LiquidSteam2' has a wrong offset!");
static_assert(offsetof(ABP_Apollo_PowerPlant_LiquidGlowEdge_C, P_Apollo_PowerPlant_CoolingTower_LiquidSteam1) == 0x000238, "Member 'ABP_Apollo_PowerPlant_LiquidGlowEdge_C::P_Apollo_PowerPlant_CoolingTower_LiquidSteam1' has a wrong offset!");
static_assert(offsetof(ABP_Apollo_PowerPlant_LiquidGlowEdge_C, P_Apollo_PowerPlant_CoolingTower_LiquidSteam) == 0x000240, "Member 'ABP_Apollo_PowerPlant_LiquidGlowEdge_C::P_Apollo_PowerPlant_CoolingTower_LiquidSteam' has a wrong offset!");
static_assert(offsetof(ABP_Apollo_PowerPlant_LiquidGlowEdge_C, SM_Apollo_Powerplant_Liquid_EdgeGlow_01) == 0x000248, "Member 'ABP_Apollo_PowerPlant_LiquidGlowEdge_C::SM_Apollo_Powerplant_Liquid_EdgeGlow_01' has a wrong offset!");
static_assert(offsetof(ABP_Apollo_PowerPlant_LiquidGlowEdge_C, DefaultSceneRoot) == 0x000250, "Member 'ABP_Apollo_PowerPlant_LiquidGlowEdge_C::DefaultSceneRoot' has a wrong offset!");

}
