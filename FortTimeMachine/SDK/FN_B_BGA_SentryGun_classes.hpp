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

// BlueprintGeneratedClass B_BGA_SentryGun.B_BGA_SentryGun_C
// 0x012C (0x096C - 0x0840)
class AB_BGA_SentryGun_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0840(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            SightRadiusSphereComponent;                               // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    MuzzleFlashParticleComponent;                             // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SentryAmmoCounterMeshComponent;                           // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SentryGunMeshComponent;                                   // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SentryBaseMeshComponent;                                  // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           CollisionComponent;                                       // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    AmmoCounterMID;                                           // 0x0878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   AmmoCounterSourceMat;                                     // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GunMuzzleSocketName;                                      // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPawn*                                   TargetPawnToTrack;                                        // 0x0890(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetAcquisitionCheckTimer;                              // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x089C(0x0004) MISSED OFFSET
	struct FString                                     TargetAcquisitionFunctionName;                            // 0x08A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     FiringFunctionName;                                       // 0x08B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              FireTimer;                                                // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    InitialRelativeGunRotation;                               // 0x08C4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              GunInterpSpeed;                                           // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08D4(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TC_SentryFireAbility;                                     // 0x08D8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      TracerClass;                                              // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ImpactEffect;                                             // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RangeSquared;                                             // 0x0908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FiringDotProductThreshold;                                // 0x090C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DeathEffects;                                             // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxAmmoCount;                                             // 0x0918(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurAmmoCount;                                             // 0x091C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FName                                       AmmoCounterMatParamName;                                  // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDeployed;                                               // 0x0928(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0929(0x0003) MISSED OFFSET
	float                                              YawRotationLimit;                                         // 0x092C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchRotationLimit;                                       // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SightRadius;                                              // 0x0934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AFortPawn*>                           PotentialTargets;                                         // 0x0938(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              RotationClampMax;                                         // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x094C(0x0004) MISSED OFFSET
	class USoundBase*                                  DeploymentSound;                                          // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FiringSound;                                              // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Tracer_Scale;                                             // 0x0960(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_BGA_SentryGun.B_BGA_SentryGun_C");
		return ptr;
	}


	void UpdateAmmoCountMID();
	void TempOnPlaceStatBuff();
	void OnRep_IsDeployed();
	void Is_Pawn_Inside_Pitch_Limits(class AFortPawn* Pawn, bool* bInsidePitchLimits);
	void IsPawnInsideYawLimits(class AFortPawn* Pawn, bool* bInsideYawLimits);
	void IsValidTarget(class AFortPawn* PotentialTarget, bool bIncludeSimpleRangeCheck, bool bIncludeFiringLimitCheck, bool bIncludeObstructionCheck, bool* bValidTarget);
	void OnPotentialTargetUntouched(class AFortPawn* UntouchedPotentialTarget);
	void OnNewPotentialTargetTouched(class AFortPawn* PotentialTargetPawn);
	void CalcDesiredAngle(float InitialRelativeAngle, float CurrentRelativeAngle, float AngleOffset, float AngleClamp, float* DesiredAngle);
	void HasAmmo(bool* HasAmmo);
	void OnRep_CurAmmoCount();
	void ShouldFire(bool* ShouldFire);
	void ClearTargetAcquisitionTimer();
	void ClearFiringTimer();
	void SpawnImpactEffects(const struct FVector& HitLocation);
	void SpawnTracer(const struct FVector& HitLocation);
	void PerformGunRotation(class AActor* LookAtActor, float DeltaTime);
	void SetTargetAcquisitionTimer();
	void SetFiringTimer();
	void AttemptFire();
	void AttemptAcquireTarget();
	void SetTrackingTarget(class AFortPawn* PawnToTrack);
	struct FTransform GetTargetingSourceTransform(EFortAbilityTargetingSource* Source);
	void InitializeMIDs();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void GameplayCue_Impact_Physical(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ReceiveTick(float* DeltaSeconds);
	void GameplayCue_Abilities_Activation_Generic_SentryGun(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_275_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBuildingActorInitialized(TEnumAsByte<EFortBuildingInitializationReason>* InitializationReason, TEnumAsByte<EFortBuildingPersistentState>* BuildingPersistentState);
	void ExecuteUbergraph_B_BGA_SentryGun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
