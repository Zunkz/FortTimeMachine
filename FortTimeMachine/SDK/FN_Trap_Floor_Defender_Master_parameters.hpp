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

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.GetDefenderSpawnTransform
struct ATrap_Floor_Defender_Master_C_GetDefenderSpawnTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.CanPlayerSpawnDefender
struct ATrap_Floor_Defender_Master_C_CanPlayerSpawnDefender_Params
{
	class AFortPlayerController*                       Player;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UFortItem*                                   DefenderItem;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bCanSpawnDefender;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.SetDefenderItemDefinition
struct ATrap_Floor_Defender_Master_C_SetDefenderItemDefinition_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.SetDefenderPawn
struct ATrap_Floor_Defender_Master_C_SetDefenderPawn_Params
{
	class ADefender_C*                                 NewDefender;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.BlueprintGetInteractionString
struct ATrap_Floor_Defender_Master_C_BlueprintGetInteractionString_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.BlueprintCanInteract
struct ATrap_Floor_Defender_Master_C_BlueprintCanInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.BlueprintOnLocalInteract
struct ATrap_Floor_Defender_Master_C_BlueprintOnLocalInteract_Params
{
	class AFortPlayerPawn**                            InteractingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.UserConstructionScript
struct ATrap_Floor_Defender_Master_C_UserConstructionScript_Params
{
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnCanceled_1ED02ED748A4140AEF73B29EF46F9CF6
struct ATrap_Floor_Defender_Master_C_OnCanceled_1ED02ED748A4140AEF73B29EF46F9CF6_Params
{
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EF46F9CF6
struct ATrap_Floor_Defender_Master_C_OnAllClientsReady_1ED02ED748A4140AEF73B29EF46F9CF6_Params
{
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnCanceled_1ED02ED748A4140AEF73B29E1E11A6C0
struct ATrap_Floor_Defender_Master_C_OnCanceled_1ED02ED748A4140AEF73B29E1E11A6C0_Params
{
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E1E11A6C0
struct ATrap_Floor_Defender_Master_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E1E11A6C0_Params
{
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnLoaded_5FBB74204493DA1C442DF1A78BA2FBAC
struct ATrap_Floor_Defender_Master_C_OnLoaded_5FBB74204493DA1C442DF1A78BA2FBAC_Params
{
	class UClass*                                      Loaded;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnReloadEnd
struct ATrap_Floor_Defender_Master_C_OnReloadEnd_Params
{
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnPlaced
struct ATrap_Floor_Defender_Master_C_OnPlaced_Params
{
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnFinishedBuilding
struct ATrap_Floor_Defender_Master_C_OnFinishedBuilding_Params
{
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin
struct ATrap_Floor_Defender_Master_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
struct ATrap_Floor_Defender_Master_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnOutOfDurability
struct ATrap_Floor_Defender_Master_C_OnOutOfDurability_Params
{
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.SpawnDefender
struct ATrap_Floor_Defender_Master_C_SpawnDefender_Params
{
	class AFortPlayerController*                       RequestingFortPC;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AFortPlayerController*                       DefenderOwnerPC;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       DefenderSquadId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortWorldItem*                              WeaponToGive;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoQuantity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.ReceiveBeginPlay
struct ATrap_Floor_Defender_Master_C_ReceiveBeginPlay_Params
{
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.RemoveCurrentDefender
struct ATrap_Floor_Defender_Master_C_RemoveCurrentDefender_Params
{
	class AFortPlayerStateZone**                       RequestingPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRemovalCausedByPlayerJoin;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.ClearCurrentDefender
struct ATrap_Floor_Defender_Master_C_ClearCurrentDefender_Params
{
	bool*                                              bForceKillDefender;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.DeployDefender
struct ATrap_Floor_Defender_Master_C_DeployDefender_Params
{
	class AFortPlayerController**                      ItemSelectorPC;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFortDefenderItem**                          InDefenderItem;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InDefenderSquadId;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UFortWorldItem**                             WeaponToGive;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AmmoQuantity;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.Clear Current Defender BP
struct ATrap_Floor_Defender_Master_C_Clear_Current_Defender_BP_Params
{
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnEndPlay_Event_1
struct ATrap_Floor_Defender_Master_C_OnEndPlay_Event_1_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.ReceiveEndPlay
struct ATrap_Floor_Defender_Master_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnRep_DefenderPawn
struct ATrap_Floor_Defender_Master_C_OnRep_DefenderPawn_Params
{
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnRep_DefenderItemDefinition
struct ATrap_Floor_Defender_Master_C_OnRep_DefenderItemDefinition_Params
{
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnQueryFinishedEvent_Event_1
struct ATrap_Floor_Defender_Master_C_OnQueryFinishedEvent_Event_1_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.ExecuteUbergraph_Trap_Floor_Defender_Master
struct ATrap_Floor_Defender_Master_C_ExecuteUbergraph_Trap_Floor_Defender_Master_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
