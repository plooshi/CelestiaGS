#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LanternGlow

#include "Basic.hpp"

#include "Parent_BuildingPropActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LanternGlow.LanternGlow_C
// 0x0008 (0x0CA8 - 0x0CA0)
class ALanternGlow_C final : public AParent_BuildingPropActor_C
{
public:
	class UPointLightComponent*                   PointLight;                                        // 0x0CA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LanternGlow_C">();
	}
	static class ALanternGlow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALanternGlow_C>();
	}
};
static_assert(alignof(ALanternGlow_C) == 0x000008, "Wrong alignment on ALanternGlow_C");
static_assert(sizeof(ALanternGlow_C) == 0x000CA8, "Wrong size on ALanternGlow_C");
static_assert(offsetof(ALanternGlow_C, PointLight) == 0x000CA0, "Member 'ALanternGlow_C::PointLight' has a wrong offset!");

}
