#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_Agency_Poster_01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Apollo_Agency_Poster_01.Apollo_Agency_Poster_01_C
// 0x0050 (0x0C10 - 0x0BC0)
class AApollo_Agency_Poster_01_C final : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BC0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0BC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FText                                   InteractString;                                    // 0x0BD0(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UFortQuestItemDefinition*               QuestToCheck;                                      // 0x0BE8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   QuestBackendName;                                  // 0x0BF0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             MarkerSound;                                       // 0x0BF8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     DefacedMaterial;                                   // 0x0C00(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanInteract;                                       // 0x0C08(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsDefaced;                                         // 0x0C09(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

public:
	void ExecuteUbergraph_Apollo_Agency_Poster_01(int32 EntryPoint);
	void OnBounceAnimationUpdate(const struct FFortBounceData& Data);
	void PosterCosmeticEffects();
	void BlueprintOnInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted);
	void ReceiveBeginPlay();
	void OnCurrentQuestsReady_0C8E5B5B41A11E40F43F7A9CEBE88977(class UFortQuestManager* OwningQuestManager, bool bFoundAllQuestsOnProfile);
	void OnRep_IsDefaced();

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const;
	class FText BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Apollo_Agency_Poster_01_C">();
	}
	static class AApollo_Agency_Poster_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AApollo_Agency_Poster_01_C>();
	}
};
static_assert(alignof(AApollo_Agency_Poster_01_C) == 0x000008, "Wrong alignment on AApollo_Agency_Poster_01_C");
static_assert(sizeof(AApollo_Agency_Poster_01_C) == 0x000C10, "Wrong size on AApollo_Agency_Poster_01_C");
static_assert(offsetof(AApollo_Agency_Poster_01_C, UberGraphFrame) == 0x000BC0, "Member 'AApollo_Agency_Poster_01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AApollo_Agency_Poster_01_C, Box) == 0x000BC8, "Member 'AApollo_Agency_Poster_01_C::Box' has a wrong offset!");
static_assert(offsetof(AApollo_Agency_Poster_01_C, InteractString) == 0x000BD0, "Member 'AApollo_Agency_Poster_01_C::InteractString' has a wrong offset!");
static_assert(offsetof(AApollo_Agency_Poster_01_C, QuestToCheck) == 0x000BE8, "Member 'AApollo_Agency_Poster_01_C::QuestToCheck' has a wrong offset!");
static_assert(offsetof(AApollo_Agency_Poster_01_C, QuestBackendName) == 0x000BF0, "Member 'AApollo_Agency_Poster_01_C::QuestBackendName' has a wrong offset!");
static_assert(offsetof(AApollo_Agency_Poster_01_C, MarkerSound) == 0x000BF8, "Member 'AApollo_Agency_Poster_01_C::MarkerSound' has a wrong offset!");
static_assert(offsetof(AApollo_Agency_Poster_01_C, DefacedMaterial) == 0x000C00, "Member 'AApollo_Agency_Poster_01_C::DefacedMaterial' has a wrong offset!");
static_assert(offsetof(AApollo_Agency_Poster_01_C, CanInteract) == 0x000C08, "Member 'AApollo_Agency_Poster_01_C::CanInteract' has a wrong offset!");
static_assert(offsetof(AApollo_Agency_Poster_01_C, IsDefaced) == 0x000C09, "Member 'AApollo_Agency_Poster_01_C::IsDefaced' has a wrong offset!");

}
