#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BA_FORTNITE_NonSequential

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BA_FORTNITE_NonSequential.BA_FORTNITE_NonSequential_C
// 0x0180 (0x07A0 - 0x0620)
class ABA_FORTNITE_NonSequential_C final : public ABuildingActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0620(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_Celebrate2;                                      // 0x0628(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Celebrate1;                                      // 0x0630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Celebrate;                                       // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Fortnite_E;                                     // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Fortnite_I;                                     // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Fortnite_T2;                                    // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Fortnite_N;                                     // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Fortnite_T1;                                    // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Fortnite_O;                                     // 0x0668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Fortnite_R;                                     // 0x0670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Fortnite_F;                                     // 0x0678(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0680(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         DropLetters_E_time_EB5CF2724882C3CBA1456BB9E66AC9FE; // 0x0688(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DropLetters_T2_time_EB5CF2724882C3CBA1456BB9E66AC9FE; // 0x068C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DropLetters_I_time_EB5CF2724882C3CBA1456BB9E66AC9FE; // 0x0690(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DropLetters_N_time_EB5CF2724882C3CBA1456BB9E66AC9FE; // 0x0694(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DropLetters_T1_time_EB5CF2724882C3CBA1456BB9E66AC9FE; // 0x0698(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DropLetters_R_time_EB5CF2724882C3CBA1456BB9E66AC9FE; // 0x069C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DropLetters_O_time_EB5CF2724882C3CBA1456BB9E66AC9FE; // 0x06A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DropLetters_F_time_EB5CF2724882C3CBA1456BB9E66AC9FE; // 0x06A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            DropLetters__Direction_EB5CF2724882C3CBA1456BB9E66AC9FE; // 0x06A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_83C1[0x7];                                     // 0x06A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     DropLetters;                                       // 0x06B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeOut_GrowTime_CC98A4124134D3C4E40933B835F01B5D; // 0x06B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeOut_FadeOutTime_CC98A4124134D3C4E40933B835F01B5D; // 0x06BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FadeOut__Direction_CC98A4124134D3C4E40933B835F01B5D; // 0x06C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_83C2[0x7];                                     // 0x06C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FadeOut;                                           // 0x06C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentLetter;                                     // 0x06D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_83C3[0x4];                                     // 0x06D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               F_Mat;                                             // 0x06D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               O_Mat;                                             // 0x06E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               R_Mat;                                             // 0x06E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               T1_Mat;                                            // 0x06F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               N_Mat;                                             // 0x06F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               I_Mat;                                             // 0x0700(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               T2_Mat;                                            // 0x0708(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               E_Mat;                                             // 0x0710(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CelebrationSound;                                  // 0x0718(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SpellingAppearSound;                               // 0x0720(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortQuestItemDefinition*>       Completed_Letter_Quests;                           // 0x0728(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UFortQuestItemDefinition*>       All_Letter_Quests;                                 // 0x0738(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	TMap<int32, bool>                             Letters_Done;                                      // 0x0748(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          FinalLetter;                                       // 0x0798(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BA_FORTNITE_NonSequential(int32 EntryPoint);
	void FinalFadeOut();
	void FadeOutLetters();
	void ReceiveBeginPlay();
	void DropLetters__UpdateFunc();
	void DropLetters__FinishedFunc();
	void FadeOut__UpdateFunc();
	void FadeOut__FinishedFunc();
	void SetUpDynamicMats();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BA_FORTNITE_NonSequential_C">();
	}
	static class ABA_FORTNITE_NonSequential_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABA_FORTNITE_NonSequential_C>();
	}
};
static_assert(alignof(ABA_FORTNITE_NonSequential_C) == 0x000008, "Wrong alignment on ABA_FORTNITE_NonSequential_C");
static_assert(sizeof(ABA_FORTNITE_NonSequential_C) == 0x0007A0, "Wrong size on ABA_FORTNITE_NonSequential_C");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, UberGraphFrame) == 0x000620, "Member 'ABA_FORTNITE_NonSequential_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, P_Celebrate2) == 0x000628, "Member 'ABA_FORTNITE_NonSequential_C::P_Celebrate2' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, P_Celebrate1) == 0x000630, "Member 'ABA_FORTNITE_NonSequential_C::P_Celebrate1' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, P_Celebrate) == 0x000638, "Member 'ABA_FORTNITE_NonSequential_C::P_Celebrate' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, SM_Fortnite_E) == 0x000640, "Member 'ABA_FORTNITE_NonSequential_C::SM_Fortnite_E' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, SM_Fortnite_I) == 0x000648, "Member 'ABA_FORTNITE_NonSequential_C::SM_Fortnite_I' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, SM_Fortnite_T2) == 0x000650, "Member 'ABA_FORTNITE_NonSequential_C::SM_Fortnite_T2' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, SM_Fortnite_N) == 0x000658, "Member 'ABA_FORTNITE_NonSequential_C::SM_Fortnite_N' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, SM_Fortnite_T1) == 0x000660, "Member 'ABA_FORTNITE_NonSequential_C::SM_Fortnite_T1' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, SM_Fortnite_O) == 0x000668, "Member 'ABA_FORTNITE_NonSequential_C::SM_Fortnite_O' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, SM_Fortnite_R) == 0x000670, "Member 'ABA_FORTNITE_NonSequential_C::SM_Fortnite_R' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, SM_Fortnite_F) == 0x000678, "Member 'ABA_FORTNITE_NonSequential_C::SM_Fortnite_F' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, DefaultSceneRoot) == 0x000680, "Member 'ABA_FORTNITE_NonSequential_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, DropLetters_E_time_EB5CF2724882C3CBA1456BB9E66AC9FE) == 0x000688, "Member 'ABA_FORTNITE_NonSequential_C::DropLetters_E_time_EB5CF2724882C3CBA1456BB9E66AC9FE' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, DropLetters_T2_time_EB5CF2724882C3CBA1456BB9E66AC9FE) == 0x00068C, "Member 'ABA_FORTNITE_NonSequential_C::DropLetters_T2_time_EB5CF2724882C3CBA1456BB9E66AC9FE' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, DropLetters_I_time_EB5CF2724882C3CBA1456BB9E66AC9FE) == 0x000690, "Member 'ABA_FORTNITE_NonSequential_C::DropLetters_I_time_EB5CF2724882C3CBA1456BB9E66AC9FE' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, DropLetters_N_time_EB5CF2724882C3CBA1456BB9E66AC9FE) == 0x000694, "Member 'ABA_FORTNITE_NonSequential_C::DropLetters_N_time_EB5CF2724882C3CBA1456BB9E66AC9FE' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, DropLetters_T1_time_EB5CF2724882C3CBA1456BB9E66AC9FE) == 0x000698, "Member 'ABA_FORTNITE_NonSequential_C::DropLetters_T1_time_EB5CF2724882C3CBA1456BB9E66AC9FE' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, DropLetters_R_time_EB5CF2724882C3CBA1456BB9E66AC9FE) == 0x00069C, "Member 'ABA_FORTNITE_NonSequential_C::DropLetters_R_time_EB5CF2724882C3CBA1456BB9E66AC9FE' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, DropLetters_O_time_EB5CF2724882C3CBA1456BB9E66AC9FE) == 0x0006A0, "Member 'ABA_FORTNITE_NonSequential_C::DropLetters_O_time_EB5CF2724882C3CBA1456BB9E66AC9FE' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, DropLetters_F_time_EB5CF2724882C3CBA1456BB9E66AC9FE) == 0x0006A4, "Member 'ABA_FORTNITE_NonSequential_C::DropLetters_F_time_EB5CF2724882C3CBA1456BB9E66AC9FE' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, DropLetters__Direction_EB5CF2724882C3CBA1456BB9E66AC9FE) == 0x0006A8, "Member 'ABA_FORTNITE_NonSequential_C::DropLetters__Direction_EB5CF2724882C3CBA1456BB9E66AC9FE' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, DropLetters) == 0x0006B0, "Member 'ABA_FORTNITE_NonSequential_C::DropLetters' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, FadeOut_GrowTime_CC98A4124134D3C4E40933B835F01B5D) == 0x0006B8, "Member 'ABA_FORTNITE_NonSequential_C::FadeOut_GrowTime_CC98A4124134D3C4E40933B835F01B5D' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, FadeOut_FadeOutTime_CC98A4124134D3C4E40933B835F01B5D) == 0x0006BC, "Member 'ABA_FORTNITE_NonSequential_C::FadeOut_FadeOutTime_CC98A4124134D3C4E40933B835F01B5D' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, FadeOut__Direction_CC98A4124134D3C4E40933B835F01B5D) == 0x0006C0, "Member 'ABA_FORTNITE_NonSequential_C::FadeOut__Direction_CC98A4124134D3C4E40933B835F01B5D' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, FadeOut) == 0x0006C8, "Member 'ABA_FORTNITE_NonSequential_C::FadeOut' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, CurrentLetter) == 0x0006D0, "Member 'ABA_FORTNITE_NonSequential_C::CurrentLetter' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, F_Mat) == 0x0006D8, "Member 'ABA_FORTNITE_NonSequential_C::F_Mat' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, O_Mat) == 0x0006E0, "Member 'ABA_FORTNITE_NonSequential_C::O_Mat' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, R_Mat) == 0x0006E8, "Member 'ABA_FORTNITE_NonSequential_C::R_Mat' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, T1_Mat) == 0x0006F0, "Member 'ABA_FORTNITE_NonSequential_C::T1_Mat' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, N_Mat) == 0x0006F8, "Member 'ABA_FORTNITE_NonSequential_C::N_Mat' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, I_Mat) == 0x000700, "Member 'ABA_FORTNITE_NonSequential_C::I_Mat' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, T2_Mat) == 0x000708, "Member 'ABA_FORTNITE_NonSequential_C::T2_Mat' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, E_Mat) == 0x000710, "Member 'ABA_FORTNITE_NonSequential_C::E_Mat' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, CelebrationSound) == 0x000718, "Member 'ABA_FORTNITE_NonSequential_C::CelebrationSound' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, SpellingAppearSound) == 0x000720, "Member 'ABA_FORTNITE_NonSequential_C::SpellingAppearSound' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, Completed_Letter_Quests) == 0x000728, "Member 'ABA_FORTNITE_NonSequential_C::Completed_Letter_Quests' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, All_Letter_Quests) == 0x000738, "Member 'ABA_FORTNITE_NonSequential_C::All_Letter_Quests' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, Letters_Done) == 0x000748, "Member 'ABA_FORTNITE_NonSequential_C::Letters_Done' has a wrong offset!");
static_assert(offsetof(ABA_FORTNITE_NonSequential_C, FinalLetter) == 0x000798, "Member 'ABA_FORTNITE_NonSequential_C::FinalLetter' has a wrong offset!");

}

