#pragma once
#include "pch.h"
#include "Utils.h"

class Vehicles
{
public:
	static void SpawnVehicles()
	{
		auto GS = AFortGameStateAthena::Get();
		auto Spawners = Utils::GetAll<AAthena_VehicleSpawner_C>();
		xmap<UClass *, int> EvaledVehicles;
		xmap<UClass *, int> InoperableVehicles;
		xmap<UClass *, int> VehicleCounts;
		xmap<UClass *, TArray<AAthena_VehicleSpawner_C *>> Vehicles;

		for (auto &Spawner : Spawners)
		{
			auto VC = Spawner->GetVehicleClass();
			if (VehicleCounts[VC])
				VehicleCounts[VC]++;
			else
				VehicleCounts[VC] = 1;
		}

		for (auto &Spawner : Spawners)
		{
			auto VC = Spawner->GetVehicleClass();

			if (!EvaledVehicles[VC])
			{
				auto VID = Spawner->CachedFortVehicleItemDef;
				EvaledVehicles[VC] = Utils::EvaluateMinMaxPercent(VID->VehicleMinSpawnPercent, VID->VehicleMaxSpawnPercent, VehicleCounts[VC]);
			}

			if (EvaledVehicles[VC] < VehicleCounts[VC])
				Vehicles[VC].Add(Spawner);
		}

		for (auto &[VC, VehicleArray] : Vehicles)
		{
			for (int i = 0; i < EvaledVehicles[VC]; i++)
			{
				auto x = rand() % VehicleCounts[VC];
				VehicleArray.Remove(x);
			}
		}
		for (auto &[VC, VehicleArray] : Vehicles)
		{
			for (auto &vehicle : VehicleArray)
			{
				auto Vehicle = Utils::SpawnActor<AFortAthenaVehicle>(VC, vehicle->K2_GetActorLocation(), vehicle->K2_GetActorRotation());
				if (auto Car = Vehicle->Cast<AValet_BasicCar_Vehicle_C>())
				{
					Car->SetFuel(UKismetMathLibrary::RandomFloatInRange(92.5f, 100.f) * (Car->IsBigRig ? 1.5f : 1.f));
				}
				vehicle->SpawnedVehicle = Vehicle;
			}
		}
		for (auto &Spawner : Spawners)
		{
			auto VC = Spawner->GetVehicleClass();

			if (!InoperableVehicles[VC] && Spawner->SpawnedVehicle->IsA<AFortDagwoodVehicle>())
			{
				auto VID = Spawner->CachedFortVehicleItemDef;
				InoperableVehicles[VC] = Utils::EvaluateMinMaxPercent(VID->MinPercentInoperable, VID->MaxPercentInoperable, VehicleCounts[VC]);
			}
		}
		for (auto &[VC, VehicleArray] : Vehicles)
		{
			for (int i = 0; i < InoperableVehicles[VC]; i++)
			{
				auto x = rand() % VehicleArray.Num();
				VehicleArray[x]->SpawnedVehicle->Cast<AFortDagwoodVehicle>()->bIsInoperable = true;
			}
		}
		Spawners.Free();

		Utils::Log("Spawned vehicles");
	}

private:
	static void ServerMove(AFortPhysicsPawn *Pawn, FReplicatedPhysicsPawnState State)
	{
		USkeletalMeshComponent *Mesh = (USkeletalMeshComponent *)Pawn->RootComponent;

		auto Rotation = State.Rotation.Rotator();
		Pawn->ReplicatedMovement.AngularVelocity = State.AngularVelocity;
		Pawn->ReplicatedMovement.LinearVelocity = State.LinearVelocity;
		Pawn->ReplicatedMovement.Location = State.Translation;
		Pawn->ReplicatedMovement.Rotation = Rotation;
		Pawn->OnRep_ReplicatedMovement();

		Mesh->SetAllPhysicsLinearVelocity(State.LinearVelocity, false);
		Mesh->SetAllPhysicsAngularVelocityInRadians(State.AngularVelocity, false);
		Mesh->K2_SetWorldLocationAndRotation(State.Translation, Rotation, false, nullptr, true);
	}

	static inline AFortAthenaVehicle *(*ServerOnExitVehicleOG)(AFortPlayerPawnAthena *Pawn, ETryExitVehicleBehavior ExitForceBehavior);
	static AFortAthenaVehicle *ServerOnExitVehicle(AFortPlayerPawnAthena *Pawn, ETryExitVehicleBehavior ExitForceBehavior)
	{
		if (!Pawn)
			return ServerOnExitVehicleOG(Pawn, ExitForceBehavior);
		auto PC = (AFortPlayerControllerAthena *)Pawn->Controller;
		if (!PC)
			return ServerOnExitVehicleOG(Pawn, ExitForceBehavior);
		auto Vehicle = PC->MyFortPawn->GetVehicle();
		if (!Vehicle)
			return ServerOnExitVehicleOG(Pawn, ExitForceBehavior);
		auto sInd = Vehicle->FindSeatIndex(PC->MyFortPawn);
		auto comp = Vehicle->GetSeatWeaponComponent(sInd);
		if (!comp)
			return ServerOnExitVehicleOG(Pawn, ExitForceBehavior);
		UFortWeaponItemDefinition *Weapon = nullptr;
		for (auto &SD : comp->WeaponSeatDefinitions)
		{
			if (SD.SeatIndex != sInd)
				continue;
			Weapon = SD.VehicleWeapon;
			break;
		}
		if (!Weapon || !PC->WorldInventory)
			return ServerOnExitVehicleOG(Pawn, ExitForceBehavior);
		auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([Weapon](FFortItemEntry &entry)
																				{ return entry.ItemDefinition == Weapon; });
		auto Ret = ServerOnExitVehicleOG(Pawn, ExitForceBehavior);
		if (itemEntry)
		{
			auto LastItem = PC->MyFortPawn->PreviousWeapon;
			PC->ServerExecuteInventoryItem(LastItem->ItemEntryGuid);
			PC->ClientEquipItem(LastItem->ItemEntryGuid, true);
			Inventory::Remove(PC, itemEntry->ItemGuid);
		}
		return Ret;
	}

