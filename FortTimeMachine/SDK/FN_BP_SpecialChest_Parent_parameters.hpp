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

// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.OnRep_ShowArrowHint
struct ABP_SpecialChest_Parent_C_OnRep_ShowArrowHint_Params
{
};

// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.OnRep_IsSearched
struct ABP_SpecialChest_Parent_C_OnRep_IsSearched_Params
{
};

// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.BlueprintCanInteract
struct ABP_SpecialChest_Parent_C_BlueprintCanInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.UserConstructionScript
struct ABP_SpecialChest_Parent_C_UserConstructionScript_Params
{
};

// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.BlueprintOnInteract
struct ABP_SpecialChest_Parent_C_BlueprintOnInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.OnDamagePlayEffects
struct ABP_SpecialChest_Parent_C_OnDamagePlayEffects_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.OnDeathPlayEffects
struct ABP_SpecialChest_Parent_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.BlueprintOnBeginInteract
struct ABP_SpecialChest_Parent_C_BlueprintOnBeginInteract_Params
{
};

// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.ReceiveBeginPlay
struct ABP_SpecialChest_Parent_C_ReceiveBeginPlay_Params
{
};

// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.OnDamageServer
struct ABP_SpecialChest_Parent_C_OnDamageServer_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.Searched
struct ABP_SpecialChest_Parent_C_Searched_Params
{
};

// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.ReceiveDestroyed
struct ABP_SpecialChest_Parent_C_ReceiveDestroyed_Params
{
};

// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.ExecuteUbergraph_BP_SpecialChest_Parent
struct ABP_SpecialChest_Parent_C_ExecuteUbergraph_BP_SpecialChest_Parent_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
