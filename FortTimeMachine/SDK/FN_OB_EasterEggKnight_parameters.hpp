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

// Function OB_EasterEggKnight.OB_EasterEggKnight_C.UserConstructionScript
struct AOB_EasterEggKnight_C_UserConstructionScript_Params
{
};

// Function OB_EasterEggKnight.OB_EasterEggKnight_C.OnDamageServer
struct AOB_EasterEggKnight_C_OnDamageServer_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function OB_EasterEggKnight.OB_EasterEggKnight_C.SpawnShrubbery
struct AOB_EasterEggKnight_C_SpawnShrubbery_Params
{
};

// Function OB_EasterEggKnight.OB_EasterEggKnight_C.ExecuteUbergraph_OB_EasterEggKnight
struct AOB_EasterEggKnight_C_ExecuteUbergraph_OB_EasterEggKnight_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
