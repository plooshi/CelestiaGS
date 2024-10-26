#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_Galileo_Wall_Poster

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Apollo_Galileo_Wall_Poster.Apollo_Galileo_Wall_Poster_C
// 0x0048 (0x0BB0 - 0x0B68)
class AApollo_Galileo_Wall_Poster_C final : public ABuildingDeco
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B68(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                 CalendarEventName;                                 // 0x0B70(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Visible;                                           // 0x0B80(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_83AA[0x7];                                     // 0x0B81(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UMaterialInstance>       GalileoMaterial;                                   // 0x0B88(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Apollo_Galileo_Wall_Poster(int32 EntryPoint);
	void SetMaterial();
	void ReceiveBeginPlay();
	void OnLoaded_3CFA0D7043EC7906E543C6B9BC42EDB1(class UObject* Loaded);
	void OnEventActive_6D370C2E40BB2441C575AEA8A558CA9A(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void OnEventUpdated_6D370C2E40BB2441C575AEA8A558CA9A(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void OnEventEnded_6D370C2E40BB2441C575AEA8A558CA9A(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void OnReady_28CC2ED448EF6E2AA7544EACE6FB6964();
	void OnRep_Visible();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Apollo_Galileo_Wall_Poster_C">();
	}
	static class AApollo_Galileo_Wall_Poster_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AApollo_Galileo_Wall_Poster_C>();
	}
};
static_assert(alignof(AApollo_Galileo_Wall_Poster_C) == 0x000008, "Wrong alignment on AApollo_Galileo_Wall_Poster_C");
static_assert(sizeof(AApollo_Galileo_Wall_Poster_C) == 0x000BB0, "Wrong size on AApollo_Galileo_Wall_Poster_C");
static_assert(offsetof(AApollo_Galileo_Wall_Poster_C, UberGraphFrame) == 0x000B68, "Member 'AApollo_Galileo_Wall_Poster_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AApollo_Galileo_Wall_Poster_C, CalendarEventName) == 0x000B70, "Member 'AApollo_Galileo_Wall_Poster_C::CalendarEventName' has a wrong offset!");
static_assert(offsetof(AApollo_Galileo_Wall_Poster_C, Visible) == 0x000B80, "Member 'AApollo_Galileo_Wall_Poster_C::Visible' has a wrong offset!");
static_assert(offsetof(AApollo_Galileo_Wall_Poster_C, GalileoMaterial) == 0x000B88, "Member 'AApollo_Galileo_Wall_Poster_C::GalileoMaterial' has a wrong offset!");

}

