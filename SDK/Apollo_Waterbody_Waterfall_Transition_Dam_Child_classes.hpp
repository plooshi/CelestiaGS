#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_Waterbody_Waterfall_Transition_Dam_Child

#include "Basic.hpp"

#include "Apollo_Waterbody_Waterfall_Transition_Parent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Apollo_Waterbody_Waterfall_Transition_Dam_Child.Apollo_Waterbody_Waterfall_Transition_Dam_Child_C
// 0x0010 (0x0FA0 - 0x0F90)
class AApollo_Waterbody_Waterfall_Transition_Dam_Child_C final : public AApollo_Waterbody_Waterfall_Transition_Parent_C
{
public:
	class UAudioComponent*                        Dam_Waterfall_Base_Cue;                            // 0x0F88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Dam_Waterfall_Intake_Cue;                          // 0x0F90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Apollo_Waterbody_Waterfall_Transition_Dam_Child_C">();
	}
	static class AApollo_Waterbody_Waterfall_Transition_Dam_Child_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AApollo_Waterbody_Waterfall_Transition_Dam_Child_C>();
	}
};
static_assert(alignof(AApollo_Waterbody_Waterfall_Transition_Dam_Child_C) == 0x000010, "Wrong alignment on AApollo_Waterbody_Waterfall_Transition_Dam_Child_C");
static_assert(sizeof(AApollo_Waterbody_Waterfall_Transition_Dam_Child_C) == 0x000FA0, "Wrong size on AApollo_Waterbody_Waterfall_Transition_Dam_Child_C");
static_assert(offsetof(AApollo_Waterbody_Waterfall_Transition_Dam_Child_C, Dam_Waterfall_Base_Cue) == 0x000F88, "Member 'AApollo_Waterbody_Waterfall_Transition_Dam_Child_C::Dam_Waterfall_Base_Cue' has a wrong offset!");
static_assert(offsetof(AApollo_Waterbody_Waterfall_Transition_Dam_Child_C, Dam_Waterfall_Intake_Cue) == 0x000F90, "Member 'AApollo_Waterbody_Waterfall_Transition_Dam_Child_C::Dam_Waterfall_Intake_Cue' has a wrong offset!");

}
