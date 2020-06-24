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

// Function Car_SemiTruck_Logging_OB.Car_SemiTruck_Logging_OB_C.UserConstructionScript
struct ACar_SemiTruck_Logging_OB_C_UserConstructionScript_Params
{
};

// Function Car_SemiTruck_Logging_OB.Car_SemiTruck_Logging_OB_C.ReceiveBeginPlay
struct ACar_SemiTruck_Logging_OB_C_ReceiveBeginPlay_Params
{
};

// Function Car_SemiTruck_Logging_OB.Car_SemiTruck_Logging_OB_C.OnDeathServer
struct ACar_SemiTruck_Logging_OB_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function Car_SemiTruck_Logging_OB.Car_SemiTruck_Logging_OB_C.ExecuteUbergraph_Car_SemiTruck_Logging_OB
struct ACar_SemiTruck_Logging_OB_C_ExecuteUbergraph_Car_SemiTruck_Logging_OB_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
