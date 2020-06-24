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

// BlueprintGeneratedClass GAB_TakerMeleeStun.GAB_TakerMeleeStun_C
// 0x0038 (0x0A78 - 0x0A40)
class UGAB_TakerMeleeStun_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (Transient, DuplicateTransient)
	float                                              MoveStopRadius;                                           // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationRateWhenAttacking;                                // 0x0A4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ATakerPawn_C*                                TakerPawn;                                                // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFortMovementUrgency>                  DefaultMovementUrgency;                                   // 0x0A58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFortMovementUrgency>                  MovementUrgencyWhenAttacking;                             // 0x0A59(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyHitOnce;                                              // 0x0A5A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OnlyHitAbilityTarget;                                     // 0x0A5B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A5C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              HitActors;                                                // 0x0A60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UFortAbilityTask_MoveAI*                     MoveWhileAttacking;                                       // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_TakerMeleeStun.GAB_TakerMeleeStun_C");
		return ptr;
	}


	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void OnCancelled_513D85AB446CCC17A8F8AAA9835468D1();
	void OnInterrupted_513D85AB446CCC17A8F8AAA9835468D1();
	void OnComplete_513D85AB446CCC17A8F8AAA9835468D1();
	void Completed_CD3FAA114BAC3C495E2C9A8E0E5E4042(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_CD3FAA114BAC3C495E2C9A8E0E5E4042(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_CD3FAA114BAC3C495E2C9A8E0E5E4042(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void MoveTimerComplete();
	void ResetDoOnce();
	void K2_OnEndAbility();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_TakerMeleeStun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
