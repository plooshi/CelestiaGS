#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_Galileo_Wall_Poster

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Apollo_Galileo_Wall_Poster.Apollo_Galileo_Wall_Poster_C.ExecuteUbergraph_Apollo_Galileo_Wall_Poster
// 0x0130 (0x0130 - 0x0000)
struct Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_83AB[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAsyncAction_AuthorityMatchReady*   CallFunc_MatchReadyAsync_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83AC[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_EventName_2;                    // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FTimespan                              K2Node_CustomEvent_TimeUntilEnd_2;                 // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              K2Node_CustomEvent_TimeSinceBegin_2;               // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_TimeSpanRatio_2;                // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_83AD[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_EventName_1;                    // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FTimespan                              K2Node_CustomEvent_TimeUntilEnd_1;                 // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              K2Node_CustomEvent_TimeSinceBegin_1;               // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_TimeSpanRatio_1;                // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0084(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_83AE[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_EventName;                      // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FTimespan                              K2Node_CustomEvent_TimeUntilEnd;                   // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              K2Node_CustomEvent_TimeSinceBegin;                 // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_TimeSpanRatio;                  // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x00BC(0x0010)(ZeroConstructor, NoDestructor)
	float                                         Temp_float_Variable;                               // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              Temp_struct_Variable;                              // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              Temp_struct_Variable_1;                            // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable;                              // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      K2Node_DynamicCast_AsMaterial_Instance;            // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83AF[0x3];                                     // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_4;            // 0x010C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_83B0[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAsyncAction_CalendarEventWatcher*  CallFunc_WatchCalendarEvent_ReturnValue;           // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster) == 0x000008, "Wrong alignment on Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster");
static_assert(sizeof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster) == 0x000130, "Wrong size on Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, EntryPoint) == 0x000000, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::EntryPoint' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, CallFunc_MatchReadyAsync_ReturnValue) == 0x000018, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::CallFunc_MatchReadyAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, K2Node_CustomEvent_EventName_2) == 0x000038, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::K2Node_CustomEvent_EventName_2' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, K2Node_CustomEvent_TimeUntilEnd_2) == 0x000048, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::K2Node_CustomEvent_TimeUntilEnd_2' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, K2Node_CustomEvent_TimeSinceBegin_2) == 0x000050, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::K2Node_CustomEvent_TimeSinceBegin_2' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, K2Node_CustomEvent_TimeSpanRatio_2) == 0x000058, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::K2Node_CustomEvent_TimeSpanRatio_2' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, K2Node_CustomEvent_EventName_1) == 0x000060, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::K2Node_CustomEvent_EventName_1' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, K2Node_CustomEvent_TimeUntilEnd_1) == 0x000070, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::K2Node_CustomEvent_TimeUntilEnd_1' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, K2Node_CustomEvent_TimeSinceBegin_1) == 0x000078, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::K2Node_CustomEvent_TimeSinceBegin_1' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, K2Node_CustomEvent_TimeSpanRatio_1) == 0x000080, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::K2Node_CustomEvent_TimeSpanRatio_1' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, K2Node_CreateDelegate_OutputDelegate_2) == 0x000084, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, K2Node_CustomEvent_EventName) == 0x000098, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::K2Node_CustomEvent_EventName' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, K2Node_CustomEvent_TimeUntilEnd) == 0x0000A8, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::K2Node_CustomEvent_TimeUntilEnd' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, K2Node_CustomEvent_TimeSinceBegin) == 0x0000B0, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::K2Node_CustomEvent_TimeSinceBegin' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, K2Node_CustomEvent_TimeSpanRatio) == 0x0000B8, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::K2Node_CustomEvent_TimeSpanRatio' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000BC, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, Temp_float_Variable) == 0x0000CC, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, Temp_struct_Variable) == 0x0000D0, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, Temp_struct_Variable_1) == 0x0000D8, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, Temp_string_Variable) == 0x0000E0, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, K2Node_CustomEvent_Loaded) == 0x0000F0, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, Temp_object_Variable) == 0x0000F8, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, K2Node_DynamicCast_AsMaterial_Instance) == 0x000100, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::K2Node_DynamicCast_AsMaterial_Instance' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, K2Node_DynamicCast_bSuccess) == 0x000108, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, K2Node_CreateDelegate_OutputDelegate_4) == 0x00010C, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, CallFunc_WatchCalendarEvent_ReturnValue) == 0x000120, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::CallFunc_WatchCalendarEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster, CallFunc_IsValid_ReturnValue_1) == 0x000128, "Member 'Apollo_Galileo_Wall_Poster_C_ExecuteUbergraph_Apollo_Galileo_Wall_Poster::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function Apollo_Galileo_Wall_Poster.Apollo_Galileo_Wall_Poster_C.OnLoaded_3CFA0D7043EC7906E543C6B9BC42EDB1
// 0x0008 (0x0008 - 0x0000)
struct Apollo_Galileo_Wall_Poster_C_OnLoaded_3CFA0D7043EC7906E543C6B9BC42EDB1 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Apollo_Galileo_Wall_Poster_C_OnLoaded_3CFA0D7043EC7906E543C6B9BC42EDB1) == 0x000008, "Wrong alignment on Apollo_Galileo_Wall_Poster_C_OnLoaded_3CFA0D7043EC7906E543C6B9BC42EDB1");
static_assert(sizeof(Apollo_Galileo_Wall_Poster_C_OnLoaded_3CFA0D7043EC7906E543C6B9BC42EDB1) == 0x000008, "Wrong size on Apollo_Galileo_Wall_Poster_C_OnLoaded_3CFA0D7043EC7906E543C6B9BC42EDB1");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_OnLoaded_3CFA0D7043EC7906E543C6B9BC42EDB1, Loaded) == 0x000000, "Member 'Apollo_Galileo_Wall_Poster_C_OnLoaded_3CFA0D7043EC7906E543C6B9BC42EDB1::Loaded' has a wrong offset!");

