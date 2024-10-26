#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Context_WorldOrigin

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Context_WorldOrigin.Context_WorldOrigin_C
// 0x0000 (0x0030 - 0x0030)
class UContext_WorldOrigin_C final : public UEnvQueryContext_BlueprintBase
{
public:
	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Context_WorldOrigin_C">();
	}
	static class UContext_WorldOrigin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContext_WorldOrigin_C>();
	}
};
static_assert(alignof(UContext_WorldOrigin_C) == 0x000008, "Wrong alignment on UContext_WorldOrigin_C");
static_assert(sizeof(UContext_WorldOrigin_C) == 0x000030, "Wrong size on UContext_WorldOrigin_C");

}

