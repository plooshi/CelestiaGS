#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_SUB_5x5_House_b_e2211eb7

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Apollo_SUB_5x5_House_b_e2211eb7.Apollo_SUB_5x5_House_b_C
// 0x0008 (0x0240 - 0x0238)
class AApollo_SUB_5x5_House_b_C final : public AFortLevelScriptActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Apollo_SUB_5x5_House_b_C">();
	}
	static class AApollo_SUB_5x5_House_b_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AApollo_SUB_5x5_House_b_C>();
	}
};
static_assert(alignof(AApollo_SUB_5x5_House_b_C) == 0x000008, "Wrong alignment on AApollo_SUB_5x5_House_b_C");
static_assert(sizeof(AApollo_SUB_5x5_House_b_C) == 0x000240, "Wrong size on AApollo_SUB_5x5_House_b_C");
static_assert(offsetof(AApollo_SUB_5x5_House_b_C, DefaultSceneRoot) == 0x000238, "Member 'AApollo_SUB_5x5_House_b_C::DefaultSceneRoot' has a wrong offset!");

}
