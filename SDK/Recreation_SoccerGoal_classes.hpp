#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Recreation_SoccerGoal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Recreation_SoccerGoal.Recreation_SoccerGoal_C
// 0x0010 (0x0BD0 - 0x0BC0)
class ARecreation_SoccerGoal_C final : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BC0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh_NetCollision;                           // 0x0BC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Recreation_SoccerGoal(int32 EntryPoint);
	void ReceiveDestroyed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Recreation_SoccerGoal_C">();
	}
	static class ARecreation_SoccerGoal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARecreation_SoccerGoal_C>();
	}
};
static_assert(alignof(ARecreation_SoccerGoal_C) == 0x000008, "Wrong alignment on ARecreation_SoccerGoal_C");
static_assert(sizeof(ARecreation_SoccerGoal_C) == 0x000BD0, "Wrong size on ARecreation_SoccerGoal_C");
static_assert(offsetof(ARecreation_SoccerGoal_C, UberGraphFrame) == 0x000BC0, "Member 'ARecreation_SoccerGoal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ARecreation_SoccerGoal_C, StaticMesh_NetCollision) == 0x000BC8, "Member 'ARecreation_SoccerGoal_C::StaticMesh_NetCollision' has a wrong offset!");

}
