#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_WilliePete_PlayerLaunch

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C
// 0x0070 (0x0AE8 - 0x0A78)
class UGA_WilliePete_PlayerLaunch_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawnAthena*                  OwningPawn;                                        // 0x0A80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           ExitMontage;                                       // 0x0A88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         LaunchHeightValue;                                 // 0x0A90(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AB_HidingProp_WilliePete_C*             WilliePeteLauncher;                                // 0x0AB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  PlayerLaunchTag;                                   // 0x0AB8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_WilliePete_PlayerLaunch_ApplyGC;                // 0x0AD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                  TeleportExitPlayer;                                // 0x0AE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_WilliePete_PlayerLaunch(int32 EntryPoint);
	void ActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void K2_ActivateAbility();
	void End_Skydive(const struct FHitResult& Hit);
	void Redeploy_Glider();
	void OnCompleted_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag);
	void OnBlendOut_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag);
	void OnInterrupted_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag);
	void OnCancelled_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag);
	void OnNotifyBegin_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag);
	void OnNotifyEnd_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag);
	void BreakBlockingStructure(class AActor* HitActor);
	void StructureTraceLoop();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_WilliePete_PlayerLaunch_C">();
	}
	static class UGA_WilliePete_PlayerLaunch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_WilliePete_PlayerLaunch_C>();
	}
};
static_assert(alignof(UGA_WilliePete_PlayerLaunch_C) == 0x000008, "Wrong alignment on UGA_WilliePete_PlayerLaunch_C");
static_assert(sizeof(UGA_WilliePete_PlayerLaunch_C) == 0x000AE8, "Wrong size on UGA_WilliePete_PlayerLaunch_C");
static_assert(offsetof(UGA_WilliePete_PlayerLaunch_C, UberGraphFrame) == 0x000A78, "Member 'UGA_WilliePete_PlayerLaunch_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_WilliePete_PlayerLaunch_C, OwningPawn) == 0x000A80, "Member 'UGA_WilliePete_PlayerLaunch_C::OwningPawn' has a wrong offset!");
static_assert(offsetof(UGA_WilliePete_PlayerLaunch_C, ExitMontage) == 0x000A88, "Member 'UGA_WilliePete_PlayerLaunch_C::ExitMontage' has a wrong offset!");
static_assert(offsetof(UGA_WilliePete_PlayerLaunch_C, LaunchHeightValue) == 0x000A90, "Member 'UGA_WilliePete_PlayerLaunch_C::LaunchHeightValue' has a wrong offset!");
static_assert(offsetof(UGA_WilliePete_PlayerLaunch_C, WilliePeteLauncher) == 0x000AB0, "Member 'UGA_WilliePete_PlayerLaunch_C::WilliePeteLauncher' has a wrong offset!");
static_assert(offsetof(UGA_WilliePete_PlayerLaunch_C, PlayerLaunchTag) == 0x000AB8, "Member 'UGA_WilliePete_PlayerLaunch_C::PlayerLaunchTag' has a wrong offset!");
static_assert(offsetof(UGA_WilliePete_PlayerLaunch_C, GE_WilliePete_PlayerLaunch_ApplyGC) == 0x000AD8, "Member 'UGA_WilliePete_PlayerLaunch_C::GE_WilliePete_PlayerLaunch_ApplyGC' has a wrong offset!");
static_assert(offsetof(UGA_WilliePete_PlayerLaunch_C, TeleportExitPlayer) == 0x000AE0, "Member 'UGA_WilliePete_PlayerLaunch_C::TeleportExitPlayer' has a wrong offset!");

}
