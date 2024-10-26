#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Streetlight_Suburban03

#include "Basic.hpp"

#include "Parent_BuildingPropActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Streetlight_Suburban03.Streetlight_Suburban03_C
// 0x0008 (0x0CA8 - 0x0CA0)
class AStreetlight_Suburban03_C final : public AParent_BuildingPropActor_C
{
public:
	class USpotLightComponent*                    SpotLight;                                         // 0x0CA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Streetlight_Suburban03_C">();
	}
	static class AStreetlight_Suburban03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AStreetlight_Suburban03_C>();
	}
};
static_assert(alignof(AStreetlight_Suburban03_C) == 0x000008, "Wrong alignment on AStreetlight_Suburban03_C");
static_assert(sizeof(AStreetlight_Suburban03_C) == 0x000CA8, "Wrong size on AStreetlight_Suburban03_C");
static_assert(offsetof(AStreetlight_Suburban03_C, SpotLight) == 0x000CA0, "Member 'AStreetlight_Suburban03_C::SpotLight' has a wrong offset!");

}

