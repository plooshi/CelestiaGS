#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_Prop_Commerce_VendingMachine_Drink

#include "Basic.hpp"

#include "Athena_Prop_ParentBuildingContainerBlueprint_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Apollo_Prop_Commerce_VendingMachine_Drink.Apollo_Prop_Commerce_VendingMachine_Drink_C
// 0x0008 (0x0CA8 - 0x0CA0)
class AApollo_Prop_Commerce_VendingMachine_Drink_C final : public AAthena_Prop_ParentBuildingContainerBlueprint_C
{
public:
	class USpotLightComponent*                    SpotLight;                                         // 0x0CA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Apollo_Prop_Commerce_VendingMachine_Drink_C">();
	}
	static class AApollo_Prop_Commerce_VendingMachine_Drink_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AApollo_Prop_Commerce_VendingMachine_Drink_C>();
	}
};
static_assert(alignof(AApollo_Prop_Commerce_VendingMachine_Drink_C) == 0x000008, "Wrong alignment on AApollo_Prop_Commerce_VendingMachine_Drink_C");
static_assert(sizeof(AApollo_Prop_Commerce_VendingMachine_Drink_C) == 0x000CA8, "Wrong size on AApollo_Prop_Commerce_VendingMachine_Drink_C");
static_assert(offsetof(AApollo_Prop_Commerce_VendingMachine_Drink_C, SpotLight) == 0x000CA0, "Member 'AApollo_Prop_Commerce_VendingMachine_Drink_C::SpotLight' has a wrong offset!");

}
