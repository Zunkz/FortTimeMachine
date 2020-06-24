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

// Function BP_ControlTerminal.BP_ControlTerminal_C.OnRep_InteractEffects
struct ABP_ControlTerminal_C_OnRep_InteractEffects_Params
{
};

// Function BP_ControlTerminal.BP_ControlTerminal_C.BlueprintGetInteractionString
struct ABP_ControlTerminal_C_BlueprintGetInteractionString_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ControlTerminal.BP_ControlTerminal_C.BlueprintCanInteract
struct ABP_ControlTerminal_C_BlueprintCanInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ControlTerminal.BP_ControlTerminal_C.UserConstructionScript
struct ABP_ControlTerminal_C_UserConstructionScript_Params
{
};

// Function BP_ControlTerminal.BP_ControlTerminal_C.Rotate__FinishedFunc
struct ABP_ControlTerminal_C_Rotate__FinishedFunc_Params
{
};

// Function BP_ControlTerminal.BP_ControlTerminal_C.Rotate__UpdateFunc
struct ABP_ControlTerminal_C_Rotate__UpdateFunc_Params
{
};

// Function BP_ControlTerminal.BP_ControlTerminal_C.Timeline_0__FinishedFunc
struct ABP_ControlTerminal_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_ControlTerminal.BP_ControlTerminal_C.Timeline_0__UpdateFunc
struct ABP_ControlTerminal_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_ControlTerminal.BP_ControlTerminal_C.HandleMissionEvent_OBJ_8_Activate
struct ABP_ControlTerminal_C_HandleMissionEvent_OBJ_8_Activate_Params
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

// Function BP_ControlTerminal.BP_ControlTerminal_C.BlueprintOnInteract
struct ABP_ControlTerminal_C_BlueprintOnInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ControlTerminal.BP_ControlTerminal_C.loopsound
struct ABP_ControlTerminal_C_loopsound_Params
{
};

// Function BP_ControlTerminal.BP_ControlTerminal_C.PlayAlarm
struct ABP_ControlTerminal_C_PlayAlarm_Params
{
};

// Function BP_ControlTerminal.BP_ControlTerminal_C.HandleMissionEvent_OBJ_10_Activate
struct ABP_ControlTerminal_C_HandleMissionEvent_OBJ_10_Activate_Params
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

// Function BP_ControlTerminal.BP_ControlTerminal_C.PlayStartupSound
struct ABP_ControlTerminal_C_PlayStartupSound_Params
{
};

// Function BP_ControlTerminal.BP_ControlTerminal_C.PlayAttentionSound
struct ABP_ControlTerminal_C_PlayAttentionSound_Params
{
};

// Function BP_ControlTerminal.BP_ControlTerminal_C.OnMatchStarted
struct ABP_ControlTerminal_C_OnMatchStarted_Params
{
};

// Function BP_ControlTerminal.BP_ControlTerminal_C.HandleMissionEvent_RocketHasBluglo
struct ABP_ControlTerminal_C_HandleMissionEvent_RocketHasBluglo_Params
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

// Function BP_ControlTerminal.BP_ControlTerminal_C.HandleMissionEvent_OBJ_22_Activate
struct ABP_ControlTerminal_C_HandleMissionEvent_OBJ_22_Activate_Params
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

// Function BP_ControlTerminal.BP_ControlTerminal_C.BlugloSpin
struct ABP_ControlTerminal_C_BlugloSpin_Params
{
};

// Function BP_ControlTerminal.BP_ControlTerminal_C.HandleMissionEvent_PlayerInsideFort
struct ABP_ControlTerminal_C_HandleMissionEvent_PlayerInsideFort_Params
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

// Function BP_ControlTerminal.BP_ControlTerminal_C.LerpMonitors
struct ABP_ControlTerminal_C_LerpMonitors_Params
{
	struct FLinearColor                                NewCol;                                                   // (Parm, IsPlainOldData)
	float                                              RotateSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BarProgress;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MonitorOn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackgroundCol;                                            // (Parm, IsPlainOldData)
	struct FLinearColor                                OutlineCol;                                               // (Parm, IsPlainOldData)
	struct FLinearColor                                BarCol;                                                   // (Parm, IsPlainOldData)
};

// Function BP_ControlTerminal.BP_ControlTerminal_C.SetMonitorStage1
struct ABP_ControlTerminal_C_SetMonitorStage1_Params
{
};

// Function BP_ControlTerminal.BP_ControlTerminal_C.SetMonitorStage2
struct ABP_ControlTerminal_C_SetMonitorStage2_Params
{
};

// Function BP_ControlTerminal.BP_ControlTerminal_C.ExecuteUbergraph_BP_ControlTerminal
struct ABP_ControlTerminal_C_ExecuteUbergraph_BP_ControlTerminal_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
