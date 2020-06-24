#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HuskPawn.HuskPawn_C
// 0x01A0 (0x1FB8 - 0x1E18)
class AHuskPawn_C : public AEnemyPawn_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1E18(0x0008) (Transient, DuplicateTransient)
	int                                                HitCount;                                                 // 0x1E20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastTakeHitTime;                                          // 0x1E24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PushFromFlingerSpawn;                                     // 0x1E28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1E29(0x0007) MISSED OFFSET
	class AFortPawn*                                   FlingerThatSpawnedMe;                                     // 0x1E30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FVector                                     FlingerThatSpawnedMeLocation;                             // 0x1E38(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1E44(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TC_HitReactionAdditiveSingleOneShot;                      // 0x1E48(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_HitReactionAdditiveLoop;                               // 0x1E68(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_HitReactionFullBody;                                   // 0x1E88(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_HitReactionBlockAll;                                   // 0x1EA8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_HitReactionBlockMelee;                                 // 0x1EC8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_HitReactionBlockRanged;                                // 0x1EE8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HitReactForMelee;                                         // 0x1F08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HuskIsInFlingersHand;                                     // 0x1F09(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HuskIsAirborne;                                           // 0x1F0A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x1F0B(0x0001) MISSED OFFSET
	struct FVector                                     HuskFlingerHandOffset;                                    // 0x1F0C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    HuskFlingerHandRotation;                                  // 0x1F18(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     HuskFlingerProjectileOffset;                              // 0x1F24(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    HuskFlingerProjectileRotation;                            // 0x1F30(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x1F3C(0x0004) MISSED OFFSET
	class UParticleSystem*                             ImpactParticles_Default;                                  // 0x1F40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ImpactParticles_HumanFlesh;                               // 0x1F48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ImpactParticles_Wood;                                     // 0x1F50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ImpactParticles_Stone;                                    // 0x1F58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ImpactParticles_Metal;                                    // 0x1F60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MeleeImpact_UseSocketTransforms;                          // 0x1F68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x1F69(0x0007) MISSED OFFSET
	struct FName                                       Impact_MeleeSocket;                                       // 0x1F70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsHeadshot_HideHead;                                      // 0x1F78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x1F79(0x0003) MISSED OFFSET
	float                                              PreviousLargestDeathRadius;                               // 0x1F7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Death_Normal_Sound;                                       // 0x1F80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Death_RedLaser_Sound;                                     // 0x1F88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Spawn_Dust_Particles;                                     // 0x1F90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SafetyTimerDuration;                                      // 0x1F98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DeathFX_HQ;                                               // 0x1F9C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x1F9D(0x0003) MISSED OFFSET
	class USkeletalMeshComponent*                      ShieldSkeletalMesh;                                       // 0x1FA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AShielderSpringArm_C*                        ShieldArm;                                                // 0x1FA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    Diffuse_Texture;                                          // 0x1FB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HuskPawn.HuskPawn_C");
		return ptr;
	}


	void UserConstructionScript();
	void FlingerSpawnedAnEnemy(class AFortAIPawn* EnemySpawned, class AFortProjectileBase* ProjectileThatSpawnedThisEnemy);
	void CanFlingerSpawnAnEnemy(class AActor* ActorWhoAsked);
	void FlingerCanSpawnAnEnemy();
	void FlingerCan_tSpawnAnEnemy();
	void FlingerThrewAProjectileContainingAnEnemy(class AFortProjectileBase* Projectile);
	void FlingerEnemyFailedToSpawn(class AFortProjectileBase* FailedProjectile);
	void AlertEnemySpawnedByFlinger(const struct FVector& PushMomentum, float PushDuration, class APawn* OwningFlinger);
	void FlingerEnemyDied(class APawn* PawnThatDied);
	void MantleStart(const struct FVector& StartPos, const struct FVector& MidPos, const struct FVector& EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall);
	void MantleEnd();
	void HuskEvadeStart();
	void VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal);
	void ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal);
	void BeginTakerSwoopAttack();
	void EndTakerSwoopAttack();
	void TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, const struct FVector& DesiredMoveLocation, bool Debug);
	void IsTakerWallPortalAvailable(bool Portal_Available_);
	void TakerAttackFSM(bool SuccessfulHit);
	void TakerSoulSuckSoundBegin(bool Success);
	void TakerSoulSuckSoundEnd();
	void PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>* BuildingActorList);
	void PortalClear();
	void TakerSoulSuckInterrupted();
	void PortalGet(class ABuildingActor* BuildingActor, class AActor* BT, TArray<class ABuildingActor*>* BuildingActorList);
	void PortalFX();
	void PortalCollision(bool Collide_);
	void GameplayCue_Impact_Physical_Creature(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_Reapplied(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_Destroyed(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Damage_Shielded(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_HuskPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
