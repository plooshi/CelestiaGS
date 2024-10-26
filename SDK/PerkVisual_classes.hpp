#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PerkVisual

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PerkVisual.PerkVisual_C
// 0x0038 (0x0268 - 0x0230)
class UPerkVisual_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_ItemA;                                       // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleItemTile_C*                      SimpleItemTile;                                    // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*       Switcher;                                          // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Header;                                       // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsPassiveItem;                                     // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_79E6[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortSpyTechItemDefinition*             SpyTechItemDef;                                    // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PerkVisual(int32 EntryPoint);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Set_Spy_Perk_Item_Def(class UFortSpyTechItemDefinition* Spy_Tech_Item_Def);
	void OnLoaded_C75D0FD04AA7C3CE32752CB66B6BD305(class UObject* Loaded);
	void UpdateSwitcher(bool IsPassive);
	void ShowLabel(bool Show);
	void GetItem(class UFortSpyTechItemDefinition** Param_SpyTechItemDef);
	void SetShear(int32 ShearAmount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PerkVisual_C">();
	}
	static class UPerkVisual_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPerkVisual_C>();
	}
};
static_assert(alignof(UPerkVisual_C) == 0x000008, "Wrong alignment on UPerkVisual_C");
static_assert(sizeof(UPerkVisual_C) == 0x000268, "Wrong size on UPerkVisual_C");
static_assert(offsetof(UPerkVisual_C, UberGraphFrame) == 0x000230, "Member 'UPerkVisual_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPerkVisual_C, Image_ItemA) == 0x000238, "Member 'UPerkVisual_C::Image_ItemA' has a wrong offset!");
static_assert(offsetof(UPerkVisual_C, SimpleItemTile) == 0x000240, "Member 'UPerkVisual_C::SimpleItemTile' has a wrong offset!");
static_assert(offsetof(UPerkVisual_C, Switcher) == 0x000248, "Member 'UPerkVisual_C::Switcher' has a wrong offset!");
static_assert(offsetof(UPerkVisual_C, Text_Header) == 0x000250, "Member 'UPerkVisual_C::Text_Header' has a wrong offset!");
static_assert(offsetof(UPerkVisual_C, IsPassiveItem) == 0x000258, "Member 'UPerkVisual_C::IsPassiveItem' has a wrong offset!");
static_assert(offsetof(UPerkVisual_C, SpyTechItemDef) == 0x000260, "Member 'UPerkVisual_C::SpyTechItemDef' has a wrong offset!");

}

