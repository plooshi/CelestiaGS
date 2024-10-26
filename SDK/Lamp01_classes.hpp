#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lamp01

#include "Basic.hpp"

#include "Parent_BuildingPropActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Lamp01.Lamp01_C
// 0x0008 (0x0CA8 - 0x0CA0)
class ALamp01_C final : public AParent_BuildingPropActor_C
{
public:
	class UPointLightComponent*                   PointLight;                                        // 0x0CA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Lamp01_C">();
	}
	static class ALamp01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALamp01_C>();
	}
};
static_assert(alignof(ALamp01_C) == 0x000008, "Wrong alignment on ALamp01_C");
static_assert(sizeof(ALamp01_C) == 0x000CA8, "Wrong size on ALamp01_C");
static_assert(offsetof(ALamp01_C, PointLight) == 0x000CA0, "Member 'ALamp01_C::PointLight' has a wrong offset!");

}

