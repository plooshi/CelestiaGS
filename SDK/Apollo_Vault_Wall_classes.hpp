#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_Vault_Wall

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Apollo_Vault_Wall.Apollo_Vault_Wall_C
// 0x0000 (0x0CC0 - 0x0CC0)
class AApollo_Vault_Wall_C : public ABuildingWall
{
public:
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Apollo_Vault_Wall_C">();
	}
	static class AApollo_Vault_Wall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AApollo_Vault_Wall_C>();
	}
};
static_assert(alignof(AApollo_Vault_Wall_C) == 0x000008, "Wrong alignment on AApollo_Vault_Wall_C");
static_assert(sizeof(AApollo_Vault_Wall_C) == 0x000CC0, "Wrong size on AApollo_Vault_Wall_C");

}