// Function Apollo_Galileo_Wall_Poster.Apollo_Galileo_Wall_Poster_C.OnEventActive_6D370C2E40BB2441C575AEA8A558CA9A
// 0x0028 (0x0028 - 0x0000)
struct Apollo_Galileo_Wall_Poster_C_OnEventActive_6D370C2E40BB2441C575AEA8A558CA9A final
{
public:
	class FString                                 EventName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FTimespan                              TimeUntilEnd;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              TimeSinceBegin;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         TimespanRatio;                                     // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Apollo_Galileo_Wall_Poster_C_OnEventActive_6D370C2E40BB2441C575AEA8A558CA9A) == 0x000008, "Wrong alignment on Apollo_Galileo_Wall_Poster_C_OnEventActive_6D370C2E40BB2441C575AEA8A558CA9A");
static_assert(sizeof(Apollo_Galileo_Wall_Poster_C_OnEventActive_6D370C2E40BB2441C575AEA8A558CA9A) == 0x000028, "Wrong size on Apollo_Galileo_Wall_Poster_C_OnEventActive_6D370C2E40BB2441C575AEA8A558CA9A");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_OnEventActive_6D370C2E40BB2441C575AEA8A558CA9A, EventName) == 0x000000, "Member 'Apollo_Galileo_Wall_Poster_C_OnEventActive_6D370C2E40BB2441C575AEA8A558CA9A::EventName' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_OnEventActive_6D370C2E40BB2441C575AEA8A558CA9A, TimeUntilEnd) == 0x000010, "Member 'Apollo_Galileo_Wall_Poster_C_OnEventActive_6D370C2E40BB2441C575AEA8A558CA9A::TimeUntilEnd' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_OnEventActive_6D370C2E40BB2441C575AEA8A558CA9A, TimeSinceBegin) == 0x000018, "Member 'Apollo_Galileo_Wall_Poster_C_OnEventActive_6D370C2E40BB2441C575AEA8A558CA9A::TimeSinceBegin' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_OnEventActive_6D370C2E40BB2441C575AEA8A558CA9A, TimespanRatio) == 0x000020, "Member 'Apollo_Galileo_Wall_Poster_C_OnEventActive_6D370C2E40BB2441C575AEA8A558CA9A::TimespanRatio' has a wrong offset!");

