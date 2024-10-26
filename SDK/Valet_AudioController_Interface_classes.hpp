#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Valet_AudioController_Interface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Valet_AudioController_Interface.Valet_AudioController_Interface_C
// 0x0000 (0x0028 - 0x0028)
class IValet_AudioController_Interface_C final : public IInterface
{
public:
	void OnTick();
	void OnCacheReferences(class AFortDagwoodVehicle* Vehicle);
	void OnBodyCollision(const struct FVector& HitLocation, const struct FVector& NormalImpulse, bool* FilteredHit, float* Magnitude);
	void OnSuspensionCollision(bool* FilteredHit, float* Magnitude);
	void OnHandbrake(bool Start);
	void OnHorn();
	void OnStopTick();
	void OnDriverStateChanged(bool Enter);
	void OnWaterStateChanged(bool Is_Entering_Water);
	void OnWindowBreak(class FName Bone_Name);
	void OnTirePop(class FName Bone_Name);
	void OnDamage(float Damage_Value);
	void OnDestroy();
	void OnBoostStart();
	void OnBoostEnd();
	void OnSleepStateChange(bool Awake);
	void OnHitPlayer(const struct FVector& ImpactPoint);
	void OnHitBuilding(const struct FVector& Impact_Point);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Valet_AudioController_Interface_C">();
	}
	static class IValet_AudioController_Interface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IValet_AudioController_Interface_C>();
	}
};
static_assert(alignof(IValet_AudioController_Interface_C) == 0x000008, "Wrong alignment on IValet_AudioController_Interface_C");
static_assert(sizeof(IValet_AudioController_Interface_C) == 0x000028, "Wrong size on IValet_AudioController_Interface_C");

}

