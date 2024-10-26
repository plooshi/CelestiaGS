#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Wall_Light

#include "Basic.hpp"

#include "Parent_BuildingPropActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Wall_Light.Wall_Light_C
// 0x0010 (0x0CB0 - 0x0CA0)
class AWall_Light_C final : public AParent_BuildingPropActor_C
{
public:
	class USpotLightComponent*                    SpotLight1;                                        // 0x0CA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight;                                         // 0x0CA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Wall_Light_C">();
	}
	static class AWall_Light_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWall_Light_C>();
	}
};
static_assert(alignof(AWall_Light_C) == 0x000008, "Wrong alignment on AWall_Light_C");
static_assert(sizeof(AWall_Light_C) == 0x000CB0, "Wrong size on AWall_Light_C");
static_assert(offsetof(AWall_Light_C, SpotLight1) == 0x000CA0, "Member 'AWall_Light_C::SpotLight1' has a wrong offset!");
static_assert(offsetof(AWall_Light_C, SpotLight) == 0x000CA8, "Member 'AWall_Light_C::SpotLight' has a wrong offset!");

}

