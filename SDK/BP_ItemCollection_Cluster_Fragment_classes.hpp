#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemCollection_Cluster_Fragment

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ItemCollection_Cluster_Fragment.BP_ItemCollection_Cluster_Fragment_C
// 0x01F8 (0x0418 - 0x0220)
class ABP_ItemCollection_Cluster_Fragment_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortWaterInteractionComponent*         FortWaterInteraction;                              // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Trail;                                             // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   GlowMesh;                                          // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Coin;                                           // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortProjectileMovementComponent*       FortProjectileMovement;                            // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       CollectOverlap;                                    // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ExpirationTL__Direction_69EC6C574106FB90FF42CE8659620B1B; // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78A9[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ExpirationTL;                                      // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PickedUp_TL_Location_91349959401DDDA4617E0399D86FE04F; // 0x0270(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PickedUp_TL_BobHeight_91349959401DDDA4617E0399D86FE04F; // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PickedUp_TL_zRotation_91349959401DDDA4617E0399D86FE04F; // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PickedUp_TL_Scale_91349959401DDDA4617E0399D86FE04F; // 0x0284(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            PickedUp_TL__Direction_91349959401DDDA4617E0399D86FE04F; // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78AA[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     PickedUp_TL;                                       // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpinTL_PulseTime_A26CA63F4A439226A97778B55AE7B628; // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpinTL_RiseTime_A26CA63F4A439226A97778B55AE7B628;  // 0x029C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            SpinTL__Direction_A26CA63F4A439226A97778B55AE7B628; // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78AB[0x7];                                     // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     SpinTL;                                            // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USoundBase*>                     CoinCollectionSound;                               // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class USoundBase*                             CoinSpinSound;                                     // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Test_Item;                                         // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_78AC[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortQuestItemDefinition*               CollectItemQuest;                                  // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   QuestBackendName;                                  // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FGameplayTagContainer                  ObjStatTag;                                        // 0x02E0(0x0020)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FGameplayTagContainer                  BlockedPlaylistTags;                               // 0x0300(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          UseLight;                                          // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78AD[0x3];                                     // 0x0321(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           LightColor;                                        // 0x0324(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78AE[0x4];                                     // 0x0334(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MID0;                                              // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID1;                                              // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PreShrunkScale;                                    // 0x0348(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CoinRelativeTransform;                             // 0x0354(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CoinRelativeRotationZ;                             // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BobHeightMax;                                      // 0x0364(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BobHeightMin;                                      // 0x0374(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78AF[0x4];                                     // 0x0384(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        CoinCollectionEmitter;                             // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           LoopTimerHandle;                                   // 0x0390(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         DelayBetweenSpin;                                  // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RelativeRotationAmount;                            // 0x039C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CurrentRelativeScale;                              // 0x03A0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PulseSizeMultiplier;                               // 0x03AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color0;                                            // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color1;                                            // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        CoinExpirationEmitter;                             // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID2;                                              // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Fragment_Spawn;                                    // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CollectionCount;                                   // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78B0[0x4];                                     // 0x03EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             CoinComboSound;                                    // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  ComboTag;                                          // 0x03F8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_ItemCollection_Cluster_Fragment(int32 EntryPoint);
	void TimerSafeguard();
	void BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void ComboCosmetics();
	void ReplicateSound(class USoundBase* ReplicatedSound);
	void SelectSound();
	void EndSpinning();
	void LoopForwards();
	void LoopBackwards();
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_7_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void ReceiveBeginPlay();
	void Collected(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExpirationTL__VisibilityToggle__EventFunc();
	void ExpirationTL__ParticleSpawn__EventFunc();
	void ExpirationTL__UpdateFunc();
	void ExpirationTL__FinishedFunc();
	void PickedUp_TL__SpawnParticles__EventFunc();
	void PickedUp_TL__UpdateFunc();
	void PickedUp_TL__FinishedFunc();
	void SpinTL__Start_Spin__EventFunc();
	void SpinTL__UpdateFunc();
	void SpinTL__FinishedFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ItemCollection_Cluster_Fragment_C">();
	}
	static class ABP_ItemCollection_Cluster_Fragment_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ItemCollection_Cluster_Fragment_C>();
	}
};
static_assert(alignof(ABP_ItemCollection_Cluster_Fragment_C) == 0x000008, "Wrong alignment on ABP_ItemCollection_Cluster_Fragment_C");
static_assert(sizeof(ABP_ItemCollection_Cluster_Fragment_C) == 0x000418, "Wrong size on ABP_ItemCollection_Cluster_Fragment_C");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, UberGraphFrame) == 0x000220, "Member 'ABP_ItemCollection_Cluster_Fragment_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, FortWaterInteraction) == 0x000228, "Member 'ABP_ItemCollection_Cluster_Fragment_C::FortWaterInteraction' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, Trail) == 0x000230, "Member 'ABP_ItemCollection_Cluster_Fragment_C::Trail' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, GlowMesh) == 0x000238, "Member 'ABP_ItemCollection_Cluster_Fragment_C::GlowMesh' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, SM_Coin) == 0x000240, "Member 'ABP_ItemCollection_Cluster_Fragment_C::SM_Coin' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, FortProjectileMovement) == 0x000248, "Member 'ABP_ItemCollection_Cluster_Fragment_C::FortProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, CollectOverlap) == 0x000250, "Member 'ABP_ItemCollection_Cluster_Fragment_C::CollectOverlap' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, Sphere) == 0x000258, "Member 'ABP_ItemCollection_Cluster_Fragment_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, ExpirationTL__Direction_69EC6C574106FB90FF42CE8659620B1B) == 0x000260, "Member 'ABP_ItemCollection_Cluster_Fragment_C::ExpirationTL__Direction_69EC6C574106FB90FF42CE8659620B1B' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, ExpirationTL) == 0x000268, "Member 'ABP_ItemCollection_Cluster_Fragment_C::ExpirationTL' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, PickedUp_TL_Location_91349959401DDDA4617E0399D86FE04F) == 0x000270, "Member 'ABP_ItemCollection_Cluster_Fragment_C::PickedUp_TL_Location_91349959401DDDA4617E0399D86FE04F' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, PickedUp_TL_BobHeight_91349959401DDDA4617E0399D86FE04F) == 0x00027C, "Member 'ABP_ItemCollection_Cluster_Fragment_C::PickedUp_TL_BobHeight_91349959401DDDA4617E0399D86FE04F' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, PickedUp_TL_zRotation_91349959401DDDA4617E0399D86FE04F) == 0x000280, "Member 'ABP_ItemCollection_Cluster_Fragment_C::PickedUp_TL_zRotation_91349959401DDDA4617E0399D86FE04F' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, PickedUp_TL_Scale_91349959401DDDA4617E0399D86FE04F) == 0x000284, "Member 'ABP_ItemCollection_Cluster_Fragment_C::PickedUp_TL_Scale_91349959401DDDA4617E0399D86FE04F' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, PickedUp_TL__Direction_91349959401DDDA4617E0399D86FE04F) == 0x000288, "Member 'ABP_ItemCollection_Cluster_Fragment_C::PickedUp_TL__Direction_91349959401DDDA4617E0399D86FE04F' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, PickedUp_TL) == 0x000290, "Member 'ABP_ItemCollection_Cluster_Fragment_C::PickedUp_TL' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, SpinTL_PulseTime_A26CA63F4A439226A97778B55AE7B628) == 0x000298, "Member 'ABP_ItemCollection_Cluster_Fragment_C::SpinTL_PulseTime_A26CA63F4A439226A97778B55AE7B628' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, SpinTL_RiseTime_A26CA63F4A439226A97778B55AE7B628) == 0x00029C, "Member 'ABP_ItemCollection_Cluster_Fragment_C::SpinTL_RiseTime_A26CA63F4A439226A97778B55AE7B628' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, SpinTL__Direction_A26CA63F4A439226A97778B55AE7B628) == 0x0002A0, "Member 'ABP_ItemCollection_Cluster_Fragment_C::SpinTL__Direction_A26CA63F4A439226A97778B55AE7B628' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, SpinTL) == 0x0002A8, "Member 'ABP_ItemCollection_Cluster_Fragment_C::SpinTL' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, CoinCollectionSound) == 0x0002B0, "Member 'ABP_ItemCollection_Cluster_Fragment_C::CoinCollectionSound' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, CoinSpinSound) == 0x0002C0, "Member 'ABP_ItemCollection_Cluster_Fragment_C::CoinSpinSound' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, Test_Item) == 0x0002C8, "Member 'ABP_ItemCollection_Cluster_Fragment_C::Test_Item' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, CollectItemQuest) == 0x0002D0, "Member 'ABP_ItemCollection_Cluster_Fragment_C::CollectItemQuest' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, QuestBackendName) == 0x0002D8, "Member 'ABP_ItemCollection_Cluster_Fragment_C::QuestBackendName' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, ObjStatTag) == 0x0002E0, "Member 'ABP_ItemCollection_Cluster_Fragment_C::ObjStatTag' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, BlockedPlaylistTags) == 0x000300, "Member 'ABP_ItemCollection_Cluster_Fragment_C::BlockedPlaylistTags' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, UseLight) == 0x000320, "Member 'ABP_ItemCollection_Cluster_Fragment_C::UseLight' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, LightColor) == 0x000324, "Member 'ABP_ItemCollection_Cluster_Fragment_C::LightColor' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, MID0) == 0x000338, "Member 'ABP_ItemCollection_Cluster_Fragment_C::MID0' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, MID1) == 0x000340, "Member 'ABP_ItemCollection_Cluster_Fragment_C::MID1' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, PreShrunkScale) == 0x000348, "Member 'ABP_ItemCollection_Cluster_Fragment_C::PreShrunkScale' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, CoinRelativeTransform) == 0x000354, "Member 'ABP_ItemCollection_Cluster_Fragment_C::CoinRelativeTransform' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, CoinRelativeRotationZ) == 0x000360, "Member 'ABP_ItemCollection_Cluster_Fragment_C::CoinRelativeRotationZ' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, BobHeightMax) == 0x000364, "Member 'ABP_ItemCollection_Cluster_Fragment_C::BobHeightMax' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, BobHeightMin) == 0x000374, "Member 'ABP_ItemCollection_Cluster_Fragment_C::BobHeightMin' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, CoinCollectionEmitter) == 0x000388, "Member 'ABP_ItemCollection_Cluster_Fragment_C::CoinCollectionEmitter' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, LoopTimerHandle) == 0x000390, "Member 'ABP_ItemCollection_Cluster_Fragment_C::LoopTimerHandle' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, DelayBetweenSpin) == 0x000398, "Member 'ABP_ItemCollection_Cluster_Fragment_C::DelayBetweenSpin' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, RelativeRotationAmount) == 0x00039C, "Member 'ABP_ItemCollection_Cluster_Fragment_C::RelativeRotationAmount' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, CurrentRelativeScale) == 0x0003A0, "Member 'ABP_ItemCollection_Cluster_Fragment_C::CurrentRelativeScale' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, PulseSizeMultiplier) == 0x0003AC, "Member 'ABP_ItemCollection_Cluster_Fragment_C::PulseSizeMultiplier' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, Color0) == 0x0003B0, "Member 'ABP_ItemCollection_Cluster_Fragment_C::Color0' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, Color1) == 0x0003C0, "Member 'ABP_ItemCollection_Cluster_Fragment_C::Color1' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, CoinExpirationEmitter) == 0x0003D0, "Member 'ABP_ItemCollection_Cluster_Fragment_C::CoinExpirationEmitter' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, MID2) == 0x0003D8, "Member 'ABP_ItemCollection_Cluster_Fragment_C::MID2' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, Fragment_Spawn) == 0x0003E0, "Member 'ABP_ItemCollection_Cluster_Fragment_C::Fragment_Spawn' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, CollectionCount) == 0x0003E8, "Member 'ABP_ItemCollection_Cluster_Fragment_C::CollectionCount' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, CoinComboSound) == 0x0003F0, "Member 'ABP_ItemCollection_Cluster_Fragment_C::CoinComboSound' has a wrong offset!");
static_assert(offsetof(ABP_ItemCollection_Cluster_Fragment_C, ComboTag) == 0x0003F8, "Member 'ABP_ItemCollection_Cluster_Fragment_C::ComboTag' has a wrong offset!");

}

