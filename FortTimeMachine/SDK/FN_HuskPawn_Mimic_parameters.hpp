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

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.KillPawnOnceTransformedToChest
struct AHuskPawn_Mimic_C_KillPawnOnceTransformedToChest_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.BecomeChest
struct AHuskPawn_Mimic_C_BecomeChest_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.BecomeChestIfConditionsSatisfied
struct AHuskPawn_Mimic_C_BecomeChestIfConditionsSatisfied_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.InitMimic
struct AHuskPawn_Mimic_C_InitMimic_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.UserConstructionScript
struct AHuskPawn_Mimic_C_UserConstructionScript_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ReceiveBeginPlay
struct AHuskPawn_Mimic_C_ReceiveBeginPlay_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.OnDeathPlayEffects
struct AHuskPawn_Mimic_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.TryToBecomeChest
struct AHuskPawn_Mimic_C_TryToBecomeChest_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.Event_LastTimeDamaged
struct AHuskPawn_Mimic_C_Event_LastTimeDamaged_Params
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

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ReturnToSpawnAndBecomeChest
struct AHuskPawn_Mimic_C_ReturnToSpawnAndBecomeChest_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ResetTimerForBecomingChest
struct AHuskPawn_Mimic_C_ResetTimerForBecomingChest_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ReceivePossessed
struct AHuskPawn_Mimic_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.DisableRibbons
struct AHuskPawn_Mimic_C_DisableRibbons_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.EnableRibbons
struct AHuskPawn_Mimic_C_EnableRibbons_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ExecuteUbergraph_HuskPawn_Mimic
struct AHuskPawn_Mimic_C_ExecuteUbergraph_HuskPawn_Mimic_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
