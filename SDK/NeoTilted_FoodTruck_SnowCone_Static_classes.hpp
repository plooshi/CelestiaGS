#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NeoTilted_FoodTruck_SnowCone_Static

#include "Basic.hpp"

#include "Car_DEFAULT_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NeoTilted_FoodTruck_SnowCone_Static.NeoTilted_FoodTruck_SnowCone_Static_C
// 0x0008 (0x0DB8 - 0x0DB0)
class ANeoTilted_FoodTruck_SnowCone_Static_C final : public ACar_DEFAULT_C
{
public:
	class UStaticMeshComponent*                   SM_NeoT_FoodTruck_Durr;                            // 0x0DB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NeoTilted_FoodTruck_SnowCone_Static_C">();
	}
	static class ANeoTilted_FoodTruck_SnowCone_Static_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANeoTilted_FoodTruck_SnowCone_Static_C>();
	}
};
static_assert(alignof(ANeoTilted_FoodTruck_SnowCone_Static_C) == 0x000008, "Wrong alignment on ANeoTilted_FoodTruck_SnowCone_Static_C");
static_assert(sizeof(ANeoTilted_FoodTruck_SnowCone_Static_C) == 0x000DB8, "Wrong size on ANeoTilted_FoodTruck_SnowCone_Static_C");
static_assert(offsetof(ANeoTilted_FoodTruck_SnowCone_Static_C, SM_NeoT_FoodTruck_Durr) == 0x000DB0, "Member 'ANeoTilted_FoodTruck_SnowCone_Static_C::SM_NeoT_FoodTruck_Durr' has a wrong offset!");

}

