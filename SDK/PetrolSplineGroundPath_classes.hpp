#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PetrolSplineGroundPath

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PetrolSplineGroundPath.PetrolSplineGroundPath_C
// 0x0008 (0x0A38 - 0x0A30)
class APetrolSplineGroundPath_C final : public AFortSplineGroundPath
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0A30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PetrolSplineGroundPath_C">();
	}
	static class APetrolSplineGroundPath_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APetrolSplineGroundPath_C>();
	}
};
static_assert(alignof(APetrolSplineGroundPath_C) == 0x000008, "Wrong alignment on APetrolSplineGroundPath_C");
static_assert(sizeof(APetrolSplineGroundPath_C) == 0x000A38, "Wrong size on APetrolSplineGroundPath_C");
static_assert(offsetof(APetrolSplineGroundPath_C, DefaultSceneRoot) == 0x000A30, "Member 'APetrolSplineGroundPath_C::DefaultSceneRoot' has a wrong offset!");

}
