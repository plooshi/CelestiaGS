#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SimpleItemTile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SimpleItemTile.SimpleItemTile_C
// 0x0048 (0x0278 - 0x0230)
class USimpleItemTile_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                          CommonBorder_Item;                                 // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_84;                                          // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon;                                        // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_IconShadow;                                  // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ItemBG;                                      // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageTriangleL;                                    // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageTriangleR;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_ItemIcon;                                  // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SimpleItemTile(int32 EntryPoint);
	void Colorize(EFortRarity Rarity);
	void Set_Icon(class UTexture2D* Weapon_Icon, EFortRarity Rarity);
	void PreConstruct(bool IsDesignTime);
	void SetShear(int32 ShearAmount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SimpleItemTile_C">();
	}
	static class USimpleItemTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimpleItemTile_C>();
	}
};
static_assert(alignof(USimpleItemTile_C) == 0x000008, "Wrong alignment on USimpleItemTile_C");
static_assert(sizeof(USimpleItemTile_C) == 0x000278, "Wrong size on USimpleItemTile_C");
static_assert(offsetof(USimpleItemTile_C, UberGraphFrame) == 0x000230, "Member 'USimpleItemTile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USimpleItemTile_C, CommonBorder_Item) == 0x000238, "Member 'USimpleItemTile_C::CommonBorder_Item' has a wrong offset!");
static_assert(offsetof(USimpleItemTile_C, Image_84) == 0x000240, "Member 'USimpleItemTile_C::Image_84' has a wrong offset!");
static_assert(offsetof(USimpleItemTile_C, Image_Icon) == 0x000248, "Member 'USimpleItemTile_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(USimpleItemTile_C, Image_IconShadow) == 0x000250, "Member 'USimpleItemTile_C::Image_IconShadow' has a wrong offset!");
static_assert(offsetof(USimpleItemTile_C, Image_ItemBG) == 0x000258, "Member 'USimpleItemTile_C::Image_ItemBG' has a wrong offset!");
static_assert(offsetof(USimpleItemTile_C, ImageTriangleL) == 0x000260, "Member 'USimpleItemTile_C::ImageTriangleL' has a wrong offset!");
static_assert(offsetof(USimpleItemTile_C, ImageTriangleR) == 0x000268, "Member 'USimpleItemTile_C::ImageTriangleR' has a wrong offset!");
static_assert(offsetof(USimpleItemTile_C, Overlay_ItemIcon) == 0x000270, "Member 'USimpleItemTile_C::Overlay_ItemIcon' has a wrong offset!");

}
