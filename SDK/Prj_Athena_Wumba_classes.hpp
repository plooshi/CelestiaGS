#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prj_Athena_Wumba

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "B_Prj_ThrownConsumable_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Prj_Athena_Wumba.Prj_Athena_Wumba_C
// 0x0078 (0x0980 - 0x0908)
class APrj_Athena_Wumba_C final : public AB_Prj_ThrownConsumable_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prj_Athena_Wumba_C;                 // 0x0908(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 Wumba_Gadget_Item_Wumba_Quad_LOD0;                 // 0x0910(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*               AGID;                                              // 0x0918(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        SpawnFX_Water;                                     // 0x0920(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Splash_Sound_;                                     // 0x0928(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        SpawnFX;                                           // 0x0930(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 WumbaActor;                                        // 0x0938(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ResimulateVelocity;                                // 0x0940(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7BA5[0x4];                                     // 0x094C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        BounceFX;                                          // 0x0950(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             BounceSound;                                       // 0x0958(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           WumbaTag;                                          // 0x0960(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         CollisionRadiusCheck;                              // 0x0968(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7BA6[0x4];                                     // 0x096C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CollisionWith;                                     // 0x0970(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Prj_Athena_Wumba(int32 EntryPoint);
	void BounceFxEvent();
	void OnStop(const struct FHitResult& Hit);
	void OnBounce(const struct FHitResult& Hit);
	void SpawnedItemFx();
	void WaterImpactItemFX();
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* Param_WaterInteractionComponent, bool bIsFirstBody);
	void CheckForCollisionInRadius(const struct FVector& SpherePos, bool* bVehicleCollisionDetected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Prj_Athena_Wumba_C">();
	}
	static class APrj_Athena_Wumba_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APrj_Athena_Wumba_C>();
	}
};
static_assert(alignof(APrj_Athena_Wumba_C) == 0x000008, "Wrong alignment on APrj_Athena_Wumba_C");
static_assert(sizeof(APrj_Athena_Wumba_C) == 0x000980, "Wrong size on APrj_Athena_Wumba_C");
static_assert(offsetof(APrj_Athena_Wumba_C, UberGraphFrame_Prj_Athena_Wumba_C) == 0x000908, "Member 'APrj_Athena_Wumba_C::UberGraphFrame_Prj_Athena_Wumba_C' has a wrong offset!");
static_assert(offsetof(APrj_Athena_Wumba_C, Wumba_Gadget_Item_Wumba_Quad_LOD0) == 0x000910, "Member 'APrj_Athena_Wumba_C::Wumba_Gadget_Item_Wumba_Quad_LOD0' has a wrong offset!");
static_assert(offsetof(APrj_Athena_Wumba_C, AGID) == 0x000918, "Member 'APrj_Athena_Wumba_C::AGID' has a wrong offset!");
static_assert(offsetof(APrj_Athena_Wumba_C, SpawnFX_Water) == 0x000920, "Member 'APrj_Athena_Wumba_C::SpawnFX_Water' has a wrong offset!");
static_assert(offsetof(APrj_Athena_Wumba_C, Splash_Sound_) == 0x000928, "Member 'APrj_Athena_Wumba_C::Splash_Sound_' has a wrong offset!");
static_assert(offsetof(APrj_Athena_Wumba_C, SpawnFX) == 0x000930, "Member 'APrj_Athena_Wumba_C::SpawnFX' has a wrong offset!");
static_assert(offsetof(APrj_Athena_Wumba_C, WumbaActor) == 0x000938, "Member 'APrj_Athena_Wumba_C::WumbaActor' has a wrong offset!");
static_assert(offsetof(APrj_Athena_Wumba_C, ResimulateVelocity) == 0x000940, "Member 'APrj_Athena_Wumba_C::ResimulateVelocity' has a wrong offset!");
static_assert(offsetof(APrj_Athena_Wumba_C, BounceFX) == 0x000950, "Member 'APrj_Athena_Wumba_C::BounceFX' has a wrong offset!");
static_assert(offsetof(APrj_Athena_Wumba_C, BounceSound) == 0x000958, "Member 'APrj_Athena_Wumba_C::BounceSound' has a wrong offset!");
static_assert(offsetof(APrj_Athena_Wumba_C, WumbaTag) == 0x000960, "Member 'APrj_Athena_Wumba_C::WumbaTag' has a wrong offset!");
static_assert(offsetof(APrj_Athena_Wumba_C, CollisionRadiusCheck) == 0x000968, "Member 'APrj_Athena_Wumba_C::CollisionRadiusCheck' has a wrong offset!");
static_assert(offsetof(APrj_Athena_Wumba_C, CollisionWith) == 0x000970, "Member 'APrj_Athena_Wumba_C::CollisionWith' has a wrong offset!");

}
