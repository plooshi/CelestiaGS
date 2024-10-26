#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MatchXPDetails

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MatchXPDetails.MatchXPDetails_C
// 0x0008 (0x02F0 - 0x02E8)
class UMatchXPDetails_C final : public UFortMatchXPDetails
{
public:
	class UImage*                                 Image_FlatBG;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MatchXPDetails_C">();
	}
	static class UMatchXPDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMatchXPDetails_C>();
	}
};
static_assert(alignof(UMatchXPDetails_C) == 0x000008, "Wrong alignment on UMatchXPDetails_C");
static_assert(sizeof(UMatchXPDetails_C) == 0x0002F0, "Wrong size on UMatchXPDetails_C");
static_assert(offsetof(UMatchXPDetails_C, Image_FlatBG) == 0x0002E8, "Member 'UMatchXPDetails_C::Image_FlatBG' has a wrong offset!");

}

