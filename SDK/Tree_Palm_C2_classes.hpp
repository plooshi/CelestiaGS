#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tree_Palm_C2

#include "Basic.hpp"

#include "Parent_Tree_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Tree_Palm_C2.Tree_Palm_C2_C
// 0x0000 (0x0C80 - 0x0C80)
class ATree_Palm_C2_C final : public AParent_Tree_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Tree_Palm_C2_C">();
	}
	static class ATree_Palm_C2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATree_Palm_C2_C>();
	}
};
static_assert(alignof(ATree_Palm_C2_C) == 0x000010, "Wrong alignment on ATree_Palm_C2_C");
static_assert(sizeof(ATree_Palm_C2_C) == 0x000C80, "Wrong size on ATree_Palm_C2_C");

}
