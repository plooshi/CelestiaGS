#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Stage_DJ_Booth_SkiClub

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stage_DJ_Booth_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Stage_DJ_Booth_SkiClub.Stage_DJ_Booth_SkiClub_C
// 0x0028 (0x0BE8 - 0x0BC0)
class AStage_DJ_Booth_SkiClub_C final : public AStage_DJ_Booth_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BC0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        DJTrack;                                           // 0x0BC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         TrackIndex;                                        // 0x0BD0(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_876C[0x4];                                     // 0x0BD4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USoundBase*>                     TrackList;                                         // 0x0BD8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Stage_DJ_Booth_SkiClub(int32 EntryPoint);
	void OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveBeginPlay();
	void OnRep_TrackIndex();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Stage_DJ_Booth_SkiClub_C">();
	}
	static class AStage_DJ_Booth_SkiClub_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AStage_DJ_Booth_SkiClub_C>();
	}
};
static_assert(alignof(AStage_DJ_Booth_SkiClub_C) == 0x000008, "Wrong alignment on AStage_DJ_Booth_SkiClub_C");
static_assert(sizeof(AStage_DJ_Booth_SkiClub_C) == 0x000BE8, "Wrong size on AStage_DJ_Booth_SkiClub_C");
static_assert(offsetof(AStage_DJ_Booth_SkiClub_C, UberGraphFrame) == 0x000BC0, "Member 'AStage_DJ_Booth_SkiClub_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AStage_DJ_Booth_SkiClub_C, DJTrack) == 0x000BC8, "Member 'AStage_DJ_Booth_SkiClub_C::DJTrack' has a wrong offset!");
static_assert(offsetof(AStage_DJ_Booth_SkiClub_C, TrackIndex) == 0x000BD0, "Member 'AStage_DJ_Booth_SkiClub_C::TrackIndex' has a wrong offset!");
static_assert(offsetof(AStage_DJ_Booth_SkiClub_C, TrackList) == 0x000BD8, "Member 'AStage_DJ_Booth_SkiClub_C::TrackList' has a wrong offset!");

}
