#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_RCRocket_Launcher_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Ranged_Generic_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C
// 0x0020 (0x1290 - 0x1270)
class AB_RCRocket_Launcher_Athena_C final : public AB_Ranged_Generic_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_RCRocket_Launcher_Athena_C;       // 0x1270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponentBudgeted*         RC;                                                // 0x1278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               RearMuzzle;                                        // 0x1280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         DelayBeforeFX_End;                                 // 0x1288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_RCRocket_Launcher_Athena(int32 EntryPoint);
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);
	void SendMuzzleFlashFX();

	bool IsCachedIsProjectileWeapon() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_RCRocket_Launcher_Athena_C">();
	}
	static class AB_RCRocket_Launcher_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_RCRocket_Launcher_Athena_C>();
	}
};
static_assert(alignof(AB_RCRocket_Launcher_Athena_C) == 0x000008, "Wrong alignment on AB_RCRocket_Launcher_Athena_C");
static_assert(sizeof(AB_RCRocket_Launcher_Athena_C) == 0x001290, "Wrong size on AB_RCRocket_Launcher_Athena_C");
static_assert(offsetof(AB_RCRocket_Launcher_Athena_C, UberGraphFrame_B_RCRocket_Launcher_Athena_C) == 0x001270, "Member 'AB_RCRocket_Launcher_Athena_C::UberGraphFrame_B_RCRocket_Launcher_Athena_C' has a wrong offset!");
static_assert(offsetof(AB_RCRocket_Launcher_Athena_C, RC) == 0x001278, "Member 'AB_RCRocket_Launcher_Athena_C::RC' has a wrong offset!");
static_assert(offsetof(AB_RCRocket_Launcher_Athena_C, RearMuzzle) == 0x001280, "Member 'AB_RCRocket_Launcher_Athena_C::RearMuzzle' has a wrong offset!");
static_assert(offsetof(AB_RCRocket_Launcher_Athena_C, DelayBeforeFX_End) == 0x001288, "Member 'AB_RCRocket_Launcher_Athena_C::DelayBeforeFX_End' has a wrong offset!");

}

