#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SplineMesh_BP12

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SplineMesh_BP12.BP_SplineMesh_BP12_C
// 0x0040 (0x0268 - 0x0228)
class ABP_SplineMesh_BP12_C final : public ASplineMeshActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USplineComponent*                       Spline;                                            // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          AutoSmoothTangent;                                 // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6329[0x3];                                     // 0x0239(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Tension;                                           // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseScaling;                                        // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_632A[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     OverrideMaterial;                                  // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeOffset;                                        // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Scale;                                             // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x0258(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SplineMesh_BP12(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SplineMesh_BP12_C">();
	}
	static class ABP_SplineMesh_BP12_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SplineMesh_BP12_C>();
	}
};
static_assert(alignof(ABP_SplineMesh_BP12_C) == 0x000008, "Wrong alignment on ABP_SplineMesh_BP12_C");
static_assert(sizeof(ABP_SplineMesh_BP12_C) == 0x000268, "Wrong size on ABP_SplineMesh_BP12_C");
static_assert(offsetof(ABP_SplineMesh_BP12_C, UberGraphFrame) == 0x000228, "Member 'ABP_SplineMesh_BP12_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_BP12_C, Spline) == 0x000230, "Member 'ABP_SplineMesh_BP12_C::Spline' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_BP12_C, AutoSmoothTangent) == 0x000238, "Member 'ABP_SplineMesh_BP12_C::AutoSmoothTangent' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_BP12_C, Tension) == 0x00023C, "Member 'ABP_SplineMesh_BP12_C::Tension' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_BP12_C, UseScaling) == 0x000240, "Member 'ABP_SplineMesh_BP12_C::UseScaling' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_BP12_C, OverrideMaterial) == 0x000248, "Member 'ABP_SplineMesh_BP12_C::OverrideMaterial' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_BP12_C, TimeOffset) == 0x000250, "Member 'ABP_SplineMesh_BP12_C::TimeOffset' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_BP12_C, Scale) == 0x000254, "Member 'ABP_SplineMesh_BP12_C::Scale' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_BP12_C, AudioComponents) == 0x000258, "Member 'ABP_SplineMesh_BP12_C::AudioComponents' has a wrong offset!");

}
