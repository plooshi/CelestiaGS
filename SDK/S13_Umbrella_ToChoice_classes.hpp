#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S13_Umbrella_ToChoice

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LevelSequence_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass S13_Umbrella_ToChoice.SequenceDirector_C
// 0x0008 (0x0038 - 0x0030)
class S13_Umbrella_ToChoice::USequenceDirector_C final : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void SequenceEvent__ENTRYPOINTSequenceDirector_1();
	void SequenceEvent__ENTRYPOINTSequenceDirector_0();
	void BP_Battlepass_LightSwitcher_Maproom_Event_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Maproom);
	void BP_Battlepass_LightSwitcher2_Event_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher2);
	void BP_Battlepass_LightSwitcher_Maproom_Event_1(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Maproom);
	void BP_Battlepass_LightSwitcher2_Event_1(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher2);
	void Audio_Camera_Movemt_Event(class USoundBase* Sound);
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlueprintGeneratedClass S13_Umbrella_ToChoice.SequenceDirector_C", true, "SequenceDirector_C">();
	}
	static class S13_Umbrella_ToChoice::USequenceDirector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<S13_Umbrella_ToChoice::USequenceDirector_C>();
	}
};
static_assert(alignof(S13_Umbrella_ToChoice::USequenceDirector_C) == 0x000008, "Wrong alignment on S13_Umbrella_ToChoice::USequenceDirector_C");
static_assert(sizeof(S13_Umbrella_ToChoice::USequenceDirector_C) == 0x000038, "Wrong size on S13_Umbrella_ToChoice::USequenceDirector_C");
static_assert(offsetof(S13_Umbrella_ToChoice::USequenceDirector_C, UberGraphFrame) == 0x000030, "Member 'S13_Umbrella_ToChoice::USequenceDirector_C::UberGraphFrame' has a wrong offset!");

}

