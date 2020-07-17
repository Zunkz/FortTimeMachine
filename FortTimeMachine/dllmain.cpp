#include "SDK.hpp"

#include <windows.h>
#include <inttypes.h>
#include <stdio.h>
#include <tchar.h>

#include "util.h"

#include <MinHook.h>
#pragma comment(lib, "minhook.lib")

SDK::UWorld** World;
SDK::ULevel* Level;

SDK::UGameInstance* GameInstance;

SDK::TArray<SDK::ULocalPlayer*> LocalPlayers;
SDK::ULocalPlayer* LocalPlayer;

SDK::TArray<SDK::AActor*>* Actors;

SDK::APlayerController* PlayerController;

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

SDK::UObject*(*StaticLoadObject)(SDK::UClass* ObjectClass, SDK::UObject* InOuter, const TCHAR* InName, const TCHAR* Filename, uint32_t LoadFlags, SDK::UPackageMap* Sandbox, bool bAllowObjectReconciliation) = nullptr;

template<class T>
T* LoadObject(SDK::UObject* Outer, const TCHAR* Name, const TCHAR* Filename = nullptr, uint32_t LoadFlags = 0, SDK::UPackageMap* Sandbox = nullptr) {
    return (T*)StaticLoadObject(T::StaticClass(), Outer, Name, Filename, LoadFlags, Sandbox, true);
}

// TODO: Accurately match original func
template<typename T>
T* FindOrLoadObject(const TCHAR* PathName) {
    //printf("HELLO_0\n");

    SDK::UClass* Class = T::StaticClass();
    Class->CreateDefaultObject(); // fuck it, create default object, no checks.

    //printf("HELLO_1\n");

    T* ObjectPtr = LoadObject<T>(NULL, PathName);

    //printf("HELLO_2\n");

    if (ObjectPtr)
        SDK::UObject::GObjects
            ->ObjObjects.GetItemByIndex(ObjectPtr->InternalIndex)->Flags |= int32_t(SDK::FUObjectItem::ObjectFlags::RootSet);

    //printf("HELLO_3\n");

    return ObjectPtr;
}

PVOID(*ProcessEvent)(SDK::UObject*, class SDK::UFunction*, PVOID) = nullptr;

PVOID ProcessEventHook(SDK::UObject* object, class SDK::UFunction* function, PVOID params) {
    if (object && function) {
        if (function->GetName().find("ServerAttemptAircraftJump") != std::string::npos) {
            std::string ClassName = "PlayerPawn_Athena_C";
            
            PlayerController->CheatManager->Summon(SDK::FString(std::wstring(ClassName.begin(), ClassName.end()).c_str()));

            SDK::APlayerPawn_Athena_C* PlayerPawn_Athena_C = reinterpret_cast<SDK::APlayerPawn_Athena_C*>(FindActor(SDK::APlayerPawn_Athena_C::StaticClass()));
            if (!PlayerPawn_Athena_C) {
                printf("Finding PlayerPawn_Athena_C has failed, bailing-out immediately!\n");
                return 0;
            }

            pPossessParams PossessParams = (pPossessParams)HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(MyPossessParams));

            PossessParams->pInstance = PlayerController;
            PossessParams->pPawn = PlayerPawn_Athena_C;

            CreateThread(0, 0, Util::PossessWithThread, PossessParams, 0, 0);
        } else if (function->GetName().find("ServerReturnToMainMenu") != std::string::npos) {
            reinterpret_cast<SDK::AFortPlayerController*>(PlayerController)->ReturnToMainMenu();
        }
    }

    return ProcessEvent(object, function, params);
}

