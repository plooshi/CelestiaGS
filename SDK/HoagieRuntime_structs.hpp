#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HoagieRuntime

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// Enum HoagieRuntime.EHoagieBoostState
// NumValues: 0x0006
enum class EHoagieBoostState : uint8
{
	Unknown                                  = 0,
	Ready                                    = 1,
	Started                                  = 2,
	Finished                                 = 3,
	Failed                                   = 4,
	EHoagieBoostState_MAX                    = 5,
};

// ScriptStruct HoagieRuntime.FortHeliFlightModel
// 0x0110 (0x0110 - 0x0000)
struct FFortHeliFlightModel final
{
public:
	uint8                                         Pad_41CE[0x108];                                   // 0x0000(0x0108)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHoagieVehicleConfigs*              Configs;                                           // 0x0108(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FFortHeliFlightModel) == 0x000008, "Wrong alignment on FFortHeliFlightModel");
static_assert(sizeof(FFortHeliFlightModel) == 0x000110, "Wrong size on FFortHeliFlightModel");
static_assert(offsetof(FFortHeliFlightModel, Configs) == 0x000108, "Member 'FFortHeliFlightModel::Configs' has a wrong offset!");

// ScriptStruct HoagieRuntime.ReplicatedHeliControlState
// 0x0018 (0x0018 - 0x0000)
struct FReplicatedHeliControlState final
{
public:
	struct FVector_NetQuantizeNormal              Up;                                                // 0x0000(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal              Forward;                                           // 0x000C(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FReplicatedHeliControlState) == 0x000004, "Wrong alignment on FReplicatedHeliControlState");
static_assert(sizeof(FReplicatedHeliControlState) == 0x000018, "Wrong size on FReplicatedHeliControlState");
static_assert(offsetof(FReplicatedHeliControlState, Up) == 0x000000, "Member 'FReplicatedHeliControlState::Up' has a wrong offset!");
static_assert(offsetof(FReplicatedHeliControlState, Forward) == 0x00000C, "Member 'FReplicatedHeliControlState::Forward' has a wrong offset!");

// ScriptStruct HoagieRuntime.CachedSeatCollision
// 0x0008 (0x0008 - 0x0000)
struct FCachedSeatCollision final
{
public:
	int32                                         SeatIndex;                                         // 0x0000(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOccupied;                                         // 0x0004(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41CF[0x3];                                     // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCachedSeatCollision) == 0x000004, "Wrong alignment on FCachedSeatCollision");
static_assert(sizeof(FCachedSeatCollision) == 0x000008, "Wrong size on FCachedSeatCollision");
static_assert(offsetof(FCachedSeatCollision, SeatIndex) == 0x000000, "Member 'FCachedSeatCollision::SeatIndex' has a wrong offset!");
static_assert(offsetof(FCachedSeatCollision, bOccupied) == 0x000004, "Member 'FCachedSeatCollision::bOccupied' has a wrong offset!");

// ScriptStruct HoagieRuntime.RotorHit
// 0x000C (0x000C - 0x0000)
struct FRotorHit final
{
public:
	TWeakObjectPtr<class AActor>                  HitActor;                                          // 0x0000(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LastHitTimer;                                      // 0x0008(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRotorHit) == 0x000004, "Wrong alignment on FRotorHit");
static_assert(sizeof(FRotorHit) == 0x00000C, "Wrong size on FRotorHit");
static_assert(offsetof(FRotorHit, HitActor) == 0x000000, "Member 'FRotorHit::HitActor' has a wrong offset!");
static_assert(offsetof(FRotorHit, LastHitTimer) == 0x000008, "Member 'FRotorHit::LastHitTimer' has a wrong offset!");

}
