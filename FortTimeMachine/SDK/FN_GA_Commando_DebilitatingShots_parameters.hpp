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

// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupAbility
struct UGA_Commando_DebilitatingShots_C_SetupAbility_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupDebilitationTraining
struct UGA_Commando_DebilitatingShots_C_SetupDebilitationTraining_Params
{
	struct FGameplayEffectSpecHandle                   EffectspecOutInstant;                                     // (Parm, OutParm)
	struct FGameplayEffectSpecHandle                   EffectspecOutDuration;                                    // (Parm, OutParm)
};

// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupAppliedEffect
struct UGA_Commando_DebilitatingShots_C_SetupAppliedEffect_Params
{
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Stack_Count;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectSpecHandle                   EffectSpecHandle;                                         // (Parm)
	struct FGameplayEffectSpecHandle                   EffectspecHandleOut;                                      // (Parm, OutParm)
};

// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupGameplayEffect
struct UGA_Commando_DebilitatingShots_C_SetupGameplayEffect_Params
{
	struct FGameplayTag                                EventTag;                                                 // (Parm)
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle            Target_Data;                                              // (Parm, OutParm)
	class UClass*                                      DebilitatingShots;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Effect_Level;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Stack_Count;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.K2_ShouldAbilityRespondToEvent
struct UGA_Commando_DebilitatingShots_C_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (Parm)
	struct FGameplayEventData*                         Payload;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.K2_ActivateAbilityFromEvent
struct UGA_Commando_DebilitatingShots_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.ExecuteUbergraph_GA_Commando_DebilitatingShots
struct UGA_Commando_DebilitatingShots_C_ExecuteUbergraph_GA_Commando_DebilitatingShots_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
