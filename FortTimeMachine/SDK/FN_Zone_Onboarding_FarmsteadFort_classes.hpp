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

// BlueprintGeneratedClass Zone_Onboarding_FarmsteadFort.Zone_Onboarding_FarmsteadFort_C
// 0x0228 (0x05C8 - 0x03A0)
class AZone_Onboarding_FarmsteadFort_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (Transient, DuplicateTransient)
	float                                              Timeline_0_NewTrack_0_8BBB914846D85AB50746C0B699C00F61;   // 0x03A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_8BBB914846D85AB50746C0B699C00F61;   // 0x03AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FadeInHold;                                               // 0x03B8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FadeOutHold;                                              // 0x03B9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03BA(0x0006) MISSED OFFSET
	class USoundBase*                                  Lightning_Sound;                                          // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AEmitter*                                    p_lightning_scripted1_ExecuteUbergraph_Zone_Onboarding_FarmsteadFort_RefProperty;// 0x03C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOB_Tree_Special_02_C*                       OB_Tree_Special_02_C_0_ExecuteUbergraph_Zone_Onboarding_FarmsteadFort_RefProperty;// 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AEmitter*                                    p_lightning_scripted3_6_ExecuteUbergraph_Zone_Onboarding_FarmsteadFort_RefProperty;// 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AEmitter*                                    p_lightning_scripted2_ExecuteUbergraph_Zone_Onboarding_FarmsteadFort_RefProperty;// 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AEmitter*                                    p_lightning_scripted5_ExecuteUbergraph_Zone_Onboarding_FarmsteadFort_RefProperty;// 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AEmitter*                                    p_lightning_scripted7_ExecuteUbergraph_Zone_Onboarding_FarmsteadFort_RefProperty;// 0x03F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               MatineeActor_LightningPit_ExecuteUbergraph_Zone_Onboarding_FarmsteadFort_RefProperty;// 0x03F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAmbientSound*                               WWDC_IntroLightningStrike_Quieter_Cue2_ExecuteUbergraph_Zone_Onboarding_FarmsteadFort_RefProperty;// 0x0400(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_W2_BalconyO_C*                         PBWA_W1_BalconyO3_EdGraph_6_RefProperty;                  // 0x0408(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S1_QuarterWallS_C*                     PBWA_S3_HalfWallS_2_EdGraph_6_RefProperty;                // 0x0410(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S1_QuarterWallS_C*                     PBWA_S3_QuarterWallS21_EdGraph_6_RefProperty;             // 0x0418(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S1_QuarterWallS_C*                     PBWA_S3_HalfWallS2_5_EdGraph_6_RefProperty;               // 0x0420(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S1_Archway_C*                          PBWA_M2_Windows119_1_EdGraph_6_RefProperty;               // 0x0428(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_W2_BalconyS_C*                         PBWA_W1_BalconyS_2_EdGraph_6_RefProperty;                 // 0x0430(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_W2_Floor_C*                            PBWA_W1_Floor_2_EdGraph_6_RefProperty;                    // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_W2_BalconyS_C*                         PBWA_W1_BalconyS2_EdGraph_6_RefProperty;                  // 0x0440(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S1_QuarterWallS_C*                     PBWA_S3_QuarterWallS20_6_EdGraph_6_RefProperty;           // 0x0448(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S1_Archway_C*                          PBWA_M2_Windows124_EdGraph_6_RefProperty;                 // 0x0450(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S1_Archway_C*                          PBWA_M2_Windows118_EdGraph_6_RefProperty;                 // 0x0458(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S1_Archway_C*                          PBWA_M2_Windows125_EdGraph_6_RefProperty;                 // 0x0460(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_W2_Archway_C*                          PBWA_W2_Archway2_EdGraph_6_RefProperty;                   // 0x0468(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOnboarding_PBWA_W2_Floor_C*                 PBWA_M2_Floor21_EdGraph_6_RefProperty;                    // 0x0470(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_W2_BalconyO_C*                         PBWA_W1_BalconyO_2_EdGraph_6_RefProperty;                 // 0x0478(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOnboarding_PBWA_S1_Archway_C*               PBWA_W1_Archway2_EdGraph_6_RefProperty;                   // 0x0480(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S1_StairT_C*                           PBWA_W1_StairT_EdGraph_6_RefProperty;                     // 0x0488(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S1_WindowsSide_C*                      PBWA_W1_Archway_EdGraph_6_RefProperty;                    // 0x0490(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_W2_Archway_C*                          PBWA_W2_Archway_2_EdGraph_6_RefProperty;                  // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOnboarding_PBWA_S1_QuarterWallS_C*          PBWA_S2_QuarterWallS52_EdGraph_6_RefProperty;             // 0x04A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOnboarding_PBWA_S1_QuarterWallS_C*          PBWA_S2_QuarterWallS53_EdGraph_6_RefProperty;             // 0x04A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_W2_ArchwaySupport_C*                   PBWA_W1_ArchwayLargeSupport2_EdGraph_6_RefProperty;       // 0x04B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S2_Floor_C*                            PBWA_S2_Floor_2_EdGraph_7_RefProperty;                    // 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ALayoutBuildRequirement_C*                   LayoutBuildRequirement7_EdGraph_7_RefProperty;            // 0x04C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S2_Floor_C*                            PBWA_S2_Floor2_EdGraph_7_RefProperty;                     // 0x04C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ALayoutBuildRequirement_C*                   LayoutBuildRequirement6_EdGraph_7_RefProperty;            // 0x04D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S2_Floor_C*                            PBWA_S2_Floor3_EdGraph_7_RefProperty;                     // 0x04D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ALayoutBuildRequirement_C*                   LayoutBuildRequirement5_EdGraph_7_RefProperty;            // 0x04E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S2_Floor_C*                            PBWA_S2_Floor4_EdGraph_7_RefProperty;                     // 0x04E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ALayoutBuildRequirement_C*                   LayoutBuildRequirement4_EdGraph_7_RefProperty;            // 0x04F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S2_Floor_C*                            PBWA_S2_Floor5_EdGraph_7_RefProperty;                     // 0x04F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ALayoutBuildRequirement_C*                   LayoutBuildRequirement3_EdGraph_7_RefProperty;            // 0x0500(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S2_Floor_C*                            PBWA_S2_Floor6_EdGraph_7_RefProperty;                     // 0x0508(0x0008) (ZeroConstructor, IsPlainOldData)
	class ALayoutBuildRequirement_C*                   LayoutBuildRequirement2_EdGraph_7_RefProperty;            // 0x0510(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S2_Floor_C*                            PBWA_S2_Floor7_EdGraph_7_RefProperty;                     // 0x0518(0x0008) (ZeroConstructor, IsPlainOldData)
	class ALayoutBuildRequirement_C*                   LayoutBuildRequirement_2_EdGraph_7_RefProperty;           // 0x0520(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_W2_QuarterWallHalf_C*                  PBWA_S3_QuarterWallHalf29_EdGraph_8_RefProperty;          // 0x0528(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_W2_BalconyS_C*                         PBWA_S1_Floor28_EdGraph_8_RefProperty;                    // 0x0530(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S1_QuarterWallS_C*                     PBWA_S3_QuarterWallS22_EdGraph_8_RefProperty;             // 0x0538(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S1_QuarterWallS_C*                     PBWA_S3_HalfWallS3_EdGraph_8_RefProperty;                 // 0x0540(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S1_QuarterWallS_C*                     PBWA_S3_HalfWallS4_EdGraph_8_RefProperty;                 // 0x0548(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S1_QuarterWallS_C*                     PBWA_S3_QuarterWallS23_EdGraph_8_RefProperty;             // 0x0550(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S1_Archway_C*                          PBWA_M2_Windows121_3_EdGraph_8_RefProperty;               // 0x0558(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_W2_BalconyO_C*                         PBWA_W1_BalconyO4_EdGraph_8_RefProperty;                  // 0x0560(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_W2_BalconyO_C*                         PBWA_W1_BalconyO2_EdGraph_8_RefProperty;                  // 0x0568(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S1_Archway_C*                          PBWA_M2_Windows123_EdGraph_8_RefProperty;                 // 0x0570(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOnboarding_PBWA_W2_Floor_C*                 PBWA_M2_Floor23_EdGraph_8_RefProperty;                    // 0x0578(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S1_Archway_C*                          PBWA_M2_Windows122_EdGraph_8_RefProperty;                 // 0x0580(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S1_Archway_C*                          PBWA_M2_Windows110_EdGraph_8_RefProperty;                 // 0x0588(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOB_Cave_Torch_C*                            OB_Cave_Torch55_EdGraph_8_RefProperty;                    // 0x0590(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOnboarding_PBWA_S1_QuarterWallS_C*          PBWA_S2_QuarterWallS51_EdGraph_8_RefProperty;             // 0x0598(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S1_WindowsSide_C*                      PBWA_W1_Archway3_2_EdGraph_8_RefProperty;                 // 0x05A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_S1_StairT_C*                           PBWA_W1_StairT2_EdGraph_8_RefProperty;                    // 0x05A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOnboarding_PBWA_S1_Archway_C*               PBWA_W1_Archway5_EdGraph_8_RefProperty;                   // 0x05B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class APBWA_W2_ArchwaySupport_C*                   PBWA_W1_ArchwayLargeSupport_2_EdGraph_8_RefProperty;      // 0x05B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOnboarding_PBWA_S1_QuarterWallS_C*          PBWA_S2_QuarterWallS54_EdGraph_8_RefProperty;             // 0x05C0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Zone_Onboarding_FarmsteadFort.Zone_Onboarding_FarmsteadFort_C");
		return ptr;
	}


	void StormDestroyWalls();
	void ActivatePaintByNumbers();
	void SmasherHitsWalls();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnCanceled_856A325D44ECC73B857CE5B30A2ED0F7();
	void OnAllClientsReady_856A325D44ECC73B857CE5B30A2ED0F7();
	void ReceiveBeginPlay();
	void BndEvt__Start_TriggerVolume_K2Node_ActorBoundEvent_0_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__TriggerVolume9_4_K2Node_ActorBoundEvent_26_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__TriggerVolume10_7_K2Node_ActorBoundEvent_43_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_TODStart_K2Node_ActorBoundEvent_84_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_EscapedPit_1_K2Node_ActorBoundEvent_363_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_EscapedPit_2_K2Node_ActorBoundEvent_380_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_EscapedPit_3_K2Node_ActorBoundEvent_390_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_EscapedPit_4_K2Node_ActorBoundEvent_401_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_EscapedPit_5_K2Node_ActorBoundEvent_413_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_EscapedPit_6_K2Node_ActorBoundEvent_426_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_EscapedPit_7_K2Node_ActorBoundEvent_440_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_EscapedPit_8_K2Node_ActorBoundEvent_455_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_NearFort_K2Node_ActorBoundEvent_445_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_NearFort_K2Node_ActorBoundEvent_474_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_SkipIntoFort_K2Node_ActorBoundEvent_707_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_SkipIntoFort_K2Node_ActorBoundEvent_738_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_nearWallEdit_K2Node_ActorBoundEvent_956_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_nearWallEdit_K2Node_ActorBoundEvent_989_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_CR_DoorEdited_K2Node_ActorBoundEvent_1254_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_CR_MainRoom_K2Node_ActorBoundEvent_1289_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_Balcony_K2Node_ActorBoundEvent_2060_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_HusksInFort_K2Node_ActorBoundEvent_2385_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_SiphonReminder_K2Node_ActorBoundEvent_777_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_ForceAIKIll_K2Node_ActorBoundEvent_645_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_HarvestingRoom_K2Node_ActorBoundEvent_1266_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void ResetCam();
	void FadeInToBlack();
	void FadeOutFromBlack();
	void OnMatchStarted();
	void FireLightingBolt();
	void FireRemainingBolts();
	void FireBaseLightning();
	void BndEvt__Trigger_ApproachingFort_K2Node_ActorBoundEvent_791_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_PlayerPastRocks_K2Node_ActorBoundEvent_845_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_PlayerPastRocks_K2Node_ActorBoundEvent_890_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_CR_DoorEdited2_K2Node_ActorBoundEvent_2430_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__trigger_blugloreminder_K2Node_ActorBoundEvent_230_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__trigger_blugloreminder_K2Node_ActorBoundEvent_278_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_ApproachingFort2_K2Node_ActorBoundEvent_911_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_ApproachingFort3_K2Node_ActorBoundEvent_960_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_ApproachingFort4_K2Node_ActorBoundEvent_1010_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void calledfrommisson(TEnumAsByte<Enum_LevelBlueprintOBEvents> EventToSend);
	void BndEvt__Trigger_SurvivorsSighted_K2Node_ActorBoundEvent_2750_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__TriggerSphere_BlockerHarvest_K2Node_ActorBoundEvent_816_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__TriggerVolume_playeratstairs2_K2Node_ActorBoundEvent_1491_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__TriggerVolume_playeratstairs1_K2Node_ActorBoundEvent_1532_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__TriggerVolume_gnome_detonate_K2Node_ActorBoundEvent_615_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__TriggerVolume_ArmsGnomes_K2Node_ActorBoundEvent_781_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__TriggerVolume_gnomeswitch_K2Node_ActorBoundEvent_865_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__TriggerVolume_insideFort_K2Node_ActorBoundEvent_533_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_EscapedPit_9_K2Node_ActorBoundEvent_714_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_CR_DoorEdited3_K2Node_ActorBoundEvent_731_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_CR_DoorEdited4_K2Node_ActorBoundEvent_776_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_CR_NavMarker_K2Node_ActorBoundEvent_135_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Kill_SmasherTriggerVolume_K2Node_ActorBoundEvent_231_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void destroyfrontbase();
	void BndEvt__TriggerVolume_StayPut_K2Node_ActorBoundEvent_329_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void ExecuteUbergraph_Zone_Onboarding_FarmsteadFort(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
