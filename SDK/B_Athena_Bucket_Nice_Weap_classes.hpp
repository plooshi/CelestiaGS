#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Athena_Bucket_Nice_Weap

#include "Basic.hpp"

#include "B_ConsumableSmall_Athena_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Athena_Bucket_Nice_Weap.B_Athena_Bucket_Nice_Weap_C
// 0x0010 (0x0C38 - 0x0C28)
class AB_Athena_Bucket_Nice_Weap_C final : public AB_ConsumableSmall_Athena_C
{
public:
	class UParticleSystemComponent*               P_Flopper_BucketNice_InHand;                       // 0x0C28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Can;                                               // 0x0C30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Athena_Bucket_Nice_Weap_C">();
	}
	static class AB_Athena_Bucket_Nice_Weap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Athena_Bucket_Nice_Weap_C>();
	}
};
static_assert(alignof(AB_Athena_Bucket_Nice_Weap_C) == 0x000008, "Wrong alignment on AB_Athena_Bucket_Nice_Weap_C");
static_assert(sizeof(AB_Athena_Bucket_Nice_Weap_C) == 0x000C38, "Wrong size on AB_Athena_Bucket_Nice_Weap_C");
static_assert(offsetof(AB_Athena_Bucket_Nice_Weap_C, P_Flopper_BucketNice_InHand) == 0x000C28, "Member 'AB_Athena_Bucket_Nice_Weap_C::P_Flopper_BucketNice_InHand' has a wrong offset!");
static_assert(offsetof(AB_Athena_Bucket_Nice_Weap_C, Can) == 0x000C30, "Member 'AB_Athena_Bucket_Nice_Weap_C::Can' has a wrong offset!");

}
