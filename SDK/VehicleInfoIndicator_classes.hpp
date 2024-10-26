#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VehicleInfoIndicator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass VehicleInfoIndicator.VehicleInfoIndicator_C
// 0x0018 (0x02F8 - 0x02E0)
class UVehicleInfoIndicator_C final : public UFortVehicleInfoIndicatorWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonHealthBar_C*                     CommonHealthBar;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         MaxHealth;                                         // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_VehicleInfoIndicator(int32 EntryPoint);
	void OnVehicleChanged();
	void OnInitialized();
	void OnPlayerVehicleStateChanged_Event(class AFortPlayerPawn* PlayerPawn, class AActor* NewVehicle, class AActor* OldVehicle);
	void OnVehicleHealthChanged();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VehicleInfoIndicator_C">();
	}
	static class UVehicleInfoIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVehicleInfoIndicator_C>();
	}
};
static_assert(alignof(UVehicleInfoIndicator_C) == 0x000008, "Wrong alignment on UVehicleInfoIndicator_C");
static_assert(sizeof(UVehicleInfoIndicator_C) == 0x0002F8, "Wrong size on UVehicleInfoIndicator_C");
static_assert(offsetof(UVehicleInfoIndicator_C, UberGraphFrame) == 0x0002E0, "Member 'UVehicleInfoIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVehicleInfoIndicator_C, CommonHealthBar) == 0x0002E8, "Member 'UVehicleInfoIndicator_C::CommonHealthBar' has a wrong offset!");
static_assert(offsetof(UVehicleInfoIndicator_C, MaxHealth) == 0x0002F0, "Member 'UVehicleInfoIndicator_C::MaxHealth' has a wrong offset!");

}

