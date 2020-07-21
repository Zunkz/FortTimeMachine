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

bool bHasConnected = false;

DWORD ConnectionThread(LPVOID lpParam) {
    HANDLE hPipe;

    char acBuffer[MAXSHORT];

    DWORD dwRead;
    DWORD dwWritten;

    char acCommon[1];
    char acPosition[1 + sizeof(SDK::FRotator) + sizeof(SDK::FVector)];

    hPipe = CreateFile(TEXT("\\\\.\\pipe\\FortTimeMachine"),
        GENERIC_READ | GENERIC_WRITE,
        0,
        NULL,
        OPEN_EXISTING,
        0,
        NULL);

    std::string sClassName = "PlayerPawn_Athena_C";

    auto pSkeletalMesh = SDK::UObject::FindObject<SDK::USkeletalMesh>("SkeletalMesh SK_M_Med_Soldier_04_ATH.SK_M_Med_Soldier_04_ATH");
    if (pSkeletalMesh == nullptr) {
        printf("Finding SkeletalMesh has failed, bailing-out immediately!\n");
        return 0;
    }

    if (hPipe != INVALID_HANDLE_VALUE) {
        acCommon[0] = 0; // PipeClient_Connect

        WriteFile(hPipe,
            acCommon,
            1,
            &dwWritten,
            NULL);

        while (ReadFile(hPipe, acBuffer, sizeof(acBuffer) - 1, &dwRead, NULL) != FALSE) {
            printf("ID = %i\n", acBuffer[0]);

            char cId = acBuffer[0];

            if (cId == 1) { // PipeServer_HasConnected
                if (bHasConnected)
                    continue;

                bHasConnected = true;

                printf("You have connected successfully to the server!\n");
            } else if (cId == 2) { // PipeServer_HasDisconnected
                if (!bHasConnected)
                    continue;

                bHasConnected = false;

                printf("You have been disconnected from the server.\n");
            } else if (cId == 3) // PipeServer_HasFailed
                printf("Your connection the the server has failed.\n");

            else if (cId == 10) { // GameServer_Ping
                acCommon[0] = 11; // GameClient_Pong

                WriteFile(hPipe,
                    acCommon,
                    1,
                    &dwWritten,
                    NULL);
            } else if (cId == 12) { // GameServer_SummonOurPawn
                Core::pPlayerController->CheatManager->Summon(SDK::FString(std::wstring(sClassName.begin(), sClassName.end()).c_str()));

                pPlayerPawn_Athena_C_0 = static_cast<SDK::APlayerPawn_Athena_C*>(Util::FindActor(SDK::APlayerPawn_Athena_C::StaticClass()));
                if (!pPlayerPawn_Athena_C_0) {
                    printf("Finding PlayerPawn_Athena_C_0 has failed, bailing-out immediately!\n");
                    return NULL;
                }

                pPlayerPawn_Athena_C_0->bIsInvulnerable = true;

                pPlayerPawn_Athena_C_0->Mesh->SetSkeletalMesh(pSkeletalMesh, true);

                acCommon[0] = 13; // GameClient_OurPawnSummoned

                WriteFile(hPipe,
                    acCommon,
                    1,
                    &dwWritten,
                    NULL);
            } else if (cId == 14) { // GameServer_SummonOtherPawn
                Core::pPlayerController->CheatManager->Summon(SDK::FString(std::wstring(sClassName.begin(), sClassName.end()).c_str()));

                pPlayerPawn_Athena_C_1 = static_cast<SDK::APlayerPawn_Athena_C*>(Util::FindActor(SDK::APlayerPawn_Athena_C::StaticClass(), 1));
                if (!pPlayerPawn_Athena_C_1) {
                    printf("Finding PlayerPawn_Athena_C_1 has failed, bailing-out immediately!\n");
                    return NULL;
                }

                pPlayerPawn_Athena_C_1->bIsInvulnerable = true;

                pPlayerPawn_Athena_C_1->Mesh->SetSkeletalMesh(pSkeletalMesh, true);

                acCommon[0] = 15; // GameClient_OtherPawnSummoned

                WriteFile(hPipe,
                    acCommon,
                    1,
                    &dwWritten,
                    NULL);
            } else if (cId == 16) { // GameServer_PossessOurPawn
                Util::Possess(pPlayerPawn_Athena_C_0);

                CreateThread(0, 0, MiscThread, 0, 0, 0);

                acCommon[0] = 17; // GameClient_OurPawnPossessed

                WriteFile(hPipe,
                    acCommon,
                    1,
                    &dwWritten,
                    NULL);
            } else if (cId == 20) { // GameServer_StartMatch
                static_cast<SDK::AAthena_PlayerController_C*>(Core::pPlayerController)->ServerReadyToStartMatch();

                auto pAuthorityGameMode = static_cast<SDK::AFortGameModeAthena*>((*Core::pWorld)->AuthorityGameMode);

                pAuthorityGameMode->StartMatch();

                acCommon[0] = 21; // GameClient_MatchStarted

                WriteFile(hPipe,
                    acCommon,
                    1,
                    &dwWritten,
                    NULL);
            }
        }

        printf("Closed.\n");

        CloseHandle(hPipe);
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

    //MH_CreateHook(static_cast<LPVOID>(pProcessEventAddress), ProcessEventHook, reinterpret_cast<LPVOID*>(&ProcessEvent));
    //MH_EnableHook(static_cast<LPVOID>(pProcessEventAddress));

    CreateThread(0, 0, ConnectionThread, 0, 0, 0);

    return NULL;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
    if (dwReason == DLL_PROCESS_ATTACH)
        CreateThread(0, 0, Main, hModule, 0, 0);

    return true;
}
