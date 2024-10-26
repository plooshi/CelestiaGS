#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemCostWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemCostWidget.ItemCostWidget_C
// 0x0048 (0x0278 - 0x0230)
class UItemCostWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                RarityBorder;                                      // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ResourceWidgetsContainer;                          // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UResourceCountWidget_C*>         ResourceWidgets;                                   // 0x0248(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               RarityMID;                                         // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowRarityData;                                    // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseBackgroundForAffordabilityFeedback;             // 0x0261(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7990[0x6];                                     // 0x0262(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 NewVar_0;                                          // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 NewVar_1;                                          // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemCostWidget(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetItemCost(class AActor* Actor, class UClass* SpecifiedItemCostComponent);
	void AreCostsValid(const TMap<EFortResourceType, int32>& Costs, bool* CostsAreValid);
	void UpdateResource(const TMap<EFortResourceType, int32>& Costs, class UResourceCountWidget_C* ResourceWidget);
	void GetValidatedCost(const TMap<EFortResourceType, int32>& Costs, const EFortResourceType& Resource, bool* CostIsValid, int32* Cost);
	void PopulateWidgets();
	void FindWidget(EFortResourceType Resource, class UResourceCountWidget_C** Widget);
	void SetRarityData(const struct FFortRarityItemData& RarityData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemCostWidget_C">();
	}
	static class UItemCostWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemCostWidget_C>();
	}
};
static_assert(alignof(UItemCostWidget_C) == 0x000008, "Wrong alignment on UItemCostWidget_C");
static_assert(sizeof(UItemCostWidget_C) == 0x000278, "Wrong size on UItemCostWidget_C");
static_assert(offsetof(UItemCostWidget_C, UberGraphFrame) == 0x000230, "Member 'UItemCostWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemCostWidget_C, RarityBorder) == 0x000238, "Member 'UItemCostWidget_C::RarityBorder' has a wrong offset!");
static_assert(offsetof(UItemCostWidget_C, ResourceWidgetsContainer) == 0x000240, "Member 'UItemCostWidget_C::ResourceWidgetsContainer' has a wrong offset!");
static_assert(offsetof(UItemCostWidget_C, ResourceWidgets) == 0x000248, "Member 'UItemCostWidget_C::ResourceWidgets' has a wrong offset!");
static_assert(offsetof(UItemCostWidget_C, RarityMID) == 0x000258, "Member 'UItemCostWidget_C::RarityMID' has a wrong offset!");
static_assert(offsetof(UItemCostWidget_C, ShowRarityData) == 0x000260, "Member 'UItemCostWidget_C::ShowRarityData' has a wrong offset!");
static_assert(offsetof(UItemCostWidget_C, UseBackgroundForAffordabilityFeedback) == 0x000261, "Member 'UItemCostWidget_C::UseBackgroundForAffordabilityFeedback' has a wrong offset!");
static_assert(offsetof(UItemCostWidget_C, NewVar_0) == 0x000268, "Member 'UItemCostWidget_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UItemCostWidget_C, NewVar_1) == 0x000270, "Member 'UItemCostWidget_C::NewVar_1' has a wrong offset!");

}

