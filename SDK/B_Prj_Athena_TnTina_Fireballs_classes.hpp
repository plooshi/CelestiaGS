#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Athena_TnTina_Fireballs

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Prj_Athena_Generic_CurieFireball_Parent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Athena_TnTina_Fireballs.B_Prj_Athena_TnTina_Fireballs_C
// 0x0010 (0x08B8 - 0x08A8)
class AB_Prj_Athena_TnTina_Fireballs_C final : public AB_Prj_Athena_Generic_CurieFireball_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Prj_Athena_TnTina_Fireballs_C;    // 0x08A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        LoopingAudioTell;                                  // 0x08B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Prj_Athena_TnTina_Fireballs(int32 EntryPoint);
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* Param_WaterInteractionComponent, bool bIsFirstBody);
	void Play_Impact_Sound();
	void OnStop(const struct FHitResult& Hit);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Athena_TnTina_Fireballs_C">();
	}
	static class AB_Prj_Athena_TnTina_Fireballs_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Athena_TnTina_Fireballs_C>();
	}
};
static_assert(alignof(AB_Prj_Athena_TnTina_Fireballs_C) == 0x000008, "Wrong alignment on AB_Prj_Athena_TnTina_Fireballs_C");
static_assert(sizeof(AB_Prj_Athena_TnTina_Fireballs_C) == 0x0008B8, "Wrong size on AB_Prj_Athena_TnTina_Fireballs_C");
static_assert(offsetof(AB_Prj_Athena_TnTina_Fireballs_C, UberGraphFrame_B_Prj_Athena_TnTina_Fireballs_C) == 0x0008A8, "Member 'AB_Prj_Athena_TnTina_Fireballs_C::UberGraphFrame_B_Prj_Athena_TnTina_Fireballs_C' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TnTina_Fireballs_C, LoopingAudioTell) == 0x0008B0, "Member 'AB_Prj_Athena_TnTina_Fireballs_C::LoopingAudioTell' has a wrong offset!");

}
