#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Utility_Lawnmower_Fancy_01

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Utility_Lawnmower_Fancy_01.Utility_Lawnmower_Fancy_01_C
// 0x0028 (0x0BE8 - 0x0BC0)
class AUtility_Lawnmower_Fancy_01_C final : public ABuildingProp
{
public:
	class UStaticMeshComponent*                   SM_Wood_Ramp_01;                                   // 0x0BC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Industrial_WagonWheel_04;                          // 0x0BC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Industrial_WagonWheel_03;                          // 0x0BD0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Industrial_WagonWheel_02;                          // 0x0BD8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Industrial_WagonWheel_01;                          // 0x0BE0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Utility_Lawnmower_Fancy_01_C">();
	}
	static class AUtility_Lawnmower_Fancy_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AUtility_Lawnmower_Fancy_01_C>();
	}
};
static_assert(alignof(AUtility_Lawnmower_Fancy_01_C) == 0x000008, "Wrong alignment on AUtility_Lawnmower_Fancy_01_C");
static_assert(sizeof(AUtility_Lawnmower_Fancy_01_C) == 0x000BE8, "Wrong size on AUtility_Lawnmower_Fancy_01_C");
static_assert(offsetof(AUtility_Lawnmower_Fancy_01_C, SM_Wood_Ramp_01) == 0x000BC0, "Member 'AUtility_Lawnmower_Fancy_01_C::SM_Wood_Ramp_01' has a wrong offset!");
static_assert(offsetof(AUtility_Lawnmower_Fancy_01_C, Industrial_WagonWheel_04) == 0x000BC8, "Member 'AUtility_Lawnmower_Fancy_01_C::Industrial_WagonWheel_04' has a wrong offset!");
static_assert(offsetof(AUtility_Lawnmower_Fancy_01_C, Industrial_WagonWheel_03) == 0x000BD0, "Member 'AUtility_Lawnmower_Fancy_01_C::Industrial_WagonWheel_03' has a wrong offset!");
static_assert(offsetof(AUtility_Lawnmower_Fancy_01_C, Industrial_WagonWheel_02) == 0x000BD8, "Member 'AUtility_Lawnmower_Fancy_01_C::Industrial_WagonWheel_02' has a wrong offset!");
static_assert(offsetof(AUtility_Lawnmower_Fancy_01_C, Industrial_WagonWheel_01) == 0x000BE0, "Member 'AUtility_Lawnmower_Fancy_01_C::Industrial_WagonWheel_01' has a wrong offset!");

}
