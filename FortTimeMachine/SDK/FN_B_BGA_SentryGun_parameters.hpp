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

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.UpdateAmmoCountMID
struct AB_BGA_SentryGun_C_UpdateAmmoCountMID_Params
{
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.TempOnPlaceStatBuff
struct AB_BGA_SentryGun_C_TempOnPlaceStatBuff_Params
{
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.OnRep_IsDeployed
struct AB_BGA_SentryGun_C_OnRep_IsDeployed_Params
{
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.Is Pawn Inside Pitch Limits
struct AB_BGA_SentryGun_C_Is_Pawn_Inside_Pitch_Limits_Params
{
	class AFortPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInsidePitchLimits;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.IsPawnInsideYawLimits
struct AB_BGA_SentryGun_C_IsPawnInsideYawLimits_Params
{
	class AFortPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInsideYawLimits;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.IsValidTarget
struct AB_BGA_SentryGun_C_IsValidTarget_Params
{
	class AFortPawn*                                   PotentialTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeSimpleRangeCheck;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeFiringLimitCheck;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeObstructionCheck;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValidTarget;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.OnPotentialTargetUntouched
struct AB_BGA_SentryGun_C_OnPotentialTargetUntouched_Params
{
	class AFortPawn*                                   UntouchedPotentialTarget;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.OnNewPotentialTargetTouched
struct AB_BGA_SentryGun_C_OnNewPotentialTargetTouched_Params
{
	class AFortPawn*                                   PotentialTargetPawn;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.CalcDesiredAngle
struct AB_BGA_SentryGun_C_CalcDesiredAngle_Params
{
	float                                              InitialRelativeAngle;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentRelativeAngle;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleClamp;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DesiredAngle;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.HasAmmo
struct AB_BGA_SentryGun_C_HasAmmo_Params
{
	bool                                               HasAmmo;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.OnRep_CurAmmoCount
struct AB_BGA_SentryGun_C_OnRep_CurAmmoCount_Params
{
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.ShouldFire
struct AB_BGA_SentryGun_C_ShouldFire_Params
{
	bool                                               ShouldFire;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.ClearTargetAcquisitionTimer
struct AB_BGA_SentryGun_C_ClearTargetAcquisitionTimer_Params
{
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.ClearFiringTimer
struct AB_BGA_SentryGun_C_ClearFiringTimer_Params
{
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.SpawnImpactEffects
struct AB_BGA_SentryGun_C_SpawnImpactEffects_Params
{
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.SpawnTracer
struct AB_BGA_SentryGun_C_SpawnTracer_Params
{
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.PerformGunRotation
struct AB_BGA_SentryGun_C_PerformGunRotation_Params
{
	class AActor*                                      LookAtActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.SetTargetAcquisitionTimer
struct AB_BGA_SentryGun_C_SetTargetAcquisitionTimer_Params
{
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.SetFiringTimer
struct AB_BGA_SentryGun_C_SetFiringTimer_Params
{
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.AttemptFire
struct AB_BGA_SentryGun_C_AttemptFire_Params
{
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.AttemptAcquireTarget
struct AB_BGA_SentryGun_C_AttemptAcquireTarget_Params
{
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.SetTrackingTarget
struct AB_BGA_SentryGun_C_SetTrackingTarget_Params
{
	class AFortPawn*                                   PawnToTrack;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.GetTargetingSourceTransform
struct AB_BGA_SentryGun_C_GetTargetingSourceTransform_Params
{
	EFortAbilityTargetingSource*                       Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.InitializeMIDs
struct AB_BGA_SentryGun_C_InitializeMIDs_Params
{
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.UserConstructionScript
struct AB_BGA_SentryGun_C_UserConstructionScript_Params
{
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.ReceiveBeginPlay
struct AB_BGA_SentryGun_C_ReceiveBeginPlay_Params
{
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.GameplayCue.Impact.Physical
struct AB_BGA_SentryGun_C_GameplayCue_Impact_Physical_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.ReceiveTick
struct AB_BGA_SentryGun_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.GameplayCue.Abilities.Activation.Generic.SentryGun
struct AB_BGA_SentryGun_C_GameplayCue_Abilities_Activation_Generic_SentryGun_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.OnDeathPlayEffects
struct AB_BGA_SentryGun_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.OnDeathServer
struct AB_BGA_SentryGun_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature
struct AB_BGA_SentryGun_C_BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_275_ComponentEndOverlapSignature__DelegateSignature
struct AB_BGA_SentryGun_C_BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_275_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.OnBuildingActorInitialized
struct AB_BGA_SentryGun_C_OnBuildingActorInitialized_Params
{
	TEnumAsByte<EFortBuildingInitializationReason>*    InitializationReason;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortBuildingPersistentState>*         BuildingPersistentState;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.ExecuteUbergraph_B_BGA_SentryGun
struct AB_BGA_SentryGun_C_ExecuteUbergraph_B_BGA_SentryGun_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
