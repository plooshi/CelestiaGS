#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemCostWidget

#include "Basic.hpp"

#include "ItemCostWidget_classes.hpp"
#include "ItemCostWidget_parameters.hpp"


namespace SDK
{

// Function ItemCostWidget.ItemCostWidget_C.ExecuteUbergraph_ItemCostWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemCostWidget_C::ExecuteUbergraph_ItemCostWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCostWidget_C", "ExecuteUbergraph_ItemCostWidget");

	Params::ItemCostWidget_C_ExecuteUbergraph_ItemCostWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemCostWidget.ItemCostWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCostWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCostWidget_C", "PreConstruct");

	Params::ItemCostWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemCostWidget.ItemCostWidget_C.SetItemCost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           SpecifiedItemCostComponent                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemCostWidget_C::SetItemCost(class AActor* Actor, class UClass* SpecifiedItemCostComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCostWidget_C", "SetItemCost");

	Params::ItemCostWidget_C_SetItemCost Parms{};

	Parms.Actor = Actor;
	Parms.SpecifiedItemCostComponent = SpecifiedItemCostComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemCostWidget.ItemCostWidget_C.AreCostsValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<EFortResourceType, int32>          Costs                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    CostsAreValid                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCostWidget_C::AreCostsValid(const TMap<EFortResourceType, int32>& Costs, bool* CostsAreValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCostWidget_C", "AreCostsValid");

	Params::ItemCostWidget_C_AreCostsValid Parms{};

	Parms.Costs = move(Costs);

	UObject::ProcessEvent(Func, &Parms);

	if (CostsAreValid != nullptr)
		*CostsAreValid = Parms.CostsAreValid;
}


// Function ItemCostWidget.ItemCostWidget_C.UpdateResource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<EFortResourceType, int32>          Costs                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UResourceCountWidget_C*           ResourceWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemCostWidget_C::UpdateResource(const TMap<EFortResourceType, int32>& Costs, class UResourceCountWidget_C* ResourceWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCostWidget_C", "UpdateResource");

	Params::ItemCostWidget_C_UpdateResource Parms{};

	Parms.Costs = move(Costs);
	Parms.ResourceWidget = ResourceWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemCostWidget.ItemCostWidget_C.GetValidatedCost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<EFortResourceType, int32>          Costs                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EFortResourceType                       Resource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CostIsValid                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Cost                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemCostWidget_C::GetValidatedCost(const TMap<EFortResourceType, int32>& Costs, const EFortResourceType& Resource, bool* CostIsValid, int32* Cost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCostWidget_C", "GetValidatedCost");

	Params::ItemCostWidget_C_GetValidatedCost Parms{};

	Parms.Costs = move(Costs);
	Parms.Resource = Resource;

	UObject::ProcessEvent(Func, &Parms);

	if (CostIsValid != nullptr)
		*CostIsValid = Parms.CostIsValid;

	if (Cost != nullptr)
		*Cost = Parms.Cost;
}


// Function ItemCostWidget.ItemCostWidget_C.PopulateWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UItemCostWidget_C::PopulateWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCostWidget_C", "PopulateWidgets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemCostWidget.ItemCostWidget_C.FindWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortResourceType                       Resource                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResourceCountWidget_C*           Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemCostWidget_C::FindWidget(EFortResourceType Resource, class UResourceCountWidget_C** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCostWidget_C", "FindWidget");

	Params::ItemCostWidget_C_FindWidget Parms{};

	Parms.Resource = Resource;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function ItemCostWidget.ItemCostWidget_C.SetRarityData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortRarityItemData              RarityData                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UItemCostWidget_C::SetRarityData(const struct FFortRarityItemData& RarityData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCostWidget_C", "SetRarityData");

	Params::ItemCostWidget_C_SetRarityData Parms{};

	Parms.RarityData = move(RarityData);

	UObject::ProcessEvent(Func, &Parms);
}

}
