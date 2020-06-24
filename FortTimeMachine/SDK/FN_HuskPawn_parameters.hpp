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

// Function HuskPawn.HuskPawn_C.UserConstructionScript
struct AHuskPawn_C_UserConstructionScript_Params
{
};

// Function HuskPawn.HuskPawn_C.FlingerSpawnedAnEnemy
struct AHuskPawn_C_FlingerSpawnedAnEnemy_Params
{
	class AFortAIPawn*                                 EnemySpawned;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortProjectileBase*                         ProjectileThatSpawnedThisEnemy;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.CanFlingerSpawnAnEnemy
struct AHuskPawn_C_CanFlingerSpawnAnEnemy_Params
{
	class AActor*                                      ActorWhoAsked;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.FlingerCanSpawnAnEnemy
struct AHuskPawn_C_FlingerCanSpawnAnEnemy_Params
{
};

// Function HuskPawn.HuskPawn_C.FlingerCan'tSpawnAnEnemy
struct AHuskPawn_C_FlingerCan_tSpawnAnEnemy_Params
{
};

// Function HuskPawn.HuskPawn_C.FlingerThrewAProjectileContainingAnEnemy
struct AHuskPawn_C_FlingerThrewAProjectileContainingAnEnemy_Params
{
	class AFortProjectileBase*                         Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.FlingerEnemyFailedToSpawn
struct AHuskPawn_C_FlingerEnemyFailedToSpawn_Params
{
	class AFortProjectileBase*                         FailedProjectile;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.AlertEnemySpawnedByFlinger
struct AHuskPawn_C_AlertEnemySpawnedByFlinger_Params
{
	struct FVector                                     PushMomentum;                                             // (Parm, IsPlainOldData)
	float                                              PushDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       OwningFlinger;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.FlingerEnemyDied
struct AHuskPawn_C_FlingerEnemyDied_Params
{
	class APawn*                                       PawnThatDied;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.MantleStart
struct AHuskPawn_C_MantleStart_Params
{
	struct FVector                                     StartPos;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     MidPos;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // (Parm, IsPlainOldData)
	bool                                               LowWall;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MidWall;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FullWall;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WindowWall;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.MantleEnd
struct AHuskPawn_C_MantleEnd_Params
{
};

// Function HuskPawn.HuskPawn_C.HuskEvadeStart
struct AHuskPawn_C_HuskEvadeStart_Params
{
};

// Function HuskPawn.HuskPawn_C.VerifyTakerAttack
struct AHuskPawn_C_VerifyTakerAttack_Params
{
	bool                                               SpecialAttack;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Swoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Soul_Suck;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Portal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.ResetTakerSpecialAttackTimer
struct AHuskPawn_C_ResetTakerSpecialAttackTimer_Params
{
	bool                                               Swoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SoulSuckMelee;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Portal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.BeginTakerSwoopAttack
struct AHuskPawn_C_BeginTakerSwoopAttack_Params
{
};

// Function HuskPawn.HuskPawn_C.EndTakerSwoopAttack
struct AHuskPawn_C_EndTakerSwoopAttack_Params
{
};

// Function HuskPawn.HuskPawn_C.TakerWallPortalBehavior
struct AHuskPawn_C_TakerWallPortalBehavior_Params
{
	class AActor*                                      BuildingPart;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UBTTask_BlueprintBase*                       Task;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DesiredMoveLocation;                                      // (Parm, IsPlainOldData)
	bool                                               Debug;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.IsTakerWallPortalAvailable
struct AHuskPawn_C_IsTakerWallPortalAvailable_Params
{
	bool                                               Portal_Available_;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.TakerAttackFSM
struct AHuskPawn_C_TakerAttackFSM_Params
{
	bool                                               SuccessfulHit;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.TakerSoulSuckSoundBegin
struct AHuskPawn_C_TakerSoulSuckSoundBegin_Params
{
	bool                                               Success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.TakerSoulSuckSoundEnd
struct AHuskPawn_C_TakerSoulSuckSoundEnd_Params
{
};

// Function HuskPawn.HuskPawn_C.PortalAdd
struct AHuskPawn_C_PortalAdd_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ABuildingActor*>                      BuildingActorList;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HuskPawn.HuskPawn_C.PortalClear
struct AHuskPawn_C_PortalClear_Params
{
};

// Function HuskPawn.HuskPawn_C.TakerSoulSuckInterrupted
struct AHuskPawn_C_TakerSoulSuckInterrupted_Params
{
};

// Function HuskPawn.HuskPawn_C.PortalGet
struct AHuskPawn_C_PortalGet_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ABuildingActor*>                      BuildingActorList;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      BT;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.PortalFX
struct AHuskPawn_C_PortalFX_Params
{
};

// Function HuskPawn.HuskPawn_C.PortalCollision
struct AHuskPawn_C_PortalCollision_Params
{
	bool                                               Collide_;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.GameplayCue.Impact.Physical.Creature
struct AHuskPawn_C_GameplayCue_Impact_Physical_Creature_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function HuskPawn.HuskPawn_C.GameplayCue.Shield.Reapplied
struct AHuskPawn_C_GameplayCue_Shield_Reapplied_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function HuskPawn.HuskPawn_C.GameplayCue.Shield.Destroyed
struct AHuskPawn_C_GameplayCue_Shield_Destroyed_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function HuskPawn.HuskPawn_C.GameplayCue.Damage.Shielded
struct AHuskPawn_C_GameplayCue_Damage_Shielded_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function HuskPawn.HuskPawn_C.ExecuteUbergraph_HuskPawn
struct AHuskPawn_C_ExecuteUbergraph_HuskPawn_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
