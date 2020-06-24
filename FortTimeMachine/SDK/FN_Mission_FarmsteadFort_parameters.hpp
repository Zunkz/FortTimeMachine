#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SetBuildingActorsThatCanBeDamaged
struct AMission_FarmsteadFort_C_SetBuildingActorsThatCanBeDamaged_Params
{
	TArray<class ABuildingActor*>                      Array;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopEditingConversations
struct AMission_FarmsteadFort_C_StopEditingConversations_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnDwarfs
struct AMission_FarmsteadFort_C_SpawnDwarfs_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.TeleportPlayerForwardAfterSmasherCin
struct AMission_FarmsteadFort_C_TeleportPlayerForwardAfterSmasherCin_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnLennyDefender
struct AMission_FarmsteadFort_C_SpawnLennyDefender_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnFlankEncounter
struct AMission_FarmsteadFort_C_SpawnFlankEncounter_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Treefire
struct AMission_FarmsteadFort_C_Treefire_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ForceCompleteHarvesting
struct AMission_FarmsteadFort_C_ForceCompleteHarvesting_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SetEditingWallRef
struct AMission_FarmsteadFort_C_SetEditingWallRef_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Achievements
struct AMission_FarmsteadFort_C_Achievements_Params
{
	int                                                AchievementInt;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.MakeTrapTilesInvulnerable
struct AMission_FarmsteadFort_C_MakeTrapTilesInvulnerable_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.GetEditingWallByTag
struct AMission_FarmsteadFort_C_GetEditingWallByTag_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SetObjectiveMarker
struct AMission_FarmsteadFort_C_SetObjectiveMarker_Params
{
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TagToFind;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SetBlugloMiniMapIcons
struct AMission_FarmsteadFort_C_SetBlugloMiniMapIcons_Params
{
	float                                              VisibleDistance;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnHarvestingHelpers
struct AMission_FarmsteadFort_C_SpawnHarvestingHelpers_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RegisterHarvestingHelpers
struct AMission_FarmsteadFort_C_RegisterHarvestingHelpers_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnVinderTip
struct AMission_FarmsteadFort_C_SpawnVinderTip_Params
{
	struct FTransform                                  SpawnTransform;                                           // (Parm, IsPlainOldData)
	TEnumAsByte<Enum_OnboardingVideos>                 SelectedVideo;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ABP_VinderTip_Tutorial_C*                    VindertipRef;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.GiveAdditionalTraps
struct AMission_FarmsteadFort_C_GiveAdditionalTraps_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.TeleportPlayerToBlackRoom
struct AMission_FarmsteadFort_C_TeleportPlayerToBlackRoom_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FadePlayerCameraToBlack
struct AMission_FarmsteadFort_C_FadePlayerCameraToBlack_Params
{
	float                                              FadeDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SetCinematicVortexVisibility
struct AMission_FarmsteadFort_C_SetCinematicVortexVisibility_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SmallVortexVisibility
struct AMission_FarmsteadFort_C_SmallVortexVisibility_Params
{
	bool                                               IsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnPreAttack
struct AMission_FarmsteadFort_C_SpawnPreAttack_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.GiveAirStrikeAbility
struct AMission_FarmsteadFort_C_GiveAirStrikeAbility_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RotatePlayerTowardsCin
struct AMission_FarmsteadFort_C_RotatePlayerTowardsCin_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SetSmasherHealth
struct AMission_FarmsteadFort_C_SetSmasherHealth_Params
{
	class AFortAIPawn*                                 AIPawnRef;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DivideByValue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnScriptedSmasher
struct AMission_FarmsteadFort_C_SpawnScriptedSmasher_Params
{
	struct FName                                       TagToUse;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FortPartsCanBeDamaged
struct AMission_FarmsteadFort_C_FortPartsCanBeDamaged_Params
{
	bool                                               CanBeDamaged;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.KillDefenders
struct AMission_FarmsteadFort_C_KillDefenders_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.DestroyFortParts
struct AMission_FarmsteadFort_C_DestroyFortParts_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CheckPlayerHasSomeMissionTraps
struct AMission_FarmsteadFort_C_CheckPlayerHasSomeMissionTraps_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.MakeDefendersVulnerable 
struct AMission_FarmsteadFort_C_MakeDefendersVulnerable__Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.PrepareFortEncounter
struct AMission_FarmsteadFort_C_PrepareFortEncounter_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnPreEncounter
struct AMission_FarmsteadFort_C_SpawnPreEncounter_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.GetDefenderSpawnFromTag
struct AMission_FarmsteadFort_C_GetDefenderSpawnFromTag_Params
{
	struct FName                                       TagNameToFind;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  DefenderSpawnTransform;                                   // (Parm, OutParm, IsPlainOldData)
	struct FTransform                                  AnchorSpawnTransform;                                     // (Parm, OutParm, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnDefendersAtFort
struct AMission_FarmsteadFort_C_SpawnDefendersAtFort_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.DisableLaserWall
struct AMission_FarmsteadFort_C_DisableLaserWall_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopGunHarvestingChecks
struct AMission_FarmsteadFort_C_StopGunHarvestingChecks_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.AllowBarriersToTakeDamage
struct AMission_FarmsteadFort_C_AllowBarriersToTakeDamage_Params
{
	bool                                               Invulnerable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.NPC_Cower
struct AMission_FarmsteadFort_C_NPC_Cower_Params
{
	bool                                               Cower_Activate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CheckMechanicalParts
struct AMission_FarmsteadFort_C_CheckMechanicalParts_Params
{
	bool                                               PlayerHasMoreMechanicalThanStarting;                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AdditionalmechnicalCollected;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SetVariables
struct AMission_FarmsteadFort_C_SetVariables_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_Highlightharvester
struct AMission_FarmsteadFort_C_OnRep_Highlightharvester_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_HighlightMinimap
struct AMission_FarmsteadFort_C_OnRep_HighlightMinimap_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_HighlightWalls
struct AMission_FarmsteadFort_C_OnRep_HighlightWalls_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_HighlightStairs
struct AMission_FarmsteadFort_C_OnRep_HighlightStairs_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_HighlightTraps
struct AMission_FarmsteadFort_C_OnRep_HighlightTraps_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_HighlightGunTab
struct AMission_FarmsteadFort_C_OnRep_HighlightGunTab_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.PlayUIAttentionSound
struct AMission_FarmsteadFort_C_PlayUIAttentionSound_Params
{
	TEnumAsByte<Enum_UIAttentionSound>                 Sound_Positioning;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_HighlightCraftingMelee
struct AMission_FarmsteadFort_C_OnRep_HighlightCraftingMelee_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_Hightlight_Objectives
struct AMission_FarmsteadFort_C_OnRep_Hightlight_Objectives_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_HighlightQuickbar
struct AMission_FarmsteadFort_C_OnRep_HighlightQuickbar_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CheckNutsBolts
struct AMission_FarmsteadFort_C_CheckNutsBolts_Params
{
	bool                                               PlayerHasMoreNutsThanStarting;                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AdditionalNutsCollectedI;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CheckTwine
struct AMission_FarmsteadFort_C_CheckTwine_Params
{
	bool                                               PlayerHasMoreTwineThanStarting;                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AdditionalTwineCollectedI;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CheckOutsideResources
struct AMission_FarmsteadFort_C_CheckOutsideResources_Params
{
	bool                                               PlayerHasEnoughResources;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.GiveSchematic
struct AMission_FarmsteadFort_C_GiveSchematic_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ModifyWoodResource
struct AMission_FarmsteadFort_C_ModifyWoodResource_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RegisterMissionActors
struct AMission_FarmsteadFort_C_RegisterMissionActors_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ManageInventory
struct AMission_FarmsteadFort_C_ManageInventory_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.KIllAIWhenPlayerDied
struct AMission_FarmsteadFort_C_KIllAIWhenPlayerDied_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.UserConstructionScript
struct AMission_FarmsteadFort_C_UserConstructionScript_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E7652B22B
struct AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E7652B22B_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E7652B22B
struct AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E7652B22B_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E5AAB6B48
struct AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E5AAB6B48_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E5AAB6B48
struct AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E5AAB6B48_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29ED1BD3A0B
struct AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29ED1BD3A0B_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29ED1BD3A0B
struct AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29ED1BD3A0B_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29EC65B9338
struct AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29EC65B9338_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EC65B9338
struct AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29EC65B9338_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E0497E9D1
struct AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E0497E9D1_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E0497E9D1
struct AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E0497E9D1_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E9FE32A5E
struct AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E9FE32A5E_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E9FE32A5E
struct AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E9FE32A5E_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29EBB0BB80C
struct AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29EBB0BB80C_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EBB0BB80C
struct AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29EBB0BB80C_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29EEEE08771
struct AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29EEEE08771_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EEEE08771
struct AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29EEEE08771_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29EB5829E87
struct AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29EB5829E87_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EB5829E87
struct AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29EB5829E87_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E3D016475
struct AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E3D016475_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E3D016475
struct AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E3D016475_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E676C3A81
struct AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E676C3A81_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E676C3A81
struct AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E676C3A81_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E86702662
struct AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E86702662_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E86702662
struct AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E86702662_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E3F6E3C92
struct AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E3F6E3C92_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E3F6E3C92
struct AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E3F6E3C92_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB02D7A7FDE
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB02D7A7FDE_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB02D7A7FDE
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB02D7A7FDE_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB08BA9C420
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB08BA9C420_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB08BA9C420
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB08BA9C420_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB04174C113
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB04174C113_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB04174C113
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB04174C113_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB076A92ABB
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB076A92ABB_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB076A92ABB
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB076A92ABB_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB027F6E6B8
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB027F6E6B8_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB027F6E6B8
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB027F6E6B8_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB03CC03214
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB03CC03214_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB03CC03214
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB03CC03214_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB000513AE5
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB000513AE5_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB000513AE5
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB000513AE5_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0CD289167
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB0CD289167_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0CD289167
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0CD289167_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0DA611453
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB0DA611453_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0DA611453
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0DA611453_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0C6ECCFFF
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB0C6ECCFFF_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0C6ECCFFF
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0C6ECCFFF_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0025E47EC
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB0025E47EC_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0025E47EC
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0025E47EC_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB04B7064BB
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB04B7064BB_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB04B7064BB
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB04B7064BB_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB04B4FB5D4
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB04B4FB5D4_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB04B4FB5D4
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB04B4FB5D4_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB08B86E674
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB08B86E674_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB08B86E674
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB08B86E674_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB06AB516D5
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB06AB516D5_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB06AB516D5
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB06AB516D5_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB04978F881
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB04978F881_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB04978F881
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB04978F881_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0655734D8
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB0655734D8_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0655734D8
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0655734D8_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB03477B005
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB03477B005_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB03477B005
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB03477B005_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0012A9E65
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB0012A9E65_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0012A9E65
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0012A9E65_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB033978965
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB033978965_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB033978965
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB033978965_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB004A96859
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB004A96859_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB004A96859
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB004A96859_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0D18205A4
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB0D18205A4_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0D18205A4
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0D18205A4_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB01C5B8BBE
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB01C5B8BBE_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB01C5B8BBE
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB01C5B8BBE_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB050BBAF27
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB050BBAF27_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB050BBAF27
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB050BBAF27_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29EFBBBDE98
struct AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29EFBBBDE98_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EFBBBDE98
struct AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29EFBBBDE98_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB082814064
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB082814064_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB082814064
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB082814064_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0479C6E3A
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB0479C6E3A_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0479C6E3A
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0479C6E3A_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB07A1DD46F
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB07A1DD46F_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB07A1DD46F
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB07A1DD46F_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB00BFA76C1
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB00BFA76C1_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB00BFA76C1
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB00BFA76C1_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB006DC4F42
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB006DC4F42_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB006DC4F42
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB006DC4F42_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB05538C8B6
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB05538C8B6_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB05538C8B6
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB05538C8B6_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0034FFB50
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB0034FFB50_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0034FFB50
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0034FFB50_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E3174C6F5
struct AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E3174C6F5_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E3174C6F5
struct AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E3174C6F5_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB02547A90B
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB02547A90B_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB02547A90B
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB02547A90B_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E0F1DDB55
struct AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E0F1DDB55_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E0F1DDB55
struct AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E0F1DDB55_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29EFF3E9404
struct AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29EFF3E9404_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EFF3E9404
struct AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29EFF3E9404_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E6CB30750
struct AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E6CB30750_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E6CB30750
struct AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E6CB30750_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E1CFFFB15
struct AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E1CFFFB15_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E1CFFFB15
struct AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E1CFFFB15_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E17087969
struct AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E17087969_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E17087969
struct AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E17087969_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E9670D60A
struct AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E9670D60A_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E9670D60A
struct AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E9670D60A_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_856A325D44ECC73B857CE5B3C64A0924
struct AMission_FarmsteadFort_C_OnCanceled_856A325D44ECC73B857CE5B3C64A0924_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_856A325D44ECC73B857CE5B3C64A0924
struct AMission_FarmsteadFort_C_OnAllClientsReady_856A325D44ECC73B857CE5B3C64A0924_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_856A325D44ECC73B857CE5B34DF53DCF
struct AMission_FarmsteadFort_C_OnCanceled_856A325D44ECC73B857CE5B34DF53DCF_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_856A325D44ECC73B857CE5B34DF53DCF
struct AMission_FarmsteadFort_C_OnAllClientsReady_856A325D44ECC73B857CE5B34DF53DCF_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_856A325D44ECC73B857CE5B32980C3E4
struct AMission_FarmsteadFort_C_OnCanceled_856A325D44ECC73B857CE5B32980C3E4_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_856A325D44ECC73B857CE5B32980C3E4
struct AMission_FarmsteadFort_C_OnAllClientsReady_856A325D44ECC73B857CE5B32980C3E4_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB06FB73C03
struct AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB06FB73C03_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB06FB73C03
struct AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB06FB73C03_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Basic Controls Hints
struct AMission_FarmsteadFort_C_Basic_Controls_Hints_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_ChestFirstDamaged
struct AMission_FarmsteadFort_C_HandleMissionEvent_ChestFirstDamaged_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerAtStairs
struct AMission_FarmsteadFort_C_HandleMissionEvent_PlayerAtStairs_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerEscapedPit
struct AMission_FarmsteadFort_C_HandleMissionEvent_PlayerEscapedPit_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerApproachingFort
struct AMission_FarmsteadFort_C_HandleMissionEvent_PlayerApproachingFort_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.placetrap
struct AMission_FarmsteadFort_C_placetrap_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Stop WallEdit
struct AMission_FarmsteadFort_C_Stop_WallEdit_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerAtBalcony
struct AMission_FarmsteadFort_C_HandleMissionEvent_PlayerAtBalcony_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Start AI ENCOUNTER
struct AMission_FarmsteadFort_C_Start_AI_ENCOUNTER_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.EncounterTimer
struct AMission_FarmsteadFort_C_EncounterTimer_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerPastBlocker
struct AMission_FarmsteadFort_C_HandleMissionEvent_PlayerPastBlocker_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_ShowMinimapObjective
struct AMission_FarmsteadFort_C_HandleMissionEvent_ShowMinimapObjective_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerAtWallEditing
struct AMission_FarmsteadFort_C_HandleMissionEvent_PlayerAtWallEditing_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerAtControlRoom
struct AMission_FarmsteadFort_C_HandleMissionEvent_PlayerAtControlRoom_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_RocketPreLaunchActivate
struct AMission_FarmsteadFort_C_HandleMissionEvent_RocketPreLaunchActivate_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_AirStrikeUsed
struct AMission_FarmsteadFort_C_HandleMissionEvent_AirStrikeUsed_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerHasMoved
struct AMission_FarmsteadFort_C_HandleMissionEvent_PlayerHasMoved_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CheckFiring
struct AMission_FarmsteadFort_C_CheckFiring_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopFinalEncounter
struct AMission_FarmsteadFort_C_StopFinalEncounter_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerHasFired
struct AMission_FarmsteadFort_C_HandleMissionEvent_PlayerHasFired_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.firehint
struct AMission_FarmsteadFort_C_firehint_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_Cine_Ramirez_Complete
struct AMission_FarmsteadFort_C_HandleMissionEvent_Cine_Ramirez_Complete_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ControlHintsOn
struct AMission_FarmsteadFort_C_ControlHintsOn_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CheckFiringNow
struct AMission_FarmsteadFort_C_CheckFiringNow_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_EnemyDamaged
struct AMission_FarmsteadFort_C_HandleMissionEvent_EnemyDamaged_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.prepareencounterend
struct AMission_FarmsteadFort_C_prepareencounterend_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.PlaceTrapsActivate
struct AMission_FarmsteadFort_C_PlaceTrapsActivate_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.BlockTrapNotification
struct AMission_FarmsteadFort_C_BlockTrapNotification_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerBuiltDoor
struct AMission_FarmsteadFort_C_HandleMissionEvent_PlayerBuiltDoor_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_ToggledEditMode
struct AMission_FarmsteadFort_C_HandleMissionEvent_ToggledEditMode_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopTrapCheck
struct AMission_FarmsteadFort_C_StopTrapCheck_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopDoorEditCheck
struct AMission_FarmsteadFort_C_StopDoorEditCheck_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerDied
struct AMission_FarmsteadFort_C_HandleMissionEvent_PlayerDied_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnMatchStarted
struct AMission_FarmsteadFort_C_OnMatchStarted_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Countdown
struct AMission_FarmsteadFort_C_Countdown_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StreamOutRocket
struct AMission_FarmsteadFort_C_StreamOutRocket_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FindWayOutOfCaves
struct AMission_FarmsteadFort_C_FindWayOutOfCaves_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.PlayerEscapedPit
struct AMission_FarmsteadFort_C_PlayerEscapedPit_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HarvestTwine
struct AMission_FarmsteadFort_C_HarvestTwine_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_MissionTreeDestroyed
struct AMission_FarmsteadFort_C_HandleMissionEvent_MissionTreeDestroyed_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.LockSchematics
struct AMission_FarmsteadFort_C_LockSchematics_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.UnlockAllSchematics
struct AMission_FarmsteadFort_C_UnlockAllSchematics_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RevealMap1
struct AMission_FarmsteadFort_C_RevealMap1_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RevealMap2
struct AMission_FarmsteadFort_C_RevealMap2_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.LoopingCheckoreCount_Copy
struct AMission_FarmsteadFort_C_LoopingCheckoreCount_Copy_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.checkmetalevent_Copy
struct AMission_FarmsteadFort_C_checkmetalevent_Copy_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SkipOutsideHarvestingTutorial
struct AMission_FarmsteadFort_C_SkipOutsideHarvestingTutorial_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartTwineLoopingCheck
struct AMission_FarmsteadFort_C_StartTwineLoopingCheck_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopTwineLoopingCheck
struct AMission_FarmsteadFort_C_StopTwineLoopingCheck_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartNutsBoltsLoopingCheck
struct AMission_FarmsteadFort_C_StartNutsBoltsLoopingCheck_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopNutsBoltLoopingCheck
struct AMission_FarmsteadFort_C_StopNutsBoltLoopingCheck_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_GiveGun
struct AMission_FarmsteadFort_C_HandleMissionEvent_GiveGun_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.checkevent_Copy
struct AMission_FarmsteadFort_C_checkevent_Copy_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartOutsideResourceChecker
struct AMission_FarmsteadFort_C_StartOutsideResourceChecker_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopOutsideResourceChecker
struct AMission_FarmsteadFort_C_StopOutsideResourceChecker_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CraftGunTutorial
struct AMission_FarmsteadFort_C_CraftGunTutorial_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_MissionVehicleDestroyed
struct AMission_FarmsteadFort_C_HandleMissionEvent_MissionVehicleDestroyed_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.IncomingDialog
struct AMission_FarmsteadFort_C_IncomingDialog_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.remindertogettofort
struct AMission_FarmsteadFort_C_remindertogettofort_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_ToggledCursorMode
struct AMission_FarmsteadFort_C_HandleMissionEvent_ToggledCursorMode_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ShowGunPing
struct AMission_FarmsteadFort_C_ShowGunPing_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ShowAllOutsideResourceList
struct AMission_FarmsteadFort_C_ShowAllOutsideResourceList_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.PlayerHasMoved
struct AMission_FarmsteadFort_C_PlayerHasMoved_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_LaunchRocket
struct AMission_FarmsteadFort_C_HandleMissionEvent_LaunchRocket_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnStairsBuilt
struct AMission_FarmsteadFort_C_OnStairsBuilt_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.checkmetalevent_Copy_Copy
struct AMission_FarmsteadFort_C_checkmetalevent_Copy_Copy_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartMechanicalLoopingCheck
struct AMission_FarmsteadFort_C_StartMechanicalLoopingCheck_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopMechanicalLoopingCheck
struct AMission_FarmsteadFort_C_StopMechanicalLoopingCheck_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartFirstEncounter
struct AMission_FarmsteadFort_C_StartFirstEncounter_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerSpawned
struct AMission_FarmsteadFort_C_HandleMissionEvent_PlayerSpawned_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerDBNOEnter
struct AMission_FarmsteadFort_C_HandleMissionEvent_PlayerDBNOEnter_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.EncounterCompleted
struct AMission_FarmsteadFort_C_EncounterCompleted_Params
{
	class UFortAIEncounterInfo*                        Encounter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccessfullyCompleted;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FirstEncounterComplete
struct AMission_FarmsteadFort_C_FirstEncounterComplete_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerDBNORevived
struct AMission_FarmsteadFort_C_HandleMissionEvent_PlayerDBNORevived_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.DisableLaserWalls
struct AMission_FarmsteadFort_C_DisableLaserWalls_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerBuilt
struct AMission_FarmsteadFort_C_HandleMissionEvent_PlayerBuilt_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartFortAssault
struct AMission_FarmsteadFort_C_StartFortAssault_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_ForveKillAIEncounter
struct AMission_FarmsteadFort_C_HandleMissionEvent_ForveKillAIEncounter_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.IsPlayerNearTheRocks
struct AMission_FarmsteadFort_C_IsPlayerNearTheRocks_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RemindPlayerHowToHarvest
struct AMission_FarmsteadFort_C_RemindPlayerHowToHarvest_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.GoToRocketRoom
struct AMission_FarmsteadFort_C_GoToRocketRoom_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnEncounter
struct AMission_FarmsteadFort_C_SpawnEncounter_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartFortAttack
struct AMission_FarmsteadFort_C_StartFortAttack_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopPreEncounter
struct AMission_FarmsteadFort_C_StopPreEncounter_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnSmasherSpawned
struct AMission_FarmsteadFort_C_OnSmasherSpawned_Params
{
	class UFortAIEncounterInfo*                        Encounter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortAIPawn*                                 SpawnedEnemy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_RocketHasBluglo
struct AMission_FarmsteadFort_C_HandleMissionEvent_RocketHasBluglo_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_OBJ_22_Activate
struct AMission_FarmsteadFort_C_HandleMissionEvent_OBJ_22_Activate_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_OBJ_22_Completed
struct AMission_FarmsteadFort_C_HandleMissionEvent_OBJ_22_Completed_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OhNoFailedSound
struct AMission_FarmsteadFort_C_OhNoFailedSound_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_BlugloReminder
struct AMission_FarmsteadFort_C_HandleMissionEvent_BlugloReminder_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartFortPreAttack
struct AMission_FarmsteadFort_C_StartFortPreAttack_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ForceStopPreEncounter
struct AMission_FarmsteadFort_C_ForceStopPreEncounter_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.PrepareForAirStrikeAbility
struct AMission_FarmsteadFort_C_PrepareForAirStrikeAbility_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Airstrike
struct AMission_FarmsteadFort_C_Airstrike_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_EnemyKilled
struct AMission_FarmsteadFort_C_HandleMissionEvent_EnemyKilled_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerAtSurvivors
struct AMission_FarmsteadFort_C_HandleMissionEvent_PlayerAtSurvivors_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.AirstrikeNowOnline
struct AMission_FarmsteadFort_C_AirstrikeNowOnline_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.AirStrikeReady
struct AMission_FarmsteadFort_C_AirStrikeReady_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartFakeStorm
struct AMission_FarmsteadFort_C_StartFakeStorm_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerNearHarvestingBoundary
struct AMission_FarmsteadFort_C_HandleMissionEvent_PlayerNearHarvestingBoundary_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.VortexVisibility
struct AMission_FarmsteadFort_C_VortexVisibility_Params
{
	bool                                               Visibility;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FightStarted
struct AMission_FarmsteadFort_C_FightStarted_Params
{
	class UFortAIEncounterInfo*                        Encounter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CinematicVortexVisibility
struct AMission_FarmsteadFort_C_CinematicVortexVisibility_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SkipToAttackWarning
struct AMission_FarmsteadFort_C_SkipToAttackWarning_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FadePlayerCamToBlack
struct AMission_FarmsteadFort_C_FadePlayerCamToBlack_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.fadeoutcam
struct AMission_FarmsteadFort_C_fadeoutcam_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_ItemCollected
struct AMission_FarmsteadFort_C_HandleMissionEvent_ItemCollected_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.VinderTipTimer
struct AMission_FarmsteadFort_C_VinderTipTimer_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.VinderTimerWallEditing
struct AMission_FarmsteadFort_C_VinderTimerWallEditing_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.hint
struct AMission_FarmsteadFort_C_hint_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_WallEdited
struct AMission_FarmsteadFort_C_HandleMissionEvent_WallEdited_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ShortcutCompleteEditingObj
struct AMission_FarmsteadFort_C_ShortcutCompleteEditingObj_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FirstEncounterMusicStart
struct AMission_FarmsteadFort_C_FirstEncounterMusicStart_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FirstEncounterMusicCompleted
struct AMission_FarmsteadFort_C_FirstEncounterMusicCompleted_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.playcavemusic
struct AMission_FarmsteadFort_C_playcavemusic_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OutsideMusicStart
struct AMission_FarmsteadFort_C_OutsideMusicStart_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FirstFortEncounterMusicStart
struct AMission_FarmsteadFort_C_FirstFortEncounterMusicStart_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopFirstFortEncounterMusic
struct AMission_FarmsteadFort_C_StopFirstFortEncounterMusic_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.InsideMusic
struct AMission_FarmsteadFort_C_InsideMusic_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RocketRoomMusicStart
struct AMission_FarmsteadFort_C_RocketRoomMusicStart_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RocketStartMusic
struct AMission_FarmsteadFort_C_RocketStartMusic_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RocketRoomDistressCallMusicStart
struct AMission_FarmsteadFort_C_RocketRoomDistressCallMusicStart_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.tensionmusic
struct AMission_FarmsteadFort_C_tensionmusic_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FinalEncounterMusicStart
struct AMission_FarmsteadFort_C_FinalEncounterMusicStart_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CountdownMusicStart
struct AMission_FarmsteadFort_C_CountdownMusicStart_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.smasherdialog
struct AMission_FarmsteadFort_C_smasherdialog_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.cont
struct AMission_FarmsteadFort_C_cont_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.nice
struct AMission_FarmsteadFort_C_nice_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.excbuilding
struct AMission_FarmsteadFort_C_excbuilding_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.delayme
struct AMission_FarmsteadFort_C_delayme_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.UniqueOBJSOund
struct AMission_FarmsteadFort_C_UniqueOBJSOund_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.fallback
struct AMission_FarmsteadFort_C_fallback_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CacemeustomEvent_1
struct AMission_FarmsteadFort_C_CacemeustomEvent_1_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnWeaponEquippedDelegate_Event_1
struct AMission_FarmsteadFort_C_OnWeaponEquippedDelegate_Event_1_Params
{
	class AFortWeapon*                                 NewWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortWeapon*                                 PrevWeapon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StickSelectedMineCart
struct AMission_FarmsteadFort_C_StickSelectedMineCart_Params
{
	bool                                               StickActive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_ItemCrafted
struct AMission_FarmsteadFort_C_HandleMissionEvent_ItemCrafted_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SkipCrafting
struct AMission_FarmsteadFort_C_SkipCrafting_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StickSelectedMoveOn
struct AMission_FarmsteadFort_C_StickSelectedMoveOn_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.revealme
struct AMission_FarmsteadFort_C_revealme_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerInsideFort
struct AMission_FarmsteadFort_C_HandleMissionEvent_PlayerInsideFort_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RefreshBlugloCount
struct AMission_FarmsteadFort_C_RefreshBlugloCount_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RemoveEditingVindertip
struct AMission_FarmsteadFort_C_RemoveEditingVindertip_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.DestroyStairsVindertip
struct AMission_FarmsteadFort_C_DestroyStairsVindertip_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Stick Selected Harvesting Alt
struct AMission_FarmsteadFort_C_Stick_Selected_Harvesting_Alt_Params
{
	bool                                               StickActive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.BlockHarvestAnnoucements
struct AMission_FarmsteadFort_C_BlockHarvestAnnoucements_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.fallbacktimer
struct AMission_FarmsteadFort_C_fallbacktimer_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.endtut
struct AMission_FarmsteadFort_C_endtut_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.teleportplayer
struct AMission_FarmsteadFort_C_teleportplayer_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.isplayeratpit
struct AMission_FarmsteadFort_C_isplayeratpit_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.checkdistance
struct AMission_FarmsteadFort_C_checkdistance_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.activate trap marker
struct AMission_FarmsteadFort_C_activate_trap_marker_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.checkwalldistance
struct AMission_FarmsteadFort_C_checkwalldistance_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartWallMarker
struct AMission_FarmsteadFort_C_StartWallMarker_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.enableoutsidemarker
struct AMission_FarmsteadFort_C_enableoutsidemarker_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.blockdialog
struct AMission_FarmsteadFort_C_blockdialog_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerAtCRNavigationMarker
struct AMission_FarmsteadFort_C_HandleMissionEvent_PlayerAtCRNavigationMarker_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.TeleportMarker
struct AMission_FarmsteadFort_C_TeleportMarker_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.PlayerEditModeToggled
struct AMission_FarmsteadFort_C_PlayerEditModeToggled_Params
{
	bool                                               IsPlayerInEditMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.PlayerInBuildingMode
struct AMission_FarmsteadFort_C_PlayerInBuildingMode_Params
{
	bool                                               BuildModeActive;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.lag
struct AMission_FarmsteadFort_C_lag_Params
{
	bool                                               bEnteredBuildMode;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopBuildingDynamicHints
struct AMission_FarmsteadFort_C_StopBuildingDynamicHints_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.checkmode
struct AMission_FarmsteadFort_C_checkmode_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FirstFortCinSkipped
struct AMission_FarmsteadFort_C_FirstFortCinSkipped_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.TrapBuildingMode
struct AMission_FarmsteadFort_C_TrapBuildingMode_Params
{
	bool                                               BuildingModeActive;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.BlockTrapAnnoucements
struct AMission_FarmsteadFort_C_BlockTrapAnnoucements_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.trapmode
struct AMission_FarmsteadFort_C_trapmode_Params
{
	bool                                               bEnteredBuildMode;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.MoveFortMarker
struct AMission_FarmsteadFort_C_MoveFortMarker_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.AutocancelAirstrikeNotif
struct AMission_FarmsteadFort_C_AutocancelAirstrikeNotif_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.BlockHarvest
struct AMission_FarmsteadFort_C_BlockHarvest_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_Ragnarok
struct AMission_FarmsteadFort_C_HandleMissionEvent_Ragnarok_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.stormadvance
struct AMission_FarmsteadFort_C_stormadvance_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.sideattack
struct AMission_FarmsteadFort_C_sideattack_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnSmasherKilled
struct AMission_FarmsteadFort_C_OnSmasherKilled_Params
{
	class UFortAIEncounterInfo*                        Encounter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerAtReassureSurvivor
struct AMission_FarmsteadFort_C_HandleMissionEvent_PlayerAtReassureSurvivor_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ForceStopFirstMusic
struct AMission_FarmsteadFort_C_ForceStopFirstMusic_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.checkdistancetorocket
struct AMission_FarmsteadFort_C_checkdistancetorocket_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnSecondSmasher
struct AMission_FarmsteadFort_C_SpawnSecondSmasher_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SetHealth
struct AMission_FarmsteadFort_C_SetHealth_Params
{
	class UFortAIEncounterInfo*                        Encounter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortAIPawn*                                 SpawnedEnemy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnAirStrikeBurstHusks
struct AMission_FarmsteadFort_C_SpawnAirStrikeBurstHusks_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Preairstrikenc
struct AMission_FarmsteadFort_C_Preairstrikenc_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.AdvanceStorm
struct AMission_FarmsteadFort_C_AdvanceStorm_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnLobbers
struct AMission_FarmsteadFort_C_SpawnLobbers_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnSecondSmasherNow
struct AMission_FarmsteadFort_C_SpawnSecondSmasherNow_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SecondSmasher
struct AMission_FarmsteadFort_C_SecondSmasher_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.dwarfs
struct AMission_FarmsteadFort_C_dwarfs_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SkipTrapTutorial
struct AMission_FarmsteadFort_C_SkipTrapTutorial_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.NiceDoorBro
struct AMission_FarmsteadFort_C_NiceDoorBro_Params
{
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ExecuteUbergraph_Mission_FarmsteadFort
struct AMission_FarmsteadFort_C_ExecuteUbergraph_Mission_FarmsteadFort_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ActivateEventAtLevelBlueprint__DelegateSignature
struct AMission_FarmsteadFort_C_ActivateEventAtLevelBlueprint__DelegateSignature_Params
{
	TEnumAsByte<Enum_LevelBlueprintOBEvents>           EventToSend;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
