#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FloorLamp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FloorLamp.BP_FloorLamp_C
// 0x0038 (0x0BF8 - 0x0BC0)
class ABP_FloorLamp_C final : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BC0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                    SpotLight1;                                        // 0x0BC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight;                                         // 0x0BD0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Disable_light;                                     // 0x0BD8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_8229[0x3];                                     // 0x0BD9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LightIntensity;                                    // 0x0BDC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightOuterConeValue;                               // 0x0BE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightAttenuationRadius;                            // 0x0BE4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LightColor;                                        // 0x0BE8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_FloorLamp(int32 EntryPoint);
	void Disabale_light();
	void OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveDestroyed();
	void UserConstructionScript();
	void OnRep_disable_light();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FloorLamp_C">();
	}
	static class ABP_FloorLamp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FloorLamp_C>();
	}
};
static_assert(alignof(ABP_FloorLamp_C) == 0x000008, "Wrong alignment on ABP_FloorLamp_C");
static_assert(sizeof(ABP_FloorLamp_C) == 0x000BF8, "Wrong size on ABP_FloorLamp_C");
static_assert(offsetof(ABP_FloorLamp_C, UberGraphFrame) == 0x000BC0, "Member 'ABP_FloorLamp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FloorLamp_C, SpotLight1) == 0x000BC8, "Member 'ABP_FloorLamp_C::SpotLight1' has a wrong offset!");
static_assert(offsetof(ABP_FloorLamp_C, SpotLight) == 0x000BD0, "Member 'ABP_FloorLamp_C::SpotLight' has a wrong offset!");
static_assert(offsetof(ABP_FloorLamp_C, Disable_light) == 0x000BD8, "Member 'ABP_FloorLamp_C::Disable_light' has a wrong offset!");
static_assert(offsetof(ABP_FloorLamp_C, LightIntensity) == 0x000BDC, "Member 'ABP_FloorLamp_C::LightIntensity' has a wrong offset!");
static_assert(offsetof(ABP_FloorLamp_C, LightOuterConeValue) == 0x000BE0, "Member 'ABP_FloorLamp_C::LightOuterConeValue' has a wrong offset!");
static_assert(offsetof(ABP_FloorLamp_C, LightAttenuationRadius) == 0x000BE4, "Member 'ABP_FloorLamp_C::LightAttenuationRadius' has a wrong offset!");
static_assert(offsetof(ABP_FloorLamp_C, LightColor) == 0x000BE8, "Member 'ABP_FloorLamp_C::LightColor' has a wrong offset!");

}
