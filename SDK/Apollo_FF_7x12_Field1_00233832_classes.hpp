#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_FF_7x12_Field1_00233832

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Apollo_FF_7x12_Field1_00233832.Apollo_FF_7x12_Field1_C
// 0x0008 (0x0240 - 0x0238)
class AApollo_FF_7x12_Field1_C final : public AFortLevelScriptActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Apollo_FF_7x12_Field1_C">();
	}
	static class AApollo_FF_7x12_Field1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AApollo_FF_7x12_Field1_C>();
	}
};
static_assert(alignof(AApollo_FF_7x12_Field1_C) == 0x000008, "Wrong alignment on AApollo_FF_7x12_Field1_C");
static_assert(sizeof(AApollo_FF_7x12_Field1_C) == 0x000240, "Wrong size on AApollo_FF_7x12_Field1_C");
static_assert(offsetof(AApollo_FF_7x12_Field1_C, DefaultSceneRoot) == 0x000238, "Member 'AApollo_FF_7x12_Field1_C::DefaultSceneRoot' has a wrong offset!");

}

