#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_PineTree_Small

#include "Basic.hpp"

#include "Parent_Tree_Apollo_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Apollo_PineTree_Small.Apollo_PineTree_Small_C
// 0x0000 (0x0C00 - 0x0C00)
class AApollo_PineTree_Small_C final : public AParent_Tree_Apollo_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Apollo_PineTree_Small_C">();
	}
	static class AApollo_PineTree_Small_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AApollo_PineTree_Small_C>();
	}
};
static_assert(alignof(AApollo_PineTree_Small_C) == 0x000008, "Wrong alignment on AApollo_PineTree_Small_C");
static_assert(sizeof(AApollo_PineTree_Small_C) == 0x000C00, "Wrong size on AApollo_PineTree_Small_C");

}
