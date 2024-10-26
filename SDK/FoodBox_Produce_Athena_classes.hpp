#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FoodBox_Produce_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FoodBox_Produce_Athena.FoodBox_Produce_Athena_C
// 0x0080 (0x0D88 - 0x0D08)
class AFoodBox_Produce_Athena_C final : public ABuildingContainer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0D08(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        LootDropDirection;                                 // 0x0D10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_Time_4EA7087F4D010481DFB08B88C8FF8FEB;  // 0x0D18(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_4EA7087F4D010481DFB08B88C8FF8FEB; // 0x0D1C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78C4[0x3];                                     // 0x0D1D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0D20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         Row_ActorEnabled;                                  // 0x0D28(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_InteractEnabled;                               // 0x0D48(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                             Sound_Open;                                        // 0x0D68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        FX_Open;                                           // 0x0D70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FX_OpenOffsetLocation;                             // 0x0D78(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FX_OpenPitchOffset;                                // 0x0D84(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FoodBox_Produce_Athena(int32 EntryPoint);
	void OnLoot();
	void ReceiveBeginPlay();
	void OnReady_EFE0878D4B86C33587E1CD940720F63C(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FoodBox_Produce_Athena_C">();
	}
	static class AFoodBox_Produce_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFoodBox_Produce_Athena_C>();
	}
};
static_assert(alignof(AFoodBox_Produce_Athena_C) == 0x000008, "Wrong alignment on AFoodBox_Produce_Athena_C");
static_assert(sizeof(AFoodBox_Produce_Athena_C) == 0x000D88, "Wrong size on AFoodBox_Produce_Athena_C");
static_assert(offsetof(AFoodBox_Produce_Athena_C, UberGraphFrame) == 0x000D08, "Member 'AFoodBox_Produce_Athena_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFoodBox_Produce_Athena_C, LootDropDirection) == 0x000D10, "Member 'AFoodBox_Produce_Athena_C::LootDropDirection' has a wrong offset!");
static_assert(offsetof(AFoodBox_Produce_Athena_C, Timeline_0_Time_4EA7087F4D010481DFB08B88C8FF8FEB) == 0x000D18, "Member 'AFoodBox_Produce_Athena_C::Timeline_0_Time_4EA7087F4D010481DFB08B88C8FF8FEB' has a wrong offset!");
static_assert(offsetof(AFoodBox_Produce_Athena_C, Timeline_0__Direction_4EA7087F4D010481DFB08B88C8FF8FEB) == 0x000D1C, "Member 'AFoodBox_Produce_Athena_C::Timeline_0__Direction_4EA7087F4D010481DFB08B88C8FF8FEB' has a wrong offset!");
static_assert(offsetof(AFoodBox_Produce_Athena_C, Timeline_0) == 0x000D20, "Member 'AFoodBox_Produce_Athena_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AFoodBox_Produce_Athena_C, Row_ActorEnabled) == 0x000D28, "Member 'AFoodBox_Produce_Athena_C::Row_ActorEnabled' has a wrong offset!");
static_assert(offsetof(AFoodBox_Produce_Athena_C, Row_InteractEnabled) == 0x000D48, "Member 'AFoodBox_Produce_Athena_C::Row_InteractEnabled' has a wrong offset!");
static_assert(offsetof(AFoodBox_Produce_Athena_C, Sound_Open) == 0x000D68, "Member 'AFoodBox_Produce_Athena_C::Sound_Open' has a wrong offset!");
static_assert(offsetof(AFoodBox_Produce_Athena_C, FX_Open) == 0x000D70, "Member 'AFoodBox_Produce_Athena_C::FX_Open' has a wrong offset!");
static_assert(offsetof(AFoodBox_Produce_Athena_C, FX_OpenOffsetLocation) == 0x000D78, "Member 'AFoodBox_Produce_Athena_C::FX_OpenOffsetLocation' has a wrong offset!");
static_assert(offsetof(AFoodBox_Produce_Athena_C, FX_OpenPitchOffset) == 0x000D84, "Member 'AFoodBox_Produce_Athena_C::FX_OpenPitchOffset' has a wrong offset!");

}

