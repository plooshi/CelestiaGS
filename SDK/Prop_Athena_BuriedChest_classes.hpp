#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_Athena_BuriedChest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Prop_Athena_BuriedChest.Prop_Athena_BuriedChest_C
// 0x0140 (0x0D00 - 0x0BC0)
class AProp_Athena_BuriedChest_C final : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BC0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Dirt1;                                             // 0x0BC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      OwnerOverlap;                                      // 0x0BD0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       HitBox;                                            // 0x0BD8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AB_Athena_BuriedChest_Chest_C*          ChestObject;                                       // 0x0BE0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ZOffset;                                           // 0x0BE8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ChestRaisePerHit;                                  // 0x0BF4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumTimesHit;                                       // 0x0C00(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxTimesHit;                                       // 0x0C04(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        DigParticle;                                       // 0x0C08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        FinalHitParticle;                                  // 0x0C10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ChestRotNormal;                                    // 0x0C18(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TraceForChestOffset;                               // 0x0C24(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ChestCurrentPos;                                   // 0x0C30(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DirtMoveOnHit;                                     // 0x0C3C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DirtScaleOnHit;                                    // 0x0C48(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65E0[0x4];                                     // 0x0C54(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRotator>                       ChestRotPattern;                                   // 0x0C58(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                         Pad_65E1[0x8];                                     // 0x0C68(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             DirtTransform;                                     // 0x0C70(0x0030)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	struct FRotator                               ChestCurrentRot;                                   // 0x0CA0(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          MaxDug;                                            // 0x0CAC(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          BeenDug;                                           // 0x0CAD(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65E2[0x2];                                     // 0x0CAE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ChestInitialLoc;                                   // 0x0CB0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65E3[0x4];                                     // 0x0CBC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         Row_MaxChanceToSpawn;                              // 0x0CC0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_MinChanceToSpawn;                              // 0x0CE0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Prop_Athena_BuriedChest(int32 EntryPoint);
	void ClientMoveChestRot(const struct FRotator& ChestRot);
	void ClientMoveChestLoc(const struct FVector& ChestLoc);
	void OnBeenDug();
	void OnMaxDug();
	void UnhideDirt();
	void TriggerDigFX(const struct FVector& Location);
	void MoveChest();
	void OnDamageTaken(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void ReceiveBeginPlay();
	void OnReady_063C028E4FA3620116C853828C1FABF5(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void FindPlacementNormal();
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);
	void OnRep_DirtTransform();
	void OnRep_ChestCurrentPos();
	void OnRep_ChestCurrentRot();
	void OnRep_MaxDug();
	bool GetSpawnChance();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Prop_Athena_BuriedChest_C">();
	}
	static class AProp_Athena_BuriedChest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_Athena_BuriedChest_C>();
	}
};
static_assert(alignof(AProp_Athena_BuriedChest_C) == 0x000010, "Wrong alignment on AProp_Athena_BuriedChest_C");
static_assert(sizeof(AProp_Athena_BuriedChest_C) == 0x000D00, "Wrong size on AProp_Athena_BuriedChest_C");
static_assert(offsetof(AProp_Athena_BuriedChest_C, UberGraphFrame) == 0x000BC0, "Member 'AProp_Athena_BuriedChest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_C, Dirt1) == 0x000BC8, "Member 'AProp_Athena_BuriedChest_C::Dirt1' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_C, OwnerOverlap) == 0x000BD0, "Member 'AProp_Athena_BuriedChest_C::OwnerOverlap' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_C, HitBox) == 0x000BD8, "Member 'AProp_Athena_BuriedChest_C::HitBox' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_C, ChestObject) == 0x000BE0, "Member 'AProp_Athena_BuriedChest_C::ChestObject' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_C, ZOffset) == 0x000BE8, "Member 'AProp_Athena_BuriedChest_C::ZOffset' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_C, ChestRaisePerHit) == 0x000BF4, "Member 'AProp_Athena_BuriedChest_C::ChestRaisePerHit' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_C, NumTimesHit) == 0x000C00, "Member 'AProp_Athena_BuriedChest_C::NumTimesHit' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_C, MaxTimesHit) == 0x000C04, "Member 'AProp_Athena_BuriedChest_C::MaxTimesHit' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_C, DigParticle) == 0x000C08, "Member 'AProp_Athena_BuriedChest_C::DigParticle' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_C, FinalHitParticle) == 0x000C10, "Member 'AProp_Athena_BuriedChest_C::FinalHitParticle' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_C, ChestRotNormal) == 0x000C18, "Member 'AProp_Athena_BuriedChest_C::ChestRotNormal' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_C, TraceForChestOffset) == 0x000C24, "Member 'AProp_Athena_BuriedChest_C::TraceForChestOffset' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_C, ChestCurrentPos) == 0x000C30, "Member 'AProp_Athena_BuriedChest_C::ChestCurrentPos' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_C, DirtMoveOnHit) == 0x000C3C, "Member 'AProp_Athena_BuriedChest_C::DirtMoveOnHit' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_C, DirtScaleOnHit) == 0x000C48, "Member 'AProp_Athena_BuriedChest_C::DirtScaleOnHit' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_C, ChestRotPattern) == 0x000C58, "Member 'AProp_Athena_BuriedChest_C::ChestRotPattern' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_C, DirtTransform) == 0x000C70, "Member 'AProp_Athena_BuriedChest_C::DirtTransform' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_C, ChestCurrentRot) == 0x000CA0, "Member 'AProp_Athena_BuriedChest_C::ChestCurrentRot' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_C, MaxDug) == 0x000CAC, "Member 'AProp_Athena_BuriedChest_C::MaxDug' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_C, BeenDug) == 0x000CAD, "Member 'AProp_Athena_BuriedChest_C::BeenDug' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_C, ChestInitialLoc) == 0x000CB0, "Member 'AProp_Athena_BuriedChest_C::ChestInitialLoc' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_C, Row_MaxChanceToSpawn) == 0x000CC0, "Member 'AProp_Athena_BuriedChest_C::Row_MaxChanceToSpawn' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_C, Row_MinChanceToSpawn) == 0x000CE0, "Member 'AProp_Athena_BuriedChest_C::Row_MinChanceToSpawn' has a wrong offset!");

}
