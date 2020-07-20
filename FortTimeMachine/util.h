#ifndef UTIL_H
#define UTIL_H

#include "SDK.hpp"

#include <Windows.h>
#include <inttypes.h>
#include <psapi.h>
#include <stdio.h>

#include "global.h"

class Util {
private:
    typedef struct {
        SDK::APlayerController* pInstance;
        SDK::AActor* pPawn;
    } PossessParams, *pPossessParams;

    static DWORD PossessThread(LPVOID lpParam) {
        auto pParams = static_cast<pPossessParams>(lpParam);
        if (!pParams)
            return NULL;

        Global::Possess(pParams->pInstance, pParams->pPawn); // TODO: Can probably be removed?

        return NULL;
    }

    static BOOL MaskCompare(PVOID pBuffer, LPCSTR lpPattern, LPCSTR lpMask) {
        for (auto value = static_cast<PBYTE>(pBuffer); *lpMask; ++lpPattern, ++lpMask, ++value) {
            if (*lpMask == 'x' && *reinterpret_cast<LPCBYTE>(lpPattern) != *value)
                return false;
        }

        return true;
    }

public:
    static VOID InitConsole() {
        AllocConsole();

        FILE* pFile;
        freopen_s(&pFile, "CONOUT$", "w", stdout);
    }

    static VOID InitSdk() {
        auto pUWorldAddress = Util::FindPattern("\x48\x8B\x1D\x00\x00\x00\x00\x00\x00\x00\x10\x4C\x8D\x4D\x00\x4C", "xxx???????xxxx?x");
        if (!pUWorldAddress) {
            MessageBox(NULL, static_cast<LPCWSTR>(L"Finding pattern for UWorld has failed, please re-open Fortnite and try again!"), static_cast<LPCWSTR>(L"Error"), MB_ICONERROR);
            ExitProcess(EXIT_FAILURE);
        }

        auto pUWorldOffset = *reinterpret_cast<uint32_t*>(pUWorldAddress + 3);

        Global::pWorld = reinterpret_cast<SDK::UWorld**>(pUWorldAddress + 7 + pUWorldOffset);

        auto pGObjectAddress = Util::FindPattern("\x48\x8D\x0D\x00\x00\x00\x00\xE8\x00\x00\x00\x00\xE8\x00\x00\x00\x00\xE8\x00\x00\x00\x00\x48\x8B\xD6", "xxx????x????x????x????xxx");
        if (!pGObjectAddress) {
            MessageBox(NULL, static_cast<LPCWSTR>(L"Finding pattern for GObject has failed, please re-open Fortnite and try again!"), static_cast<LPCWSTR>(L"Error"), MB_ICONERROR);
            ExitProcess(EXIT_FAILURE);
        }

        auto pGObjectOffset = *reinterpret_cast<uint32_t*>(pGObjectAddress + 3);

        SDK::UObject::GObjects = reinterpret_cast<SDK::FUObjectArray*>(pGObjectAddress + 7 + pGObjectOffset);

        auto pGNameAddress = Util::FindPattern("\x48\x8B\x05\x00\x00\x00\x00\x48\x85\xC0\x75\x50\xB9\x00\x00\x00\x00\x48\x89\x5C\x24", "xxx????xxxxxx????xxxx");
        if (!pGNameAddress) {
            MessageBox(NULL, static_cast<LPCWSTR>(L"Finding pattern for GName has failed, please re-open Fortnite and try again!"), static_cast<LPCWSTR>(L"Error"), MB_ICONERROR);
            ExitProcess(EXIT_FAILURE);
        }

        auto pGNameOffset = *reinterpret_cast<uint32_t*>(pGNameAddress + 3);

        SDK::FName::GNames = *reinterpret_cast<SDK::TNameEntryArray**>(pGNameAddress + 7 + pGNameOffset);
    }

    static VOID Possess(SDK::AActor* pPawn) {
        auto pParams = static_cast<pPossessParams>(HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(PossessParams)));
        if (!pParams)
            return;

        pParams->pInstance = Global::pPlayerController;
        pParams->pPawn = pPawn;

        CreateThread(0, 0, Util::PossessThread, pParams, 0, 0);
    }

    static uintptr_t BaseAddress() {
        auto pBaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandle(0));
        if (!pBaseAddress)
            return NULL;

        return pBaseAddress;
    }

    static PBYTE FindPattern(PVOID pBase, DWORD dwSize, LPCSTR lpPattern, LPCSTR lpMask) {
        dwSize -= static_cast<DWORD>(strlen(lpMask));

        for (auto index = 0UL; index < dwSize; ++index) {
            auto pAddress = static_cast<PBYTE>(pBase) + index;

            if (Util::MaskCompare(pAddress, lpPattern, lpMask))
                return pAddress;
        }

        return NULL;
    }

    static PBYTE FindPattern(LPCSTR lpPattern, LPCSTR lpMask) {
        MODULEINFO info = { 0 };

        GetModuleInformation(GetCurrentProcess(), GetModuleHandle(0), &info, sizeof(info));

        return Util::FindPattern(info.lpBaseOfDll, info.SizeOfImage, lpPattern, lpMask);
    }

    static SDK::AActor* FindActor(SDK::UClass* pClass, int iSkip = 0) {
        for (int i, j = 0; i < Global::pActors->Num(); i++) {
            SDK::AActor* pActor = Global::pActors->operator[](i);

            if (pActor != nullptr) {
                if (pActor->IsA(pClass)) {
                    if (j >= iSkip)
                        return pActor;
                    else {
                        j++;
                        continue;
                    }
                }
            }
        }

        return nullptr;
    }
};

#endif // UTIL_H
