#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Marshaller_Glider_Preset

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Marshaller_Glider_Preset.Marshaller_Glider_Preset_C
// 0x0008 (0x00A0 - 0x0098)
class UMarshaller_Glider_Preset_C final : public UMarshalledVFX_AuthoredDataConfig
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0098(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Marshaller_Glider_Preset(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Marshaller_Glider_Preset_C">();
	}
	static class UMarshaller_Glider_Preset_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMarshaller_Glider_Preset_C>();
	}
};
static_assert(alignof(UMarshaller_Glider_Preset_C) == 0x000008, "Wrong alignment on UMarshaller_Glider_Preset_C");
static_assert(sizeof(UMarshaller_Glider_Preset_C) == 0x0000A0, "Wrong size on UMarshaller_Glider_Preset_C");
static_assert(offsetof(UMarshaller_Glider_Preset_C, UberGraphFrame) == 0x000098, "Member 'UMarshaller_Glider_Preset_C::UberGraphFrame' has a wrong offset!");

}
