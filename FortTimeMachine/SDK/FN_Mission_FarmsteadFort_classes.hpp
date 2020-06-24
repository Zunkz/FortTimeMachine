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

// BlueprintGeneratedClass Mission_FarmsteadFort.Mission_FarmsteadFort_C
// 0x05A5 (0x0C7D - 0x06D8)
class AMission_FarmsteadFort_C : public AFortMission
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D8(0x0008) (Transient, DuplicateTransient)
	class UFortMissionTimerComponent*                  FortMissionTimer;                                         // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             fort_onboarding_stinger_positive_02_Cue;                  // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             fort_onboarding_stinger_neutral_01_Cue;                   // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             fortnite_onboarding_cave_music_Cue;                       // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             fortnite_onboarding_cave_action_Cue;                      // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             onboarding_ui_attention_right_Cue;                        // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             onboarding_ui_attention_left_Cue;                         // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             onboarding_ui_attention_center_Cue;                       // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AFortPlayerPawn*                             PlayerPawnRef;                                            // 0x0728(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Text_HowToMove;                                           // 0x0730(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               BlockFirstRoomEvents;                                     // 0x0748(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0749(0x0007) MISSED OFFSET
	struct FText                                       Text_Crafting;                                            // 0x0750(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Text_TreasureChest;                                       // 0x0768(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortAIEncounterInfo*                        AttackEncounter;                                          // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CountDownTimer;                                           // 0x0788(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x078C(0x0004) MISSED OFFSET
	struct FText                                       Text_AirStrike;                                           // 0x0790(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortAIEncounterInfo*                        FirstAttackEncounter;                                     // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WoodAtStairs;                                             // 0x07B0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinWoodAtStairs;                                          // 0x07B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WallEdited;                                               // 0x07B8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StairsBuilt;                                              // 0x07B9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TrapCheckActive;                                          // 0x07BA(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TrapsPlaced;                                              // 0x07BB(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoorEditCheckActive;                                      // 0x07BC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07BD(0x0003) MISSED OFFSET
	struct FText                                       Text_WorldMap;                                            // 0x07C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PlayerDied;                                               // 0x07D8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeaponCheckActive;                                        // 0x07D9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RocketFilledWithBluGlo;                                   // 0x07DA(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayerAtBalcony;                                          // 0x07DB(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               KilledBeforeStoryDialog;                                  // 0x07DC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EscapedPit;                                               // 0x07DD(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x07DE(0x0002) MISSED OFFSET
	TArray<TEnumAsByte<EFortEncounterDirection>>       EncounterInvalidDirections_Final;                         // 0x07E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ABP_Onboarding_SpawnPoints_C*>        OB_SpawnPoints;                                           // 0x07F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                StartingNutsBoltsCount;                                   // 0x0800(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StartingTwineCount;                                       // 0x0804(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Text_Harvesting_Outside;                                  // 0x0808(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               OutsideHarvestHintActive;                                 // 0x0820(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowOutsideListsToShow;                                  // 0x0821(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0822(0x0002) MISSED OFFSET
	int                                                RequiredNutsBolts;                                        // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RequiredTwine;                                            // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowTwineList;                                            // 0x082C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x082D(0x0003) MISSED OFFSET
	int                                                NumTwineToHarvest;                                        // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowNutsList;                                             // 0x0834(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0835(0x0003) MISSED OFFSET
	int                                                NumNutsToHarvest;                                         // 0x0838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TwineCheckActive;                                         // 0x083C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NutsCheckActive;                                          // 0x083D(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OutsideResourceCheckerActive;                             // 0x083E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x083F(0x0001) MISSED OFFSET
	float                                              GetToFortReminderTime;                                    // 0x0840(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlockGetToFortReminders;                                  // 0x0844(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0845(0x0003) MISSED OFFSET
	struct FText                                       Text_GetToFort;                                           // 0x0848(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HighlightQuickbar;                                        // 0x0860(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Hightlight_Objectives;                                    // 0x0861(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HighlightCraftingMelee;                                   // 0x0862(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CursorModeState;                                          // 0x0863(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GunCraftingTutorialActive;                                // 0x0864(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HighlightGunTab;                                          // 0x0865(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HighlightTraps;                                           // 0x0866(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HighlightStairs;                                          // 0x0867(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HighlightWalls;                                           // 0x0868(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HighlightMinimap;                                         // 0x0869(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Highlightharvester;                                       // 0x086A(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlockGunHighlight;                                        // 0x086B(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayerPastBlocker;                                        // 0x086C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x086D(0x0003) MISSED OFFSET
	class UHACK_PARAMS_NUMBER_C*                       HackParams_Number;                                        // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MechanicalCheckActive;                                    // 0x0878(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowMechnicalList;                                        // 0x0879(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x087A(0x0002) MISSED OFFSET
	int                                                NumMechanicalToHarvest;                                   // 0x087C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RequiredMechanical;                                       // 0x0880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StartingMechanicalCount;                                  // 0x0884(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ASurvivor_C*                                 SurvivorRef;                                              // 0x0888(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FStruct_SurvivorScriptedAbilities           SurvivorAbilitiesStruct;                                  // 0x0890(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SecondSpawn;                                              // 0x08D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayerIsDBNO;                                             // 0x08D9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayerCraftedGun;                                         // 0x08DA(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayerFoundTheFort;                                       // 0x08DB(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayerApproachedTheFort;                                  // 0x08DC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x08DD(0x0003) MISSED OFFSET
	class UClass*                                      Anchor;                                                   // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_SurvivorAnchor_C*                        Anchor1Ref;                                               // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_SurvivorAnchor_C*                        Anchor2Ref;                                               // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_SurvivorAnchor_C*                        Anchor3Ref;                                               // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_SurvivorAnchor_C*                        Anchor4Ref;                                               // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ADefender_AssaultRifle_C*                    Defender1Ref;                                             // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ADefender_AssaultRifle_C*                    Defender2Ref;                                             // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ADefender_AssaultRifle_C*                    Defender3Ref;                                             // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ADefender_AssaultRifle_C*                    Defender4Ref;                                             // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UFortAIEncounterInfo*                        PreFortEncounter;                                         // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  TipNotifictionSound;                                      // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  InstructionNotifictionSound;                              // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                IsPlayerNearBlockerHandle;                                // 0x0940(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                RemindPlayerHarvestHandle;                                // 0x0948(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PlaceTrapsTutorialActive;                                 // 0x0950(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanTheFortPartsBeDamaged;                                 // 0x0951(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x6];                                       // 0x0952(0x0006) MISSED OFFSET
	TArray<class ATrappedHumanPlacementActor_C*>       ScriptedSpawnSmasher;                                     // 0x0958(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UFortAIEncounterInfo*                        SmasherEncounterRef;                                      // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RequiredBlugloCount;                                      // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlugloReminderActive;                                     // 0x0974(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0975(0x0003) MISSED OFFSET
	class UFortAIEncounterInfo*                        PreFortEncounterRef;                                      // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Text_FindBluglo;                                          // 0x0980(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Text_BlugloReminder;                                      // 0x0998(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Text_AtackImminent;                                       // 0x09B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    ActivateEventAtLevelBlueprint;                            // 0x09C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UFortAIEncounterInfo*                        fakeencounterref;                                         // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TrapsToHaveAtTutorial;                                    // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x09E4(0x0004) MISSED OFFSET
	class UObject*                                     BluGloObject;                                             // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Harvesting_Minimap_Distance;                              // 0x09F0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x09F4(0x0004) MISSED OFFSET
	class UAudioComponent*                             FirstEncounterMusicRef;                                   // 0x09F8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             CaveMusicRef;                                             // 0x0A00(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             OutsideMusicRef;                                          // 0x0A08(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             FirstFortEncounterMusicRef;                               // 0x0A10(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             InsideMusicRef;                                           // 0x0A18(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             RocketRoomMusicRef;                                       // 0x0A20(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             RocketStartMusicRef;                                      // 0x0A28(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             TensionMusicRef;                                          // 0x0A30(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             FinalEncounterMusicRef;                                   // 0x0A38(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayerIsAtStairs;                                         // 0x0A40(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0A41(0x0007) MISSED OFFSET
	class AFortWeapon*                                 CurrentEquippedWeapon;                                    // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CurrentEquippedWeaponClass;                               // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StickActiveMineCart;                                      // 0x0A58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x0A59(0x0007) MISSED OFFSET
	class UFortSchematicItemDefinition*                CraftingSchematic;                                        // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortClientAnnouncement*                     EquipStickHintRef;                                        // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortClientAnnouncement*                     SwingStickHintRef;                                        // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortClientAnnouncement*                     EquipStickHarvestingRef;                                  // 0x0A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortClientAnnouncement*                     HarvestResourcesHintref;                                  // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AFortClientAnnouncement*>             BuildingStairsHintPart1Ref;                               // 0x0A88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AFortClientAnnouncement*                     CraftingGunHintRef;                                       // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortClientAnnouncement*                     MapHintRef;                                               // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortClientAnnouncement*                     TrapPlacementHint1Ref;                                    // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_NavigationMarker_C*                      NavigationMarkerControlRoomRef;                           // 0x0AB0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayerAtSurvivors;                                        // 0x0AB8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x0AB9(0x0007) MISSED OFFSET
	class AFortClientAnnouncement*                     HeadIntoFortHintRef;                                      // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Text_IntoFort;                                            // 0x0AC8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               GunSuccessfullyCrafted;                                   // 0x0AE0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x0AE1(0x0007) MISSED OFFSET
	class UAudioComponent*                             CurrentPlayingMusicRef;                                   // 0x0AE8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Vindertip_Time;                                           // 0x0AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x0AF4(0x0004) MISSED OFFSET
	struct FText                                       Text_ChangeToStick;                                       // 0x0AF8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortClientAnnouncement*                     ChangeToHarvestHintRef;                                   // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                PitMarkerTimerHandle;                                     // 0x0B18(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_SpecialChest_Pit_Child_C*                PitChestRef;                                              // 0x0B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               PitMarkerActive;                                          // 0x0B28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x7];                                       // 0x0B29(0x0007) MISSED OFFSET
	class ALayoutBuildRequirement_C*                   TrapMarkerTileRef;                                        // 0x0B30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                TrapTileMarkerTimer;                                      // 0x0B38(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               TrapMarkerActive;                                         // 0x0B40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WallEMarkerActive;                                        // 0x0B41(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x6];                                       // 0x0B42(0x0006) MISSED OFFSET
	struct FTimerHandle                                WallMarkerTimerHandleRef;                                 // 0x0B48(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AOB_SpecialWallEdit_C*                       EditingWallRef;                                           // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         AchievementStatCrafting;                                  // 0x0B58(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         AchievementStatSurvivors;                                 // 0x0B68(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Blockairstrikedialog;                                     // 0x0B78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x0B79(0x0007) MISSED OFFSET
	class AFortClientAnnouncement*                     DoorEditingAnnoucementPart1Ref;                           // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortClientAnnouncement*                     DoorEditingAnnoucementPart2ref;                           // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOB_SpecialWallEdit_C*                       EditingWallReference;                                     // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AFortClientAnnouncement*>             Building_Stairs_Hint_Part_2_Ref;                          // 0x0B98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AFortClientAnnouncement*                     ExitBuildingModeRef;                                      // 0x0BA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortClientAnnouncement*                     TrapPlacementHint2Ref;                                    // 0x0BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortClientAnnouncement*                     AirstrikeNotificationRef;                                 // 0x0BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EFortEncounterDirection>>       EncounterInvalidDirections_FinalSide;                     // 0x0BC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortAIEncounterInfo*                        CloserEncounterRef;                                       // 0x0BD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ARiftPlacementActor_C*>               FlankSpawnPoints;                                         // 0x0BD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AFortClientAnnouncement*                     AttackImminentRef;                                        // 0x0BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                RocketLocationHandleRef;                                  // 0x0BF0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_ControlTerminal_C*                       RocketTerminalRef;                                        // 0x0BF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               RocketDiscovered;                                         // 0x0C00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RocketMarkerVisible;                                      // 0x0C01(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x6];                                       // 0x0C02(0x0006) MISSED OFFSET
	class AFortClientAnnouncement*                     AttackImmConvRef;                                         // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               LennyFinishedConvo;                                       // 0x0C10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x7];                                       // 0x0C11(0x0007) MISSED OFFSET
	TArray<class ARiftPlacementActor_C*>               LobberSpawnPoints;                                        // 0x0C18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ARiftPlacementActor_C*>               ExplodersSpawns;                                          // 0x0C28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               CheatsActive;                                             // 0x0C38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x0C39(0x0007) MISSED OFFSET
	TArray<class ARiftPlacementActor_C*>               DwarfSpawnPoints;                                         // 0x0C40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                                TrapHandle;                                               // 0x0C50(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PlayerAtControlRoom;                                      // 0x0C58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x7];                                       // 0x0C59(0x0007) MISSED OFFSET
	class AFortClientAnnouncement*                     WallEditConvoPart1;                                       // 0x0C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortClientAnnouncement*                     WallEditConvoPart2;                                       // 0x0C68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortClientAnnouncement*                     WallEditConvoPart3;                                       // 0x0C70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                TrapPlacedCount;                                          // 0x0C78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AirstrikeUsed;                                            // 0x0C7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_FarmsteadFort.Mission_FarmsteadFort_C");
		return ptr;
	}


	void SetBuildingActorsThatCanBeDamaged(TArray<class ABuildingActor*>* Array);
	void StopEditingConversations();
	void SpawnDwarfs();
	void TeleportPlayerForwardAfterSmasherCin();
	void SpawnLennyDefender();
	void SpawnFlankEncounter();
	void Treefire();
	void ForceCompleteHarvesting();
	void SetEditingWallRef();
	void Achievements(int AchievementInt);
	void MakeTrapTilesInvulnerable();
	void GetEditingWallByTag();
	void SetObjectiveMarker(bool Active, const struct FName& TagToFind);
	void SetBlugloMiniMapIcons(float VisibleDistance);
	void SpawnHarvestingHelpers();
	void RegisterHarvestingHelpers();
	void SpawnVinderTip(const struct FTransform& SpawnTransform, TEnumAsByte<Enum_OnboardingVideos> SelectedVideo, class ABP_VinderTip_Tutorial_C** VindertipRef);
	void GiveAdditionalTraps();
	void TeleportPlayerToBlackRoom();
	void FadePlayerCameraToBlack(float FadeDuration);
	void SetCinematicVortexVisibility(bool Visible);
	void SmallVortexVisibility(bool IsVisible);
	void SpawnPreAttack();
	void GiveAirStrikeAbility();
	void RotatePlayerTowardsCin();
	void SetSmasherHealth(class AFortAIPawn* AIPawnRef, float DivideByValue);
	void SpawnScriptedSmasher(const struct FName& TagToUse);
	void FortPartsCanBeDamaged(bool CanBeDamaged);
	void KillDefenders();
	void DestroyFortParts();
	void CheckPlayerHasSomeMissionTraps();
	void MakeDefendersVulnerable_();
	void PrepareFortEncounter();
	void SpawnPreEncounter();
	void GetDefenderSpawnFromTag(const struct FName& TagNameToFind, struct FTransform* DefenderSpawnTransform, struct FTransform* AnchorSpawnTransform);
	void SpawnDefendersAtFort();
	void DisableLaserWall();
	void StopGunHarvestingChecks();
	void AllowBarriersToTakeDamage(bool Invulnerable);
	void NPC_Cower(bool Cower_Activate);
	void CheckMechanicalParts(bool* PlayerHasMoreMechanicalThanStarting, int* AdditionalmechnicalCollected);
	void SetVariables();
	void OnRep_Highlightharvester();
	void OnRep_HighlightMinimap();
	void OnRep_HighlightWalls();
	void OnRep_HighlightStairs();
	void OnRep_HighlightTraps();
	void OnRep_HighlightGunTab();
	void PlayUIAttentionSound(TEnumAsByte<Enum_UIAttentionSound> Sound_Positioning);
	void OnRep_HighlightCraftingMelee();
	void OnRep_Hightlight_Objectives();
	void OnRep_HighlightQuickbar();
	void CheckNutsBolts(bool* PlayerHasMoreNutsThanStarting, int* AdditionalNutsCollectedI);
	void CheckTwine(bool* PlayerHasMoreTwineThanStarting, int* AdditionalTwineCollectedI);
	void CheckOutsideResources(bool* PlayerHasEnoughResources);
	void GiveSchematic();
	void ModifyWoodResource();
	void RegisterMissionActors();
	void ManageInventory();
	void KIllAIWhenPlayerDied();
	void UserConstructionScript();
	void OnCanceled_1ED02ED748A4140AEF73B29E7652B22B();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E7652B22B();
	void OnCanceled_1ED02ED748A4140AEF73B29E5AAB6B48();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E5AAB6B48();
	void OnCanceled_1ED02ED748A4140AEF73B29ED1BD3A0B();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29ED1BD3A0B();
	void OnCanceled_1ED02ED748A4140AEF73B29EC65B9338();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29EC65B9338();
	void OnCanceled_1ED02ED748A4140AEF73B29E0497E9D1();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E0497E9D1();
	void OnCanceled_1ED02ED748A4140AEF73B29E9FE32A5E();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E9FE32A5E();
	void OnCanceled_1ED02ED748A4140AEF73B29EBB0BB80C();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29EBB0BB80C();
	void OnCanceled_1ED02ED748A4140AEF73B29EEEE08771();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29EEEE08771();
	void OnCanceled_1ED02ED748A4140AEF73B29EB5829E87();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29EB5829E87();
	void OnCanceled_1ED02ED748A4140AEF73B29E3D016475();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E3D016475();
	void OnCanceled_1ED02ED748A4140AEF73B29E676C3A81();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E676C3A81();
	void OnCanceled_1ED02ED748A4140AEF73B29E86702662();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E86702662();
	void OnCanceled_1ED02ED748A4140AEF73B29E3F6E3C92();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E3F6E3C92();
	void OnCanceled_1A19862C47F5B5512EBB1BB02D7A7FDE();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB02D7A7FDE();
	void OnCanceled_1A19862C47F5B5512EBB1BB08BA9C420();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB08BA9C420();
	void OnCanceled_1A19862C47F5B5512EBB1BB04174C113();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB04174C113();
	void OnCanceled_1A19862C47F5B5512EBB1BB076A92ABB();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB076A92ABB();
	void OnCanceled_1A19862C47F5B5512EBB1BB027F6E6B8();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB027F6E6B8();
	void OnCanceled_1A19862C47F5B5512EBB1BB03CC03214();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB03CC03214();
	void OnCanceled_1A19862C47F5B5512EBB1BB000513AE5();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB000513AE5();
	void OnCanceled_1A19862C47F5B5512EBB1BB0CD289167();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB0CD289167();
	void OnCanceled_1A19862C47F5B5512EBB1BB0DA611453();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB0DA611453();
	void OnCanceled_1A19862C47F5B5512EBB1BB0C6ECCFFF();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB0C6ECCFFF();
	void OnCanceled_1A19862C47F5B5512EBB1BB0025E47EC();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB0025E47EC();
	void OnCanceled_1A19862C47F5B5512EBB1BB04B7064BB();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB04B7064BB();
	void OnCanceled_1A19862C47F5B5512EBB1BB04B4FB5D4();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB04B4FB5D4();
	void OnCanceled_1A19862C47F5B5512EBB1BB08B86E674();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB08B86E674();
	void OnCanceled_1A19862C47F5B5512EBB1BB06AB516D5();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB06AB516D5();
	void OnCanceled_1A19862C47F5B5512EBB1BB04978F881();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB04978F881();
	void OnCanceled_1A19862C47F5B5512EBB1BB0655734D8();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB0655734D8();
	void OnCanceled_1A19862C47F5B5512EBB1BB03477B005();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB03477B005();
	void OnCanceled_1A19862C47F5B5512EBB1BB0012A9E65();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB0012A9E65();
	void OnCanceled_1A19862C47F5B5512EBB1BB033978965();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB033978965();
	void OnCanceled_1A19862C47F5B5512EBB1BB004A96859();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB004A96859();
	void OnCanceled_1A19862C47F5B5512EBB1BB0D18205A4();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB0D18205A4();
	void OnCanceled_1A19862C47F5B5512EBB1BB01C5B8BBE();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB01C5B8BBE();
	void OnCanceled_1A19862C47F5B5512EBB1BB050BBAF27();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB050BBAF27();
	void OnCanceled_1ED02ED748A4140AEF73B29EFBBBDE98();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29EFBBBDE98();
	void OnCanceled_1A19862C47F5B5512EBB1BB082814064();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB082814064();
	void OnCanceled_1A19862C47F5B5512EBB1BB0479C6E3A();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB0479C6E3A();
	void OnCanceled_1A19862C47F5B5512EBB1BB07A1DD46F();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB07A1DD46F();
	void OnCanceled_1A19862C47F5B5512EBB1BB00BFA76C1();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB00BFA76C1();
	void OnCanceled_1A19862C47F5B5512EBB1BB006DC4F42();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB006DC4F42();
	void OnCanceled_1A19862C47F5B5512EBB1BB05538C8B6();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB05538C8B6();
	void OnCanceled_1A19862C47F5B5512EBB1BB0034FFB50();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB0034FFB50();
	void OnCanceled_1ED02ED748A4140AEF73B29E3174C6F5();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E3174C6F5();
	void OnCanceled_1A19862C47F5B5512EBB1BB02547A90B();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB02547A90B();
	void OnCanceled_1ED02ED748A4140AEF73B29E0F1DDB55();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E0F1DDB55();
	void OnCanceled_1ED02ED748A4140AEF73B29EFF3E9404();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29EFF3E9404();
	void OnCanceled_1ED02ED748A4140AEF73B29E6CB30750();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E6CB30750();
	void OnCanceled_1ED02ED748A4140AEF73B29E1CFFFB15();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E1CFFFB15();
	void OnCanceled_1ED02ED748A4140AEF73B29E17087969();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E17087969();
	void OnCanceled_1ED02ED748A4140AEF73B29E9670D60A();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E9670D60A();
	void OnCanceled_856A325D44ECC73B857CE5B3C64A0924();
	void OnAllClientsReady_856A325D44ECC73B857CE5B3C64A0924();
	void OnCanceled_856A325D44ECC73B857CE5B34DF53DCF();
	void OnAllClientsReady_856A325D44ECC73B857CE5B34DF53DCF();
	void OnCanceled_856A325D44ECC73B857CE5B32980C3E4();
	void OnAllClientsReady_856A325D44ECC73B857CE5B32980C3E4();
	void OnCanceled_1A19862C47F5B5512EBB1BB06FB73C03();
	void OnAllClientsReady_1A19862C47F5B5512EBB1BB06FB73C03();
	void Basic_Controls_Hints();
	void HandleMissionEvent_ChestFirstDamaged(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_PlayerAtStairs(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_PlayerEscapedPit(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_PlayerApproachingFort(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void placetrap();
	void Stop_WallEdit();
	void HandleMissionEvent_PlayerAtBalcony(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void Start_AI_ENCOUNTER();
	void EncounterTimer();
	void HandleMissionEvent_PlayerPastBlocker(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_ShowMinimapObjective(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_PlayerAtWallEditing(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_PlayerAtControlRoom(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_RocketPreLaunchActivate(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_AirStrikeUsed(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_PlayerHasMoved(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void CheckFiring();
	void StopFinalEncounter();
	void HandleMissionEvent_PlayerHasFired(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void firehint();
	void HandleMissionEvent_Cine_Ramirez_Complete(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void ControlHintsOn();
	void CheckFiringNow();
	void HandleMissionEvent_EnemyDamaged(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void prepareencounterend();
	void PlaceTrapsActivate();
	void BlockTrapNotification();
	void HandleMissionEvent_PlayerBuiltDoor(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_ToggledEditMode(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void StopTrapCheck();
	void StopDoorEditCheck();
	void HandleMissionEvent_PlayerDied(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void OnMatchStarted();
	void Countdown();
	void StreamOutRocket();
	void FindWayOutOfCaves();
	void PlayerEscapedPit();
	void HarvestTwine();
	void HandleMissionEvent_MissionTreeDestroyed(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void LockSchematics();
	void UnlockAllSchematics();
	void RevealMap1();
	void RevealMap2();
	void LoopingCheckoreCount_Copy();
	void checkmetalevent_Copy();
	void SkipOutsideHarvestingTutorial();
	void StartTwineLoopingCheck();
	void StopTwineLoopingCheck();
	void StartNutsBoltsLoopingCheck();
	void StopNutsBoltLoopingCheck();
	void HandleMissionEvent_GiveGun(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void checkevent_Copy();
	void StartOutsideResourceChecker();
	void StopOutsideResourceChecker();
	void CraftGunTutorial();
	void HandleMissionEvent_MissionVehicleDestroyed(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void IncomingDialog();
	void remindertogettofort();
	void HandleMissionEvent_ToggledCursorMode(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void ShowGunPing();
	void ShowAllOutsideResourceList();
	void PlayerHasMoved();
	void HandleMissionEvent_LaunchRocket(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void OnStairsBuilt();
	void checkmetalevent_Copy_Copy();
	void StartMechanicalLoopingCheck();
	void StopMechanicalLoopingCheck();
	void StartFirstEncounter();
	void HandleMissionEvent_PlayerSpawned(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_PlayerDBNOEnter(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void EncounterCompleted(class UFortAIEncounterInfo* Encounter, bool bSuccessfullyCompleted);
	void FirstEncounterComplete();
	void HandleMissionEvent_PlayerDBNORevived(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void DisableLaserWalls();
	void HandleMissionEvent_PlayerBuilt(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void StartFortAssault();
	void HandleMissionEvent_ForveKillAIEncounter(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void IsPlayerNearTheRocks();
	void RemindPlayerHowToHarvest();
	void GoToRocketRoom();
	void SpawnEncounter();
	void StartFortAttack();
	void StopPreEncounter();
	void OnSmasherSpawned(class UFortAIEncounterInfo* Encounter, class AFortAIPawn* SpawnedEnemy);
	void HandleMissionEvent_RocketHasBluglo(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_OBJ_22_Activate(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_OBJ_22_Completed(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void OhNoFailedSound();
	void HandleMissionEvent_BlugloReminder(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void StartFortPreAttack();
	void ForceStopPreEncounter();
	void PrepareForAirStrikeAbility();
	void Airstrike();
	void HandleMissionEvent_EnemyKilled(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_PlayerAtSurvivors(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void AirstrikeNowOnline();
	void AirStrikeReady();
	void StartFakeStorm();
	void HandleMissionEvent_PlayerNearHarvestingBoundary(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void VortexVisibility(bool Visibility);
	void FightStarted(class UFortAIEncounterInfo* Encounter);
	void CinematicVortexVisibility();
	void SkipToAttackWarning();
	void FadePlayerCamToBlack();
	void fadeoutcam();
	void HandleMissionEvent_ItemCollected(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void VinderTipTimer();
	void VinderTimerWallEditing();
	void hint();
	void HandleMissionEvent_WallEdited(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void ShortcutCompleteEditingObj();
	void FirstEncounterMusicStart();
	void FirstEncounterMusicCompleted();
	void playcavemusic();
	void OutsideMusicStart();
	void FirstFortEncounterMusicStart();
	void StopFirstFortEncounterMusic();
	void InsideMusic();
	void RocketRoomMusicStart();
	void RocketStartMusic();
	void RocketRoomDistressCallMusicStart();
	void tensionmusic();
	void FinalEncounterMusicStart();
	void CountdownMusicStart();
	void smasherdialog();
	void cont();
	void nice();
	void excbuilding();
	void delayme();
	void UniqueOBJSOund();
	void fallback();
	void CacemeustomEvent_1();
	void OnWeaponEquippedDelegate_Event_1(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void StickSelectedMineCart(bool StickActive);
	void HandleMissionEvent_ItemCrafted(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void SkipCrafting();
	void StickSelectedMoveOn();
	void revealme();
	void HandleMissionEvent_PlayerInsideFort(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void RefreshBlugloCount();
	void RemoveEditingVindertip();
	void DestroyStairsVindertip();
	void Stick_Selected_Harvesting_Alt(bool StickActive);
	void BlockHarvestAnnoucements();
	void fallbacktimer();
	void endtut();
	void teleportplayer();
	void isplayeratpit();
	void checkdistance();
	void activate_trap_marker();
	void checkwalldistance();
	void StartWallMarker();
	void enableoutsidemarker();
	void blockdialog();
	void HandleMissionEvent_PlayerAtCRNavigationMarker(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void TeleportMarker();
	void PlayerEditModeToggled(bool IsPlayerInEditMode);
	void PlayerInBuildingMode(bool BuildModeActive);
	void lag(bool bEnteredBuildMode);
	void StopBuildingDynamicHints();
	void checkmode();
	void FirstFortCinSkipped();
	void TrapBuildingMode(bool BuildingModeActive);
	void BlockTrapAnnoucements();
	void trapmode(bool bEnteredBuildMode);
	void MoveFortMarker();
	void AutocancelAirstrikeNotif();
	void BlockHarvest();
	void HandleMissionEvent_Ragnarok(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void stormadvance();
	void sideattack();
	void OnSmasherKilled(class UFortAIEncounterInfo* Encounter);
	void HandleMissionEvent_PlayerAtReassureSurvivor(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void ForceStopFirstMusic();
	void checkdistancetorocket();
	void SpawnSecondSmasher();
	void SetHealth(class UFortAIEncounterInfo* Encounter, class AFortAIPawn* SpawnedEnemy);
	void SpawnAirStrikeBurstHusks();
	void Preairstrikenc();
	void AdvanceStorm();
	void SpawnLobbers();
	void SpawnSecondSmasherNow();
	void SecondSmasher();
	void dwarfs();
	void SkipTrapTutorial();
	void NiceDoorBro();
	void ExecuteUbergraph_Mission_FarmsteadFort(int EntryPoint);
	void ActivateEventAtLevelBlueprint__DelegateSignature(TEnumAsByte<Enum_LevelBlueprintOBEvents> EventToSend);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
