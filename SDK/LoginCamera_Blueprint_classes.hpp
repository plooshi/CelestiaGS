#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoginCamera_Blueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LoginCamera_Blueprint.LoginCamera_Blueprint_C
// 0x0020 (0x07F0 - 0x07D0)
class ALoginCamera_Blueprint_C final : public AFortCameraBase
{
public:
	uint8                                         Pad_7D04[0x8];                                     // 0x07C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x07D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       LoginCamera_0;                                     // 0x07E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void OnActivated(class AFortPlayerController* PlayerController);
	void ExecuteUbergraph_LoginCamera_Blueprint(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoginCamera_Blueprint_C">();
	}
	static class ALoginCamera_Blueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALoginCamera_Blueprint_C>();
	}
};
static_assert(alignof(ALoginCamera_Blueprint_C) == 0x000010, "Wrong alignment on ALoginCamera_Blueprint_C");
static_assert(sizeof(ALoginCamera_Blueprint_C) == 0x0007F0, "Wrong size on ALoginCamera_Blueprint_C");
static_assert(offsetof(ALoginCamera_Blueprint_C, UberGraphFrame) == 0x0007D0, "Member 'ALoginCamera_Blueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ALoginCamera_Blueprint_C, StaticMesh) == 0x0007D8, "Member 'ALoginCamera_Blueprint_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ALoginCamera_Blueprint_C, LoginCamera_0) == 0x0007E0, "Member 'ALoginCamera_Blueprint_C::LoginCamera_0' has a wrong offset!");

}
