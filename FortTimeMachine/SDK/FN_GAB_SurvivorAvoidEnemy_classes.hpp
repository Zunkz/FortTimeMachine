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

// BlueprintGeneratedClass GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C
// 0x0094 (0x0AD4 - 0x0A40)
class UGAB_SurvivorAvoidEnemy_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (Transient, DuplicateTransient)
	bool                                               Debug;                                                    // 0x0A48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AbilityEnding;                                            // 0x0A49(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0A4A(0x0006) MISSED OFFSET
	class UEnvQuery*                                   EQS_AvoidEnemy;                                           // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ASurvivor_C*                                 SurvivorPawn;                                             // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFortMovementUrgency>                  MovementUrgencyWhenAvoiding;                              // 0x0A60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortMovementUrgency>                  InitialMovementUrgency;                                   // 0x0A61(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0A62(0x0002) MISSED OFFSET
	struct FVector                                     AvoidLocation;                                            // 0x0A64(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             EQSResults;                                               // 0x0A70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FFortFeedbackHandle                         FeedbackEvent_Help;                                       // 0x0A80(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              HelpAnimationCooldown;                                    // 0x0A98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HelpAnimationMinRange;                                    // 0x0A9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HelpAnimationLastTimePlayed;                              // 0x0AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SurvivorIsArmed;                                          // 0x0AA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSurvivorInsideOfAnchorBounds;                           // 0x0AA5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0AA6(0x0002) MISSED OFFSET
	struct FName                                       Name_HelpMeAttacked;                                      // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OverwhelmedSpeechDelay;                                   // 0x0AB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldTriggerOverwhelmedSpeech;                          // 0x0AB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0AB5(0x0003) MISSED OFFSET
	class UFortAbilityTask_MoveAI*                     AvoidMove;                                                // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                UpdateFocalPointHandle;                                   // 0x0AC0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      CurrentFocusTarget;                                       // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LostFocusStartTime;                                       // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C");
		return ptr;
	}


	void OnCancelled_6FCA0F06404AB0DEE9586D8157793BFD();
	void OnInterrupted_6FCA0F06404AB0DEE9586D8157793BFD();
	void OnComplete_6FCA0F06404AB0DEE9586D8157793BFD();
	void Completed_F461FD4E44811E3F3E4AFD81EB1A0127(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_F461FD4E44811E3F3E4AFD81EB1A0127(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_F461FD4E44811E3F3E4AFD81EB1A0127(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void StartAvoidMove();
	void TriggerHelpSpeech();
	void TriggerOverwhelmedSpeech();
	void UpdateFocalPoint();
	void OnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
	void K2_OnEndAbility();
	void ExecuteUbergraph_GAB_SurvivorAvoidEnemy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
