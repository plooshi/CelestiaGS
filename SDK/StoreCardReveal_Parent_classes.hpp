#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreCardReveal_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass StoreCardReveal_Parent.StoreCardReveal_Parent_C
// 0x0010 (0x0230 - 0x0220)
class AStoreCardReveal_Parent_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        PinataSceneRoot;                                   // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void InitiatePinata();
	void ExecuteUbergraph_StoreCardReveal_Parent(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StoreCardReveal_Parent_C">();
	}
	static class AStoreCardReveal_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AStoreCardReveal_Parent_C>();
	}
};
static_assert(alignof(AStoreCardReveal_Parent_C) == 0x000008, "Wrong alignment on AStoreCardReveal_Parent_C");
static_assert(sizeof(AStoreCardReveal_Parent_C) == 0x000230, "Wrong size on AStoreCardReveal_Parent_C");
static_assert(offsetof(AStoreCardReveal_Parent_C, UberGraphFrame) == 0x000220, "Member 'AStoreCardReveal_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AStoreCardReveal_Parent_C, PinataSceneRoot) == 0x000228, "Member 'AStoreCardReveal_Parent_C::PinataSceneRoot' has a wrong offset!");

}
