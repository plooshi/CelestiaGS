#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CBGA_HealthSmall

#include "Basic.hpp"

#include "CBGA_Parent_Physics_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass CBGA_HealthSmall.CBGA_HealthSmall_C
// 0x0000 (0x0AD0 - 0x0AD0)
class ACBGA_HealthSmall_C final : public ACBGA_Parent_Physics_C
{
public:
	bool OnInteractAllowedToConsume(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted);

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CBGA_HealthSmall_C">();
	}
	static class ACBGA_HealthSmall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACBGA_HealthSmall_C>();
	}
};
static_assert(alignof(ACBGA_HealthSmall_C) == 0x000010, "Wrong alignment on ACBGA_HealthSmall_C");
static_assert(sizeof(ACBGA_HealthSmall_C) == 0x000AD0, "Wrong size on ACBGA_HealthSmall_C");

}
