#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LAb_Stadium_Floodlight_Off

#include "Basic.hpp"

#include "Parent_BuildingPropActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LAb_Stadium_Floodlight_Off.LAb_Stadium_Floodlight_Off_C
// 0x0010 (0x0CB0 - 0x0CA0)
class ALAb_Stadium_Floodlight_Off_C final : public AParent_BuildingPropActor_C
{
public:
	class UMaterialInstanceDynamic*               Coneintensity;                                     // 0x0CA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               EmissiveMult;                                      // 0x0CA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LAb_Stadium_Floodlight_Off_C">();
	}
	static class ALAb_Stadium_Floodlight_Off_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALAb_Stadium_Floodlight_Off_C>();
	}
};
static_assert(alignof(ALAb_Stadium_Floodlight_Off_C) == 0x000008, "Wrong alignment on ALAb_Stadium_Floodlight_Off_C");
static_assert(sizeof(ALAb_Stadium_Floodlight_Off_C) == 0x000CB0, "Wrong size on ALAb_Stadium_Floodlight_Off_C");
static_assert(offsetof(ALAb_Stadium_Floodlight_Off_C, Coneintensity) == 0x000CA0, "Member 'ALAb_Stadium_Floodlight_Off_C::Coneintensity' has a wrong offset!");
static_assert(offsetof(ALAb_Stadium_Floodlight_Off_C, EmissiveMult) == 0x000CA8, "Member 'ALAb_Stadium_Floodlight_Off_C::EmissiveMult' has a wrong offset!");

}

