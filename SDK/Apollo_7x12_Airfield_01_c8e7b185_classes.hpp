#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_7x12_Airfield_01_c8e7b185

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Apollo_7x12_Airfield_01_c8e7b185.Apollo_7x12_Airfield_01_C
// 0x0008 (0x0240 - 0x0238)
class AApollo_7x12_Airfield_01_C final : public AFortLevelScriptActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Apollo_7x12_Airfield_01_C">();
	}
	static class AApollo_7x12_Airfield_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AApollo_7x12_Airfield_01_C>();
	}
};
static_assert(alignof(AApollo_7x12_Airfield_01_C) == 0x000008, "Wrong alignment on AApollo_7x12_Airfield_01_C");
static_assert(sizeof(AApollo_7x12_Airfield_01_C) == 0x000240, "Wrong size on AApollo_7x12_Airfield_01_C");
static_assert(offsetof(AApollo_7x12_Airfield_01_C, DefaultSceneRoot) == 0x000238, "Member 'AApollo_7x12_Airfield_01_C::DefaultSceneRoot' has a wrong offset!");

}

