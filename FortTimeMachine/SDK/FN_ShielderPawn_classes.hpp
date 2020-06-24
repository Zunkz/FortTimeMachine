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

// BlueprintGeneratedClass ShielderPawn.ShielderPawn_C
// 0x0180 (0x1F98 - 0x1E18)
class AShielderPawn_C : public AEnemyPawn_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1E18(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            ShielderReAttachRange;                                    // 0x1E20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicsConstraintComponent*                 PhysicsConstraint;                                        // 0x1E28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotateShielder_LerpAlpha_F33B1BA94860E62F431B509EF30FFA64;// 0x1E30(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    RotateShielder__Direction_F33B1BA94860E62F431B509EF30FFA64;// 0x1E34(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1E35(0x0003) MISSED OFFSET
	class UTimelineComponent*                          RotateShielder;                                           // 0x1E38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpShielderToNewLocation_LerpAlpha_4C3E0C0B4BF05DD8DEA964BC480F2112;// 0x1E40(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    InterpShielderToNewLocation__Direction_4C3E0C0B4BF05DD8DEA964BC480F2112;// 0x1E44(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1E45(0x0003) MISSED OFFSET
	class UTimelineComponent*                          InterpShielderToNewLocation;                              // 0x1E48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Debug;                                                    // 0x1E50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AttemptingReAttach;                                       // 0x1E51(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShielderVisible;                                          // 0x1E52(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OrphanForceKill;                                          // 0x1E53(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Orphaned_1;                                               // 0x1E54(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1E55(0x0003) MISSED OFFSET
	float                                              GameTimeWhenOrphaned;                                     // 0x1E58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x1E5C(0x0004) MISSED OFFSET
	class AFortPawn*                                   AttachPawn;                                               // 0x1E60(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_ShielderShield;                                        // 0x1E68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPawn*                                   PotentialAttachPawn;                                      // 0x1E70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AFortPawn*>                           PotentialAttachPawns;                                     // 0x1E78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                      ShielderSpringArmClass;                                   // 0x1E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AShielderSpringArm_C*                        ShielderSpringArm;                                        // 0x1E90(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    SpringArmTargetRotation;                                  // 0x1E98(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x1EA4(0x0004) MISSED OFFSET
	struct FCurveTableRowHandle                        EnemyScalingSheet;                                        // 0x1EA8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    P_ShielderSphere;                                         // 0x1EB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCurveTableRowHandle                        NPCMiscCurvesSheet;                                       // 0x1EC0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              OrphanTimeBeforeReAttachByEncounter;                      // 0x1ED0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OrphanTimeBeforeReAttachByProximity;                      // 0x1ED4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OrphanTimeBeforceForceKill;                               // 0x1ED8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTimeToReAttachByEncounter;                             // 0x1EDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShielderVisibilityDelayWhenAttachingToSpawningPawn;       // 0x1EE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x1EE4(0x0004) MISSED OFFSET
	struct FGameplayTag                                TC_NPCStatusWearingShielder;                              // 0x1EE8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                TC_NPCAbilityNonAttackTeleportOut;                        // 0x1EF0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                TC_NPCAbilityNonAttackTeleportIn;                         // 0x1EF8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                TC_NPCAbilityNonAttackSummon;                             // 0x1F00(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                TC_NPCAbilityNonAttackDropNPC;                            // 0x1F08(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              SpringArmRotationTimeMin;                                 // 0x1F10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpringArmRotationTimeMax;                                 // 0x1F14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OrphanDetachZVelocity;                                    // 0x1F18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x1F1C(0x0004) MISSED OFFSET
	struct FFortAbilitySetHandle                       ShielderAttachPawnAbilitySet;                             // 0x1F20(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GameplayCueShieldReapplied;                               // 0x1F48(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GameplayCueShieldDestroyed;                               // 0x1F50(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  Sound_ShieldStart;                                        // 0x1F58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_ShieldBroken;                                       // 0x1F60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_ShieldStart_NoLoop;                                 // 0x1F68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShieldApplied;                                           // 0x1F70(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x1F71(0x0007) MISSED OFFSET
	struct FGameplayTag                                TC_HuskSmasher;                                           // 0x1F78(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                TC_HuskTaker;                                             // 0x1F80(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_HideOnMiniMap;                                         // 0x1F88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             Sound_ShieldStart_Spawned;                                // 0x1F90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShielderPawn.ShielderPawn_C");
		return ptr;
	}


	void Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn);
	void SetMiniMapIconStatus();
	void OnRep_bShieldApplied();
	void UpdateShieldFXVisibility();
	void ApplyShield();
	void GameTimeString(struct FString* NewParam);
	void OnRep_ShielderSpringArm();
	void DebugLineAndSphere(bool Line, const struct FLinearColor& LineColor, bool Sphere, const struct FLinearColor& SphereColor, float VisibilityOffset);
	void OnRep_ShielderVisible();
	void AttachShielderToSpringArm();
	void AttachSpringArmToAttachPawn();
	void OnRep_SpringArmTargetRotation();
	void UserConstructionScript();
	void InterpShielderToNewLocation__FinishedFunc();
	void InterpShielderToNewLocation__UpdateFunc();
	void RotateShielder__FinishedFunc();
	void RotateShielder__UpdateFunc();
	void OnStunned();
	void OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void OnKnockedback();
	void ReceiveBeginPlay();
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void ShielderAttachComplete();
	void OnEncounterEnemySpawned(class UFortAIEncounterInfo* Encounter, class AFortAIPawn* SpawnedEnemy);
	void SetShielderOrphanStatus(bool Orphaned, bool GiveZVelocityOnDetach, const struct FString& Reason);
	void OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void VerifyPotentialAttachPawnIsValidAndAttachToIt(class AFortPawn* PotentialAttachPawn, bool HiddenAttach);
	void GrabRandomPotentialAttachPawn(bool HiddenAttach);
	void AttachShielderToPotentialAttachPawn();
	void BindEncounterSpawn();
	void ReApplyShield();
	void UnBindEncounterSpawn();
	void OnComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ShielderShieldBroken();
	void AnimateSpringArm();
	void AttachPawnDead(bool Despawn);
	void OrphanForceKillTimer();
	void BindProxOverlap();
	void UnBindProxOverlap();
	void InterpShielderToSpringArm();
	void RotateShielderForward();
	void AdditiveHitReactDelay();
	void InvisibleOrphanTick();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_ShielderPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
