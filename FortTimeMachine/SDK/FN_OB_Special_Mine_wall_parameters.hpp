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

// Function OB_Special_Mine_wall.OB_Special_Mine_wall_C.UserConstructionScript
struct AOB_Special_Mine_wall_C_UserConstructionScript_Params
{
};

// Function OB_Special_Mine_wall.OB_Special_Mine_wall_C.OnDamageServer
struct AOB_Special_Mine_wall_C_OnDamageServer_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function OB_Special_Mine_wall.OB_Special_Mine_wall_C.HandleMissionEvent_HuskHasBeenKilled
struct AOB_Special_Mine_wall_C_HandleMissionEvent_HuskHasBeenKilled_Params
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

// Function OB_Special_Mine_wall.OB_Special_Mine_wall_C.ExecuteUbergraph_OB_Special_Mine_wall
struct AOB_Special_Mine_wall_C_ExecuteUbergraph_OB_Special_Mine_wall_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
