#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CosmeticLoadoutSelector

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CosmeticLoadoutSelector.CosmeticLoadoutSelector_C
// 0x0020 (0x02A0 - 0x0280)
class UCosmeticLoadoutSelector_C final : public UFortCosmeticLoadoutSelector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Background;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    Left_InputActionDisplay;                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    Right_InputActionDisplay;                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void OnLoadoutSet(int32 Selection);
	void OnNumLoadoutsFound(int32 NumLoadouts);
	void ExecuteUbergraph_CosmeticLoadoutSelector(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CosmeticLoadoutSelector_C">();
	}
	static class UCosmeticLoadoutSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCosmeticLoadoutSelector_C>();
	}
};
static_assert(alignof(UCosmeticLoadoutSelector_C) == 0x000008, "Wrong alignment on UCosmeticLoadoutSelector_C");
static_assert(sizeof(UCosmeticLoadoutSelector_C) == 0x0002A0, "Wrong size on UCosmeticLoadoutSelector_C");
static_assert(offsetof(UCosmeticLoadoutSelector_C, UberGraphFrame) == 0x000280, "Member 'UCosmeticLoadoutSelector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutSelector_C, Background) == 0x000288, "Member 'UCosmeticLoadoutSelector_C::Background' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutSelector_C, Left_InputActionDisplay) == 0x000290, "Member 'UCosmeticLoadoutSelector_C::Left_InputActionDisplay' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutSelector_C, Right_InputActionDisplay) == 0x000298, "Member 'UCosmeticLoadoutSelector_C::Right_InputActionDisplay' has a wrong offset!");

}
