#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lightbox

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Lightbox.Lightbox_C.ExecuteUbergraph_Lightbox
// 0x001C (0x001C - 0x0000)
struct Lightbox_C_ExecuteUbergraph_Lightbox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55AD[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;                    // 0x000C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Lightbox_C_ExecuteUbergraph_Lightbox) == 0x000004, "Wrong alignment on Lightbox_C_ExecuteUbergraph_Lightbox");
static_assert(sizeof(Lightbox_C_ExecuteUbergraph_Lightbox) == 0x00001C, "Wrong size on Lightbox_C_ExecuteUbergraph_Lightbox");
static_assert(offsetof(Lightbox_C_ExecuteUbergraph_Lightbox, EntryPoint) == 0x000000, "Member 'Lightbox_C_ExecuteUbergraph_Lightbox::EntryPoint' has a wrong offset!");
static_assert(offsetof(Lightbox_C_ExecuteUbergraph_Lightbox, Temp_byte_Variable) == 0x000004, "Member 'Lightbox_C_ExecuteUbergraph_Lightbox::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Lightbox_C_ExecuteUbergraph_Lightbox, Temp_byte_Variable_1) == 0x000005, "Member 'Lightbox_C_ExecuteUbergraph_Lightbox::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Lightbox_C_ExecuteUbergraph_Lightbox, K2Node_Event_IsDesignTime) == 0x000006, "Member 'Lightbox_C_ExecuteUbergraph_Lightbox::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Lightbox_C_ExecuteUbergraph_Lightbox, Temp_bool_Variable) == 0x000007, "Member 'Lightbox_C_ExecuteUbergraph_Lightbox::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Lightbox_C_ExecuteUbergraph_Lightbox, K2Node_Select_Default) == 0x000008, "Member 'Lightbox_C_ExecuteUbergraph_Lightbox::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Lightbox_C_ExecuteUbergraph_Lightbox, CallFunc_MakeColor_ReturnValue) == 0x00000C, "Member 'Lightbox_C_ExecuteUbergraph_Lightbox::CallFunc_MakeColor_ReturnValue' has a wrong offset!");

// Function Lightbox.Lightbox_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Lightbox_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Lightbox_C_PreConstruct) == 0x000001, "Wrong alignment on Lightbox_C_PreConstruct");
static_assert(sizeof(Lightbox_C_PreConstruct) == 0x000001, "Wrong size on Lightbox_C_PreConstruct");
static_assert(offsetof(Lightbox_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Lightbox_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Lightbox.Lightbox_C.Intro
// 0x0008 (0x0008 - 0x0000)
struct Lightbox_C_Intro final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Lightbox_C_Intro) == 0x000008, "Wrong alignment on Lightbox_C_Intro");
static_assert(sizeof(Lightbox_C_Intro) == 0x000008, "Wrong size on Lightbox_C_Intro");
static_assert(offsetof(Lightbox_C_Intro, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'Lightbox_C_Intro::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function Lightbox.Lightbox_C.Outro
// 0x0008 (0x0008 - 0x0000)
struct Lightbox_C_Outro final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Lightbox_C_Outro) == 0x000008, "Wrong alignment on Lightbox_C_Outro");
static_assert(sizeof(Lightbox_C_Outro) == 0x000008, "Wrong size on Lightbox_C_Outro");
static_assert(offsetof(Lightbox_C_Outro, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'Lightbox_C_Outro::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function Lightbox.Lightbox_C.AddContent
// 0x0010 (0x0010 - 0x0000)
struct Lightbox_C_AddContent final
{
public:
	class UCommonUserWidget*                      Param_Content;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Lightbox_C_AddContent) == 0x000008, "Wrong alignment on Lightbox_C_AddContent");
static_assert(sizeof(Lightbox_C_AddContent) == 0x000010, "Wrong size on Lightbox_C_AddContent");
static_assert(offsetof(Lightbox_C_AddContent, Param_Content) == 0x000000, "Member 'Lightbox_C_AddContent::Param_Content' has a wrong offset!");
static_assert(offsetof(Lightbox_C_AddContent, CallFunc_AddChild_ReturnValue) == 0x000008, "Member 'Lightbox_C_AddContent::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function Lightbox.Lightbox_C.RemoveContent
// 0x0001 (0x0001 - 0x0000)
struct Lightbox_C_RemoveContent final
{
public:
	bool                                          CallFunc_HasAnyChildren_ReturnValue;               // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Lightbox_C_RemoveContent) == 0x000001, "Wrong alignment on Lightbox_C_RemoveContent");
static_assert(sizeof(Lightbox_C_RemoveContent) == 0x000001, "Wrong size on Lightbox_C_RemoveContent");
static_assert(offsetof(Lightbox_C_RemoveContent, CallFunc_HasAnyChildren_ReturnValue) == 0x000000, "Member 'Lightbox_C_RemoveContent::CallFunc_HasAnyChildren_ReturnValue' has a wrong offset!");

}
