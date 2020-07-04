#ifndef UTIL_H
#define UTIL_H

#include "SDK.hpp"

#include <Windows.h>
#include <inttypes.h>
#include <psapi.h>
#include <cstdio>

VOID(*Possess)(SDK::APlayerController* pInstance, SDK::AActor* pPawn) = nullptr;

typedef struct PossessParams {
    SDK::APlayerController* pInstance;
    SDK::AActor* pPawn;
} MyPossessParams, *pPossessParams;

class Util {
private:
    static BOOL MaskCompare(PVOID pBuffer, LPCSTR lpPattern, LPCSTR lpMask) {
        for (auto value = reinterpret_cast<PBYTE>(pBuffer); *lpMask; ++lpPattern, ++lpMask, ++value) {
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

    static DWORD PossessWithThread(LPVOID lpParam) {
        pPossessParams pDataArray = (pPossessParams)lpParam;

        Possess(pDataArray->pInstance, pDataArray->pPawn);

        return 0;
    }

    static PBYTE FindPattern(PVOID pBase, DWORD dwSize, LPCSTR lpPattern, LPCSTR lpMask) {
        dwSize -= static_cast<DWORD>(strlen(lpMask));

        for (auto index = 0UL; index < dwSize; ++index) {
            auto pAddress = reinterpret_cast<PBYTE>(pBase) + index;

            if (MaskCompare(pAddress, lpPattern, lpMask))
                return pAddress;
        }

        return NULL;
    }

    static PBYTE FindPattern(LPCSTR lpPattern, LPCSTR lpMask) {
        MODULEINFO info = { 0 };

        GetModuleInformation(GetCurrentProcess(), GetModuleHandle(0), &info, sizeof(info));

        return FindPattern(info.lpBaseOfDll, info.SizeOfImage, lpPattern, lpMask);
    }
};

#endif // UTIL_H
