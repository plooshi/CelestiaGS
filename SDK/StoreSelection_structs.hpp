#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreSelection

#include "Basic.hpp"


namespace SDK
{

// Enum StoreSelection.EOptionalLabel
// NumValues: 0x0003
enum class EOptionalLabel : uint8
{
	Label_DS                                 = 0,
	Label_NM                                 = 1,
	Max                                      = 2,
};

// ScriptStruct StoreSelection.ItemData
// 0x0048 (0x0048 - 0x0000)
struct FItemData final
{
public:
	TSoftObjectPtr<class UTexture2D>              Icon;                                              // 0x0000(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Name;                                              // 0x0028(0x0018)(Edit, NativeAccessSpecifierPublic)
	uint8                                         Pad_4410[0x8];                                     // 0x0040(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FItemData) == 0x000008, "Wrong alignment on FItemData");
static_assert(sizeof(FItemData) == 0x000048, "Wrong size on FItemData");
static_assert(offsetof(FItemData, Icon) == 0x000000, "Member 'FItemData::Icon' has a wrong offset!");
static_assert(offsetof(FItemData, Name) == 0x000028, "Member 'FItemData::Name' has a wrong offset!");

}
