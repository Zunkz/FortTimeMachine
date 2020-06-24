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

// Function BP_MinimapHighlight_Trees.BP_MinimapHighlight_Trees_C.OnRep_Highlights
struct ABP_MinimapHighlight_Trees_C_OnRep_Highlights_Params
{
};

// Function BP_MinimapHighlight_Trees.BP_MinimapHighlight_Trees_C.OnRep_DestroyExtraHints
struct ABP_MinimapHighlight_Trees_C_OnRep_DestroyExtraHints_Params
{
};

// Function BP_MinimapHighlight_Trees.BP_MinimapHighlight_Trees_C.OnRep_ShowExtraHints
struct ABP_MinimapHighlight_Trees_C_OnRep_ShowExtraHints_Params
{
};

// Function BP_MinimapHighlight_Trees.BP_MinimapHighlight_Trees_C.OnRep_Minimap
struct ABP_MinimapHighlight_Trees_C_OnRep_Minimap_Params
{
};

// Function BP_MinimapHighlight_Trees.BP_MinimapHighlight_Trees_C.UserConstructionScript
struct ABP_MinimapHighlight_Trees_C_UserConstructionScript_Params
{
};

// Function BP_MinimapHighlight_Trees.BP_MinimapHighlight_Trees_C.Check
struct ABP_MinimapHighlight_Trees_C_Check_Params
{
};

// Function BP_MinimapHighlight_Trees.BP_MinimapHighlight_Trees_C.SetMinimapOn
struct ABP_MinimapHighlight_Trees_C_SetMinimapOn_Params
{
};

// Function BP_MinimapHighlight_Trees.BP_MinimapHighlight_Trees_C.SetMinimapOff
struct ABP_MinimapHighlight_Trees_C_SetMinimapOff_Params
{
};

// Function BP_MinimapHighlight_Trees.BP_MinimapHighlight_Trees_C.HandleMissionEvent_OBJ_24_Activate
struct ABP_MinimapHighlight_Trees_C_HandleMissionEvent_OBJ_24_Activate_Params
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

// Function BP_MinimapHighlight_Trees.BP_MinimapHighlight_Trees_C.HandleMissionEvent_OBJ_3_Complete
struct ABP_MinimapHighlight_Trees_C_HandleMissionEvent_OBJ_3_Complete_Params
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

// Function BP_MinimapHighlight_Trees.BP_MinimapHighlight_Trees_C.Input
struct ABP_MinimapHighlight_Trees_C_Input_Params
{
	class ABuildingActor*                              ActorRef;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MinimapHighlight_Trees.BP_MinimapHighlight_Trees_C.Died
struct ABP_MinimapHighlight_Trees_C_Died_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, IsPlainOldData)
};

// Function BP_MinimapHighlight_Trees.BP_MinimapHighlight_Trees_C.StartHints
struct ABP_MinimapHighlight_Trees_C_StartHints_Params
{
};

// Function BP_MinimapHighlight_Trees.BP_MinimapHighlight_Trees_C.timeup
struct ABP_MinimapHighlight_Trees_C_timeup_Params
{
};

// Function BP_MinimapHighlight_Trees.BP_MinimapHighlight_Trees_C.OnDeathServer
struct ABP_MinimapHighlight_Trees_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function BP_MinimapHighlight_Trees.BP_MinimapHighlight_Trees_C.nukeeffects
struct ABP_MinimapHighlight_Trees_C_nukeeffects_Params
{
};

// Function BP_MinimapHighlight_Trees.BP_MinimapHighlight_Trees_C.findreminder
struct ABP_MinimapHighlight_Trees_C_findreminder_Params
{
};

// Function BP_MinimapHighlight_Trees.BP_MinimapHighlight_Trees_C.ExecuteUbergraph_BP_MinimapHighlight_Trees
struct ABP_MinimapHighlight_Trees_C_ExecuteUbergraph_BP_MinimapHighlight_Trees_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
