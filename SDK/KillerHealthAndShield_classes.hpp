#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KillerHealthAndShield

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass KillerHealthAndShield.KillerHealthAndShield_C
// 0x0028 (0x0258 - 0x0230)
class UKillerHealthAndShield_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USimpleMaterialProgressBar_C*           Bar_Health;                                        // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleMaterialProgressBar_C*           Bar_Shield;                                        // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonText_Health;                                 // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonText_Shields;                                // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_KillerHealthAndShield(int32 EntryPoint);
	void Set_Health_And_Shield(float Health_PCT, float Shield_PCT);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KillerHealthAndShield_C">();
	}
	static class UKillerHealthAndShield_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKillerHealthAndShield_C>();
	}
};
static_assert(alignof(UKillerHealthAndShield_C) == 0x000008, "Wrong alignment on UKillerHealthAndShield_C");
static_assert(sizeof(UKillerHealthAndShield_C) == 0x000258, "Wrong size on UKillerHealthAndShield_C");
static_assert(offsetof(UKillerHealthAndShield_C, UberGraphFrame) == 0x000230, "Member 'UKillerHealthAndShield_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKillerHealthAndShield_C, Bar_Health) == 0x000238, "Member 'UKillerHealthAndShield_C::Bar_Health' has a wrong offset!");
static_assert(offsetof(UKillerHealthAndShield_C, Bar_Shield) == 0x000240, "Member 'UKillerHealthAndShield_C::Bar_Shield' has a wrong offset!");
static_assert(offsetof(UKillerHealthAndShield_C, CommonText_Health) == 0x000248, "Member 'UKillerHealthAndShield_C::CommonText_Health' has a wrong offset!");
static_assert(offsetof(UKillerHealthAndShield_C, CommonText_Shields) == 0x000250, "Member 'UKillerHealthAndShield_C::CommonText_Shields' has a wrong offset!");

}

