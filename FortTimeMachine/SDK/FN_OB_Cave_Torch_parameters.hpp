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

// Function OB_Cave_Torch.OB_Cave_Torch_C.OnRep_destroy
struct AOB_Cave_Torch_C_OnRep_destroy_Params
{
};

// Function OB_Cave_Torch.OB_Cave_Torch_C.UserConstructionScript
struct AOB_Cave_Torch_C_UserConstructionScript_Params
{
};

// Function OB_Cave_Torch.OB_Cave_Torch_C.ReceiveBeginPlay
struct AOB_Cave_Torch_C_ReceiveBeginPlay_Params
{
};

// Function OB_Cave_Torch.OB_Cave_Torch_C.OnDamageServer
struct AOB_Cave_Torch_C_OnDamageServer_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function OB_Cave_Torch.OB_Cave_Torch_C.CheckSpawnFireflies
struct AOB_Cave_Torch_C_CheckSpawnFireflies_Params
{
};

// Function OB_Cave_Torch.OB_Cave_Torch_C.ExecuteUbergraph_OB_Cave_Torch
struct AOB_Cave_Torch_C_ExecuteUbergraph_OB_Cave_Torch_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