DWORD WINAPI Main(LPVOID lpParam) {
    Util::InitConsole();

    printf("Aurora: Time Machine by Cyuubi, with help from others.\n");
    printf("Credits: Crush, Taj, Samicc, Kanner, Pivot and Cendence.\n\n");

    printf("Thank you all for helping, this wouldn't have been possible without you!\n");

    MH_Initialize();

    auto pBaseAddress = (uintptr_t)GetModuleHandle(TEXT("FortniteClient-Win64-Shipping.exe"));
    if (!pBaseAddress) {
        printf("Finding BaseAddress for FortniteClient has failed, bailing-out immediately!\n");
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

    StaticLoadObject = reinterpret_cast<decltype(StaticLoadObject)>(pBaseAddress + 0x142E560);

    auto pPossessAddress = Util::FindPattern("\x48\x89\x5C\x24\x10\x55\x56\x57\x48\x8D\x6C\x24\x90", "xxxxxxxxxxxxx");
    if (!pPossessAddress) {
        printf("Finding pattern for Possess has failed, bailing-out immediately!\n");
        return 0;
    }

    Possess = reinterpret_cast<decltype(Possess)>(pPossessAddress);

    auto pProcessEventAddress = Util::FindPattern("\x40\x55\x56\x57\x41\x54\x41\x55\x41\x56\x41\x57\x48\x81\xEC\x00\x00\x00\x00\x48\x8D\x6C\x24\x00\x48\x89\x9D\x00\x00\x00\x00\x48\x8B\x05\x00\x00\x00\x00\x48\x33\xC5\x48\x89\x85\x00\x00\x00\x00\x48\x63\x41\x0C", "xxxxxxxxxxxxxxx????xxxx?xxx????xxx????xxxxxx????xxxx");
    if (!pProcessEventAddress) {
        printf("Finding pattern for ProcessEvent has failed, bailing-out immediately!\n");
        return 0;
    }

    MH_CreateHook(reinterpret_cast<LPVOID>(pProcessEventAddress), ProcessEventHook, (PVOID*)&ProcessEvent);
    MH_EnableHook(reinterpret_cast<LPVOID>(pProcessEventAddress));

    Level = (*World)->PersistentLevel;

    GameInstance = (*World)->OwningGameInstance;

    LocalPlayers = GameInstance->LocalPlayers;
    LocalPlayer = LocalPlayers[0];

    Actors = &Level->Actors;

    PlayerController = LocalPlayer->PlayerController;

    SDK::APlayerPawn_Athena_C* PlayerPawn_Athena_C = reinterpret_cast<SDK::APlayerPawn_Athena_C*>(FindActor(SDK::APlayerPawn_Athena_C::StaticClass()));
    if (!PlayerPawn_Athena_C) {
        printf("Finding PlayerPawn_Athena_C has failed, bailing-out immediately!\n");
        return 0;
    }

    pPossessParams PossessParams = (pPossessParams)HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(MyPossessParams));

    PossessParams->pInstance = PlayerController;
    PossessParams->pPawn = PlayerPawn_Athena_C;

    CreateThread(0, 0, Util::PossessWithThread, PossessParams, 0, 0);

    Sleep(2000);

    reinterpret_cast<SDK::AFortPlayerController*>(PlayerController)->ServerReadyToStartMatch();

    SDK::AFortGameModeAthena* AuthorityGameMode = reinterpret_cast<SDK::AFortGameModeAthena*>((*World)->AuthorityGameMode);

    AuthorityGameMode->StartPlay();
    AuthorityGameMode->StartMatch();

    Sleep(5000);

    //PlayerPawn_Athena_C->ServerChooseGender(SDK::EFortCustomGender::Female);

    /*SDK::UTexture2D* MiniMapAthena = FindOrLoadObject<SDK::UTexture2D>(TEXT("/Game/Athena/HUD/MiniMap/MiniMapAthena.MiniMapAthena"));
    if (!MiniMapAthena) {
        printf("%s\n", MiniMapAthena->GetFullName().c_str());
    } else {
        printf("HELLO THERE, THIS FUCKING FAILED AND WAS A COMPLETE WASTE OF TIME."); // lets hope we dont hit this message lmao...
    }*/

    //PlayerPawn_Athena_C->ServerChoosePart(SDK::EFortCustomPartType::Body, CharacterPartBody);

    //PlayerPawn_Athena_C->OnCharacterPartsReinitialized();

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
    if (dwReason == DLL_PROCESS_ATTACH)
        CreateThread(0, 0, Main, hModule, 0, 0);

    return true;
}
