#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_PowerPlant_ReactorCore_01

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Apollo_PowerPlant_ReactorCore_01.Apollo_PowerPlant_ReactorCore_01_C
// 0x0008 (0x0BC8 - 0x0BC0)
class AApollo_PowerPlant_ReactorCore_01_C final : public ABuildingProp
{
public:
	class UAudioComponent*                        PowerPlant_Vat_Cue;                                // 0x0BC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Apollo_PowerPlant_ReactorCore_01_C">();
	}
	static class AApollo_PowerPlant_ReactorCore_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AApollo_PowerPlant_ReactorCore_01_C>();
	}
};
static_assert(alignof(AApollo_PowerPlant_ReactorCore_01_C) == 0x000008, "Wrong alignment on AApollo_PowerPlant_ReactorCore_01_C");
static_assert(sizeof(AApollo_PowerPlant_ReactorCore_01_C) == 0x000BC8, "Wrong size on AApollo_PowerPlant_ReactorCore_01_C");
static_assert(offsetof(AApollo_PowerPlant_ReactorCore_01_C, PowerPlant_Vat_Cue) == 0x000BC0, "Member 'AApollo_PowerPlant_ReactorCore_01_C::PowerPlant_Vat_Cue' has a wrong offset!");

}
