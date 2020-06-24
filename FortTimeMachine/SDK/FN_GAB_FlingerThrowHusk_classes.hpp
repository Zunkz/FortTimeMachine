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

// BlueprintGeneratedClass GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C
// 0x0028 (0x0A68 - 0x0A40)
class UGAB_FlingerThrowHusk_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (Transient, DuplicateTransient)
	class AFlingerPawn_C*                              FlingerPawn;                                              // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AHuskPawn_C*                                 HuskHeldByFlinger;                                        // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                GC_FlingerGrabNPC;                                        // 0x0A58(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GC_NPCRangedThrow;                                        // 0x0A60(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C");
		return ptr;
	}


	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void Completed_B56594C44CE933A96A3E13BDCFC1097D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_B56594C44CE933A96A3E13BDCFC1097D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_B56594C44CE933A96A3E13BDCFC1097D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_OnEndAbility();
	void K2_ActivateAbility();
	void CommitAndEndAbility();
	void SpawnFX();
	void StopFX();
	void OnEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void BindOnEndPlay(class AHuskPawn_C* Pawn);
	void UnbindOnEndPlay(class AHuskPawn_C* Pawn);
	void ExecuteUbergraph_GAB_FlingerThrowHusk(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
