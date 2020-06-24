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

// Function Mimic_Chest.Mimic_Chest_C.BlueprintGetInteractionString
struct AMimic_Chest_C_BlueprintGetInteractionString_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mimic_Chest.Mimic_Chest_C.OnRep_bBlockedByStairs?
struct AMimic_Chest_C_OnRep_bBlockedByStairs__Params
{
};

// Function Mimic_Chest.Mimic_Chest_C.BlueprintCanInteract
struct AMimic_Chest_C_BlueprintCanInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mimic_Chest.Mimic_Chest_C.UserConstructionScript
struct AMimic_Chest_C_UserConstructionScript_Params
{
};

// Function Mimic_Chest.Mimic_Chest_C.Twitch__FinishedFunc
struct AMimic_Chest_C_Twitch__FinishedFunc_Params
{
};

// Function Mimic_Chest.Mimic_Chest_C.Twitch__UpdateFunc
struct AMimic_Chest_C_Twitch__UpdateFunc_Params
{
};

// Function Mimic_Chest.Mimic_Chest_C.OnDeathPlayEffects
struct AMimic_Chest_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function Mimic_Chest.Mimic_Chest_C.BlueprintOnBeginInteract
struct AMimic_Chest_C_BlueprintOnBeginInteract_Params
{
};

// Function Mimic_Chest.Mimic_Chest_C.ReceiveBeginPlay
struct AMimic_Chest_C_ReceiveBeginPlay_Params
{
};

// Function Mimic_Chest.Mimic_Chest_C.BlueprintOnInteract
struct AMimic_Chest_C_BlueprintOnInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mimic_Chest.Mimic_Chest_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature
struct AMimic_Chest_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Mimic_Chest.Mimic_Chest_C.ExecuteUbergraph_Mimic_Chest
struct AMimic_Chest_C_ExecuteUbergraph_Mimic_Chest_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
