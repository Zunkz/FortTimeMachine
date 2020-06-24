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

// BlueprintGeneratedClass GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C
// 0x0089 (0x0AC9 - 0x0A40)
class UGAB_TakerSwoopMelee_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (Transient, DuplicateTransient)
	bool                                               Debug;                                                    // 0x0A48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A49(0x0007) MISSED OFFSET
	class ATakerPawn_C*                                Taker;                                                    // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationRateWhenSwooping;                                 // 0x0A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0A5C(0x0004) MISSED OFFSET
	struct FGameplayTag                                TC_NPCAbilityAttackMeleeSwoop;                            // 0x0A60(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                SwoopTransitionMontage;                                   // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SwoopAttackEndMontage;                                    // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwoopTimeout;                                             // 0x0A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwoopMoveAcceptRadius;                                    // 0x0A7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsHitThisTargetSelection;                             // 0x0A80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               AbilityEnded;                                             // 0x0A90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0A91(0x0007) MISSED OFFSET
	TArray<class AActor*>                              ActorsHitThisSwoop;                                       // 0x0A98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              ActorsHitThisTargetSelectionFiltered;                     // 0x0AA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               MovingSlowly;                                             // 0x0AB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0AB9(0x0007) MISSED OFFSET
	class UFortAbilityTask_MoveAI*                     SwoopMove;                                                // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MeleeInProgress;                                          // 0x0AC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C");
		return ptr;
	}


	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void OnCancelled_A8D9EDC44514CE30149C4C924AB5FB2A();
	void OnInterrupted_A8D9EDC44514CE30149C4C924AB5FB2A();
	void OnComplete_A8D9EDC44514CE30149C4C924AB5FB2A();
	void Completed_90CCC07C4CF88E3BB6C7268A426DBA5F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_90CCC07C4CF88E3BB6C7268A426DBA5F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_90CCC07C4CF88E3BB6C7268A426DBA5F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_DE47BE5C495BECAF17E854B5C7774E8D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_DE47BE5C495BECAF17E854B5C7774E8D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnCancelled_A05A301D40A4F2A62FAD9A94D3EB7A15();
	void OnInterrupted_A05A301D40A4F2A62FAD9A94D3EB7A15();
	void OnBlendOut_A05A301D40A4F2A62FAD9A94D3EB7A15();
	void OnCompleted_A05A301D40A4F2A62FAD9A94D3EB7A15();
	void K2_ActivateAbility();
	void Taker_Overlapped_An_Actor(class AActor* OverlappedActor, class AActor* OtherActor);
	void BeginOutroDeceleration();
	void SwoopTimeoutComplete();
	void K2_OnEndAbility();
	void SlowSpeedCancel();
	void ExecuteUbergraph_GAB_TakerSwoopMelee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
