#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestRecapEntry

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestRecapEntry.QuestRecapEntry_C
// 0x0048 (0x0300 - 0x02B8)
class UQuestRecapEntry_C final : public UAthenaChallengeRecapEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Fill;                                              // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                          BorderXPBar;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EndingValue;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_CompletionCheck;                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StartingValue;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_CompletionText;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                              TestValues;                                        // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EndValue;                                          // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_QuestRecapEntry(int32 EntryPoint);
	void StartIntroAnim();
	void StartOutroAnim();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void EventFillComplete();
	void EventSetBarVisuals(float StartValue, float NewValue);
	void UpdateProgressBar(float StartingPercent, float EndingPercent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestRecapEntry_C">();
	}
	static class UQuestRecapEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestRecapEntry_C>();
	}
};
static_assert(alignof(UQuestRecapEntry_C) == 0x000008, "Wrong alignment on UQuestRecapEntry_C");
static_assert(sizeof(UQuestRecapEntry_C) == 0x000300, "Wrong size on UQuestRecapEntry_C");
static_assert(offsetof(UQuestRecapEntry_C, UberGraphFrame) == 0x0002B8, "Member 'UQuestRecapEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestRecapEntry_C, Fill) == 0x0002C0, "Member 'UQuestRecapEntry_C::Fill' has a wrong offset!");
static_assert(offsetof(UQuestRecapEntry_C, BorderXPBar) == 0x0002C8, "Member 'UQuestRecapEntry_C::BorderXPBar' has a wrong offset!");
static_assert(offsetof(UQuestRecapEntry_C, EndingValue) == 0x0002D0, "Member 'UQuestRecapEntry_C::EndingValue' has a wrong offset!");
static_assert(offsetof(UQuestRecapEntry_C, Image_CompletionCheck) == 0x0002D8, "Member 'UQuestRecapEntry_C::Image_CompletionCheck' has a wrong offset!");
static_assert(offsetof(UQuestRecapEntry_C, StartingValue) == 0x0002E0, "Member 'UQuestRecapEntry_C::StartingValue' has a wrong offset!");
static_assert(offsetof(UQuestRecapEntry_C, Text_CompletionText) == 0x0002E8, "Member 'UQuestRecapEntry_C::Text_CompletionText' has a wrong offset!");
static_assert(offsetof(UQuestRecapEntry_C, TestValues) == 0x0002F0, "Member 'UQuestRecapEntry_C::TestValues' has a wrong offset!");
static_assert(offsetof(UQuestRecapEntry_C, EndValue) == 0x0002F8, "Member 'UQuestRecapEntry_C::EndValue' has a wrong offset!");

}
