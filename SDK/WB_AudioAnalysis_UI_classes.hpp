#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_AudioAnalysis_UI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C
// 0x0020 (0x0250 - 0x0230)
class UWB_AudioAnalysis_UI_C final : public UFortAudioAnalysisDebugWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           GraphBox;                                          // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWB_AudioAnalysis_FloatGraph_C*> Widgets;                                           // 0x0240(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)

public:
	void AddMPCParameter(class FName ParamName, class UMaterialParameterCollection* Collection, int32 Vec4Index);
	void ExecuteUbergraph_WB_AudioAnalysis_UI(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_AudioAnalysis_UI_C">();
	}
	static class UWB_AudioAnalysis_UI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_AudioAnalysis_UI_C>();
	}
};
static_assert(alignof(UWB_AudioAnalysis_UI_C) == 0x000008, "Wrong alignment on UWB_AudioAnalysis_UI_C");
static_assert(sizeof(UWB_AudioAnalysis_UI_C) == 0x000250, "Wrong size on UWB_AudioAnalysis_UI_C");
static_assert(offsetof(UWB_AudioAnalysis_UI_C, UberGraphFrame) == 0x000230, "Member 'UWB_AudioAnalysis_UI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_AudioAnalysis_UI_C, GraphBox) == 0x000238, "Member 'UWB_AudioAnalysis_UI_C::GraphBox' has a wrong offset!");
static_assert(offsetof(UWB_AudioAnalysis_UI_C, Widgets) == 0x000240, "Member 'UWB_AudioAnalysis_UI_C::Widgets' has a wrong offset!");

}

