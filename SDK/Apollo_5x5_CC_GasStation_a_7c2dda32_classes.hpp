#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_5x5_CC_GasStation_a_7c2dda32

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Apollo_5x5_CC_GasStation_a_7c2dda32.Apollo_5x5_CC_GasStation_a_C
// 0x0008 (0x0240 - 0x0238)
class AApollo_5x5_CC_GasStation_a_C final : public AFortLevelScriptActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Apollo_5x5_CC_GasStation_a_C">();
	}
	static class AApollo_5x5_CC_GasStation_a_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AApollo_5x5_CC_GasStation_a_C>();
	}
};
static_assert(alignof(AApollo_5x5_CC_GasStation_a_C) == 0x000008, "Wrong alignment on AApollo_5x5_CC_GasStation_a_C");
static_assert(sizeof(AApollo_5x5_CC_GasStation_a_C) == 0x000240, "Wrong size on AApollo_5x5_CC_GasStation_a_C");
static_assert(offsetof(AApollo_5x5_CC_GasStation_a_C, DefaultSceneRoot) == 0x000238, "Member 'AApollo_5x5_CC_GasStation_a_C::DefaultSceneRoot' has a wrong offset!");

}
