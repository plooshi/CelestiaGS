#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_PlaysetGrenadeWithTrajectory

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Athena_UtilityGrenade_WithTrajectory_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C
// 0x0028 (0x0E58 - 0x0E30)
class UGA_Athena_PlaysetGrenadeWithTrajectory_C : public UGA_Athena_UtilityGrenade_WithTrajectory_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Athena_PlaysetGrenadeWithTrajectory_C; // 0x0E30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_ProjectileTrajectory_C*             ProjectileTrajectoryRed;                           // 0x0E38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 RedIndicatorClass;                                 // 0x0E40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlaysetItemDefinition*             DefaultPlayset;                                    // 0x0E48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShouldNotThrow;                                   // 0x0E50(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanConsume;                                        // 0x0E51(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_Athena_PlaysetGrenadeWithTrajectory(int32 EntryPoint);
	void OnAbilityInputReleased();
	void AthenaProjectileSpawned(class AFortProjectileBase* Param_ProjectileReference);
	void InitTrajectoryVariables();
	void Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction);
	void CleanupTrajectoryDisplay();
	void K2_ActivateAbility();
	void UpdateTrajectorySpline();
	void SetupDummyProjectileRed();
	void GetActivePlaysetData(class UFortPlaysetItemDefinition** OutData);
	void SetPlaysetData(class AFortProjectileBase* Projectile_Reference);
	void SetActivePlaysetOnPlayer();
	void CalculateRotation(class UFortPlaysetItemDefinition* Playset, const struct FRotator& Rotation, struct FRotator* NewRotation);
	void DestroyProjectileTrajectory();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_PlaysetGrenadeWithTrajectory_C">();
	}
	static class UGA_Athena_PlaysetGrenadeWithTrajectory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_PlaysetGrenadeWithTrajectory_C>();
	}
};
static_assert(alignof(UGA_Athena_PlaysetGrenadeWithTrajectory_C) == 0x000008, "Wrong alignment on UGA_Athena_PlaysetGrenadeWithTrajectory_C");
static_assert(sizeof(UGA_Athena_PlaysetGrenadeWithTrajectory_C) == 0x000E58, "Wrong size on UGA_Athena_PlaysetGrenadeWithTrajectory_C");
static_assert(offsetof(UGA_Athena_PlaysetGrenadeWithTrajectory_C, UberGraphFrame_GA_Athena_PlaysetGrenadeWithTrajectory_C) == 0x000E30, "Member 'UGA_Athena_PlaysetGrenadeWithTrajectory_C::UberGraphFrame_GA_Athena_PlaysetGrenadeWithTrajectory_C' has a wrong offset!");
static_assert(offsetof(UGA_Athena_PlaysetGrenadeWithTrajectory_C, ProjectileTrajectoryRed) == 0x000E38, "Member 'UGA_Athena_PlaysetGrenadeWithTrajectory_C::ProjectileTrajectoryRed' has a wrong offset!");
static_assert(offsetof(UGA_Athena_PlaysetGrenadeWithTrajectory_C, RedIndicatorClass) == 0x000E40, "Member 'UGA_Athena_PlaysetGrenadeWithTrajectory_C::RedIndicatorClass' has a wrong offset!");
static_assert(offsetof(UGA_Athena_PlaysetGrenadeWithTrajectory_C, DefaultPlayset) == 0x000E48, "Member 'UGA_Athena_PlaysetGrenadeWithTrajectory_C::DefaultPlayset' has a wrong offset!");
static_assert(offsetof(UGA_Athena_PlaysetGrenadeWithTrajectory_C, bShouldNotThrow) == 0x000E50, "Member 'UGA_Athena_PlaysetGrenadeWithTrajectory_C::bShouldNotThrow' has a wrong offset!");
static_assert(offsetof(UGA_Athena_PlaysetGrenadeWithTrajectory_C, CanConsume) == 0x000E51, "Member 'UGA_Athena_PlaysetGrenadeWithTrajectory_C::CanConsume' has a wrong offset!");

}
