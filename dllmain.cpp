#include "pch.h"
#include "MinHook.h"

#include "Globals.h"
#include "Utils.h"
#include "Inventory.h"
#include "GameMode.h"
#include "Abilities.h"
#include "Player.h"
#include "Misc.h"
#include "Looting.h"
#include "Vehicles.h"
#include "Bots.h"
#include "Building.h"
#include "Teams.h"
#include "XP.h"

void InGameHooks()
{
    GameMode::HookPost();
    Misc::HookPost();
    Looting::HookPost();
    Inventory::HookFunctions();
    XP::HookFunctions();
    Bots::HookFunctions();
    Vehicles::HookFunctions();
    Abilities::HookFunctions();
    Teams::HookFunctions();
    Player::HookFunctions();
    Building::HookFunctions();

    MinHook::MH_EnableHook(MH_ALL_HOOKS);
}

void Main()
{
    AllocConsole();
    FILE *f;
    freopen_s(&f, "CONOUT$", "w", stdout);
    //Sleep(2500); // uncomment & change if you crash on gs init
    SetConsoleTitleA("Celestia | Hooking");

    MinHook::MH_Initialize();

    GameMode::HookFunctions();
    Misc::HookFunctions();
    Looting::HookFunctions();

    MinHook::MH_EnableHook(MH_ALL_HOOKS);

    SetConsoleTitleA("Celestia | Loading terrain");
    *(bool *)GIsClient = false;
    UWorld::Get()->OwningGameInstance->LocalPlayers.Remove(0);
    UKismetSystemLibrary::ExecuteConsoleCommand(UWorld::Get(), Globals::bCreative ? L"open Creative_NoApollo_Terrain" : L"open Apollo_Terrain", nullptr);
}

BOOL APIENTRY DllMain(HMODULE hModule,
                      DWORD ul_reason_for_call,
                      LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        thread(Main).detach();
        break;
    }
    return TRUE;
}
