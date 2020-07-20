#ifndef GLOBAL_H
#define GLOBAL_H

#include "SDK.hpp"

#include <Windows.h>

#include <MinHook.h>
#pragma comment(lib, "minhook.lib")

#include "util.h"

namespace Global {
	SDK::UWorld** pWorld;
	SDK::ULevel* pLevel;

	SDK::UGameInstance* pGameInstance;

	SDK::TArray<SDK::ULocalPlayer*> pLocalPlayers;
	SDK::ULocalPlayer* pLocalPlayer;

	SDK::TArray<SDK::AActor*>* pActors;

	SDK::APlayerController* pPlayerController;

	VOID(*Possess)(SDK::APlayerController*, SDK::AActor*) = nullptr;
	PVOID(*ProcessEvent)(SDK::UObject*, SDK::UFunction*, PVOID) = nullptr;

	PVOID ProcessEventHook(SDK::UObject* pObject, SDK::UFunction* pFunction, PVOID pParams) {
		if (pObject && pFunction) {
			if (pFunction->GetName().find("ServerAttemptAircraftJump") != std::string::npos) {
				std::string sClassName = "PlayerPawn_Athena_C";

				pPlayerController->CheatManager->Summon(SDK::FString(std::wstring(sClassName.begin(), sClassName.end()).c_str()));

				auto pPlayerPawn_Athena_C = static_cast<SDK::APlayerPawn_Athena_C*>(Util::FindActor(SDK::APlayerPawn_Athena_C::StaticClass()));
				if (!pPlayerPawn_Athena_C) {
					printf("Finding PlayerPawn_Athena_C has failed, bailing-out immediately!\n");
					return 0;
				}

				auto pSkeletalMesh = SDK::UObject::FindObject<SDK::USkeletalMesh>("SkeletalMesh SK_M_Med_Soldier_04_ATH.SK_M_Med_Soldier_04_ATH");
				if (pSkeletalMesh == nullptr) {
					printf("Finding SkeletalMesh has failed, bailing-out immediately!\n");
					return 0;
				}

				pPlayerPawn_Athena_C->Mesh->SetSkeletalMesh(pSkeletalMesh, true);

				pPlayerController->Possess(pPlayerPawn_Athena_C);
			} else if (pFunction->GetName().find("ServerReturnToMainMenu") != std::string::npos) {
				static_cast<SDK::AAthena_PlayerController_C*>(pPlayerController)->ReturnToMainMenu();
			}
		}

		return Global::ProcessEvent(pObject, pFunction, pParams);
	}

	VOID Init() {
		if (MH_Initialize() != MH_STATUS::MH_OK) {
			MessageBox(NULL, static_cast<LPCWSTR>(L"Initializing MinHook has failed, please re-open Fortnite and try again!"), static_cast<LPCWSTR>(L"Error"), MB_ICONERROR);
			ExitProcess(EXIT_FAILURE);
		}

		uintptr_t pBaseAddress = Util::BaseAddress();
		if (!pBaseAddress) {
			MessageBox(NULL, static_cast<LPCWSTR>(L"Finding BaseAddress has failed, please re-open Fortnite and try again!"), static_cast<LPCWSTR>(L"Error"), MB_ICONERROR);
			ExitProcess(EXIT_FAILURE);
		}

		auto pPossessAddress = Util::FindPattern("\x48\x89\x5C\x24\x10\x55\x56\x57\x48\x8D\x6C\x24\x90", "xxxxxxxxxxxxx");
		if (!pPossessAddress) {
			MessageBox(NULL, static_cast<LPCWSTR>(L"Finding pattern for Possess has failed, please re-open Fortnite and try again!"), static_cast<LPCWSTR>(L"Error"), MB_ICONERROR);
			ExitProcess(EXIT_FAILURE);
		}

		Global::Possess = reinterpret_cast<decltype(Global::Possess)>(pPossessAddress);

		auto pProcessEventAddress = Util::FindPattern("\x40\x55\x56\x57\x41\x54\x41\x55\x41\x56\x41\x57\x48\x81\xEC\x00\x00\x00\x00\x48\x8D\x6C\x24\x00\x48\x89\x9D\x00\x00\x00\x00\x48\x8B\x05\x00\x00\x00\x00\x48\x33\xC5\x48\x89\x85\x00\x00\x00\x00\x48\x63\x41\x0C", "xxxxxxxxxxxxxxx????xxxx?xxx????xxx????xxxxxx????xxxx");
		if (!pProcessEventAddress) {
			MessageBox(NULL, static_cast<LPCWSTR>(L"Finding pattern for ProcessEvent has failed, please re-open Fortnite and try again!"), static_cast<LPCWSTR>(L"Error"), MB_ICONERROR);
			ExitProcess(EXIT_FAILURE);
		}

		MH_CreateHook(static_cast<LPVOID>(pProcessEventAddress), Global::ProcessEventHook, reinterpret_cast<LPVOID*>(&Global::ProcessEvent));
		MH_EnableHook(static_cast<LPVOID>(pProcessEventAddress));

		if (!pWorld) {
			MessageBox(NULL, static_cast<LPCWSTR>(L"The UWorld is not initialized, please re-open Fortnite and try again!"), static_cast<LPCWSTR>(L"Error"), MB_ICONERROR);
			ExitProcess(EXIT_FAILURE);
		}

		pLevel = (*pWorld)->PersistentLevel;

		pGameInstance = (*pWorld)->OwningGameInstance;

		pLocalPlayers = pGameInstance->LocalPlayers;
		pLocalPlayer = pLocalPlayers[0];

		pActors = &pLevel->Actors;

		pPlayerController = pLocalPlayer->PlayerController;
	}
};

#endif // GLOBAL_H
