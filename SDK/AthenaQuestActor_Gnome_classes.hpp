#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaQuestActor_Gnome

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AthenaQuest_BGA_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AthenaQuestActor_Gnome.AthenaQuestActor_Gnome_C
// 0x0010 (0x08D0 - 0x08C0)
class AAthenaQuestActor_Gnome_C final : public AAthenaQuest_BGA_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AthenaQuestActor_Gnome_C;           // 0x08C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_Apollo_Gnome;                                   // 0x08C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaQuestActor_Gnome(int32 EntryPoint);
	void OnObjectiveCompleteForPlayer(class UFortQuestObjectiveInfo* ObjectiveInfo, class AFortPlayerController* PCOverrideForVisualTesting);
	void OnQuestEnabledForPlayer(class AFortPlayerController* FortPlayerController);
	void SetAdditionalQuestsRequiredOnProfile(TArray<class UFortQuestItemDefinition*>* Param_QuestsRequiredOnProfile);
	void SetPrimitiveGroupsToHide(TArray<class UPrimitiveComponent*>* Param_PrimitivesToHideByDefault, TArray<class UPrimitiveComponent*>* Param_PrimitivesToShowIfQuestComplete, TArray<class UPrimitiveComponent*>* Param_PrimitivesToShowIfQuestInProgress);

	class FText BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaQuestActor_Gnome_C">();
	}
	static class AAthenaQuestActor_Gnome_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthenaQuestActor_Gnome_C>();
	}
};
static_assert(alignof(AAthenaQuestActor_Gnome_C) == 0x000008, "Wrong alignment on AAthenaQuestActor_Gnome_C");
static_assert(sizeof(AAthenaQuestActor_Gnome_C) == 0x0008D0, "Wrong size on AAthenaQuestActor_Gnome_C");
static_assert(offsetof(AAthenaQuestActor_Gnome_C, UberGraphFrame_AthenaQuestActor_Gnome_C) == 0x0008C0, "Member 'AAthenaQuestActor_Gnome_C::UberGraphFrame_AthenaQuestActor_Gnome_C' has a wrong offset!");
static_assert(offsetof(AAthenaQuestActor_Gnome_C, SM_Apollo_Gnome) == 0x0008C8, "Member 'AAthenaQuestActor_Gnome_C::SM_Apollo_Gnome' has a wrong offset!");

}

