#include "SDK.hpp"

#include <windows.h>
#include <inttypes.h>
#include <stdio.h>
#include <psapi.h>
#include <cstdint>
#include <thread>

SDK::UWorld** World;
SDK::ULevel* Level;

SDK::UGameInstance* GameInstance;

SDK::TArray<SDK::ULocalPlayer*> LocalPlayers;
SDK::ULocalPlayer* LocalPlayer;

SDK::TArray<SDK::AActor*>* Actors;

SDK::APawn* Pawn;

void Possess(SDK::APlayerController* PlayerController)
{
    PlayerController->Possess(Pawn);
}

BOOL MaskCompare(PVOID pBuffer, LPCSTR lpPattern, LPCSTR lpMask) {
    for (auto value = reinterpret_cast<PBYTE>(pBuffer); *lpMask; ++lpPattern, ++lpMask, ++value) {
        if (*lpMask == 'x' && *reinterpret_cast<LPCBYTE>(lpPattern) != *value)
            return false;
    }

    return true;
}

VOID InitConsole() {
    AllocConsole();

    FILE* pFile;
    freopen_s(&pFile, "CONOUT$", "w", stdout);
}

PBYTE FindPattern(PVOID pBase, DWORD dwSize, LPCSTR lpPattern, LPCSTR lpMask) {
    dwSize -= static_cast<DWORD>(strlen(lpMask));

    for (auto index = 0UL; index < dwSize; ++index) {
        auto pAddress = reinterpret_cast<PBYTE>(pBase) + index;

        if (MaskCompare(pAddress, lpPattern, lpMask))
            return pAddress;
    }

    return NULL;
}

PBYTE FindPattern(LPCSTR lpPattern, LPCSTR lpMask) {
    MODULEINFO info = { 0 };

    GetModuleInformation(GetCurrentProcess(), GetModuleHandle(0), &info, sizeof(info));

    return FindPattern(info.lpBaseOfDll, info.SizeOfImage, lpPattern, lpMask);
}

VOID Main() {
    InitConsole();

    printf("FN-TimeMachine by Cyuubi\n");

    auto pUWorldAddress = FindPattern("\x48\x8B\x1D\x00\x00\x00\x00\x00\x00\x00\x10\x4C\x8D\x4D\x00\x4C", "xxx???????xxxx?x");
    if (!pUWorldAddress) {
        printf("Finding pattern for UWorld has failed, bailing-out immediately!\n");
        return;
    }

    auto pUWorldOffset = *reinterpret_cast<uint32_t*>(pUWorldAddress + 3);

    World = reinterpret_cast<SDK::UWorld**>(pUWorldAddress + 7 + pUWorldOffset);

    auto pGObjectAddress = FindPattern("\x48\x8D\x0D\x00\x00\x00\x00\xE8\x00\x00\x00\x00\xE8\x00\x00\x00\x00\xE8\x00\x00\x00\x00\x48\x8B\xD6", "xxx????x????x????x????xxx");
    if (!pGObjectAddress) {
        printf("Finding pattern for GObject has failed, bailing-out immediately!\n");
        return;
    }

    auto pGObjectOffset = *reinterpret_cast<uint32_t*>(pGObjectAddress + 3);

    SDK::UObject::GObjects = reinterpret_cast<SDK::FUObjectArray*>(pGObjectAddress + 7 + pGObjectOffset);

    auto pGNameAddress = FindPattern("\x48\x8B\x05\x00\x00\x00\x00\x48\x85\xC0\x75\x50\xB9\x00\x00\x00\x00\x48\x89\x5C\x24", "xxx????xxxxxx????xxxx");
    if (!pGNameAddress) {
        printf("Finding pattern for GName has failed, bailing-out immediately!\n");
        return;
    }

    auto pGNameOffset = *reinterpret_cast<uint32_t*>(pGNameAddress + 3);

    SDK::FName::GNames = *reinterpret_cast<SDK::TNameEntryArray**>(pGNameAddress + 7 + pGNameOffset);

    Level = (*World)->PersistentLevel;

    GameInstance = (*World)->OwningGameInstance;

    LocalPlayers = GameInstance->LocalPlayers;
    LocalPlayer = LocalPlayers[0];

    Actors = &Level->Actors;

    SDK::APlayerController* PlayerController = LocalPlayer->PlayerController;

    //SDK::AFortFrontEndCameraManager* PlayerCameraManager = reinterpret_cast<SDK::AFortFrontEndCameraManager*>(PlayerController->PlayerCameraManager);

   // PlayerCameraManager->SetCamera(SDK::EFrontEndCamera::TutorialPhaseThree);

    /*SDK::AGameMode* AuthorityGameMode = reinterpret_cast<SDK::AGameMode*>((*World)->AuthorityGameMode);

    printf("Starting match...\n");

    AuthorityGameMode->StartMatch();

    printf("Started match!\n");*/

    //PlayerController->ClientSetHUD(SDK::AFortUIPvP::StaticClass());

    //PlayerController->ClientSetCinematicMode(false, false, false, true);

    //printf("MyHUD = %s\n", PlayerController->MyHUD->GetFullName().c_str());
    //printf("PlayerController = %s\n", PlayerController->GetFullName().c_str());
    //printf("PlayerCameraManager = %s\n", PlayerController->PlayerCameraManager->GetFullName().c_str());
    //printf("PlayerCameraManagerClass = %s\n", PlayerController->PlayerCameraManagerClass->GetFullName().c_str());

    /*printf("Initial HasBegunPlay = %i\n", (*World)->GameState->HasBegunPlay());
    printf("Initial HasMatchStarted = %i\n", (*World)->GameState->HasMatchStarted());*/

    //reinterpret_cast<SDK::AAthena_PlayerController_C*>(SDK::AAthena_PlayerController_C::StaticClass()->CreateDefaultObject());

    for (int i = 0; i < Actors->Num(); i++) {
        SDK::AActor* Actor = Actors->operator[](i);

        if (Actor != nullptr) {
            if (Actor->IsA(SDK::AFortPlayerPawnAthena::StaticClass())) {
                SDK::AFortPlayerPawnAthena* FortPlayerPawnAthena = reinterpret_cast<SDK::AFortPlayerPawnAthena*>(Actor);

                FortPlayerPawnAthena->SetFirstPersonCamera(true);

                PlayerController->Possess(FortPlayerPawnAthena);
                //Pawn = reinterpret_cast<SDK::APawn*>(Actor);

                // TODO: If this doesn't work, just call "PlayerController->Possess(reinterpret_cast<SDK::APawn*>(Actor));". But, it hangs the thread for some reason.
                //std::thread(&Possess, PlayerController);

                //printf("Pog, it worked!");

                break;
            }
        }
    }

    /*printf("After HasBegunPlay = %i\n", (*World)->GameState->HasBegunPlay());
    printf("After HasMatchStarted = %i\n", (*World)->GameState->HasMatchStarted());

    SDK::APlayerPawn_Athena_Generic_C* PlayerPawn_Athena_Generic = reinterpret_cast<SDK::APlayerPawn_Athena_Generic_C*>(Pawn);

    PlayerPawn_Athena_Generic->CharacterGender = SDK::EFortCustomGender::Male;
    PlayerPawn_Athena_Generic->CharacterBodyType = SDK::EFortCustomBodyType::Small;

    printf("IsDBNO = %i\n", PlayerPawn_Athena_Generic->IsDBNO());*/
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
    if (dwReason == DLL_PROCESS_ATTACH)
        Main();

    return true;
}

