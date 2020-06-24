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

// BlueprintGeneratedClass Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C
// 0x00A8 (0x11D8 - 0x1130)
class ATrap_Floor_Defender_Master_C : public ABuildingTrapDefender
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1130(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x1138(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             SurvivorSpawnLocation;                                    // 0x1140(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x1148(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Placed_Sound;                                        // 0x1150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Active_Sound;                                        // 0x1158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Fire_Sound;                                          // 0x1160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Reload_Sound;                                        // 0x1168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Explode_Sound;                                       // 0x1170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFortWeaponItemDefinition*                   SurvivorWeaponData;                                       // 0x1178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                Event_NPCAbilityNonAttackTeleportIn;                      // 0x1180(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Event_NPCAbilityNonAttackTeleportOut;                     // 0x1188(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DefenderExistsWhenPlaced;                                 // 0x1190(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1191(0x0007) MISSED OFFSET
	class UClass*                                      DefenderWidgetClass;                                      // 0x1198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortAccountItem*                            DefenderItem;                                             // 0x11A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DefenderTrapClass;                                        // 0x11A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class UClass>                            DefenderWidgetClassRef;                                   // 0x11B0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortWorldItem*                              WeaponToGiveToDefender;                                   // 0x11D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C");
		return ptr;
	}


	struct FTransform GetDefenderSpawnTransform();
	void CanPlayerSpawnDefender(class AFortPlayerController** Player, class UFortItem** DefenderItem, bool* bCanSpawnDefender);
	void SetDefenderItemDefinition(class UFortItemDefinition* ItemDefinition);
	void SetDefenderPawn(class ADefender_C* NewDefender);
	struct FText BlueprintGetInteractionString(class AFortPawn** InteractingPawn);
	bool BlueprintCanInteract(class AFortPawn** InteractingPawn);
	bool BlueprintOnLocalInteract(class AFortPlayerPawn** InteractingPawn);
	void UserConstructionScript();
	void OnCanceled_1ED02ED748A4140AEF73B29EF46F9CF6();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29EF46F9CF6();
	void OnCanceled_1ED02ED748A4140AEF73B29E1E11A6C0();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E1E11A6C0();
	void OnLoaded_5FBB74204493DA1C442DF1A78BA2FBAC(class UClass* Loaded);
	void OnReloadEnd();
	void OnPlaced();
	void OnFinishedBuilding();
	void GameplayCue_Abilities_Activation_Traps_ReloadBegin(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnOutOfDurability();
	void SpawnDefender(class AFortPlayerController* RequestingFortPC, class AFortPlayerController* DefenderOwnerPC, const struct FName& DefenderSquadId, class UFortWorldItem* WeaponToGive, int AmmoQuantity);
	void ReceiveBeginPlay();
	void RemoveCurrentDefender(class AFortPlayerStateZone** RequestingPlayer, bool* bRemovalCausedByPlayerJoin);
	void ClearCurrentDefender(bool* bForceKillDefender);
	void DeployDefender(class AFortPlayerController** ItemSelectorPC, class UFortDefenderItem** InDefenderItem, struct FName* InDefenderSquadId, class UFortWorldItem** WeaponToGive, int* AmmoQuantity);
	void Clear_Current_Defender_BP();
	void OnEndPlay_Event_1(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void OnRep_DefenderPawn();
	void OnRep_DefenderItemDefinition();
	void OnQueryFinishedEvent_Event_1(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
	void ExecuteUbergraph_Trap_Floor_Defender_Master(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
