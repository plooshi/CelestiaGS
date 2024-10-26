#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LF_Athena_POI_15x15

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LF_Athena_POI_15x15.LF_Athena_POI_15x15_C
// 0x0040 (0x0F10 - 0x0ED0)
class ALF_Athena_POI_15x15_C : public ABuildingFoundation5x5
{
public:
	class UTextRenderComponent*                   TextName;                                          // 0x0ED0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   TextSize;                                          // 0x0ED8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FText                                   Name_LF_Athena_POI_15x15_C;                        // 0x0EE0(0x0018)(Edit, BlueprintVisible)
	class FText                                   Size;                                              // 0x0EF8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LF_Athena_POI_15x15_C">();
	}
	static class ALF_Athena_POI_15x15_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALF_Athena_POI_15x15_C>();
	}
};
static_assert(alignof(ALF_Athena_POI_15x15_C) == 0x000010, "Wrong alignment on ALF_Athena_POI_15x15_C");
static_assert(sizeof(ALF_Athena_POI_15x15_C) == 0x000F10, "Wrong size on ALF_Athena_POI_15x15_C");
static_assert(offsetof(ALF_Athena_POI_15x15_C, TextName) == 0x000ED0, "Member 'ALF_Athena_POI_15x15_C::TextName' has a wrong offset!");
static_assert(offsetof(ALF_Athena_POI_15x15_C, TextSize) == 0x000ED8, "Member 'ALF_Athena_POI_15x15_C::TextSize' has a wrong offset!");
static_assert(offsetof(ALF_Athena_POI_15x15_C, Name_LF_Athena_POI_15x15_C) == 0x000EE0, "Member 'ALF_Athena_POI_15x15_C::Name_LF_Athena_POI_15x15_C' has a wrong offset!");
static_assert(offsetof(ALF_Athena_POI_15x15_C, Size) == 0x000EF8, "Member 'ALF_Athena_POI_15x15_C::Size' has a wrong offset!");

}

