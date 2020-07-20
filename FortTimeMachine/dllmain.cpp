#include "SDK.hpp"

#include <Windows.h>
#include <stdio.h>

#include "global.h"
#include "util.h"

/*SDK::UWorld** World;
SDK::ULevel* Level;

SDK::UGameInstance* GameInstance;

SDK::TArray<SDK::ULocalPlayer*> LocalPlayers;
SDK::ULocalPlayer* LocalPlayer;

SDK::TArray<SDK::AActor*>* Actors;

SDK::APlayerController* PlayerController;

SDK::APlayerPawn_Athena_C* PlayerPawn_Athena_C;

SDK::AActor* FindActor(SDK::UClass* pClass, int iSkipCount = 0) {
    int iSkipIndex = 0;

    for (int i = 0; i < Actors->Num(); i++) {
        SDK::AActor* pActor = Actors->operator[](i);

        if (pActor != nullptr) {
            if (pActor->IsA(pClass)) {
                if (iSkipIndex >= iSkipCount)
                    return pActor;
                else {
                    iSkipIndex++;
                    continue;
                }
            }
        }
    }

    return nullptr;
}

DWORD JumpThread(LPVOID lpParam) {
    while (1) {
        if (GetKeyState(VK_SPACE) & 0x8000) {
            PlayerPawn_Athena_C->Jump();
        }

        // Keybind to notify the client that it has won:
        //if (GetKeyState(VK_OEM_PLUS) & 0x8000) {
        //    reinterpret_cast<SDK::AAthena_PlayerController_C*>(PlayerController)->ClientNotifyWon();
        //}

        Sleep(16);
    }
}

bool bHasConnected = false;

DWORD ConnectionThread(LPVOID lpParam) {
    HANDLE hPipe;
    char buffer[MAXSHORT];
    DWORD dwRead;
    DWORD dwWritten;

    char simple[1];

    hPipe = CreateFile(TEXT("\\\\.\\pipe\\FortTimeMachine"),
        GENERIC_READ | GENERIC_WRITE,
        0,
        NULL,
        OPEN_EXISTING,
        0,
        NULL);

    if (hPipe != INVALID_HANDLE_VALUE) {
        simple[0] = 0; // PipeClient_Connect

        WriteFile(hPipe,
            simple,
            1,
            &dwWritten,
            NULL);

        while (ReadFile(hPipe, buffer, sizeof(buffer) - 1, &dwRead, NULL) != FALSE) {
            char id = buffer[0];

            switch (id) {
            case 1: // PipeServer_HasConnected
                if (bHasConnected)
                    break;

                bHasConnected = true;

                printf("You have connected successfully to the server!");
                break;

            case 2: // PipeServer_HasDisconnected
                if (!bHasConnected)
                    break;

                bHasConnected = false;

                printf("You have been disconnected from the server.");
                break;

            case 3: // PipeServer_HasFailed
                if (!bHasConnected)
                    break;

                printf("Your connection the the server has failed.");
                break;

            case 10: // GameServer_Ping
                simple[0] = 11; // GameClient_Pong

                WriteFile(hPipe,
                    simple,
                    1,
                    &dwWritten,
                    NULL);
                break;
            }
        }

        CloseHandle(hPipe);
    }

    return 0;
}*/

