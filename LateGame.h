#pragma once
#include "pch.h"

class LateGameInternal
{
public:
	operator bool()
	{
		// return AFortGameModeAthena::Get()->AlivePlayers.Num() < 10;
		return Globals::bLateGame;
	}

	class Guns
	{
	public:
		xvector<FItemAndCount> Shotguns{
			FItemAndCount(1, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/WID_Shotgun_Charge_Athena_UR_Ore_T03.WID_Shotgun_Charge_Athena_UR_Ore_T03")),
			FItemAndCount(1, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/WID_Shotgun_Charge_Athena_SR_Ore_T03.WID_Shotgun_Charge_Athena_SR_Ore_T03")),
			FItemAndCount(1, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/WID_Shotgun_Charge_Athena_VR_Ore_T03.WID_Shotgun_Charge_Athena_VR_Ore_T03")),
			FItemAndCount(1, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/WID_Shotgun_HighSemiAuto_Athena_SR_Ore_T03.WID_Shotgun_HighSemiAuto_Athena_SR_Ore_T03")),
			FItemAndCount(1, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/WID_Shotgun_HighSemiAuto_Athena_VR_Ore_T03.WID_Shotgun_HighSemiAuto_Athena_VR_Ore_T03")) };

		xvector<FItemAndCount> AssaultRifles{
			FItemAndCount(1, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_SemiAuto_Athena_UR_Ore_T03.WID_Assault_SemiAuto_Athena_UR_Ore_T03")),
			FItemAndCount(1, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_SemiAuto_Athena_SR_Ore_T03.WID_Assault_SemiAuto_Athena_SR_Ore_T03")),
			FItemAndCount(1, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_SemiAuto_Athena_VR_Ore_T03.WID_Assault_SemiAuto_Athena_VR_Ore_T03")),
			FItemAndCount(1, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_AutoHigh_Athena_SR_Ore_T03.WID_Assault_AutoHigh_Athena_SR_Ore_T03")),
			FItemAndCount(1, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_AutoHigh_Athena_VR_Ore_T03.WID_Assault_AutoHigh_Athena_VR_Ore_T03")),
			FItemAndCount(1, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/Boss/WID_Boss_Midas.WID_Boss_Midas")) };
		xvector<FItemAndCount> SMGs{
			FItemAndCount(1, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/WID_Athena_SMG_SR.WID_Athena_SMG_SR")),
			FItemAndCount(1, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/WID_Athena_SMG_VR.WID_Athena_SMG_VR")),
			FItemAndCount(1, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/WID_Pistol_RapidFireSMG_Athena_SR_Ore_T03.WID_Pistol_RapidFireSMG_Athena_SR_Ore_T03")),
			FItemAndCount(1, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/WID_Pistol_RapidFireSMG_Athena_VR_Ore_T03.WID_Pistol_RapidFireSMG_Athena_VR_Ore_T03")),
			FItemAndCount(1, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/WID_Pistol_AutoHeavyPDW_Athena_SR_Ore_T03.WID_Pistol_AutoHeavyPDW_Athena_SR_Ore_T03")),
			FItemAndCount(1, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/WID_Pistol_AutoHeavyPDW_Athena_VR_Ore_T03.WID_Pistol_AutoHeavyPDW_Athena_VR_Ore_T03")) };
		xvector<FItemAndCount> Utilities{
			FItemAndCount(1, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/Boss/WID_Boss_GrapplingHoot.WID_Boss_GrapplingHoot")),
			FItemAndCount(1, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/WID_Launcher_Shockwave_Athena_UR_Ore_T03.WID_Launcher_Shockwave_Athena_UR_Ore_T03")),
			FItemAndCount(3, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Consumables/AppleSun/WID_Athena_AppleSun.WID_Athena_AppleSun")) };
		xvector<FItemAndCount> Heals{
			FItemAndCount(1, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Consumables/BottomlessChugJug/WID_Athena_BottomlessChugJug.WID_Athena_BottomlessChugJug")),
			FItemAndCount(6, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Consumables/ChillBronco/Athena_ChillBronco.Athena_ChillBronco")),
			FItemAndCount(3, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Consumables/Flopper/WID_Athena_Flopper.WID_Athena_Flopper")),
			FItemAndCount(6, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Consumables/ShieldSmall/Athena_ShieldSmall.Athena_ShieldSmall")),
			FItemAndCount(3, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Consumables/Shields/Athena_Shields.Athena_Shields")),
			FItemAndCount(3, {}, Utils::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Consumables/Flopper/Effective/WID_Athena_Flopper_Effective.WID_Athena_Flopper_Effective")) };
		UFortItemDefinition* Wood = Utils::FindObject<UFortItemDefinition>("/Game/Items/ResourcePickups/WoodItemData.WoodItemData");
		UFortItemDefinition* Stone = Utils::FindObject<UFortItemDefinition>("/Game/Items/ResourcePickups/StoneItemData.StoneItemData");
		UFortItemDefinition* Metal = Utils::FindObject<UFortItemDefinition>("/Game/Items/ResourcePickups/MetalItemData.MetalItemData");
		UFortItemDefinition* AssaultAmmo = Utils::FindObject<UFortItemDefinition>("/Game/Athena/Items/Ammo/AthenaAmmoDataBulletsLight.AthenaAmmoDataBulletsLight");
		UFortItemDefinition* ShotgunAmmo = Utils::FindObject<UFortItemDefinition>("/Game/Athena/Items/Ammo/AthenaAmmoDataShells.AthenaAmmoDataShells");
		UFortItemDefinition* SubmachineAmmo = Utils::FindObject<UFortItemDefinition>("/Game/Athena/Items/Ammo/AthenaAmmoDataBulletsMedium.AthenaAmmoDataBulletsMedium");

	};
};
LateGameInternal LateGame;

template <typename T>
void DestroyAll()
{
	auto Actors = Utils::GetAll<T>();
	for (auto Actor : Actors)
	{
		Actor->K2_DestroyActor();
	}
	Actors.Free();
}