// Function Apollo_Galileo_Wall_Poster.Apollo_Galileo_Wall_Poster_C.OnEventUpdated_6D370C2E40BB2441C575AEA8A558CA9A
// 0x0028 (0x0028 - 0x0000)
struct Apollo_Galileo_Wall_Poster_C_OnEventUpdated_6D370C2E40BB2441C575AEA8A558CA9A final
{
public:
	class FString                                 EventName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FTimespan                              TimeUntilEnd;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              TimeSinceBegin;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         TimespanRatio;                                     // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Apollo_Galileo_Wall_Poster_C_OnEventUpdated_6D370C2E40BB2441C575AEA8A558CA9A) == 0x000008, "Wrong alignment on Apollo_Galileo_Wall_Poster_C_OnEventUpdated_6D370C2E40BB2441C575AEA8A558CA9A");
static_assert(sizeof(Apollo_Galileo_Wall_Poster_C_OnEventUpdated_6D370C2E40BB2441C575AEA8A558CA9A) == 0x000028, "Wrong size on Apollo_Galileo_Wall_Poster_C_OnEventUpdated_6D370C2E40BB2441C575AEA8A558CA9A");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_OnEventUpdated_6D370C2E40BB2441C575AEA8A558CA9A, EventName) == 0x000000, "Member 'Apollo_Galileo_Wall_Poster_C_OnEventUpdated_6D370C2E40BB2441C575AEA8A558CA9A::EventName' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_OnEventUpdated_6D370C2E40BB2441C575AEA8A558CA9A, TimeUntilEnd) == 0x000010, "Member 'Apollo_Galileo_Wall_Poster_C_OnEventUpdated_6D370C2E40BB2441C575AEA8A558CA9A::TimeUntilEnd' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_OnEventUpdated_6D370C2E40BB2441C575AEA8A558CA9A, TimeSinceBegin) == 0x000018, "Member 'Apollo_Galileo_Wall_Poster_C_OnEventUpdated_6D370C2E40BB2441C575AEA8A558CA9A::TimeSinceBegin' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_OnEventUpdated_6D370C2E40BB2441C575AEA8A558CA9A, TimespanRatio) == 0x000020, "Member 'Apollo_Galileo_Wall_Poster_C_OnEventUpdated_6D370C2E40BB2441C575AEA8A558CA9A::TimespanRatio' has a wrong offset!");

// Function Apollo_Galileo_Wall_Poster.Apollo_Galileo_Wall_Poster_C.OnEventEnded_6D370C2E40BB2441C575AEA8A558CA9A
// 0x0028 (0x0028 - 0x0000)
struct Apollo_Galileo_Wall_Poster_C_OnEventEnded_6D370C2E40BB2441C575AEA8A558CA9A final
{
public:
	class FString                                 EventName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FTimespan                              TimeUntilEnd;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              TimeSinceBegin;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         TimespanRatio;                                     // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Apollo_Galileo_Wall_Poster_C_OnEventEnded_6D370C2E40BB2441C575AEA8A558CA9A) == 0x000008, "Wrong alignment on Apollo_Galileo_Wall_Poster_C_OnEventEnded_6D370C2E40BB2441C575AEA8A558CA9A");
static_assert(sizeof(Apollo_Galileo_Wall_Poster_C_OnEventEnded_6D370C2E40BB2441C575AEA8A558CA9A) == 0x000028, "Wrong size on Apollo_Galileo_Wall_Poster_C_OnEventEnded_6D370C2E40BB2441C575AEA8A558CA9A");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_OnEventEnded_6D370C2E40BB2441C575AEA8A558CA9A, EventName) == 0x000000, "Member 'Apollo_Galileo_Wall_Poster_C_OnEventEnded_6D370C2E40BB2441C575AEA8A558CA9A::EventName' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_OnEventEnded_6D370C2E40BB2441C575AEA8A558CA9A, TimeUntilEnd) == 0x000010, "Member 'Apollo_Galileo_Wall_Poster_C_OnEventEnded_6D370C2E40BB2441C575AEA8A558CA9A::TimeUntilEnd' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_OnEventEnded_6D370C2E40BB2441C575AEA8A558CA9A, TimeSinceBegin) == 0x000018, "Member 'Apollo_Galileo_Wall_Poster_C_OnEventEnded_6D370C2E40BB2441C575AEA8A558CA9A::TimeSinceBegin' has a wrong offset!");
static_assert(offsetof(Apollo_Galileo_Wall_Poster_C_OnEventEnded_6D370C2E40BB2441C575AEA8A558CA9A, TimespanRatio) == 0x000020, "Member 'Apollo_Galileo_Wall_Poster_C_OnEventEnded_6D370C2E40BB2441C575AEA8A558CA9A::TimespanRatio' has a wrong offset!");

}

