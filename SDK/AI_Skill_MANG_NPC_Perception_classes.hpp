#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AI_Skill_MANG_NPC_Perception

#include "Basic.hpp"

#include "AI_skill_phoebe_bot_perception_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AI_Skill_MANG_NPC_Perception.AI_Skill_MANG_NPC_Perception_C
// 0x0000 (0x0978 - 0x0978)
class UAI_Skill_MANG_NPC_Perception_C final : public UAI_skill_phoebe_bot_perception_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AI_Skill_MANG_NPC_Perception_C">();
	}
	static class UAI_Skill_MANG_NPC_Perception_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAI_Skill_MANG_NPC_Perception_C>();
	}
};
static_assert(alignof(UAI_Skill_MANG_NPC_Perception_C) == 0x000008, "Wrong alignment on UAI_Skill_MANG_NPC_Perception_C");
static_assert(sizeof(UAI_Skill_MANG_NPC_Perception_C) == 0x000978, "Wrong size on UAI_Skill_MANG_NPC_Perception_C");

}
