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

// Function Defender.Defender_C.OnOutsideOfTetherBeyondMaxTimeAllowed
struct ADefender_C_OnOutsideOfTetherBeyondMaxTimeAllowed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Defender.Defender_C.SpawnSurvivorAnchor
struct ADefender_C_SpawnSurvivorAnchor_Params
{
	struct FVector                                     SurvivorAnchorSpawnLocation;                              // (Parm, IsPlainOldData)
	class ABP_SurvivorAnchor_C*                        SpawnedSurvivorAnchor;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Defender.Defender_C.UserConstructionScript
struct ADefender_C_UserConstructionScript_Params
{
};

// Function Defender.Defender_C.ReceiveBeginPlay
struct ADefender_C_ReceiveBeginPlay_Params
{
};

// Function Defender.Defender_C.OnDefenderTrapEndPlay
struct ADefender_C_OnDefenderTrapEndPlay_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Defender.Defender_C.SpawnSurvivorAnchorWhenReady
struct ADefender_C_SpawnSurvivorAnchorWhenReady_Params
{
};

// Function Defender.Defender_C.OnDefenderTrapSet
struct ADefender_C_OnDefenderTrapSet_Params
{
	class ABuildingTrapDefender**                      OldDefenderTrap;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Defender.Defender_C.ExecuteUbergraph_Defender
struct ADefender_C_ExecuteUbergraph_Defender_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
