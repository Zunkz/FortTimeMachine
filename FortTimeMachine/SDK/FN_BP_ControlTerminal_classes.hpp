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

// BlueprintGeneratedClass BP_ControlTerminal.BP_ControlTerminal_C
// 0x00F1 (0x10C1 - 0x0FD0)
class ABP_ControlTerminal_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FD0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Atlas_KlaxonLights_RocketTower3;                       // 0x0FD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Atlas_KlaxonLights_RocketTower2;                       // 0x0FE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Atlas_KlaxonLights_RocketTower1;                       // 0x0FE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        KlaxonLights;                                             // 0x0FF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFortMiniMapComponent*                       FortMiniMap;                                              // 0x0FF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x1000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_BluGlo_CollectParticles_02;                             // 0x1008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        S_Mission_Missle_Deposit;                                 // 0x1010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_ArrowInteraction;                                       // 0x1018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             TeleportPad_Activate01_Cue;                               // 0x1020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             rocket_powerup_alarm_audiocomponent;                      // 0x1028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_SmoothStep_863CCB8E4266516882D3DD90FDE36115;   // 0x1030(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_863CCB8E4266516882D3DD90FDE36115;   // 0x1034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1035(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x1038(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              rotate_rotate_633FFA194E2182A576CFAE823EADFABD;           // 0x1040(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    rotate__Direction_633FFA194E2182A576CFAE823EADFABD;       // 0x1044(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1045(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Rotate;                                                   // 0x1048(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanPlayerInteract;                                        // 0x1050(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InteractEffects;                                          // 0x1051(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x1052(0x0006) MISSED OFFSET
	class UAudioComponent*                             PlayAttentionSoundRef;                                    // 0x1058(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             PlayStartupSoundRef;                                      // 0x1060(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       UseText;                                                  // 0x1068(0x0018) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FLinearColor                                PrevCol;                                                  // 0x1080(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                NextCol;                                                  // 0x1090(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              PrevRotateSpeed;                                          // 0x10A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NextRotateSpeed;                                          // 0x10A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PrevBarProgress;                                          // 0x10A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NextBarProgress;                                          // 0x10AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MonitorMat;                                               // 0x10B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PrevMonitorOn;                                            // 0x10B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NextMonitorOn;                                            // 0x10BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Stage2Active;                                             // 0x10C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ControlTerminal.BP_ControlTerminal_C");
		return ptr;
	}


	void OnRep_InteractEffects();
	struct FText BlueprintGetInteractionString(class AFortPawn** InteractingPawn);
	bool BlueprintCanInteract(class AFortPawn** InteractingPawn);
	void UserConstructionScript();
	void Rotate__FinishedFunc();
	void Rotate__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void HandleMissionEvent_OBJ_8_Activate(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void BlueprintOnInteract(class AFortPawn** InteractingPawn);
	void loopsound();
	void PlayAlarm();
	void HandleMissionEvent_OBJ_10_Activate(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void PlayStartupSound();
	void PlayAttentionSound();
	void OnMatchStarted();
	void HandleMissionEvent_RocketHasBluglo(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_OBJ_22_Activate(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void BlugloSpin();
	void HandleMissionEvent_PlayerInsideFort(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void LerpMonitors(const struct FLinearColor& NewCol, float RotateSpeed, float BarProgress, float MonitorOn, const struct FLinearColor& BackgroundCol, const struct FLinearColor& OutlineCol, const struct FLinearColor& BarCol);
	void SetMonitorStage1();
	void SetMonitorStage2();
	void ExecuteUbergraph_BP_ControlTerminal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
