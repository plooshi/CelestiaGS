#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIEmitterElement

#include "Basic.hpp"

#include "UIEmitterElement_classes.hpp"
#include "UIEmitterElement_parameters.hpp"


namespace SDK
{

// Function UIEmitterElement.UIEmitterElement_C.EmitterBirth__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUIEmitterElement_C::EmitterBirth__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIEmitterElement_C", "EmitterBirth__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIEmitterElement.UIEmitterElement_C.EmitterDeath__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUIEmitterElement_C::EmitterDeath__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIEmitterElement_C", "EmitterDeath__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIEmitterElement.UIEmitterElement_C.ExecuteUbergraph_UIEmitterElement
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIEmitterElement_C::ExecuteUbergraph_UIEmitterElement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIEmitterElement_C", "ExecuteUbergraph_UIEmitterElement");

	Params::UIEmitterElement_C_ExecuteUbergraph_UIEmitterElement Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIEmitterElement.UIEmitterElement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIEmitterElement_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIEmitterElement_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIEmitterElement.UIEmitterElement_C.StartAnim
// (BlueprintCallable, BlueprintEvent)

void UUIEmitterElement_C::StartAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIEmitterElement_C", "StartAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIEmitterElement.UIEmitterElement_C.EventDestroy
// (BlueprintCallable, BlueprintEvent)

void UUIEmitterElement_C::EventDestroy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIEmitterElement_C", "EventDestroy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIEmitterElement.UIEmitterElement_C.EndofLife
// (BlueprintCallable, BlueprintEvent)

void UUIEmitterElement_C::EndofLife()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIEmitterElement_C", "EndofLife");

	UObject::ProcessEvent(Func, nullptr);
}

}
