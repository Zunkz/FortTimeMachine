#include "SDK.hpp"

#include <windows.h>
#include <inttypes.h>
#include <stdio.h>
#include <psapi.h>

SDK::UWorld** World;
SDK::ULevel* Level;

SDK::UGameInstance* GameInstance;

SDK::TArray<SDK::ULocalPlayer*> LocalPlayers;
SDK::ULocalPlayer* LocalPlayer;

SDK::TArray<SDK::AActor*>* Actors;

VOID(*Possess)(SDK::APlayerController*, SDK::AActor*) = nullptr;

SDK::AActor* FindActor(class SDK::UClass* Class, int SkipCount = 0) {
    int SkipIndex = 0;

    for (int i = 0; i < Actors->Num(); i++) {
        SDK::AActor* Actor = Actors->operator[](i);

        if (Actor != nullptr) {
            if (Actor->IsA(Class)) {
                if (SkipIndex >= SkipCount)
                    return Actor;
                else {
                    SkipIndex++;
                    continue;
                }
            }
        }
    }

    return nullptr;
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

VOID SwitchController(class SDK::UPlayer* Instance, class SDK::APlayerController* PC) {
    if (Instance->PlayerController)
        Instance->PlayerController->Player = NULL;

    PC->Player = Instance;

    Instance->PlayerController = PC;
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

    auto pPossessAddress = FindPattern("\x48\x89\x5C\x24\x10\x55\x56\x57\x48\x8D\x6C\x24\x90", "xxxxxxxxxxxxx");
    if (!pPossessAddress) {
        printf("Finding pattern for Possess has failed, bailing-out immediately!\n");
        return;
    }

    Possess = reinterpret_cast<decltype(Possess)>(pPossessAddress);

    Level = (*World)->PersistentLevel;

    GameInstance = (*World)->OwningGameInstance;

    LocalPlayers = GameInstance->LocalPlayers;
    LocalPlayer = LocalPlayers[0];

    Actors = &Level->Actors;

    SDK::APlayerController* PlayerController = LocalPlayer->PlayerController;

    SDK::AHuskPawn_C* HuskPawn_C = reinterpret_cast<SDK::AHuskPawn_C*>(FindActor(SDK::AHuskPawn_C::StaticClass()));
    if (!HuskPawn_C) {
        printf("Finding HuskPawn_C has failed, bailing-out immediately!\n");
        return;
    }

    PlayerController->Possess(HuskPawn_C);

    /*Athena_PlayerController_C->bPlayerIsWaiting = 0;

    Athena_PlayerController_C->bFailedToRespawn = 0;
    Athena_PlayerController_C->bIsDisconnecting = 0;
    Athena_PlayerController_C->bIsBeingKicked = 0;
    Athena_PlayerController_C->bIsLateJoining = 0;
    Athena_PlayerController_C->bHasInitiallySpawned = 1;
    Athena_PlayerController_C->bAssignedStartSpawn = 1;
    Athena_PlayerController_C->bReadyToStartMatch = 1;
    Athena_PlayerController_C->bClientPawnIsLoaded = 1;

    Athena_PlayerController_C->bHasClientFinishedLoading = true;
    Athena_PlayerController_C->bHasServerFinishedLoading = true;

    Athena_PlayerController_C->bWantsToSprint = false;
    Athena_PlayerController_C->bHoldingSprint = false;
    Athena_PlayerController_C->bSprintToggleable = false;
    Athena_PlayerController_C->bSprintCancelsReload = false;
    Athena_PlayerController_C->bTapInteractEnabled = false;
    Athena_PlayerController_C->bTargetingToggleable = false;
    Athena_PlayerController_C->bMovementDisabledDueToCancellableAction = false;
    Athena_PlayerController_C->bIsPlayerActivelyMoving = false;

    Athena_PlayerController_C->bHoldingUse = false;
    Athena_PlayerController_C->bIsClientTimingOut = false;

    Athena_PlayerController_C->bAtNameBaseScreen = false;
    Athena_PlayerController_C->bInventoryToggledByAlt = true;

    Athena_PlayerController_C->bIsInQuickToggleCursorMode = false;
    Athena_PlayerController_C->bGamepadAbilityPending = false;
    Athena_PlayerController_C->bForceAllowCursorMode = false;
    Athena_PlayerController_C->bDragDropPending = false;
    Athena_PlayerController_C->bSuppressEventNotifications = false;
    Athena_PlayerController_C->bInventoryToggledByAlt = false;

    Athena_PlayerController_C->bBuildPreviewMirrored = 0;
    Athena_PlayerController_C->bBuildFree = 0;
    Athena_PlayerController_C->bCraftFree = 0;

    Athena_PlayerController_C->bAutoEquipBetterItems = 0;

    Athena_PlayerController_C->bHasInitializedWorldInventory = true;
    Athena_PlayerController_C->bHasInitializedHeroInventory = true;
    Athena_PlayerController_C->bAccountInventoryWasUpdated = false;
    Athena_PlayerController_C->bIsSavingGadgetLoadout = false;

    Athena_PlayerController_C->bDropWeaponsDuringAllMissionStates = false;

    Athena_PlayerController_C->bHasUnsavedPrimaryMissionProgress = false;

    Athena_PlayerController_C->bTutorialCompleted = 0;

    Athena_PlayerController_C->bShouldReceiveCriticalMatchBonus = false;

    Athena_PlayerController_C->bInfiniteAmmo = 0;
    Athena_PlayerController_C->bNoCoolDown = 0;
    Athena_PlayerController_C->bInfiniteDurability = 0;
    Athena_PlayerController_C->bUsePickers = 0;
    Athena_PlayerController_C->bPickerOpen = 0;
    Athena_PlayerController_C->bCheatGhost = 0;
    Athena_PlayerController_C->bCheatFly = 0;

    Athena_PlayerController_C->bEnableShotLogging = 0;
    Athena_PlayerController_C->bIsNearActiveEncounters = 0;

    Athena_PlayerController_C->bShowDamageNumbersOnFatalHit = false;
    Athena_PlayerController_C->bHideHudEnglishText = false;

    Athena_PlayerController_C->ServerClientPawnLoaded(true);
    Athena_PlayerController_C->ClientFinishedInteractionInZone();*/

    /*SDK::AMainPlayerCamera_C* MainPlayerCamera_C = reinterpret_cast<SDK::AMainPlayerCamera_C*>(FindActor(SDK::AMainPlayerCamera_C::StaticClass()));
    if (!MainPlayerCamera_C) {
        printf("Finding MainPlayerCamera_C has failed, bailing-out immediately!\n");
        return;
    }

    printf("ViewTarget = %s\n", Athena_PlayerController_C->GetViewTarget()->GetFullName().c_str());

    Athena_PlayerController_C->SetViewTargetWithBlend(MainPlayerCamera_C, 0, SDK::EViewTargetBlendFunction::VTBlend_Linear, 0, false);

    printf("ViewTarget = %s\n", Athena_PlayerController_C->GetViewTarget()->GetFullName().c_str());*/

    /*if (!PlayerController->IsA(SDK::AFortPlayerControllerFrontEnd::StaticClass())) {
        printf("The PlayerController was not valid, bailing-out immediately!\n");
        return;
    }

    FortPlayerControllerFrontEnd = reinterpret_cast<SDK::AFortPlayerControllerFrontEnd*>(PlayerController);

    FortPlayerPawnAthena = reinterpret_cast<SDK::AFortPlayerPawnAthena*>(FindActor(SDK::AFortPlayerPawnAthena::StaticClass()));
    if (!FortPlayerPawnAthena) {
        printf("Finding FortPlayerPawnAthena has failed, bailing-out immediately!\n");
        return;
    }

    FortPlayerControllerFrontEnd->Possess(FortPlayerPawnAthena);*/

    /*SDK::AFortPlayerStateAthena* FortPlayerStateAthena = reinterpret_cast<SDK::AFortPlayerStateAthena*>(FindActor(SDK::AFortPlayerStateAthena::StaticClass()));
    if (!FortPlayerStateAthena) {
        printf("Finding FortPlayerStateAthena has failed, bailing-out immediately!\n");
        return;
    }*/

    /*if (!PlayerController->IsA(SDK::AAthena_PlayerController_C::StaticClass())) {
        printf("The PlayerController was not valid, bailing-out immediately!\n");
        return;
    }

    Athena_PlayerController_C = reinterpret_cast<SDK::AAthena_PlayerController_C*>(PlayerController);

    FortPlayerPawnAthena = reinterpret_cast<SDK::AFortPlayerPawnAthena*>(FindActor(SDK::AFortPlayerPawnAthena::StaticClass()));
    if (!FortPlayerPawnAthena) {
        printf("Finding FortPlayerPawnAthena has failed, bailing-out immediately!\n");
        return;
    }*/

    /*std::thread* Possessing = new std::thread(Possess);

    while (!bHasPossess); // Spin-out until Possess has run.
    Sleep(1000); // Sleep for an extra 1 second to make sure it has possessed it.

    FortPlayerPawnAthena->SetOwner(Athena_PlayerController_C);
    FortPlayerPawnAthena->EnableInput(Athena_PlayerController_C);
    FortPlayerPawnAthena->ReceiveBeginPlay();

    FortPlayerStateAthena->bIsReadyToContinue = 1;
    FortPlayerStateAthena->bHasFinishedLoading = 1;
    FortPlayerStateAthena->bHasStartedPlaying = 1;

    Athena_PlayerController_C->bClientPawnIsLoaded = 1;

    Athena_PlayerController_C->bHasClientFinishedLoading = 1;
    Athena_PlayerController_C->bHasServerFinishedLoading = 1;

    (*World)->GameState->HasBegunPlay();
    (*World)->GameState->HasMatchStarted();

    Athena_PlayerController_C->ServerSetClientHasFinishedLoading(true);
    Athena_PlayerController_C->ServerLoadingScreenDropped();

    SDK::AGameMode* AuthorityGameMode = reinterpret_cast<SDK::AGameMode*>((*World)->AuthorityGameMode);

    AuthorityGameMode->StartMatch();

    Possessing->join();*/

    /*for (int i = 0; i < Actors->Num(); i++) {
        SDK::AActor* Actor = Actors->operator[](i);

        if (Actor != nullptr) {
            if (Actor->IsA(SDK::APartyCharacterPlacementHelper_C::StaticClass())) {
                Actor->K2_DestroyActor();
            }
        }
    }

    SDK::AFortUIBaseClass* FortUIBaseClass = reinterpret_cast<SDK::AFortUIBaseClass*>(FindActor(SDK::AFortUIBaseClass::StaticClass()));
    if (!FortUIBaseClass) {
        printf("Finding FortUIBaseClass has failed, bailing-out immediately!\n");
        return;
    }

    FortUIBaseClass->K2_DestroyActor();

    SDK::AFortPlayerPawnAthena* FortPlayerPawnAthena = reinterpret_cast<SDK::AFortPlayerPawnAthena*>(FindActor(SDK::AFortPlayerPawnAthena::StaticClass()));
    if (!FortPlayerPawnAthena) {
        printf("Finding FortPlayerPawnAthena has failed, bailing-out immediately!\n");
        return;
    }

    if (!PlayerController->IsA(SDK::AFortPlayerControllerFrontEnd::StaticClass())) {
        printf("The PlayerController was not valid, bailing-out immediately!\n");
        return;
    }

    SDK::AFortPlayerControllerFrontEnd* FortPlayerControllerFrontEnd = reinterpret_cast<SDK::AFortPlayerControllerFrontEnd*>(PlayerController);

    FortPlayerControllerFrontEnd->Possess(FortPlayerPawnAthena);*/

    //SDK::AFortFrontEndCameraManager* PlayerCameraManager = reinterpret_cast<SDK::AFortFrontEndCameraManager*>(PlayerController->PlayerCameraManager);

   // PlayerCameraManager->SetCamera(SDK::EFrontEndCamera::TutorialPhaseThree);

    /*SDK::AGameMode* AuthorityGameMode = reinterpret_cast<SDK::AGameMode*>((*World)->AuthorityGameMode);

    printf("Starting match...\n");

    AuthorityGameMode->StartMatch();

    printf("Started match!\n");*/

    //PlayerController->ClientSetHUD(SDK::AFortUIPvP::StaticClass());

    //PlayerController->ClientSetCinematicMode(false, false, false, true);

    //SDK::UHUD_C* HUD = reinterpret_cast<SDK::UHUD_C*>(PlayerController->MyHUD);

    //HUD->LoadingScreenChanged(false);

    //printf("MyHUD = %s\n", PlayerController->MyHUD->GetFullName().c_str());
    //printf("PlayerController = %s\n", PlayerController->GetFullName().c_str());
    //printf("PlayerCameraManager = %s\n", PlayerController->PlayerCameraManager->GetFullName().c_str());
    //printf("PlayerCameraManagerClass = %s\n", PlayerController->PlayerCameraManagerClass->GetFullName().c_str());

    /*printf("Initial HasBegunPlay = %i\n", (*World)->GameState->HasBegunPlay());
    printf("Initial HasMatchStarted = %i\n", (*World)->GameState->HasMatchStarted());*/

    //reinterpret_cast<SDK::AAthena_PlayerController_C*>(SDK::AAthena_PlayerController_C::StaticClass()->CreateDefaultObject());

    //(*World)->GameState->HasBegunPlay();

    /*for (int i = 0; i < Actors->Num(); i++) {
        SDK::AActor* Actor = Actors->operator[](i);

        if (Actor != nullptr) {
            if (Actor->IsA(SDK::AMusicManager_C::StaticClass())) {
                SDK::AMusicManager_C* MusicManager = reinterpret_cast<SDK::AMusicManager_C*>(Actor);

                MusicManager->PlayAmbientMusic();
            }

            printf("Actor = %s\n", Actor->GetName().c_str());

            //Actor->ReceiveBeginPlay();

            //printf("Actor = %s\n", Actor->GetFullName().c_str());
        }
    }*/

    /*{
        SDK::AFortPlayerController* FortPlayerController = reinterpret_cast<SDK::AFortPlayerController*>(PlayerController);

        FortPlayerPawnAthena->SetOwner(FortPlayerController);
        FortPlayerPawnAthena->EnableInput(FortPlayerController);
        FortPlayerPawnAthena->ReceiveBeginPlay();

        SDK::FViewTargetTransitionParams TransitionParams;

        TransitionParams.BlendFunction = SDK::EViewTargetBlendFunction::VTBlend_Linear;

        FortPlayerController->ServerLoadingScreenDropped();
        FortPlayerController->ClientSetViewTarget(FortPlayerPawnAthena, TransitionParams);
        FortPlayerController->Possess(FortPlayerPawnAthena);
    }*/

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

