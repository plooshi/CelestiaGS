#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MeshNetworkStatusFlare

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "MeshNetwork_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MeshNetworkStatusFlare.BP_MeshNetworkStatusFlare_C
// 0x0020 (0x0240 - 0x0220)
class ABP_MeshNetworkStatusFlare_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          ConnectedToMeshNetwork;                            // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_MeshNetworkStatusFlare(int32 EntryPoint);
	void ConnectionToRootChanged(bool bConnected);
	void ReceiveBeginPlay();
	void OnReady_47F7843043630A3532872A80DCAB82DE(EMeshNetworkNodeType NodeType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MeshNetworkStatusFlare_C">();
	}
	static class ABP_MeshNetworkStatusFlare_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MeshNetworkStatusFlare_C>();
	}
};
static_assert(alignof(ABP_MeshNetworkStatusFlare_C) == 0x000008, "Wrong alignment on ABP_MeshNetworkStatusFlare_C");
static_assert(sizeof(ABP_MeshNetworkStatusFlare_C) == 0x000240, "Wrong size on ABP_MeshNetworkStatusFlare_C");
static_assert(offsetof(ABP_MeshNetworkStatusFlare_C, UberGraphFrame) == 0x000220, "Member 'ABP_MeshNetworkStatusFlare_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MeshNetworkStatusFlare_C, StaticMesh) == 0x000228, "Member 'ABP_MeshNetworkStatusFlare_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_MeshNetworkStatusFlare_C, DefaultSceneRoot) == 0x000230, "Member 'ABP_MeshNetworkStatusFlare_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_MeshNetworkStatusFlare_C, ConnectedToMeshNetwork) == 0x000238, "Member 'ABP_MeshNetworkStatusFlare_C::ConnectedToMeshNetwork' has a wrong offset!");

}

