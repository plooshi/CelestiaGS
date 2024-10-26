#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaEventMatchActiveGridScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaEventMatchActiveGridScreen.AthenaEventMatchActiveGridScreen_C
// 0x0010 (0x0480 - 0x0470)
class UAthenaEventMatchActiveGridScreen_C final : public UAthenaEventMatchActiveGridScreenBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0470(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUniformGridPanel*                      ActivePlayersGrid;                                 // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaEventMatchActiveGridScreen(int32 EntryPoint);
	void BP_OnActivated();
	void OnTeamChanged_BP();
	void OnTeamEliminated_BP();
	void Construct();
	void ShouldResizeGrid(bool* bShouldResize, int32* NumColumns);
	void ResetGrid(int32 InNumColumns);
	void CalculateRectangleGridHeight(int32 NumElements, int32* GridHeight);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaEventMatchActiveGridScreen_C">();
	}
	static class UAthenaEventMatchActiveGridScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaEventMatchActiveGridScreen_C>();
	}
};
static_assert(alignof(UAthenaEventMatchActiveGridScreen_C) == 0x000008, "Wrong alignment on UAthenaEventMatchActiveGridScreen_C");
static_assert(sizeof(UAthenaEventMatchActiveGridScreen_C) == 0x000480, "Wrong size on UAthenaEventMatchActiveGridScreen_C");
static_assert(offsetof(UAthenaEventMatchActiveGridScreen_C, UberGraphFrame) == 0x000470, "Member 'UAthenaEventMatchActiveGridScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaEventMatchActiveGridScreen_C, ActivePlayersGrid) == 0x000478, "Member 'UAthenaEventMatchActiveGridScreen_C::ActivePlayersGrid' has a wrong offset!");

}

