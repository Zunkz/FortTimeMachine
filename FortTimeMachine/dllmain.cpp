#include "SDK.hpp"

#include <Windows.h>
#include <stdio.h>

#include <MinHook.h>
#pragma comment(lib, "minhook.lib")

#include "core.h"
#include "util.h"

SDK::APlayerPawn_Athena_C* pPlayerPawn_Athena_C;

PVOID(*ProcessEvent)(SDK::UObject*, SDK::UFunction*, PVOID) = nullptr;

PVOID ProcessEventHook(SDK::UObject* pObject, SDK::UFunction* pFunction, PVOID pParams) {
    if (pObject && pFunction) {
        if (pFunction->GetName().find("ServerAttemptAircraftJump") != std::string::npos) {
            SDK::FVector actorLocation = Core::pPlayerController->K2_GetActorLocation();
            Core::pPlayerController->CheatManager->BugItGo(actorLocation.X, actorLocation.Y, actorLocation.Z, 0, 0, 0);

            std::string sClassName = "PlayerPawn_Athena_C";
            Core::pPlayerController->CheatManager->Summon(SDK::FString(std::wstring(sClassName.begin(), sClassName.end()).c_str()));

            pPlayerPawn_Athena_C = static_cast<SDK::APlayerPawn_Athena_C*>(Util::FindActor(SDK::APlayerPawn_Athena_C::StaticClass()));
            if (!pPlayerPawn_Athena_C)
                printf("Finding PlayerPawn_Athena_C has failed, bailing-out immediately!\n");
            else {
                auto pSkeletalMesh = SDK::UObject::FindObject<SDK::USkeletalMesh>("SkeletalMesh F_SML_Starter_Epic.F_SML_Starter_Epic");
                if (pSkeletalMesh == nullptr)
                    printf("Finding SkeletalMesh has failed, bailing-out immediately!\n");
                else {
                    pPlayerPawn_Athena_C->Mesh->SetSkeletalMesh(pSkeletalMesh, true);

                    Core::pPlayerController->Possess(pPlayerPawn_Athena_C);
                }
            }
        }

        // HACK: This will probably cause a crash, but it's worth a try.
        if (pFunction->GetName().find("StopHoldProgress") != std::string::npos)
            return NULL;

        // Code to print out function calls:
        /*bool bInvalidate = false;

        if (pFunction->GetName().find("RecieveTick") != std::string::npos)
            bInvalidate = true;
        if (pFunction->GetName().find("ReceiveTick") != std::string::npos)
            bInvalidate = true;
        if (pFunction->GetName().find("BlueprintUpdateAnimation") != std::string::npos)
            bInvalidate = true;
        if (pFunction->GetName().find("BlueprintPostEvaluateAnimation") != std::string::npos)
            bInvalidate = true;
        if (pFunction->GetName().find("ExecuteUbergraph") != std::string::npos)
            bInvalidate = true;
        if (pFunction->GetName().find("Loop Animation Curve") != std::string::npos)
            bInvalidate = true;
        if (pFunction->GetName().find("OnMouseEnter") != std::string::npos)
            bInvalidate = true;
        if (pFunction->GetName().find("OnMouseLeave") != std::string::npos)
            bInvalidate = true;
        if (pFunction->GetName().find("OnMouseMove") != std::string::npos)
            bInvalidate = true;
        if (pFunction->GetName() == "Tick")
            bInvalidate = true;
        if (pFunction->GetName() == "GetValue")
            bInvalidate = true;
        if (pFunction->GetName() == "OnPaint")
            bInvalidate = true;
        if (pFunction->GetName() == "ReadyToEndMatch")
            bInvalidate = true;
        if (pFunction->GetName() == "OnUpdateDirectionalLightForTimeOfDay")
            bInvalidate = true;
        if (pFunction->GetName() == "ContrailCheck")
            bInvalidate = true;
        if (pFunction->GetName() == "ReceiveDrawHUD")
            bInvalidate = true;
        if (pFunction->GetName() == "ShouldShowEmptyImage")
            bInvalidate = true;
        if (pFunction->GetName() == "GetSubtitleVisibility")
            bInvalidate = true;
        if (pFunction->GetName() == "Clown Spinner")
            bInvalidate = true;
        if (pFunction->GetName() == "StartTickingIfRendered")
            bInvalidate = true;
        if (pFunction->GetName() == "BlueprintModifyCamera")
            bInvalidate = true;
        if (pFunction->GetName() == "BlueprintModifyPostProcess")
            bInvalidate = true;

        if (!bInvalidate)
            printf("%s %s\n", pObject->GetFullName().c_str(), pFunction->GetFullName().c_str());*/
    }

    return ProcessEvent(pObject, pFunction, pParams);
}

DWORD MiscThread(LPVOID lpParam) {
    while (1) {
        // Keybind to jump:
        if (GetKeyState(VK_OEM_PLUS) & 0x8000 && pPlayerPawn_Athena_C) {
            if (!pPlayerPawn_Athena_C->bIsSkydiving) {
                if (!pPlayerPawn_Athena_C->IsJumpProvidingForce())
                    pPlayerPawn_Athena_C->Jump();
            }
        }

        // Keybind to equip weapon:
        if (GetKeyState(VK_END) & 0x8000 && pPlayerPawn_Athena_C) {
            auto pFortWeapon = static_cast<SDK::AFortWeapon*>(Util::FindActor(SDK::AFortWeapon::StaticClass()));
            if (!pFortWeapon)
                printf("Finding FortWeapon has failed, bailing-out immediately!\n");
            else {
                pFortWeapon->ClientGivenTo(pPlayerPawn_Athena_C);

                pPlayerPawn_Athena_C->ClientInternalEquipWeapon(pFortWeapon);
            }
        }

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

    pPlayerPawn_Athena_C = static_cast<SDK::APlayerPawn_Athena_C*>(Util::FindActor(SDK::APlayerPawn_Athena_C::StaticClass()));
    if (!pPlayerPawn_Athena_C)
        printf("Finding PlayerPawn_Athena_C has failed, bailing-out immediately!\n");
    else {
        auto pSkeletalMesh = SDK::UObject::FindObject<SDK::USkeletalMesh>("SkeletalMesh F_SML_Starter_Epic.F_SML_Starter_Epic");
        if (!pSkeletalMesh)
            printf("Finding SkeletalMesh has failed, bailing-out immediately!\n");
        else {
            pPlayerPawn_Athena_C->Mesh->SetSkeletalMesh(pSkeletalMesh, true);

            Util::Possess(pPlayerPawn_Athena_C);

            CreateThread(0, 0, MiscThread, 0, 0, 0);

            Sleep(2000);

            static_cast<SDK::AAthena_PlayerController_C*>(Core::pPlayerController)->ServerReadyToStartMatch();

            auto pAuthorityGameMode = static_cast<SDK::AFortGameModeAthena*>((*Core::pWorld)->AuthorityGameMode);
            pAuthorityGameMode->StartMatch();
        }
    }

    return NULL;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
    if (dwReason == DLL_PROCESS_ATTACH)
        CreateThread(0, 0, Main, hModule, 0, 0);

    return true;
}
