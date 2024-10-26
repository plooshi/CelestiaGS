#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaHoagieReticle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HoagieUI_classes.hpp"
#include "HoagieRuntime_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaHoagieReticle.AthenaHoagieReticle_C
// 0x0058 (0x0300 - 0x02A8)
class UAthenaHoagieReticle_C final : public UFortHoagieVehicleReticle
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro;                                             // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Critical;                                          // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_AltMeter;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BoostMeter;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Horizon;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_pitchdebug;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         MaxAltitudeWithoutFallDamage;                      // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         VehicleMaxAltitude;                                // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               HorizonMID;                                        // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               AltitudeMeterMID;                                  // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentRoll;                                       // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentPitch;                                      // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaHoagieReticle(int32 EntryPoint);
	void HandleAltimeterTraceUpdated();
	void OnSetupComplete();
	void HandleBoostStateChanged(EHoagieBoostState State);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void UpdatePitchRoll(float Dt);
	void UpdateAltitude();
	void UpdateBoostState(EHoagieBoostState State);
	void UpdateBoostValue();
	void UpdateCriticalHealth();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaHoagieReticle_C">();
	}
	static class UAthenaHoagieReticle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaHoagieReticle_C>();
	}
};
static_assert(alignof(UAthenaHoagieReticle_C) == 0x000008, "Wrong alignment on UAthenaHoagieReticle_C");
static_assert(sizeof(UAthenaHoagieReticle_C) == 0x000300, "Wrong size on UAthenaHoagieReticle_C");
static_assert(offsetof(UAthenaHoagieReticle_C, UberGraphFrame) == 0x0002A8, "Member 'UAthenaHoagieReticle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaHoagieReticle_C, Intro) == 0x0002B0, "Member 'UAthenaHoagieReticle_C::Intro' has a wrong offset!");
static_assert(offsetof(UAthenaHoagieReticle_C, Critical) == 0x0002B8, "Member 'UAthenaHoagieReticle_C::Critical' has a wrong offset!");
static_assert(offsetof(UAthenaHoagieReticle_C, Image_AltMeter) == 0x0002C0, "Member 'UAthenaHoagieReticle_C::Image_AltMeter' has a wrong offset!");
static_assert(offsetof(UAthenaHoagieReticle_C, Image_BoostMeter) == 0x0002C8, "Member 'UAthenaHoagieReticle_C::Image_BoostMeter' has a wrong offset!");
static_assert(offsetof(UAthenaHoagieReticle_C, Image_Horizon) == 0x0002D0, "Member 'UAthenaHoagieReticle_C::Image_Horizon' has a wrong offset!");
static_assert(offsetof(UAthenaHoagieReticle_C, Text_pitchdebug) == 0x0002D8, "Member 'UAthenaHoagieReticle_C::Text_pitchdebug' has a wrong offset!");
static_assert(offsetof(UAthenaHoagieReticle_C, MaxAltitudeWithoutFallDamage) == 0x0002E0, "Member 'UAthenaHoagieReticle_C::MaxAltitudeWithoutFallDamage' has a wrong offset!");
static_assert(offsetof(UAthenaHoagieReticle_C, VehicleMaxAltitude) == 0x0002E4, "Member 'UAthenaHoagieReticle_C::VehicleMaxAltitude' has a wrong offset!");
static_assert(offsetof(UAthenaHoagieReticle_C, HorizonMID) == 0x0002E8, "Member 'UAthenaHoagieReticle_C::HorizonMID' has a wrong offset!");
static_assert(offsetof(UAthenaHoagieReticle_C, AltitudeMeterMID) == 0x0002F0, "Member 'UAthenaHoagieReticle_C::AltitudeMeterMID' has a wrong offset!");
static_assert(offsetof(UAthenaHoagieReticle_C, CurrentRoll) == 0x0002F8, "Member 'UAthenaHoagieReticle_C::CurrentRoll' has a wrong offset!");
static_assert(offsetof(UAthenaHoagieReticle_C, CurrentPitch) == 0x0002FC, "Member 'UAthenaHoagieReticle_C::CurrentPitch' has a wrong offset!");

}

