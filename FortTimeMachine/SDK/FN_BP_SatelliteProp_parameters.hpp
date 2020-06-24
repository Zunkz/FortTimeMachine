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

// Function BP_SatelliteProp.BP_SatelliteProp_C.OnRep_DisableLight
struct ABP_SatelliteProp_C_OnRep_DisableLight_Params
{
};

// Function BP_SatelliteProp.BP_SatelliteProp_C.UserConstructionScript
struct ABP_SatelliteProp_C_UserConstructionScript_Params
{
};

// Function BP_SatelliteProp.BP_SatelliteProp_C.OnDeathServer
struct ABP_SatelliteProp_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function BP_SatelliteProp.BP_SatelliteProp_C.ExecuteUbergraph_BP_SatelliteProp
struct ABP_SatelliteProp_C_ExecuteUbergraph_BP_SatelliteProp_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
