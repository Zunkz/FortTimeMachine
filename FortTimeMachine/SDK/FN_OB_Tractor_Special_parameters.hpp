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

// Function OB_Tractor_Special.OB_Tractor_Special_C.UserConstructionScript
struct AOB_Tractor_Special_C_UserConstructionScript_Params
{
};

// Function OB_Tractor_Special.OB_Tractor_Special_C.ReceiveBeginPlay
struct AOB_Tractor_Special_C_ReceiveBeginPlay_Params
{
};

// Function OB_Tractor_Special.OB_Tractor_Special_C.OnDeathServer
struct AOB_Tractor_Special_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function OB_Tractor_Special.OB_Tractor_Special_C.ExecuteUbergraph_OB_Tractor_Special
struct AOB_Tractor_Special_C_ExecuteUbergraph_OB_Tractor_Special_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
