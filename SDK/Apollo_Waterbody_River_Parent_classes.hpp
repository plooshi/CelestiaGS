#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_Waterbody_River_Parent

#include "Basic.hpp"

#include "FortWaterBodyBP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Apollo_Waterbody_River_Parent.Apollo_Waterbody_River_Parent_C
// 0x0000 (0x0F50 - 0x0F50)
class AApollo_Waterbody_River_Parent_C : public AFortWaterBodyBP_C
{
public:
	class UFortSplineWaterAudioComponent*         FortSplineWaterAudio;                              // 0x0F48(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Apollo_Waterbody_River_Parent_C">();
	}
	static class AApollo_Waterbody_River_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AApollo_Waterbody_River_Parent_C>();
	}
};
static_assert(alignof(AApollo_Waterbody_River_Parent_C) == 0x000010, "Wrong alignment on AApollo_Waterbody_River_Parent_C");
static_assert(sizeof(AApollo_Waterbody_River_Parent_C) == 0x000F50, "Wrong size on AApollo_Waterbody_River_Parent_C");
static_assert(offsetof(AApollo_Waterbody_River_Parent_C, FortSplineWaterAudio) == 0x000F48, "Member 'AApollo_Waterbody_River_Parent_C::FortSplineWaterAudio' has a wrong offset!");

}
