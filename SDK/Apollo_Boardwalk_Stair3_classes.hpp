#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_Boardwalk_Stair3

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Apollo_Boardwalk_Stair3.Apollo_Boardwalk_Stair3_C
// 0x0008 (0x0B70 - 0x0B68)
class AApollo_Boardwalk_Stair3_C final : public ABuildingStairs
{
public:
	class UAudioComponent*                        WoodCreakSound;                                    // 0x0B68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Apollo_Boardwalk_Stair3_C">();
	}
	static class AApollo_Boardwalk_Stair3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AApollo_Boardwalk_Stair3_C>();
	}
};
static_assert(alignof(AApollo_Boardwalk_Stair3_C) == 0x000008, "Wrong alignment on AApollo_Boardwalk_Stair3_C");
static_assert(sizeof(AApollo_Boardwalk_Stair3_C) == 0x000B70, "Wrong size on AApollo_Boardwalk_Stair3_C");
static_assert(offsetof(AApollo_Boardwalk_Stair3_C, WoodCreakSound) == 0x000B68, "Member 'AApollo_Boardwalk_Stair3_C::WoodCreakSound' has a wrong offset!");

}
