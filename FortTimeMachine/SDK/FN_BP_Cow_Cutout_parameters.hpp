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

// Function BP_Cow_Cutout.BP_Cow_Cutout_C.UserConstructionScript
struct ABP_Cow_Cutout_C_UserConstructionScript_Params
{
};

// Function BP_Cow_Cutout.BP_Cow_Cutout_C.OnDamageServer
struct ABP_Cow_Cutout_C_OnDamageServer_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function BP_Cow_Cutout.BP_Cow_Cutout_C.PlaySound
struct ABP_Cow_Cutout_C_PlaySound_Params
{
};

// Function BP_Cow_Cutout.BP_Cow_Cutout_C.ExecuteUbergraph_BP_Cow_Cutout
struct ABP_Cow_Cutout_C_ExecuteUbergraph_BP_Cow_Cutout_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
