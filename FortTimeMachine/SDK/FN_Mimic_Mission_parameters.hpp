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

// Function Mimic_Mission.Mimic_Mission_C.OnMimicSpawned
struct AMimic_Mission_C_OnMimicSpawned_Params
{
	class AHuskPawn_Mimic_C*                           MimicPawn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mimic_Mission.Mimic_Mission_C.OnChestInteract
struct AMimic_Mission_C_OnChestInteract_Params
{
};

// Function Mimic_Mission.Mimic_Mission_C.HideFoundMimicText
struct AMimic_Mission_C_HideFoundMimicText_Params
{
};

// Function Mimic_Mission.Mimic_Mission_C.InitializeMimicChest
struct AMimic_Mission_C_InitializeMimicChest_Params
{
	class AMimic_Chest_C*                              MimicChest;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWakeOnDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mimic_Mission.Mimic_Mission_C.TryGiveRewards
struct AMimic_Mission_C_TryGiveRewards_Params
{
};

// Function Mimic_Mission.Mimic_Mission_C.RestartDormantChest
struct AMimic_Mission_C_RestartDormantChest_Params
{
};

// Function Mimic_Mission.Mimic_Mission_C.InitMission
struct AMimic_Mission_C_InitMission_Params
{
};

// Function Mimic_Mission.Mimic_Mission_C.UserConstructionScript
struct AMimic_Mission_C_UserConstructionScript_Params
{
};

// Function Mimic_Mission.Mimic_Mission_C.HandleMissionEvent_MissionSucceeded
struct AMimic_Mission_C_HandleMissionEvent_MissionSucceeded_Params
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

// Function Mimic_Mission.Mimic_Mission_C.HandleMissionEvent_ObjectiveSucceeded
struct AMimic_Mission_C_HandleMissionEvent_ObjectiveSucceeded_Params
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

// Function Mimic_Mission.Mimic_Mission_C.HandleMissionEvent_LocateSecondary
struct AMimic_Mission_C_HandleMissionEvent_LocateSecondary_Params
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

// Function Mimic_Mission.Mimic_Mission_C.OnMimicDied_Event
struct AMimic_Mission_C_OnMimicDied_Event_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, IsPlainOldData)
};

// Function Mimic_Mission.Mimic_Mission_C.OnEncounterEnemySpawned
struct AMimic_Mission_C_OnEncounterEnemySpawned_Params
{
	class UFortAIEncounterInfo*                        Encounter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortAIPawn*                                 SpawnedEnemy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mimic_Mission.Mimic_Mission_C.OnInteractingPlayerDied_Event
struct AMimic_Mission_C_OnInteractingPlayerDied_Event_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, IsPlainOldData)
};

// Function Mimic_Mission.Mimic_Mission_C.OnMimicChestDamaged
struct AMimic_Mission_C_OnMimicChestDamaged_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, IsPlainOldData)
};

// Function Mimic_Mission.Mimic_Mission_C.BlueprintOnActivated
struct AMimic_Mission_C_BlueprintOnActivated_Params
{
};

// Function Mimic_Mission.Mimic_Mission_C.Event_OnMimicDestroyed
struct AMimic_Mission_C_Event_OnMimicDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mimic_Mission.Mimic_Mission_C.ExecuteUbergraph_Mimic_Mission
struct AMimic_Mission_C_ExecuteUbergraph_Mimic_Mission_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