DWORD WINAPI Main(LPVOID lpParam) {
    Util::InitConsole();

    printf("Aurora: Time Machine by Cyuubi, with help from others.\n");
    printf("Credits: Crush, Taj, Samicc, Kanner, Pivot and Cendence.\n\n");

    printf("Thank you all for helping, this wouldn't have been possible without you!\n");

    Util::InitSdk();

    Global::Init();

    auto PlayerPawn_Athena_C = static_cast<SDK::APlayerPawn_Athena_C*>(Util::FindActor(SDK::APlayerPawn_Athena_C::StaticClass()));
    if (!PlayerPawn_Athena_C) {
        printf("Finding PlayerPawn_Athena_C has failed, bailing-out immediately!\n");
        return 0;
    }

    auto SkeletalMesh = SDK::UObject::FindObject<SDK::USkeletalMesh>("SkeletalMesh SK_M_Med_Soldier_04_ATH.SK_M_Med_Soldier_04_ATH");
    if (SkeletalMesh == nullptr) {
        printf("Finding SkeletalMesh has failed, bailing-out immediately!\n");
        return 0;
    }

    PlayerPawn_Athena_C->Mesh->SetSkeletalMesh(SkeletalMesh, true);

    Util::Possess(PlayerPawn_Athena_C);

    Sleep(2000);

    static_cast<SDK::AAthena_PlayerController_C*>(Global::pPlayerController)->ServerReadyToStartMatch();

    auto AuthorityGameMode = static_cast<SDK::AFortGameModeAthena*>((*Global::pWorld)->AuthorityGameMode);

    AuthorityGameMode->StartMatch();

    /*printf("Aurora: Time Machine by Cyuubi, with help from others.\n");
    printf("Credits: Crush, Taj, Samicc, Kanner, Pivot and Cendence.\n\n");

    printf("Thank you all for helping, this wouldn't have been possible without you!\n");

    auto pBaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandle(0));
    if (!pBaseAddress) {
        printf("Finding BaseAddress has failed, bailing-out immediately!\n");
        return 0;
    }

    auto pUWorldAddress = Util::FindPattern("\x48\x8B\x1D\x00\x00\x00\x00\x00\x00\x00\x10\x4C\x8D\x4D\x00\x4C", "xxx???????xxxx?x");
    if (!pUWorldAddress) {
        printf("Finding pattern for UWorld has failed, bailing-out immediately!\n");
        return 0;
    }

    auto pUWorldOffset = *reinterpret_cast<uint32_t*>(pUWorldAddress + 3);

    World = reinterpret_cast<SDK::UWorld**>(pUWorldAddress + 7 + pUWorldOffset);

    auto pGObjectAddress = Util::FindPattern("\x48\x8D\x0D\x00\x00\x00\x00\xE8\x00\x00\x00\x00\xE8\x00\x00\x00\x00\xE8\x00\x00\x00\x00\x48\x8B\xD6", "xxx????x????x????x????xxx");
    if (!pGObjectAddress) {
        printf("Finding pattern for GObject has failed, bailing-out immediately!\n");
        return 0;
    }

    auto pGObjectOffset = *reinterpret_cast<uint32_t*>(pGObjectAddress + 3);

    SDK::UObject::GObjects = reinterpret_cast<SDK::FUObjectArray*>(pGObjectAddress + 7 + pGObjectOffset);

    auto pGNameAddress = Util::FindPattern("\x48\x8B\x05\x00\x00\x00\x00\x48\x85\xC0\x75\x50\xB9\x00\x00\x00\x00\x48\x89\x5C\x24", "xxx????xxxxxx????xxxx");
    if (!pGNameAddress) {
        printf("Finding pattern for GName has failed, bailing-out immediately!\n");
        return 0;
    }

    auto pGNameOffset = *reinterpret_cast<uint32_t*>(pGNameAddress + 3);

    SDK::FName::GNames = *reinterpret_cast<SDK::TNameEntryArray**>(pGNameAddress + 7 + pGNameOffset);

    Level = (*World)->PersistentLevel;

    GameInstance = (*World)->OwningGameInstance;

    LocalPlayers = GameInstance->LocalPlayers;
    LocalPlayer = LocalPlayers[0];

    Actors = &Level->Actors;

    PlayerController = LocalPlayer->PlayerController;

    PlayerPawn_Athena_C = reinterpret_cast<SDK::APlayerPawn_Athena_C*>(FindActor(SDK::APlayerPawn_Athena_C::StaticClass()));
    if (!PlayerPawn_Athena_C) {
        printf("Finding PlayerPawn_Athena_C has failed, bailing-out immediately!\n");
        return 0;
    }

    static auto SkeletalMesh = SDK::UObject::FindObject<SDK::USkeletalMesh>("SkeletalMesh SK_M_Med_Soldier_04_ATH.SK_M_Med_Soldier_04_ATH");
    if (SkeletalMesh == nullptr) {
        printf("Finding SkeletalMesh has failed, bailing-out immediately!\n");
        return 0;
    }

    PlayerPawn_Athena_C->Mesh->SetSkeletalMesh(SkeletalMesh, true);

    pPossessParams PossessParams = (pPossessParams)HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(MyPossessParams));

    PossessParams->pInstance = PlayerController;
    PossessParams->pPawn = PlayerPawn_Athena_C;

    CreateThread(0, 0, Util::PossessWithThread, PossessParams, 0, 0);

    Sleep(2000);

    CreateThread(0, 0, JumpThread, 0, 0, 0);

    reinterpret_cast<SDK::AAthena_PlayerController_C*>(PlayerController)->ServerReadyToStartMatch();

    SDK::AFortGameModeAthena* AuthorityGameMode = reinterpret_cast<SDK::AFortGameModeAthena*>((*World)->AuthorityGameMode);

    AuthorityGameMode->StartMatch();*/

    // Dump objects:
    //for (int i = 0; i < SDK::UObject::GetGlobalObjects().Num(); i++) {
    //    auto object = SDK::UObject::GetGlobalObjects().GetByIndex(i);
    //    if (object == nullptr)
    //        continue;
    //
    //    printf("Object = %s\n", object->GetFullName().c_str());
    //}

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
    if (dwReason == DLL_PROCESS_ATTACH)
        CreateThread(0, 0, Main, hModule, 0, 0);

    return true;
}
