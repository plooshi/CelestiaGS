#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "Offsets.h"
#include <thread>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <map>
#include <intrin.h>
#include <sstream>
#include <array>
#include <tlhelp32.h>
#include <future>
#include <set>
using namespace std;
#pragma warning(disable : 4099)
#pragma warning(disable : 4309)
#pragma warning(disable : 4369)
#pragma warning(disable : 4244)
#include "UnrealContainers.hpp"
using namespace UC;
template <class X>
using xset = set<X, TMemoryAllocator<X>>;
template <class X>
using xvector = vector<X, TMemoryAllocator<X>>;
template <class X, class Y>
using xmap = map<X, Y, less<X>, TMemoryAllocator<pair<const X, Y>>>;
#include "SDK/Basic.hpp"
#include "SDK/CoreUObject_structs.hpp"
#include "SDK/CoreUObject_classes.hpp"
#include "SDK/Engine_structs.hpp"
#include "SDK/Engine_classes.hpp"
#include "SDK/FortniteGame_structs.hpp"
#include "SDK/FortniteGame_classes.hpp"
#include "SDK/GameplayAbilities_structs.hpp"
#include "SDK/GameplayAbilities_classes.hpp"
#include "SDK/ValetRuntime_structs.hpp"
#include "SDK/ValetRuntime_classes.hpp"
#include "SDK/HoagieRuntime_structs.hpp"
#include "SDK/HoagieRuntime_classes.hpp"
#include "SDK/GibsonRuntime_structs.hpp"
#include "SDK/GibsonRuntime_classes.hpp"
#include "SDK/Apollo_WaterSetup_classes.hpp"
#include "SDK/B_HidingProp_PhantomBooth_classes.hpp"
#include "SDK/Apollo_GasPump_Valet_classes.hpp"
#include "SDK/BGA_Petrol_Pickup_classes.hpp"
#include "SDK/BGA_Athena_Keycard_Lock_Parent_classes.hpp"
#include "SDK/BP_Pawn_DangerGrape_classes.hpp"
#include "SDK/TrapTool_classes.hpp"
#include "SDK/TrapTool_ContextTrap_Athena_classes.hpp"
#include "SDK/B_Prj_Athena_Consumable_Thrown_classes.hpp"
#include "SDK/B_Athena_Wumba_classes.hpp"
#include "SDK/Prj_Athena_HappyGhost_classes.hpp"
#include "SDK/Prj_Athena_HappyGhost_parameters.hpp"
#include "SDK/BGA_Athena_FakeLock_Scanner_Interior_classes.hpp"
#include "SDK/BP_MangPlayerPawn_Parent_classes.hpp"
#include "SDK/BP_MangPlayerPawn_Boss_classes.hpp"
#include "SDK/Tiered_Chest_Athena_classes.hpp"
#include "SDK/GA_Athena_MedConsumable_Parent_classes.hpp"
#include "SDK/Tiered_Ammo_Athena_classes.hpp"
#include "SDK/Athena_VehicleSpawner_classes.hpp"
#include "SDK/B_HidingProp_WilliePete_classes.hpp"
#include "SDK/GA_WilliePete_PlayerLaunch_classes.hpp"
#include "SDK/Tiered_Athena_FloorLoot_01_classes.hpp"
#include "SDK/Tiered_Athena_FloorLoot_Warmup_classes.hpp"
#include "SDK/GAB_Spray_Generic_classes.hpp"
#include "SDK/GAB_Emote_Generic_classes.hpp"
#include "SDK/B_HappyGhost_Athena_classes.hpp"
#include "SDK/Valet_BasicCar_Vehicle_classes.hpp"
using namespace SDK;
using namespace Params;
