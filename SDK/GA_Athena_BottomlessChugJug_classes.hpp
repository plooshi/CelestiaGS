#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_BottomlessChugJug

#include "Basic.hpp"

#include "GA_Athena_MedConsumable_Parent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_BottomlessChugJug.GA_Athena_BottomlessChugJug_C
// 0x0000 (0x0BB0 - 0x0BB0)
class UGA_Athena_BottomlessChugJug_C final : public UGA_Athena_MedConsumable_Parent_C
{
public:
	void MakeCustomMontageInfo();
	void OnMontageTriggered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_BottomlessChugJug_C">();
	}
	static class UGA_Athena_BottomlessChugJug_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_BottomlessChugJug_C>();
	}
};
static_assert(alignof(UGA_Athena_BottomlessChugJug_C) == 0x000008, "Wrong alignment on UGA_Athena_BottomlessChugJug_C");
static_assert(sizeof(UGA_Athena_BottomlessChugJug_C) == 0x000BB0, "Wrong size on UGA_Athena_BottomlessChugJug_C");

}
