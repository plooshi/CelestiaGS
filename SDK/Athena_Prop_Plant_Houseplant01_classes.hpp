#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Prop_Plant_Houseplant01

#include "Basic.hpp"

#include "Athena_Prop_ParentBuildingContainerBlueprint_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Athena_Prop_Plant_Houseplant01.Athena_Prop_Plant_Houseplant01_C
// 0x0008 (0x0CA8 - 0x0CA0)
class AAthena_Prop_Plant_Houseplant01_C final : public AAthena_Prop_ParentBuildingContainerBlueprint_C
{
public:
	class UParticleSystemComponent*               Loot_Effect;                                       // 0x0CA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_Prop_Plant_Houseplant01_C">();
	}
	static class AAthena_Prop_Plant_Houseplant01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthena_Prop_Plant_Houseplant01_C>();
	}
};
static_assert(alignof(AAthena_Prop_Plant_Houseplant01_C) == 0x000008, "Wrong alignment on AAthena_Prop_Plant_Houseplant01_C");
static_assert(sizeof(AAthena_Prop_Plant_Houseplant01_C) == 0x000CA8, "Wrong size on AAthena_Prop_Plant_Houseplant01_C");
static_assert(offsetof(AAthena_Prop_Plant_Houseplant01_C, Loot_Effect) == 0x000CA0, "Member 'AAthena_Prop_Plant_Houseplant01_C::Loot_Effect' has a wrong offset!");

}
