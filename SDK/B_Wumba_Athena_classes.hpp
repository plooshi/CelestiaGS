#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Wumba_Athena

#include "Basic.hpp"

#include "B_ConsumableSmall_Athena_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Wumba_Athena.B_Wumba_Athena_C
// 0x0008 (0x0C30 - 0x0C28)
class AB_Wumba_Athena_C final : public AB_ConsumableSmall_Athena_C
{
public:
	class USkeletalMeshComponentBudgeted*         RepositionedMesh;                                  // 0x0C28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Wumba_Athena_C">();
	}
	static class AB_Wumba_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Wumba_Athena_C>();
	}
};
static_assert(alignof(AB_Wumba_Athena_C) == 0x000008, "Wrong alignment on AB_Wumba_Athena_C");
static_assert(sizeof(AB_Wumba_Athena_C) == 0x000C30, "Wrong size on AB_Wumba_Athena_C");
static_assert(offsetof(AB_Wumba_Athena_C, RepositionedMesh) == 0x000C28, "Member 'AB_Wumba_Athena_C::RepositionedMesh' has a wrong offset!");

}

