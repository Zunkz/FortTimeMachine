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

// Function OB_BlockerRock_01.OB_BlockerRock_01_C.OnRep_Highlight
struct AOB_BlockerRock_01_C_OnRep_Highlight_Params
{
};

// Function OB_BlockerRock_01.OB_BlockerRock_01_C.OnRep_MiniMapIconVisible
struct AOB_BlockerRock_01_C_OnRep_MiniMapIconVisible_Params
{
};

// Function OB_BlockerRock_01.OB_BlockerRock_01_C.UserConstructionScript
struct AOB_BlockerRock_01_C_UserConstructionScript_Params
{
};

// Function OB_BlockerRock_01.OB_BlockerRock_01_C.ReceiveBeginPlay
struct AOB_BlockerRock_01_C_ReceiveBeginPlay_Params
{
};

// Function OB_BlockerRock_01.OB_BlockerRock_01_C.Died
struct AOB_BlockerRock_01_C_Died_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OB_BlockerRock_01.OB_BlockerRock_01_C.OnDamageServer
struct AOB_BlockerRock_01_C_OnDamageServer_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function OB_BlockerRock_01.OB_BlockerRock_01_C.hint
struct AOB_BlockerRock_01_C_hint_Params
{
};

// Function OB_BlockerRock_01.OB_BlockerRock_01_C.DisableEmitter
struct AOB_BlockerRock_01_C_DisableEmitter_Params
{
};

// Function OB_BlockerRock_01.OB_BlockerRock_01_C.OnDeathServer
struct AOB_BlockerRock_01_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function OB_BlockerRock_01.OB_BlockerRock_01_C.BndEvt__playerinsideshape_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AOB_BlockerRock_01_C_BndEvt__playerinsideshape_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function OB_BlockerRock_01.OB_BlockerRock_01_C.BndEvt__playerinsideshape_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
struct AOB_BlockerRock_01_C_BndEvt__playerinsideshape_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OB_BlockerRock_01.OB_BlockerRock_01_C.HandleMissionEvent_OBJ_21_Complete
struct AOB_BlockerRock_01_C_HandleMissionEvent_OBJ_21_Complete_Params
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

// Function OB_BlockerRock_01.OB_BlockerRock_01_C.AnalyticsEvent
struct AOB_BlockerRock_01_C_AnalyticsEvent_Params
{
};

// Function OB_BlockerRock_01.OB_BlockerRock_01_C.ExecuteUbergraph_OB_BlockerRock_01
struct AOB_BlockerRock_01_C_ExecuteUbergraph_OB_BlockerRock_01_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
