#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Gnome02

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Gnome02.Gnome02_C
// 0x0008 (0x0BC8 - 0x0BC0)
class AGnome02_C final : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BC0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Gnome02(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Gnome02_C">();
	}
	static class AGnome02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGnome02_C>();
	}
};
static_assert(alignof(AGnome02_C) == 0x000008, "Wrong alignment on AGnome02_C");
static_assert(sizeof(AGnome02_C) == 0x000BC8, "Wrong size on AGnome02_C");
static_assert(offsetof(AGnome02_C, UberGraphFrame) == 0x000BC0, "Member 'AGnome02_C::UberGraphFrame' has a wrong offset!");

}
