#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LF_3x3_Parent

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LF_3x3_Parent.LF_3x3_Parent_C
// 0x0030 (0x0F00 - 0x0ED0)
class ALF_3x3_Parent_C final : public ABuildingFoundation3x3
{
public:
	class UTextRenderComponent*                   RenderTextComponent;                               // 0x0ED0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FText                                   EditorDisplayNameText;                             // 0x0ED8(0x0018)(Edit, BlueprintVisible)
	float                                         TextSize;                                          // 0x0EF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LF_3x3_Parent_C">();
	}
	static class ALF_3x3_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALF_3x3_Parent_C>();
	}
};
static_assert(alignof(ALF_3x3_Parent_C) == 0x000010, "Wrong alignment on ALF_3x3_Parent_C");
static_assert(sizeof(ALF_3x3_Parent_C) == 0x000F00, "Wrong size on ALF_3x3_Parent_C");
static_assert(offsetof(ALF_3x3_Parent_C, RenderTextComponent) == 0x000ED0, "Member 'ALF_3x3_Parent_C::RenderTextComponent' has a wrong offset!");
static_assert(offsetof(ALF_3x3_Parent_C, EditorDisplayNameText) == 0x000ED8, "Member 'ALF_3x3_Parent_C::EditorDisplayNameText' has a wrong offset!");
static_assert(offsetof(ALF_3x3_Parent_C, TextSize) == 0x000EF0, "Member 'ALF_3x3_Parent_C::TextSize' has a wrong offset!");

}
