#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Curie

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum Curie.ECurieEntityType
// NumValues: 0x0004
enum class ECurieEntityType : uint8
{
	Invalid                                  = 0,
	Material                                 = 1,
	Element                                  = 2,
	ECurieEntityType_MAX                     = 3,
};

// ScriptStruct Curie.CurieInteractHandle
// 0x0004 (0x0004 - 0x0000)
struct alignas(0x04) FCurieInteractHandle final
{
public:
	uint8                                         Pad_4204[0x4];                                     // 0x0000(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCurieInteractHandle) == 0x000004, "Wrong alignment on FCurieInteractHandle");
static_assert(sizeof(FCurieInteractHandle) == 0x000004, "Wrong size on FCurieInteractHandle");

// ScriptStruct Curie.CurieContainerHandle
// 0x0004 (0x0004 - 0x0000)
struct alignas(0x04) FCurieContainerHandle final
{
public:
	uint8                                         Pad_4205[0x4];                                     // 0x0000(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCurieContainerHandle) == 0x000004, "Wrong alignment on FCurieContainerHandle");
static_assert(sizeof(FCurieContainerHandle) == 0x000004, "Wrong size on FCurieContainerHandle");

// ScriptStruct Curie.CurieStateBehaviorContainer
// 0x0010 (0x0010 - 0x0000)
struct FCurieStateBehaviorContainer final
{
public:
	struct FGameplayTag                           Identifier;                                        // 0x0000(0x0008)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCurieEntityStateBehavior>  StateBehaviorClass;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FCurieStateBehaviorContainer) == 0x000008, "Wrong alignment on FCurieStateBehaviorContainer");
static_assert(sizeof(FCurieStateBehaviorContainer) == 0x000010, "Wrong size on FCurieStateBehaviorContainer");
static_assert(offsetof(FCurieStateBehaviorContainer, Identifier) == 0x000000, "Member 'FCurieStateBehaviorContainer::Identifier' has a wrong offset!");
static_assert(offsetof(FCurieStateBehaviorContainer, StateBehaviorClass) == 0x000008, "Member 'FCurieStateBehaviorContainer::StateBehaviorClass' has a wrong offset!");

// ScriptStruct Curie.CurieInteractParamsHandle
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FCurieInteractParamsHandle final
{
public:
	uint8                                         Pad_4206[0x10];                                    // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCurieInteractParamsHandle) == 0x000008, "Wrong alignment on FCurieInteractParamsHandle");
static_assert(sizeof(FCurieInteractParamsHandle) == 0x000010, "Wrong size on FCurieInteractParamsHandle");

// ScriptStruct Curie.CurieElementHandle
// 0x0004 (0x0004 - 0x0000)
struct alignas(0x04) FCurieElementHandle final
{
public:
	uint8                                         Pad_4207[0x4];                                     // 0x0000(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCurieElementHandle) == 0x000004, "Wrong alignment on FCurieElementHandle");
static_assert(sizeof(FCurieElementHandle) == 0x000004, "Wrong size on FCurieElementHandle");

// ScriptStruct Curie.CurieStateHandle
// 0x0004 (0x0004 - 0x0000)
struct alignas(0x04) FCurieStateHandle final
{
public:
	uint8                                         Pad_4208[0x4];                                     // 0x0000(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCurieStateHandle) == 0x000004, "Wrong alignment on FCurieStateHandle");
static_assert(sizeof(FCurieStateHandle) == 0x000004, "Wrong size on FCurieStateHandle");

// ScriptStruct Curie.CurieEffectContainer
// 0x0050 (0x0050 - 0x0000)
struct FCurieEffectContainer final
{
public:
	struct FGameplayTagQuery                      TargetFilter;                                      // 0x0000(0x0048)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>            GameplayEffect;                                    // 0x0048(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCurieEffectContainer) == 0x000008, "Wrong alignment on FCurieEffectContainer");
static_assert(sizeof(FCurieEffectContainer) == 0x000050, "Wrong size on FCurieEffectContainer");
static_assert(offsetof(FCurieEffectContainer, TargetFilter) == 0x000000, "Member 'FCurieEffectContainer::TargetFilter' has a wrong offset!");
static_assert(offsetof(FCurieEffectContainer, GameplayEffect) == 0x000048, "Member 'FCurieEffectContainer::GameplayEffect' has a wrong offset!");

// ScriptStruct Curie.CurieEntityStateDefinitionBase
// 0x0010 (0x0018 - 0x0008)
struct FCurieEntityStateDefinitionBase : public FTableRowBase
{
public:
	TSubclassOf<class UCurieEntityStateBehavior>  StateBehaviorClass;                                // 0x0008(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         bIsEnabled : 1;                                    // 0x0010(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_4209[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCurieEntityStateDefinitionBase) == 0x000008, "Wrong alignment on FCurieEntityStateDefinitionBase");
static_assert(sizeof(FCurieEntityStateDefinitionBase) == 0x000018, "Wrong size on FCurieEntityStateDefinitionBase");
static_assert(offsetof(FCurieEntityStateDefinitionBase, StateBehaviorClass) == 0x000008, "Member 'FCurieEntityStateDefinitionBase::StateBehaviorClass' has a wrong offset!");

// ScriptStruct Curie.CurieElementDefinitionBase
// 0x0030 (0x0038 - 0x0008)
struct FCurieElementDefinitionBase : public FTableRowBase
{
public:
	TSubclassOf<class UCurieElementBehavior>      BehaviorClass;                                     // 0x0008(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                  ElementalImmunities;                               // 0x0010(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                         bIsEnabled : 1;                                    // 0x0030(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_420A[0x7];                                     // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCurieElementDefinitionBase) == 0x000008, "Wrong alignment on FCurieElementDefinitionBase");
static_assert(sizeof(FCurieElementDefinitionBase) == 0x000038, "Wrong size on FCurieElementDefinitionBase");
static_assert(offsetof(FCurieElementDefinitionBase, BehaviorClass) == 0x000008, "Member 'FCurieElementDefinitionBase::BehaviorClass' has a wrong offset!");
static_assert(offsetof(FCurieElementDefinitionBase, ElementalImmunities) == 0x000010, "Member 'FCurieElementDefinitionBase::ElementalImmunities' has a wrong offset!");

// ScriptStruct Curie.CurieMaterialDefinitionBase
// 0x0060 (0x0068 - 0x0008)
struct FCurieMaterialDefinitionBase : public FTableRowBase
{
public:
	struct FGameplayTagContainer                  ElementalImmunities;                               // 0x0008(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                  ElementAttachmentImmunities;                       // 0x0028(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                  ElementsAllowedWhenCannotBeDamaged;                // 0x0048(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FCurieMaterialDefinitionBase) == 0x000008, "Wrong alignment on FCurieMaterialDefinitionBase");
static_assert(sizeof(FCurieMaterialDefinitionBase) == 0x000068, "Wrong size on FCurieMaterialDefinitionBase");
static_assert(offsetof(FCurieMaterialDefinitionBase, ElementalImmunities) == 0x000008, "Member 'FCurieMaterialDefinitionBase::ElementalImmunities' has a wrong offset!");
static_assert(offsetof(FCurieMaterialDefinitionBase, ElementAttachmentImmunities) == 0x000028, "Member 'FCurieMaterialDefinitionBase::ElementAttachmentImmunities' has a wrong offset!");
static_assert(offsetof(FCurieMaterialDefinitionBase, ElementsAllowedWhenCannotBeDamaged) == 0x000048, "Member 'FCurieMaterialDefinitionBase::ElementsAllowedWhenCannotBeDamaged' has a wrong offset!");

}
