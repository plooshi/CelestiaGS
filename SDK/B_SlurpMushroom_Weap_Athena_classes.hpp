#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SlurpMushroom_Weap_Athena

#include "Basic.hpp"

#include "B_UtilityItem_Generic_Athena_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_SlurpMushroom_Weap_Athena.B_SlurpMushroom_Weap_Athena_C
// 0x0010 (0x0C38 - 0x0C28)
class AB_SlurpMushroom_Weap_Athena_C final : public AB_UtilityItem_Generic_Athena_C
{
public:
	class UStaticMeshComponent*                   SM_Motes;                                          // 0x0C28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0C30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_SlurpMushroom_Weap_Athena_C">();
	}
	static class AB_SlurpMushroom_Weap_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_SlurpMushroom_Weap_Athena_C>();
	}
};
static_assert(alignof(AB_SlurpMushroom_Weap_Athena_C) == 0x000008, "Wrong alignment on AB_SlurpMushroom_Weap_Athena_C");
static_assert(sizeof(AB_SlurpMushroom_Weap_Athena_C) == 0x000C38, "Wrong size on AB_SlurpMushroom_Weap_Athena_C");
static_assert(offsetof(AB_SlurpMushroom_Weap_Athena_C, SM_Motes) == 0x000C28, "Member 'AB_SlurpMushroom_Weap_Athena_C::SM_Motes' has a wrong offset!");
static_assert(offsetof(AB_SlurpMushroom_Weap_Athena_C, StaticMesh) == 0x000C30, "Member 'AB_SlurpMushroom_Weap_Athena_C::StaticMesh' has a wrong offset!");

}
