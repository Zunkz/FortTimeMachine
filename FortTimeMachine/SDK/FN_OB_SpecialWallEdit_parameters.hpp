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

// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.OnRep_EditingEffects
struct AOB_SpecialWallEdit_C_OnRep_EditingEffects_Params
{
};

// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.OnRep_DisableHint
struct AOB_SpecialWallEdit_C_OnRep_DisableHint_Params
{
};

// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.OnRep_ArrowHintActive
struct AOB_SpecialWallEdit_C_OnRep_ArrowHintActive_Params
{
};

// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.OnRep_isDestroyed
struct AOB_SpecialWallEdit_C_OnRep_isDestroyed_Params
{
};

// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.UserConstructionScript
struct AOB_SpecialWallEdit_C_UserConstructionScript_Params
{
};

// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.OnCanceled_1A19862C47F5B5512EBB1BB0BD6E4C8D
struct AOB_SpecialWallEdit_C_OnCanceled_1A19862C47F5B5512EBB1BB0BD6E4C8D_Params
{
};

// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0BD6E4C8D
struct AOB_SpecialWallEdit_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0BD6E4C8D_Params
{
};

// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.OnDamageServer
struct AOB_SpecialWallEdit_C_OnDamageServer_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.ReceiveDestroyed
struct AOB_SpecialWallEdit_C_ReceiveDestroyed_Params
{
};

// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.HandleMissionEvent_PlayerAtControlRoom
struct AOB_SpecialWallEdit_C_HandleMissionEvent_PlayerAtControlRoom_Params
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

// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.BndEvt__Box_K2Node_ComponentBoundEvent_426_ComponentBeginOverlapSignature__DelegateSignature
struct AOB_SpecialWallEdit_C_BndEvt__Box_K2Node_ComponentBoundEvent_426_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.HandleMissionEvent_ToggledEditMode
struct AOB_SpecialWallEdit_C_HandleMissionEvent_ToggledEditMode_Params
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

// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.HandleMissionEvent_BuildingEdited
struct AOB_SpecialWallEdit_C_HandleMissionEvent_BuildingEdited_Params
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

// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.BndEvt__Box1_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature
struct AOB_SpecialWallEdit_C_BndEvt__Box1_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.OnDeathServer
struct AOB_SpecialWallEdit_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.ExecuteUbergraph_OB_SpecialWallEdit
struct AOB_SpecialWallEdit_C_ExecuteUbergraph_OB_SpecialWallEdit_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
