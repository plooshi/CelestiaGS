#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Decal_SprayDecorator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Decal_SprayDecorator.BP_Decal_SprayDecorator_C
// 0x0050 (0x0278 - 0x0228)
class ABP_Decal_SprayDecorator_C final : public ADecalActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*               DMI_ConstructionScript;                            // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               T_Decal;                                           // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               T_ShineMask;                                       // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ShineXPanSpeed;                                    // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseShineMask;                                     // 0x024C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8730[0x3];                                     // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ShineIntensity;                                    // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Opacity;                                           // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     MaterialInterface;                                 // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         OverlappingActors;                                 // 0x0260(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	class AActor*                                 ActorToAttach;                                     // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Decal_SprayDecorator(int32 EntryPoint);
	void OnAttachedPropDestroyed(class AActor* DestroyedActor);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Decal_SprayDecorator_C">();
	}
	static class ABP_Decal_SprayDecorator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Decal_SprayDecorator_C>();
	}
};
static_assert(alignof(ABP_Decal_SprayDecorator_C) == 0x000008, "Wrong alignment on ABP_Decal_SprayDecorator_C");
static_assert(sizeof(ABP_Decal_SprayDecorator_C) == 0x000278, "Wrong size on ABP_Decal_SprayDecorator_C");
static_assert(offsetof(ABP_Decal_SprayDecorator_C, UberGraphFrame) == 0x000228, "Member 'ABP_Decal_SprayDecorator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Decal_SprayDecorator_C, DMI_ConstructionScript) == 0x000230, "Member 'ABP_Decal_SprayDecorator_C::DMI_ConstructionScript' has a wrong offset!");
static_assert(offsetof(ABP_Decal_SprayDecorator_C, T_Decal) == 0x000238, "Member 'ABP_Decal_SprayDecorator_C::T_Decal' has a wrong offset!");
static_assert(offsetof(ABP_Decal_SprayDecorator_C, T_ShineMask) == 0x000240, "Member 'ABP_Decal_SprayDecorator_C::T_ShineMask' has a wrong offset!");
static_assert(offsetof(ABP_Decal_SprayDecorator_C, ShineXPanSpeed) == 0x000248, "Member 'ABP_Decal_SprayDecorator_C::ShineXPanSpeed' has a wrong offset!");
static_assert(offsetof(ABP_Decal_SprayDecorator_C, bUseShineMask) == 0x00024C, "Member 'ABP_Decal_SprayDecorator_C::bUseShineMask' has a wrong offset!");
static_assert(offsetof(ABP_Decal_SprayDecorator_C, ShineIntensity) == 0x000250, "Member 'ABP_Decal_SprayDecorator_C::ShineIntensity' has a wrong offset!");
static_assert(offsetof(ABP_Decal_SprayDecorator_C, Opacity) == 0x000254, "Member 'ABP_Decal_SprayDecorator_C::Opacity' has a wrong offset!");
static_assert(offsetof(ABP_Decal_SprayDecorator_C, MaterialInterface) == 0x000258, "Member 'ABP_Decal_SprayDecorator_C::MaterialInterface' has a wrong offset!");
static_assert(offsetof(ABP_Decal_SprayDecorator_C, OverlappingActors) == 0x000260, "Member 'ABP_Decal_SprayDecorator_C::OverlappingActors' has a wrong offset!");
static_assert(offsetof(ABP_Decal_SprayDecorator_C, ActorToAttach) == 0x000270, "Member 'ABP_Decal_SprayDecorator_C::ActorToAttach' has a wrong offset!");

}

