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

// BlueprintGeneratedClass GAB_SmasherCharge.GAB_SmasherCharge_C
// 0x01B8 (0x0BF8 - 0x0A40)
class UGAB_SmasherCharge_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (Transient, DuplicateTransient)
	class ASmasherPawn_C*                              SmasherPawn;                                              // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      BumpedActor;                                              // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BumpedActorNormal;                                        // 0x0A58(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BumpedActorImpactPoint;                                   // 0x0A64(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              BumpedActorImpactBufferHeight;                            // 0x0A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BumpedActorSmasherVelocity;                               // 0x0A74(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              BumpedActorExceptionZNormalThreshold;                     // 0x0A80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug;                                                    // 0x0A84(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ChargingSpeedReached;                                     // 0x0A85(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LastCheckWasSlow;                                         // 0x0A86(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SmasherFaceplanted;                                       // 0x0A87(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WaitingForMeleeSwingTargetSelection;                      // 0x0A88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WaitingForChargeDamageTargetSelection;                    // 0x0A89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ChargeDamageTargetSelectionDamagedSomething;              // 0x0A8A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AbilityShouldEndASAP;                                     // 0x0A8B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AbilityEndingNow;                                         // 0x0A8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0A8D(0x0003) MISSED OFFSET
	TArray<class AActor*>                              ActorsDamagedBySmasherCharge;                             // 0x0A90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                      GE_SmasherReachedChargeSpeed;                             // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_SmasherFaceplant;                                      // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EC_NPCAbilityAttackMeleeCharge;                           // 0x0AB0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MinYawAngleToLaunchPawnsFromSmasherCharge;                // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchAngleToLaunchPawnsFromSmasherCharge;                 // 0x0ABC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmasherChargeLaunchPawnVelocity;                          // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargeTimeoutTime;                                        // 0x0AC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              CachedArrayOfHitActors;                                   // 0x0AC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bTryingToPlayMeleeSwing;                                  // 0x0AD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCancelledMontage;                                        // 0x0AD9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0ADA(0x0002) MISSED OFFSET
	float                                              SmasherChargeRotationRate;                                // 0x0ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      PreviouslyBumpedActor;                                    // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      LastDamagedActor;                                         // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ChargeMovementReachedGoalActor;                           // 0x0AF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ChargeHitGoalActor;                                       // 0x0AF1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0AF2(0x0002) MISSED OFFSET
	float                                              FaceplantCheckTime;                                       // 0x0AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastCheckWasSlowTime;                                     // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmasherFaceplantedTime;                                   // 0x0AFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_NPCBehaviorProhibitsAbilityAttackMeleeBump;            // 0x0B00(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_NPCBehaviorProbibitsAbilityAttackAny;                  // 0x0B20(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GC_GameplayCueNPCSmasherCharge;                           // 0x0B40(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortFeedbackHandle                         SmasherChargingFeedback;                                  // 0x0B48(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_NPCBehaviorDBNO;                                       // 0x0B60(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_GameplayStatusDBNO;                                    // 0x0B80(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      FaceplantActorIAmStandingOn;                              // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UFortAbilityTask_MoveAI*                     ChargeMoveLocation;                                       // 0x0BA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortAbilityTask_MoveAI*                     ChargeMove;                                               // 0x0BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_ConstructorBullrushing;                                // 0x0BB8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              OverlappingFortPawns;                                     // 0x0BD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              OverlappingBuildingActors;                                // 0x0BE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SmasherCharge.GAB_SmasherCharge_C");
		return ptr;
	}


	void EnableHotspots(bool Enable);
	void DamageThisActor(class AActor* Actor);
	void Slow_Speed_Faceplant_Check(bool* Standing_On_Bumped_Actor_We_Previously_Ignored);
	void UpdateChargingSpeedReached();
	void InitializeAbility();
	void Completed_0B8569504C1E876E723C499B4462A584(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_0B8569504C1E876E723C499B4462A584(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_0B8569504C1E876E723C499B4462A584(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnCancelled_2B1380284EE36AB4C4A04DBDFF3C24C9();
	void OnInterrupted_2B1380284EE36AB4C4A04DBDFF3C24C9();
	void OnComplete_2B1380284EE36AB4C4A04DBDFF3C24C9();
	void OnCancelled_1048ADC34DB8C17033C4B9A1C116D220();
	void OnInterrupted_1048ADC34DB8C17033C4B9A1C116D220();
	void OnComplete_1048ADC34DB8C17033C4B9A1C116D220();
	void Cancelled_9066C547446CB68FD5A3D5BB83B00491(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_9066C547446CB68FD5A3D5BB83B00491(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_26E7DFC34C3008718C4C46A45D67C637(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_26E7DFC34C3008718C4C46A45D67C637(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_C216669A4D935722E29A339C9C0ADB50(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_C216669A4D935722E29A339C9C0ADB50(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_C216669A4D935722E29A339C9C0ADB50(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void EventReceived_51CE074748CA749955FE2CA61620188A(const struct FGameplayEventData& Payload);
	void MoveToLoop();
	void K2_ActivateAbility();
	void SmasherBumpsSomething(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void K2_OnEndAbility();
	void ChargeTimeOut();
	void AttemptEndAbility(const struct FString& From);
	void StopLoopingOverList();
	void EnableCrushBox();
	void DisableCrushBox();
	void CrushBoxOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void EnableSmasherBump();
	void DisableSmasherBump();
	void MeleeSwingComplete();
	void MeleeSwingBoxOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void AttemptToFindActorsToMeleeSwingAt();
	void AttemptChargeDamage();
	void Faceplant();
	void FaceplantCheck();
	void ChargeSpeedCheck();
	void CheckForActorsThatShouldBeDamagedWhenChargeBegins();
	void Attempt_to_Melee_Swing_And_Deal_Charge_Damage(const struct FString& CallerDebugString);
	void ExecuteUbergraph_GAB_SmasherCharge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
