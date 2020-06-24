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

// Function BP_GnomeEasterEgg.BP_GnomeEasterEgg_C.OnRep_Detonate
struct ABP_GnomeEasterEgg_C_OnRep_Detonate_Params
{
};

// Function BP_GnomeEasterEgg.BP_GnomeEasterEgg_C.SpitOutResources
struct ABP_GnomeEasterEgg_C_SpitOutResources_Params
{
};

// Function BP_GnomeEasterEgg.BP_GnomeEasterEgg_C.OnRep_EasterEggActive
struct ABP_GnomeEasterEgg_C_OnRep_EasterEggActive_Params
{
};

// Function BP_GnomeEasterEgg.BP_GnomeEasterEgg_C.AreGnomesAlive
struct ABP_GnomeEasterEgg_C_AreGnomesAlive_Params
{
};

// Function BP_GnomeEasterEgg.BP_GnomeEasterEgg_C.UserConstructionScript
struct ABP_GnomeEasterEgg_C_UserConstructionScript_Params
{
};

// Function BP_GnomeEasterEgg.BP_GnomeEasterEgg_C.OnCanceled_1A19862C47F5B5512EBB1BB0866DC57B
struct ABP_GnomeEasterEgg_C_OnCanceled_1A19862C47F5B5512EBB1BB0866DC57B_Params
{
};

// Function BP_GnomeEasterEgg.BP_GnomeEasterEgg_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0866DC57B
struct ABP_GnomeEasterEgg_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0866DC57B_Params
{
};

// Function BP_GnomeEasterEgg.BP_GnomeEasterEgg_C.ReceiveBeginPlay
struct ABP_GnomeEasterEgg_C_ReceiveBeginPlay_Params
{
};

// Function BP_GnomeEasterEgg.BP_GnomeEasterEgg_C.sdfsf
struct ABP_GnomeEasterEgg_C_sdfsf_Params
{
};

// Function BP_GnomeEasterEgg.BP_GnomeEasterEgg_C.stop timer
struct ABP_GnomeEasterEgg_C_stop_timer_Params
{
};

// Function BP_GnomeEasterEgg.BP_GnomeEasterEgg_C.SpitLootNow
struct ABP_GnomeEasterEgg_C_SpitLootNow_Params
{
};

// Function BP_GnomeEasterEgg.BP_GnomeEasterEgg_C.HandleMissionEvent_AttemptGnomeSpawn
struct ABP_GnomeEasterEgg_C_HandleMissionEvent_AttemptGnomeSpawn_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_GnomeEasterEgg.BP_GnomeEasterEgg_C.HandleMissionEvent_AttemptGnomeDetonate
struct ABP_GnomeEasterEgg_C_HandleMissionEvent_AttemptGnomeDetonate_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_GnomeEasterEgg.BP_GnomeEasterEgg_C.nukeeffects
struct ABP_GnomeEasterEgg_C_nukeeffects_Params
{
};

// Function BP_GnomeEasterEgg.BP_GnomeEasterEgg_C.PlaySecretSound
struct ABP_GnomeEasterEgg_C_PlaySecretSound_Params
{
};

// Function BP_GnomeEasterEgg.BP_GnomeEasterEgg_C.ExecuteUbergraph_BP_GnomeEasterEgg
struct ABP_GnomeEasterEgg_C_ExecuteUbergraph_BP_GnomeEasterEgg_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
