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

// Function BP_WarningLight.BP_WarningLight_C.OnRep_NewColorRed
struct ABP_WarningLight_C_OnRep_NewColorRed_Params
{
};

// Function BP_WarningLight.BP_WarningLight_C.UserConstructionScript
struct ABP_WarningLight_C_UserConstructionScript_Params
{
};

// Function BP_WarningLight.BP_WarningLight_C.RotateLight__FinishedFunc
struct ABP_WarningLight_C_RotateLight__FinishedFunc_Params
{
};

// Function BP_WarningLight.BP_WarningLight_C.RotateLight__UpdateFunc
struct ABP_WarningLight_C_RotateLight__UpdateFunc_Params
{
};

// Function BP_WarningLight.BP_WarningLight_C.HandleMissionEvent_RocketHasBluglo
struct ABP_WarningLight_C_HandleMissionEvent_RocketHasBluglo_Params
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

// Function BP_WarningLight.BP_WarningLight_C.spin
struct ABP_WarningLight_C_spin_Params
{
};

// Function BP_WarningLight.BP_WarningLight_C.spinlightonclients
struct ABP_WarningLight_C_spinlightonclients_Params
{
};

// Function BP_WarningLight.BP_WarningLight_C.OnMatchStarted
struct ABP_WarningLight_C_OnMatchStarted_Params
{
};

// Function BP_WarningLight.BP_WarningLight_C.ExecuteUbergraph_BP_WarningLight
struct ABP_WarningLight_C_ExecuteUbergraph_BP_WarningLight_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
