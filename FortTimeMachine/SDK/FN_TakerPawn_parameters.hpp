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

// Function TakerPawn.TakerPawn_C.StopMaterialTimeline
struct ATakerPawn_C_StopMaterialTimeline_Params
{
};

// Function TakerPawn.TakerPawn_C.StopDeathFX
struct ATakerPawn_C_StopDeathFX_Params
{
};

// Function TakerPawn.TakerPawn_C.TakerAirborneTest
struct ATakerPawn_C_TakerAirborneTest_Params
{
	struct FVector                                     ImpactPointOrTraceEndBelowTaker;                          // (Parm, OutParm, IsPlainOldData)
	bool                                               Airborne;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.SetTakerRotationRate
struct ATakerPawn_C_SetTakerRotationRate_Params
{
	float                                              YawRate;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.ResetTakerRotationRateToDefault
struct ATakerPawn_C_ResetTakerRotationRateToDefault_Params
{
};

// Function TakerPawn.TakerPawn_C.OnRep_SoulSuckMontageSection
struct ATakerPawn_C_OnRep_SoulSuckMontageSection_Params
{
};

// Function TakerPawn.TakerPawn_C.MarkForDeath
struct ATakerPawn_C_MarkForDeath_Params
{
};

// Function TakerPawn.TakerPawn_C.OnRep_SoulSuckEffectActivated
struct ATakerPawn_C_OnRep_SoulSuckEffectActivated_Params
{
};

// Function TakerPawn.TakerPawn_C.ApplyPortalEffect
struct ATakerPawn_C_ApplyPortalEffect_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Portal_Out_Direction;                                     // (Parm, IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.UserConstructionScript
struct ATakerPawn_C_UserConstructionScript_Params
{
};

// Function TakerPawn.TakerPawn_C.Timeline_0__FinishedFunc
struct ATakerPawn_C_Timeline_0__FinishedFunc_Params
{
};

// Function TakerPawn.TakerPawn_C.Timeline_0__UpdateFunc
struct ATakerPawn_C_Timeline_0__UpdateFunc_Params
{
};

// Function TakerPawn.TakerPawn_C.Timeline_0__Spawn__EventFunc
struct ATakerPawn_C_Timeline_0__Spawn__EventFunc_Params
{
};

// Function TakerPawn.TakerPawn_C.UpdateMaterialParamsTL__FinishedFunc
struct ATakerPawn_C_UpdateMaterialParamsTL__FinishedFunc_Params
{
};

// Function TakerPawn.TakerPawn_C.UpdateMaterialParamsTL__UpdateFunc
struct ATakerPawn_C_UpdateMaterialParamsTL__UpdateFunc_Params
{
};

// Function TakerPawn.TakerPawn_C.MantleStart
struct ATakerPawn_C_MantleStart_Params
{
	struct FVector                                     StartPos;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     MidPos;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // (Parm, IsPlainOldData)
	bool                                               LowWall;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MidWall;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FullWall;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WindowWall;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.MantleEnd
struct ATakerPawn_C_MantleEnd_Params
{
};

// Function TakerPawn.TakerPawn_C.HuskEvadeStart
struct ATakerPawn_C_HuskEvadeStart_Params
{
};

// Function TakerPawn.TakerPawn_C.VerifyTakerAttack
struct ATakerPawn_C_VerifyTakerAttack_Params
{
	bool                                               SpecialAttack;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Swoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Soul_Suck;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Portal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.ResetTakerSpecialAttackTimer
struct ATakerPawn_C_ResetTakerSpecialAttackTimer_Params
{
	bool                                               Swoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SoulSuckMelee;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Portal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.TakerWallPortalBehavior
struct ATakerPawn_C_TakerWallPortalBehavior_Params
{
	class AActor*                                      BuildingPart;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UBTTask_BlueprintBase*                       Task;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DesiredMoveLocation;                                      // (Parm, IsPlainOldData)
	bool                                               Debug;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.IsTakerWallPortalAvailable
struct ATakerPawn_C_IsTakerWallPortalAvailable_Params
{
	bool                                               Portal_Available_;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.TakerAttackFSM
struct ATakerPawn_C_TakerAttackFSM_Params
{
	bool                                               SuccessfulHit;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.PortalAdd
struct ATakerPawn_C_PortalAdd_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ABuildingActor*>                      BuildingActorList;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TakerPawn.TakerPawn_C.PortalClear
struct ATakerPawn_C_PortalClear_Params
{
};

// Function TakerPawn.TakerPawn_C.TakerSoulSuckInterrupted
struct ATakerPawn_C_TakerSoulSuckInterrupted_Params
{
};

// Function TakerPawn.TakerPawn_C.PortalGet
struct ATakerPawn_C_PortalGet_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ABuildingActor*>                      BuildingActorList;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      BT;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.PortalFX
struct ATakerPawn_C_PortalFX_Params
{
};

// Function TakerPawn.TakerPawn_C.PortalCollision
struct ATakerPawn_C_PortalCollision_Params
{
	bool                                               Collide_;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.ReceiveBeginPlay
struct ATakerPawn_C_ReceiveBeginPlay_Params
{
};

// Function TakerPawn.TakerPawn_C.BeginTakerSwoopAttack
struct ATakerPawn_C_BeginTakerSwoopAttack_Params
{
};

// Function TakerPawn.TakerPawn_C.EndTakerSwoopAttack
struct ATakerPawn_C_EndTakerSwoopAttack_Params
{
};

// Function TakerPawn.TakerPawn_C.TakerSoulSuckSoundBegin
struct ATakerPawn_C_TakerSoulSuckSoundBegin_Params
{
	bool                                               Success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.TakerSoulSuckSoundEnd
struct ATakerPawn_C_TakerSoulSuckSoundEnd_Params
{
};

// Function TakerPawn.TakerPawn_C.DoPortal
struct ATakerPawn_C_DoPortal_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PortalOutDirection;                                       // (Parm, IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.TakerSoulSuckEffectOn
struct ATakerPawn_C_TakerSoulSuckEffectOn_Params
{
};

// Function TakerPawn.TakerPawn_C.TakerSoulSuckEffectOff
struct ATakerPawn_C_TakerSoulSuckEffectOff_Params
{
};

// Function TakerPawn.TakerPawn_C.OnDeathPlayEffects
struct ATakerPawn_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function TakerPawn.TakerPawn_C.BndEvt__FortLOSComponent_K2Node_ComponentBoundEvent_66_OnHasBeenFoundDelSignature__DelegateSignature
struct ATakerPawn_C_BndEvt__FortLOSComponent_K2Node_ComponentBoundEvent_66_OnHasBeenFoundDelSignature__DelegateSignature_Params
{
	class AFortPlayerController*                       PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.GameplayCue.Impact.Physical.Creature
struct ATakerPawn_C_GameplayCue_Impact_Physical_Creature_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function TakerPawn.TakerPawn_C.ModifySwoopOverlap
struct ATakerPawn_C_ModifySwoopOverlap_Params
{
};

// Function TakerPawn.TakerPawn_C.StartOverlapBox
struct ATakerPawn_C_StartOverlapBox_Params
{
};

// Function TakerPawn.TakerPawn_C.StopOverlapBox
struct ATakerPawn_C_StopOverlapBox_Params
{
};

// Function TakerPawn.TakerPawn_C.OnDamagePlayEffects
struct ATakerPawn_C_OnDamagePlayEffects_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function TakerPawn.TakerPawn_C.AdditiveHitReactDelay
struct ATakerPawn_C_AdditiveHitReactDelay_Params
{
};

// Function TakerPawn.TakerPawn_C.SpawnDeathFX
struct ATakerPawn_C_SpawnDeathFX_Params
{
};

// Function TakerPawn.TakerPawn_C.DoPortalFailsafe
struct ATakerPawn_C_DoPortalFailsafe_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ABuildingSMActor*>                    ModifiedBuildings;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     PortalOutDirection;                                       // (Parm, IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.OnBeginSleepEffects
struct ATakerPawn_C_OnBeginSleepEffects_Params
{
};

// Function TakerPawn.TakerPawn_C.OnEndSleepEffects
struct ATakerPawn_C_OnEndSleepEffects_Params
{
};

// Function TakerPawn.TakerPawn_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ATakerPawn_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.OnStartedEncounterSpawn
struct ATakerPawn_C_OnStartedEncounterSpawn_Params
{
};

// Function TakerPawn.TakerPawn_C.OnFinishedEncounterSpawn
struct ATakerPawn_C_OnFinishedEncounterSpawn_Params
{
};

// Function TakerPawn.TakerPawn_C.GameplayCue.GameplayModifiers.OnLowHealth.Enrage
struct ATakerPawn_C_GameplayCue_GameplayModifiers_OnLowHealth_Enrage_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function TakerPawn.TakerPawn_C.GameplayCue.Shield.Reapplied
struct ATakerPawn_C_GameplayCue_Shield_Reapplied_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function TakerPawn.TakerPawn_C.GameplayCue.Shield.Destroyed
struct ATakerPawn_C_GameplayCue_Shield_Destroyed_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function TakerPawn.TakerPawn_C.GameplayCue.Damage.Shielded
struct ATakerPawn_C_GameplayCue_Damage_Shielded_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function TakerPawn.TakerPawn_C.ReceivePossessed
struct ATakerPawn_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.ExecuteUbergraph_TakerPawn
struct ATakerPawn_C_ExecuteUbergraph_TakerPawn_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
