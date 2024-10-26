#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cr_ChBrowserDeviceTile

#include "Basic.hpp"

#include "Cr_ChBrowserDeviceTile_classes.hpp"
#include "Cr_ChBrowserDeviceTile_parameters.hpp"


namespace SDK
{

// Function Cr_ChBrowserDeviceTile.Cr_ChBrowserDeviceTile_C.CloseUI__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCr_ChBrowserDeviceTile_C::CloseUI__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cr_ChBrowserDeviceTile_C", "CloseUI__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Cr_ChBrowserDeviceTile.Cr_ChBrowserDeviceTile_C.ExecuteUbergraph_Cr_ChBrowserDeviceTile
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCr_ChBrowserDeviceTile_C::ExecuteUbergraph_Cr_ChBrowserDeviceTile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cr_ChBrowserDeviceTile_C", "ExecuteUbergraph_Cr_ChBrowserDeviceTile");

	Params::Cr_ChBrowserDeviceTile_C_ExecuteUbergraph_Cr_ChBrowserDeviceTile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cr_ChBrowserDeviceTile.Cr_ChBrowserDeviceTile_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UCr_ChBrowserDeviceTile_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cr_ChBrowserDeviceTile_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Cr_ChBrowserDeviceTile.Cr_ChBrowserDeviceTile_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UCr_ChBrowserDeviceTile_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cr_ChBrowserDeviceTile_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Cr_ChBrowserDeviceTile.Cr_ChBrowserDeviceTile_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UCr_ChBrowserDeviceTile_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cr_ChBrowserDeviceTile_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Cr_ChBrowserDeviceTile.Cr_ChBrowserDeviceTile_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UCr_ChBrowserDeviceTile_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cr_ChBrowserDeviceTile_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Cr_ChBrowserDeviceTile.Cr_ChBrowserDeviceTile_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UCr_ChBrowserDeviceTile_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cr_ChBrowserDeviceTile_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Cr_ChBrowserDeviceTile.Cr_ChBrowserDeviceTile_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCr_ChBrowserDeviceTile_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cr_ChBrowserDeviceTile_C", "OnMouseLeave");

	Params::Cr_ChBrowserDeviceTile_C_OnMouseLeave Parms{};

	Parms.MouseEvent = move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cr_ChBrowserDeviceTile.Cr_ChBrowserDeviceTile_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCr_ChBrowserDeviceTile_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cr_ChBrowserDeviceTile_C", "OnMouseEnter");

	Params::Cr_ChBrowserDeviceTile_C_OnMouseEnter Parms{};

	Parms.MyGeometry = move(MyGeometry);
	Parms.MouseEvent = move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cr_ChBrowserDeviceTile.Cr_ChBrowserDeviceTile_C.Populate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class FText>                     InTxMessages                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TArray<class FText>                     InRxMessages                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UCr_ChBrowserDeviceTile_C::Populate(const class FText& InName, TArray<class FText>& InTxMessages, TArray<class FText>& InRxMessages)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cr_ChBrowserDeviceTile_C", "Populate");

	Params::Cr_ChBrowserDeviceTile_C_Populate Parms{};

	Parms.InName = move(InName);
	Parms.InTxMessages = move(InTxMessages);
	Parms.InRxMessages = move(InRxMessages);

	UObject::ProcessEvent(Func, &Parms);

	InTxMessages = move(Parms.InTxMessages);
	InRxMessages = move(Parms.InRxMessages);
}


// Function Cr_ChBrowserDeviceTile.Cr_ChBrowserDeviceTile_C.AddTxMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InMessage                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InChannel                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UCr_ChBrowserDeviceTile_C::AddTxMessage(const class FText& InMessage, const class FText& InChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cr_ChBrowserDeviceTile_C", "AddTxMessage");

	Params::Cr_ChBrowserDeviceTile_C_AddTxMessage Parms{};

	Parms.InMessage = move(InMessage);
	Parms.InChannel = move(InChannel);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cr_ChBrowserDeviceTile.Cr_ChBrowserDeviceTile_C.Add Rx Message
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InMessage                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InChannel                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UCr_ChBrowserDeviceTile_C::Add_Rx_Message(const class FText& InMessage, const class FText& InChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cr_ChBrowserDeviceTile_C", "Add Rx Message");

	Params::Cr_ChBrowserDeviceTile_C_Add_Rx_Message Parms{};

	Parms.InMessage = move(InMessage);
	Parms.InChannel = move(InChannel);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cr_ChBrowserDeviceTile.Cr_ChBrowserDeviceTile_C.UpdateName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UCr_ChBrowserDeviceTile_C::UpdateName(const class FText& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cr_ChBrowserDeviceTile_C", "UpdateName");

	Params::Cr_ChBrowserDeviceTile_C_UpdateName Parms{};

	Parms.InName = move(InName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cr_ChBrowserDeviceTile.Cr_ChBrowserDeviceTile_C.UpdateArt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       InTexture2D                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                      InSlateBrush                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UCr_ChBrowserDeviceTile_C::UpdateArt(class UTexture2D* InTexture2D, const struct FSlateBrush& InSlateBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cr_ChBrowserDeviceTile_C", "UpdateArt");

	Params::Cr_ChBrowserDeviceTile_C_UpdateArt Parms{};

	Parms.InTexture2D = InTexture2D;
	Parms.InSlateBrush = move(InSlateBrush);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cr_ChBrowserDeviceTile.Cr_ChBrowserDeviceTile_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)

void UCr_ChBrowserDeviceTile_C::Focus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cr_ChBrowserDeviceTile_C", "Focus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Cr_ChBrowserDeviceTile.Cr_ChBrowserDeviceTile_C.BeginFlying
// (Public, BlueprintCallable, BlueprintEvent)

void UCr_ChBrowserDeviceTile_C::BeginFlying()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cr_ChBrowserDeviceTile_C", "BeginFlying");

	UObject::ProcessEvent(Func, nullptr);
}

}

