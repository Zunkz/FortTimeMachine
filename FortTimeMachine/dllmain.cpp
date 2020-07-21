#include "SDK.hpp"

#include <Windows.h>
#include <stdio.h>

#include <MinHook.h>
#pragma comment(lib, "minhook.lib")

#include "core.h"
#include "util.h"

SDK::APlayerPawn_Athena_C* pPlayerPawn_Athena_C_0; // Our pawn.
SDK::APlayerPawn_Athena_C* pPlayerPawn_Athena_C_1; // Other pawn.

PVOID(*ProcessEvent)(SDK::UObject*, SDK::UFunction*, PVOID) = nullptr;

PVOID ProcessEventHook(SDK::UObject* pObject, SDK::UFunction* pFunction, PVOID pParams) {
    if (pObject && pFunction) {
        if (pFunction->GetName().find("ServerAttemptAircraftJump") != std::string::npos) {
            std::string sClassName = "PlayerPawn_Athena_C";

            Core::pPlayerController->CheatManager->Summon(SDK::FString(std::wstring(sClassName.begin(), sClassName.end()).c_str()));

            pPlayerPawn_Athena_C_0 = static_cast<SDK::APlayerPawn_Athena_C*>(Util::FindActor(SDK::APlayerPawn_Athena_C::StaticClass()));
            if (!pPlayerPawn_Athena_C_0) {
                printf("Finding PlayerPawn_Athena_C has failed, bailing-out immediately!\n");
                return NULL;
            }

            auto pSkeletalMesh = SDK::UObject::FindObject<SDK::USkeletalMesh>("SkeletalMesh SK_M_Med_Soldier_04_ATH.SK_M_Med_Soldier_04_ATH");
            if (pSkeletalMesh == nullptr) {
                printf("Finding SkeletalMesh has failed, bailing-out immediately!\n");
                return NULL;
            }

            pPlayerPawn_Athena_C_0->Mesh->SetSkeletalMesh(pSkeletalMesh, true);

            Core::pPlayerController->Possess(pPlayerPawn_Athena_C_0);
        }
    }

    return ProcessEvent(pObject, pFunction, pParams);
}

DWORD MiscThread(LPVOID lpParam) {
    while (1) {
        if (GetKeyState(VK_SPACE) & 0x8000 && pPlayerPawn_Athena_C_0) {
            pPlayerPawn_Athena_C_0->Jump();
        }

        // Keybind to notify the client that it has won:
        //if (GetKeyState(VK_OEM_PLUS) & 0x8000) {
        //    reinterpret_cast<SDK::AAthena_PlayerController_C*>(PlayerController)->ClientNotifyWon();
        //}

        Sleep(1000 / 60);
    }

    return NULL;
}

DWORD WINAPI Main(LPVOID lpParam) {
    Util::InitConsole();

    printf("Aurora: Time Machine by Cyuubi, with help from others.\n");
    printf("Credits: Crush, Taj, Samicc, Kanner, Pivot and Cendence.\n\n");

    printf("Thank you all for helping, this wouldn't have been possible without you!\n");

    Util::InitSdk();
    Util::InitCore();

    auto pProcessEventAddress = Util::FindPattern("\x40\x55\x56\x57\x41\x54\x41\x55\x41\x56\x41\x57\x48\x81\xEC\x00\x00\x00\x00\x48\x8D\x6C\x24\x00\x48\x89\x9D\x00\x00\x00\x00\x48\x8B\x05\x00\x00\x00\x00\x48\x33\xC5\x48\x89\x85\x00\x00\x00\x00\x48\x63\x41\x0C", "xxxxxxxxxxxxxxx????xxxx?xxx????xxx????xxxxxx????xxxx");
    if (!pProcessEventAddress) {
        MessageBox(NULL, static_cast<LPCWSTR>(L"Finding pattern for ProcessEvent has failed, please re-open Fortnite and try again!"), static_cast<LPCWSTR>(L"Error"), MB_ICONERROR);
        ExitProcess(EXIT_FAILURE);
    }

    MH_CreateHook(static_cast<LPVOID>(pProcessEventAddress), ProcessEventHook, reinterpret_cast<LPVOID*>(&ProcessEvent));
    MH_EnableHook(static_cast<LPVOID>(pProcessEventAddress));

    pPlayerPawn_Athena_C_0 = static_cast<SDK::APlayerPawn_Athena_C*>(Util::FindActor(SDK::APlayerPawn_Athena_C::StaticClass()));
    if (!pPlayerPawn_Athena_C_0) {
        printf("Finding PlayerPawn_Athena_C has failed, bailing-out immediately!\n");
        return 0;
    }

    auto pSkeletalMesh = SDK::UObject::FindObject<SDK::USkeletalMesh>("SkeletalMesh SK_M_Med_Soldier_04_ATH.SK_M_Med_Soldier_04_ATH");
    if (pSkeletalMesh == nullptr) {
        printf("Finding SkeletalMesh has failed, bailing-out immediately!\n");
        return 0;
    }

    pPlayerPawn_Athena_C_0->Mesh->SetSkeletalMesh(pSkeletalMesh, true);

    Util::Possess(pPlayerPawn_Athena_C_0);

    CreateThread(0, 0, MiscThread, 0, 0, 0);

    Sleep(2000);

    static_cast<SDK::AAthena_PlayerController_C*>(Core::pPlayerController)->ServerReadyToStartMatch();

    auto pAuthorityGameMode = static_cast<SDK::AFortGameModeAthena*>((*Core::pWorld)->AuthorityGameMode);

    pAuthorityGameMode->StartMatch();

    return NULL;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
    if (dwReason == DLL_PROCESS_ATTACH)
        CreateThread(0, 0, Main, hModule, 0, 0);

    return true;
}
