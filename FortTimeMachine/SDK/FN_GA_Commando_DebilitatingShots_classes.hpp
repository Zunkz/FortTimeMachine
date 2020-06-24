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

// BlueprintGeneratedClass GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C
// 0x014E (0x0C58 - 0x0B0A)
class UGA_Commando_DebilitatingShots_C : public UGAT_CommandoTriggeredAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0B0A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B10(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                TC_IsGun;                                                 // 0x0B18(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventActivation;                                          // 0x0B20(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_DebilitatingShots;                                     // 0x0B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EventComplete;                                            // 0x0B30(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventDirectTrigger;                                       // 0x0B38(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                StackCount;                                               // 0x0B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefaultStackCount;                                        // 0x0B44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PerfectEngineeringStack;                                  // 0x0B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B4C(0x0004) MISSED OFFSET
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // 0x0B50(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_LingeringPain;                                         // 0x0B70(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_DebilitationTraining;                                  // 0x0B90(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_Kneecapper;                                            // 0x0BB0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_HackStackBreaker;                                      // 0x0BD0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_LingeringPain;                                         // 0x0BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebuffValue;                                              // 0x0BF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultValue;                                             // 0x0BFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KneecapperValue;                                          // 0x0C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebuffDuration;                                           // 0x0C04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_DebilitationTraining_FatigueInstant;                   // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_IsAfflicted;                                           // 0x0C10(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPawn*                                   HitTargetPawn;                                            // 0x0C30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_DebilitationTraining_FatigueDuration;                  // 0x0C38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Kneecapper;                                               // 0x0C40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebilitationTraining;                                     // 0x0C41(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LingeringPain;                                            // 0x0C42(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0C43(0x0001) MISSED OFFSET
	int                                                MaxStacks;                                                // 0x0C44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LingeringPainStacks;                                      // 0x0C48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefaultStacks;                                            // 0x0C4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PS;                                                       // 0x0C50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C");
		return ptr;
	}


	void SetupAbility(class UAbilitySystemComponent* AbilitySystem);
	void SetupDebilitationTraining(struct FGameplayEffectSpecHandle* EffectspecOutInstant, struct FGameplayEffectSpecHandle* EffectspecOutDuration);
	void SetupAppliedEffect(float Magnitude, float Duration, int Stack_Count, const struct FGameplayEffectSpecHandle& EffectSpecHandle, struct FGameplayEffectSpecHandle* EffectspecHandleOut);
	void SetupGameplayEffect(const struct FGameplayTag& EventTag, class AActor* HitActor, class UObject* OptionalObject, struct FGameplayAbilityTargetDataHandle* Target_Data, class UClass** DebilitatingShots, int* Effect_Level, int* Stack_Count);
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayEventData* Payload);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GA_Commando_DebilitatingShots(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
