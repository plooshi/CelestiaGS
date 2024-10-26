#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpicySakeRuntime

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function SpicySakeRuntime.FortSpicySakeComponent_Telemetry.OnPawnDied
// 0x0050 (0x0050 - 0x0000)
struct FortSpicySakeComponent_Telemetry_OnPawnDied final
{
public:
	class AActor*                                 DamagedActor;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Damage;                                            // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4376[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            InstigatedBy;                                      // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 DamageCauser;                                      // 0x0018(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                HitLocation;                                       // 0x0020(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4377[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    FHitComponent;                                     // 0x0030(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   BoneName;                                          // 0x0038(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Momentum;                                          // 0x0040(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4378[0x4];                                     // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FortSpicySakeComponent_Telemetry_OnPawnDied) == 0x000008, "Wrong alignment on FortSpicySakeComponent_Telemetry_OnPawnDied");
static_assert(sizeof(FortSpicySakeComponent_Telemetry_OnPawnDied) == 0x000050, "Wrong size on FortSpicySakeComponent_Telemetry_OnPawnDied");
static_assert(offsetof(FortSpicySakeComponent_Telemetry_OnPawnDied, DamagedActor) == 0x000000, "Member 'FortSpicySakeComponent_Telemetry_OnPawnDied::DamagedActor' has a wrong offset!");
static_assert(offsetof(FortSpicySakeComponent_Telemetry_OnPawnDied, Damage) == 0x000008, "Member 'FortSpicySakeComponent_Telemetry_OnPawnDied::Damage' has a wrong offset!");
static_assert(offsetof(FortSpicySakeComponent_Telemetry_OnPawnDied, InstigatedBy) == 0x000010, "Member 'FortSpicySakeComponent_Telemetry_OnPawnDied::InstigatedBy' has a wrong offset!");
static_assert(offsetof(FortSpicySakeComponent_Telemetry_OnPawnDied, DamageCauser) == 0x000018, "Member 'FortSpicySakeComponent_Telemetry_OnPawnDied::DamageCauser' has a wrong offset!");
static_assert(offsetof(FortSpicySakeComponent_Telemetry_OnPawnDied, HitLocation) == 0x000020, "Member 'FortSpicySakeComponent_Telemetry_OnPawnDied::HitLocation' has a wrong offset!");
static_assert(offsetof(FortSpicySakeComponent_Telemetry_OnPawnDied, FHitComponent) == 0x000030, "Member 'FortSpicySakeComponent_Telemetry_OnPawnDied::FHitComponent' has a wrong offset!");
static_assert(offsetof(FortSpicySakeComponent_Telemetry_OnPawnDied, BoneName) == 0x000038, "Member 'FortSpicySakeComponent_Telemetry_OnPawnDied::BoneName' has a wrong offset!");
static_assert(offsetof(FortSpicySakeComponent_Telemetry_OnPawnDied, Momentum) == 0x000040, "Member 'FortSpicySakeComponent_Telemetry_OnPawnDied::Momentum' has a wrong offset!");

}

