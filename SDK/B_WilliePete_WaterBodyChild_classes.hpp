#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_WilliePete_WaterBodyChild

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_WilliePete_WaterBodyChild.B_WilliePete_WaterBodyChild_C
// 0x0010 (0x0F00 - 0x0EF0)
class AB_WilliePete_WaterBodyChild_C final : public AFortWaterBodyActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0EF0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Debug;                                             // 0x0EF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_WilliePete_WaterBodyChild(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_WilliePete_WaterBodyChild_C">();
	}
	static class AB_WilliePete_WaterBodyChild_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_WilliePete_WaterBodyChild_C>();
	}
};
static_assert(alignof(AB_WilliePete_WaterBodyChild_C) == 0x000010, "Wrong alignment on AB_WilliePete_WaterBodyChild_C");
static_assert(sizeof(AB_WilliePete_WaterBodyChild_C) == 0x000F00, "Wrong size on AB_WilliePete_WaterBodyChild_C");
static_assert(offsetof(AB_WilliePete_WaterBodyChild_C, UberGraphFrame) == 0x000EF0, "Member 'AB_WilliePete_WaterBodyChild_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_WilliePete_WaterBodyChild_C, Debug) == 0x000EF8, "Member 'AB_WilliePete_WaterBodyChild_C::Debug' has a wrong offset!");

}
