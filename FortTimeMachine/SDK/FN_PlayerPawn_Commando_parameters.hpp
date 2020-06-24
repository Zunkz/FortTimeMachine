#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerPawn_Commando.PlayerPawn_Commando_C.UserConstructionScript
struct APlayerPawn_Commando_C_UserConstructionScript_Params
{
};

// Function PlayerPawn_Commando.PlayerPawn_Commando_C.ReceivePossessed
struct APlayerPawn_Commando_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Activation.Commando.Shockwave
struct APlayerPawn_Commando_C_GameplayCue_Abilities_Activation_Commando_Shockwave_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
struct APlayerPawn_Commando_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params
{
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (Parm)
};

// Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
struct APlayerPawn_Commando_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params
{
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (Parm)
};

// Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Applied.Commando.IncendiaryRounds
struct APlayerPawn_Commando_C_GameplayCue_Abilities_Applied_Commando_IncendiaryRounds_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function PlayerPawn_Commando.PlayerPawn_Commando_C.SetMenuScreenClassName
struct APlayerPawn_Commando_C_SetMenuScreenClassName_Params
{
};

// Function PlayerPawn_Commando.PlayerPawn_Commando_C.ReceiveBeginPlay
struct APlayerPawn_Commando_C_ReceiveBeginPlay_Params
{
};

// Function PlayerPawn_Commando.PlayerPawn_Commando_C.SelectPawn
struct APlayerPawn_Commando_C_SelectPawn_Params
{
	class UAnimInstance*                               AnimInst;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Commando.PlayerPawn_Commando_C.ReceiveDestroyed
struct APlayerPawn_Commando_C_ReceiveDestroyed_Params
{
};

// Function PlayerPawn_Commando.PlayerPawn_Commando_C.CheckForGameState
struct APlayerPawn_Commando_C_CheckForGameState_Params
{
};

// Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Applied.Commando.MakeItRain
struct APlayerPawn_Commando_C_GameplayCue_Abilities_Applied_Commando_MakeItRain_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function PlayerPawn_Commando.PlayerPawn_Commando_C.ExecuteUbergraph_PlayerPawn_Commando
struct APlayerPawn_Commando_C_ExecuteUbergraph_PlayerPawn_Commando_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