	static inline void (*ServerRequestSeatChangeOG)(AFortPlayerControllerAthena *PC, int TargetSeatIndex);
	static void ServerRequestSeatChange(AFortPlayerControllerAthena *PC, int TargetSeatIndex)
	{
		if (!PC)
			return ServerRequestSeatChangeOG(PC, TargetSeatIndex);
		auto Vehicle = PC->MyFortPawn->GetVehicle();
		if (!Vehicle)
			return ServerRequestSeatChangeOG(PC, TargetSeatIndex);
		auto sInd = Vehicle->FindSeatIndex(PC->MyFortPawn);
		auto comp = Vehicle->GetSeatWeaponComponent(0);
		if (!comp)
			return ServerRequestSeatChangeOG(PC, TargetSeatIndex);
		UFortWeaponItemDefinition *Weapon = nullptr;
		for (auto &SD : comp->WeaponSeatDefinitions)
		{
			if (SD.SeatIndex != sInd)
				continue;
			Weapon = SD.VehicleWeapon;
			break;
		}

		auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([Weapon](FFortItemEntry &entry)
																				{ return entry.ItemDefinition == Weapon; });

		if (itemEntry)
		{
			Inventory::Remove(PC, itemEntry->ItemGuid);
		}

		UFortWeaponItemDefinition *Weapon2 = nullptr;
		for (auto &SD : comp->WeaponSeatDefinitions)
		{
			if (SD.SeatIndex != TargetSeatIndex)
				continue;
			Weapon2 = SD.VehicleWeapon;
			break;
		}
		ServerRequestSeatChangeOG(PC, TargetSeatIndex);
		FGuid *ItemGuidToEquip = nullptr;
		if (!Weapon2 && itemEntry)
		{
			auto LastItem = PC->MyFortPawn->PreviousWeapon;
			ItemGuidToEquip = &LastItem->ItemEntryGuid;
		}
		else if (Weapon2)
		{
			Inventory::GiveItem(PC, Weapon2, 1, Inventory::GetStats(Weapon2)->ClipSize);
			auto itemEntry2 = PC->WorldInventory->Inventory.ReplicatedEntries.Search([Weapon2](FFortItemEntry &entry)
																					 { return entry.ItemDefinition == Weapon2; });
			ItemGuidToEquip = &itemEntry2->ItemGuid;
		}
		if (ItemGuidToEquip)
		{
			PC->ServerExecuteInventoryItem(*ItemGuidToEquip);
			PC->ClientEquipItem(*ItemGuidToEquip, true);
		}
	}

	static inline void (*OnPawnEnterVehicleOG)(AFortAthenaVehicle* Vehicle, AFortPlayerPawn* Pawn, int32 SeatIdx);
	static void OnPawnEnterVehicle(AFortAthenaVehicle* Vehicle, AFortPlayerPawn* Pawn, int32 SeatIdx) {
		if (!Pawn || !Pawn->Controller || !Vehicle) return OnPawnEnterVehicleOG(Vehicle, Pawn, SeatIdx);
		auto PC = (AFortPlayerControllerAthena*)Pawn->Controller;
		auto comp = Vehicle->GetSeatWeaponComponent(SeatIdx);
		if (!comp)
			return OnPawnEnterVehicleOG(Vehicle, Pawn, SeatIdx);
		UFortWeaponItemDefinition* Weapon = nullptr;
		for (auto& comp : comp->WeaponSeatDefinitions)
		{
			if (comp.SeatIndex != SeatIdx)
				continue;
			Weapon = comp.VehicleWeapon;
			break;
		}
		if (!Weapon)
			return OnPawnEnterVehicleOG(Vehicle, Pawn, SeatIdx);
		Inventory::GiveItem(PC, Weapon, 1, Inventory::GetStats(Weapon)->ClipSize);
		auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([Weapon](FFortItemEntry& entry)
			{ return entry.ItemDefinition == Weapon; });
		PC->ServerExecuteInventoryItem(itemEntry->ItemGuid);
		PC->ClientEquipItem(itemEntry->ItemGuid, true);
		return OnPawnEnterVehicleOG(Vehicle, Pawn, SeatIdx);
	}

public:
	static void HookFunctions()
	{
		Utils::HookEvery<AFortPhysicsPawn>(0xee, ServerMove);
		Utils::Hook(ImageBase + 0x2e34870, OnPawnEnterVehicle, OnPawnEnterVehicleOG);
		Utils::Hook<AFortPlayerControllerAthena>(uint32(0x410), ServerRequestSeatChange, ServerRequestSeatChangeOG);
		Utils::Hook(ImageBase + 0x2921160, ServerOnExitVehicle, ServerOnExitVehicleOG);
	}
};