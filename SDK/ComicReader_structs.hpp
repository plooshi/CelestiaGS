#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ComicReader

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum ComicReader.EFortComicClickableZone
// NumValues: 0x0004
enum class EFortComicClickableZone : uint8
{
	None                                     = 0,
	Previous                                 = 1,
	Next                                     = 2,
	EFortComicClickableZone_MAX              = 3,
};

// Enum ComicReader.EFortComicPanelUnit
// NumValues: 0x0003
enum class EFortComicPanelUnit : uint8
{
	Pixel                                    = 0,
	Percent                                  = 1,
	EFortComicPanelUnit_MAX                  = 2,
};

// Enum ComicReader.EFortComicPanelTransitionType
// NumValues: 0x0003
enum class EFortComicPanelTransitionType : uint8
{
	Pan                                      = 0,
	CrossFade                                = 1,
	EFortComicPanelTransitionType_MAX        = 2,
};

// Enum ComicReader.EFortComicPanelMaskType
// NumValues: 0x0003
enum class EFortComicPanelMaskType : uint8
{
	Rectangle                                = 0,
	Quad                                     = 1,
	EFortComicPanelMaskType_MAX              = 2,
};

// Enum ComicReader.EFortComicViewMode
// NumValues: 0x0003
enum class EFortComicViewMode : uint8
{
	Page                                     = 0,
	Panel                                    = 1,
	EFortComicViewMode_MAX                   = 2,
};

// ScriptStruct ComicReader.FortComicPanelTransition
// 0x0008 (0x0008 - 0x0000)
struct FFortComicPanelTransition final
{
public:
	EFortComicPanelTransitionType                 Type;                                              // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C82[0x3];                                      // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Duration;                                          // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFortComicPanelTransition) == 0x000004, "Wrong alignment on FFortComicPanelTransition");
static_assert(sizeof(FFortComicPanelTransition) == 0x000008, "Wrong size on FFortComicPanelTransition");
static_assert(offsetof(FFortComicPanelTransition, Type) == 0x000000, "Member 'FFortComicPanelTransition::Type' has a wrong offset!");
static_assert(offsetof(FFortComicPanelTransition, Duration) == 0x000004, "Member 'FFortComicPanelTransition::Duration' has a wrong offset!");

// ScriptStruct ComicReader.FortComicPanel
// 0x0048 (0x0048 - 0x0000)
struct alignas(0x08) FFortComicPanel final
{
public:
	struct FVector2D                              Position;                                          // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              Size;                                              // 0x0008(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortComicPanelTransition              ForwardTransition;                                 // 0x0010(0x0008)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	EFortComicPanelMaskType                       Mask;                                              // 0x0018(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C83[0x3];                                      // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              MaskPoints[0x4];                                   // 0x001C(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C84[0xC];                                      // 0x003C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FFortComicPanel) == 0x000008, "Wrong alignment on FFortComicPanel");
static_assert(sizeof(FFortComicPanel) == 0x000048, "Wrong size on FFortComicPanel");
static_assert(offsetof(FFortComicPanel, Position) == 0x000000, "Member 'FFortComicPanel::Position' has a wrong offset!");
static_assert(offsetof(FFortComicPanel, Size) == 0x000008, "Member 'FFortComicPanel::Size' has a wrong offset!");
static_assert(offsetof(FFortComicPanel, ForwardTransition) == 0x000010, "Member 'FFortComicPanel::ForwardTransition' has a wrong offset!");
static_assert(offsetof(FFortComicPanel, Mask) == 0x000018, "Member 'FFortComicPanel::Mask' has a wrong offset!");
static_assert(offsetof(FFortComicPanel, MaskPoints) == 0x00001C, "Member 'FFortComicPanel::MaskPoints' has a wrong offset!");

// ScriptStruct ComicReader.FortComicPanelReference
// 0x0008 (0x0008 - 0x0000)
struct FFortComicPanelReference final
{
public:
	int32                                         PageIndex;                                         // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PanelIndex;                                        // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFortComicPanelReference) == 0x000004, "Wrong alignment on FFortComicPanelReference");
static_assert(sizeof(FFortComicPanelReference) == 0x000008, "Wrong size on FFortComicPanelReference");
static_assert(offsetof(FFortComicPanelReference, PageIndex) == 0x000000, "Member 'FFortComicPanelReference::PageIndex' has a wrong offset!");
static_assert(offsetof(FFortComicPanelReference, PanelIndex) == 0x000004, "Member 'FFortComicPanelReference::PanelIndex' has a wrong offset!");

}
