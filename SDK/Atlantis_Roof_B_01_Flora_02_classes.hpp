#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Atlantis_Roof_B_01_Flora_02

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Atlantis_Roof_B_01_Flora_02.Atlantis_Roof_B_01_Flora_02_C
// 0x0008 (0x0B68 - 0x0B60)
class AAtlantis_Roof_B_01_Flora_02_C final : public ABuildingRoof
{
public:
	class UStaticMeshComponent*                   SM_Atlantis_Roof_B_01_Flora_02;                    // 0x0B60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Atlantis_Roof_B_01_Flora_02_C">();
	}
	static class AAtlantis_Roof_B_01_Flora_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAtlantis_Roof_B_01_Flora_02_C>();
	}
};
static_assert(alignof(AAtlantis_Roof_B_01_Flora_02_C) == 0x000008, "Wrong alignment on AAtlantis_Roof_B_01_Flora_02_C");
static_assert(sizeof(AAtlantis_Roof_B_01_Flora_02_C) == 0x000B68, "Wrong size on AAtlantis_Roof_B_01_Flora_02_C");
static_assert(offsetof(AAtlantis_Roof_B_01_Flora_02_C, SM_Atlantis_Roof_B_01_Flora_02) == 0x000B60, "Member 'AAtlantis_Roof_B_01_Flora_02_C::SM_Atlantis_Roof_B_01_Flora_02' has a wrong offset!");

}
