#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaVehicleFeedback

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "Engine_structs.hpp"
#include "AthenaHUDSituationalFeedback_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaVehicleFeedback.AthenaVehicleFeedback_C
// 0x0030 (0x0300 - 0x02D0)
class UAthenaVehicleFeedback_C final : public UAthenaHUDSituationalFeedback_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AthenaVehicleFeedback_C;            // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class FText>                           SeatActionLabels;                                  // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FName>                           SeatActionNames;                                   // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          DriverEntered;                                     // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void Construct();
	void OnKeybindsChanged_Bind();
	void OnExitVehicle_Bind();
	void OnEnterVehicleDriver_Bind();
	void OnEnterVehiclePassenger_Bind();
	void ExecuteUbergraph_AthenaVehicleFeedback(int32 EntryPoint);

	void GetKeybindInputType(ECommonInputType* InputType) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaVehicleFeedback_C">();
	}
	static class UAthenaVehicleFeedback_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaVehicleFeedback_C>();
	}
};
static_assert(alignof(UAthenaVehicleFeedback_C) == 0x000008, "Wrong alignment on UAthenaVehicleFeedback_C");
static_assert(sizeof(UAthenaVehicleFeedback_C) == 0x000300, "Wrong size on UAthenaVehicleFeedback_C");
static_assert(offsetof(UAthenaVehicleFeedback_C, UberGraphFrame_AthenaVehicleFeedback_C) == 0x0002D0, "Member 'UAthenaVehicleFeedback_C::UberGraphFrame_AthenaVehicleFeedback_C' has a wrong offset!");
static_assert(offsetof(UAthenaVehicleFeedback_C, SeatActionLabels) == 0x0002D8, "Member 'UAthenaVehicleFeedback_C::SeatActionLabels' has a wrong offset!");
static_assert(offsetof(UAthenaVehicleFeedback_C, SeatActionNames) == 0x0002E8, "Member 'UAthenaVehicleFeedback_C::SeatActionNames' has a wrong offset!");
static_assert(offsetof(UAthenaVehicleFeedback_C, DriverEntered) == 0x0002F8, "Member 'UAthenaVehicleFeedback_C::DriverEntered' has a wrong offset!");

}
