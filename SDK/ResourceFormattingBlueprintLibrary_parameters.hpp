#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ResourceFormattingBlueprintLibrary

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ResourceFormattingBlueprintLibrary.ResourceFormattingBlueprintLibrary_C.UpdateResouceCountOnTextblock
// 0x0030 (0x0030 - 0x0000)
struct ResourceFormattingBlueprintLibrary_C_UpdateResouceCountOnTextblock final
{
public:
	class UCommonNumericTextBlock*                TextBlock;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ResourceCount;                                     // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5130[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5131[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTargetValue_ReturnValue;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5132[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResourceFormattingBlueprintLibrary_C_UpdateResouceCountOnTextblock) == 0x000008, "Wrong alignment on ResourceFormattingBlueprintLibrary_C_UpdateResouceCountOnTextblock");
static_assert(sizeof(ResourceFormattingBlueprintLibrary_C_UpdateResouceCountOnTextblock) == 0x000030, "Wrong size on ResourceFormattingBlueprintLibrary_C_UpdateResouceCountOnTextblock");
static_assert(offsetof(ResourceFormattingBlueprintLibrary_C_UpdateResouceCountOnTextblock, TextBlock) == 0x000000, "Member 'ResourceFormattingBlueprintLibrary_C_UpdateResouceCountOnTextblock::TextBlock' has a wrong offset!");
static_assert(offsetof(ResourceFormattingBlueprintLibrary_C_UpdateResouceCountOnTextblock, ResourceCount) == 0x000008, "Member 'ResourceFormattingBlueprintLibrary_C_UpdateResouceCountOnTextblock::ResourceCount' has a wrong offset!");
static_assert(offsetof(ResourceFormattingBlueprintLibrary_C_UpdateResouceCountOnTextblock, __WorldContext) == 0x000010, "Member 'ResourceFormattingBlueprintLibrary_C_UpdateResouceCountOnTextblock::__WorldContext' has a wrong offset!");
static_assert(offsetof(ResourceFormattingBlueprintLibrary_C_UpdateResouceCountOnTextblock, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'ResourceFormattingBlueprintLibrary_C_UpdateResouceCountOnTextblock::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResourceFormattingBlueprintLibrary_C_UpdateResouceCountOnTextblock, CallFunc_GetTargetValue_ReturnValue) == 0x00001C, "Member 'ResourceFormattingBlueprintLibrary_C_UpdateResouceCountOnTextblock::CallFunc_GetTargetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResourceFormattingBlueprintLibrary_C_UpdateResouceCountOnTextblock, CallFunc_Round_ReturnValue) == 0x000020, "Member 'ResourceFormattingBlueprintLibrary_C_UpdateResouceCountOnTextblock::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResourceFormattingBlueprintLibrary_C_UpdateResouceCountOnTextblock, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000024, "Member 'ResourceFormattingBlueprintLibrary_C_UpdateResouceCountOnTextblock::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResourceFormattingBlueprintLibrary_C_UpdateResouceCountOnTextblock, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000028, "Member 'ResourceFormattingBlueprintLibrary_C_UpdateResouceCountOnTextblock::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");

// Function ResourceFormattingBlueprintLibrary.ResourceFormattingBlueprintLibrary_C.MakeBrushFromResource
// 0x0178 (0x0178 - 0x0000)
struct ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource final
{
public:
	EFortResourceType                             Resource;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5133[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Width;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Height;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5134[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            Brush;                                             // 0x0018(0x0088)(Parm, OutParm)
	bool                                          IsValid;                                           // 0x00A0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5135[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPaperSprite*                           Temp_object_Variable;                              // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                           Temp_object_Variable_1;                            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                           Temp_object_Variable_2;                            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                           Temp_object_Variable_3;                            // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                           Temp_object_Variable_4;                            // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                           Temp_object_Variable_5;                            // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortResourceType                             Temp_byte_Variable;                                // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5136[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPaperSprite*                           K2Node_Select_Default;                             // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            CallFunc_MakeBrushFromSprite_ReturnValue;          // 0x00E8(0x0088)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource) == 0x000008, "Wrong alignment on ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource");
static_assert(sizeof(ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource) == 0x000178, "Wrong size on ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource");
static_assert(offsetof(ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource, Resource) == 0x000000, "Member 'ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource::Resource' has a wrong offset!");
static_assert(offsetof(ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource, Width) == 0x000004, "Member 'ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource::Width' has a wrong offset!");
static_assert(offsetof(ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource, Height) == 0x000008, "Member 'ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource::Height' has a wrong offset!");
static_assert(offsetof(ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource, __WorldContext) == 0x000010, "Member 'ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource::__WorldContext' has a wrong offset!");
static_assert(offsetof(ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource, Brush) == 0x000018, "Member 'ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource::Brush' has a wrong offset!");
static_assert(offsetof(ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource, IsValid) == 0x0000A0, "Member 'ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource::IsValid' has a wrong offset!");
static_assert(offsetof(ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource, Temp_object_Variable) == 0x0000A8, "Member 'ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource, Temp_object_Variable_1) == 0x0000B0, "Member 'ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource, Temp_object_Variable_2) == 0x0000B8, "Member 'ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource, Temp_object_Variable_3) == 0x0000C0, "Member 'ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource, Temp_object_Variable_4) == 0x0000C8, "Member 'ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource, Temp_object_Variable_5) == 0x0000D0, "Member 'ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource, Temp_byte_Variable) == 0x0000D8, "Member 'ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource, K2Node_Select_Default) == 0x0000E0, "Member 'ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource, CallFunc_MakeBrushFromSprite_ReturnValue) == 0x0000E8, "Member 'ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource::CallFunc_MakeBrushFromSprite_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource, CallFunc_IsValid_ReturnValue) == 0x000170, "Member 'ResourceFormattingBlueprintLibrary_C_MakeBrushFromResource::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

