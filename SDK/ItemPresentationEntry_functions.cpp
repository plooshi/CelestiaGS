#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemPresentationEntry

#include "Basic.hpp"

#include "ItemPresentationEntry_classes.hpp"
#include "ItemPresentationEntry_parameters.hpp"


namespace SDK
{

// Function ItemPresentationEntry.ItemPresentationEntry_C.ExecuteUbergraph_ItemPresentationEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationEntry_C::ExecuteUbergraph_ItemPresentationEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemPresentationEntry_C", "ExecuteUbergraph_ItemPresentationEntry");

	Params::ItemPresentationEntry_C_ExecuteUbergraph_ItemPresentationEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemPresentationEntry.ItemPresentationEntry_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UItemPresentationEntry_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemPresentationEntry_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemPresentationEntry.ItemPresentationEntry_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UItemPresentationEntry_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemPresentationEntry_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemPresentationEntry.ItemPresentationEntry_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UItemPresentationEntry_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemPresentationEntry_C", "OnMouseLeave");

	Params::ItemPresentationEntry_C_OnMouseLeave Parms{};

	Parms.MouseEvent = move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemPresentationEntry.ItemPresentationEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemPresentationEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemPresentationEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemPresentationEntry.ItemPresentationEntry_C.DelayIntroAnimation
// (BlueprintCallable, BlueprintEvent)

void UItemPresentationEntry_C::DelayIntroAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemPresentationEntry_C", "DelayIntroAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemPresentationEntry.ItemPresentationEntry_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UItemPresentationEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemPresentationEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemPresentationEntry.ItemPresentationEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UItemPresentationEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemPresentationEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemPresentationEntry.ItemPresentationEntry_C.HandleHover
// (Public, BlueprintCallable, BlueprintEvent)

void UItemPresentationEntry_C::HandleHover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemPresentationEntry_C", "HandleHover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemPresentationEntry.ItemPresentationEntry_C.HandleUnhover
// (Public, BlueprintCallable, BlueprintEvent)

void UItemPresentationEntry_C::HandleUnhover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemPresentationEntry_C", "HandleUnhover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemPresentationEntry.ItemPresentationEntry_C.HandleSelectedAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UItemPresentationEntry_C::HandleSelectedAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemPresentationEntry_C", "HandleSelectedAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemPresentationEntry.ItemPresentationEntry_C.HandelDeselectedAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UItemPresentationEntry_C::HandelDeselectedAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemPresentationEntry_C", "HandelDeselectedAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemPresentationEntry.ItemPresentationEntry_C.PlayIntro
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TimeBeforeStart                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationEntry_C::PlayIntro(float TimeBeforeStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemPresentationEntry_C", "PlayIntro");

	Params::ItemPresentationEntry_C_PlayIntro Parms{};

	Parms.TimeBeforeStart = TimeBeforeStart;

	UObject::ProcessEvent(Func, &Parms);
}

}
