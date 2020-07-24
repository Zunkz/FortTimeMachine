#ifndef CORE_H
#define CORE_H

#include "SDK.hpp"

#include <Windows.h>

namespace Core {
	SDK::UWorld** pWorld;
	SDK::ULevel* pLevel;

	SDK::UGameInstance* pGameInstance;

	SDK::TArray<SDK::ULocalPlayer*> pLocalPlayers;
	SDK::ULocalPlayer* pLocalPlayer;

	SDK::TArray<SDK::AActor*>* pActors;

	SDK::APlayerController* pPlayerController;
};

#endif // CORE_H
