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

// BlueprintGeneratedClass Survivor.Survivor_C
// 0x0158 (0x1C48 - 0x1AF0)
class ASurvivor_C : public AFortAIPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1AF0(0x0008) (Transient, DuplicateTransient)
	class UFortMiniMapComponent*                       FortMiniMap;                                              // 0x1AF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            SpeechBubbleComponent;                                    // 0x1B00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               InteractBox;                                              // 0x1B08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_SurvivorAnchor_C*                        SurvivorAnchor;                                           // 0x1B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UClass*                                      SurvivorAnchorClass;                                      // 0x1B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       TC_DamageTagsServer;                                      // 0x1B20(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_MeleeDamage;                                           // 0x1B40(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_NPCStatusAOE;                                          // 0x1B60(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                TC_NPCStatusLockedInPlace;                                // 0x1B80(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_NPCBehaviorCower;                                      // 0x1B88(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Event_NPCAbilityNonAttackAvoidEnemy;                      // 0x1BA8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Event_NPCAbilityNonAttackCowerTrue;                       // 0x1BB0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Event_NPCAbilityNonAttackCowerFalse;                      // 0x1BB8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Event_NPCAbilityNonAttackRescueTrue;                      // 0x1BC0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Event_NPCAbilityNonAttackConversationOrScriptedAnimation; // 0x1BC8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_SurvivorLockedInPlace;                                 // 0x1BD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ScriptedAnimMontage;                                      // 0x1BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SpeechBubbleWidgetClass;                                  // 0x1BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bToggleInteractChannel;                                   // 0x1BE8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1BE9(0x0007) MISSED OFFSET
	class AFortGameStateZone*                          ZoneState;                                                // 0x1BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     SurvivorName;                                             // 0x1BF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ShowAnchorBoundsWhenTeleportingIn;                        // 0x1C08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1C09(0x0007) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            MeshMIDArray;                                             // 0x1C10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               MIDs_Initialized;                                         // 0x1C20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TeleportInWantsToHappen;                                  // 0x1C21(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TeleportOutWantsToHappen;                                 // 0x1C22(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x1C23(0x0005) MISSED OFFSET
	struct FText                                       LastSpeechText;                                           // 0x1C28(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                TeleportEffectModeReplicated;                             // 0x1C40(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TeleportEffectModeLocal;                                  // 0x1C44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Survivor.Survivor_C");
		return ptr;
	}


	void OnRep_TeleportEffectModeReplicated();
	void InitializeMIDs();
	void SetLastHitInfoOnBlackboard(TEnumAsByte<ESurvivorHitInfoType> SurvivorHitInfoType);
	void Set_Interact_Channel_Response(bool ShouldInteractChannelBeActive);
	void OnRep_bToggleInteractChannel();
	void UserConstructionScript();
	void OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void StopCowering();
	void StartCowering();
	void SurvivorSetLockedInPlace(bool LockedInPlace);
	void Lock();
	void Unlock();
	void OnDisplaySentence(struct FText* SpeechText);
	void OnClearSentence();
	void ReceiveBeginPlay();
	void OnSurvivorDowned(class AFortAIPawn* DownedAI, class AController* DownedInstigator);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void AdditiveHitReactDelay();
	void MIDsInitialized();
	void OnAppearanceOverridden();
	void PlayTeleportOut();
	void PlayTeleportIn();
	void GameplayCue_Teleport_In(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Teleport_Out(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_Survivor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
