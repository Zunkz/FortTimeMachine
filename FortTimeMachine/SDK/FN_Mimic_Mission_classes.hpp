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

// BlueprintGeneratedClass Mimic_Mission.Mimic_Mission_C
// 0x0159 (0x0831 - 0x06D8)
class AMimic_Mission_C : public AFortMission
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AHuskPawn_Mimic_C*                           MimicPawn;                                                // 0x06E8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              SavedMimicHealth;                                         // 0x06F0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06F4(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       KillMimicObjectiveHandle;                                 // 0x06F8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       DefeatMimicText;                                          // 0x0718(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       ChestInteractObjectiveHandle;                             // 0x0730(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AMimic_Chest_C*                              MimicChest;                                               // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       FindMimicText;                                            // 0x0758(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMissionWeightedReward                  ChosenReward;                                             // 0x0770(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       MimicHealthBarText;                                       // 0x0810(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortAIEncounterInfo*                        Encounter;                                                // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFortObjectiveStatus                               ObjectiveStatus;                                          // 0x0830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mimic_Mission.Mimic_Mission_C");
		return ptr;
	}


	void OnMimicSpawned(class AHuskPawn_Mimic_C* MimicPawn);
	void OnChestInteract();
	void HideFoundMimicText();
	void InitializeMimicChest(class AMimic_Chest_C* MimicChest, bool bWakeOnDamage);
	void TryGiveRewards();
	void RestartDormantChest();
	void InitMission();
	void UserConstructionScript();
	void HandleMissionEvent_MissionSucceeded(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_ObjectiveSucceeded(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_LocateSecondary(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void OnMimicDied_Event(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void OnEncounterEnemySpawned(class UFortAIEncounterInfo* Encounter, class AFortAIPawn* SpawnedEnemy);
	void OnInteractingPlayerDied_Event(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void OnMimicChestDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void BlueprintOnActivated();
	void Event_OnMimicDestroyed(class AActor* DestroyedActor);
	void ExecuteUbergraph_Mimic_Mission(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
