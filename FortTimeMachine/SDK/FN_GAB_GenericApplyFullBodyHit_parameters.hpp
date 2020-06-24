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

// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.K2_CanActivateAbility
struct UGAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnCancelled_25E5E66442E815EB40A6DB8205FE0D98
struct UGAB_GenericApplyFullBodyHit_C_OnCancelled_25E5E66442E815EB40A6DB8205FE0D98_Params
{
};

// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnInterrupted_25E5E66442E815EB40A6DB8205FE0D98
struct UGAB_GenericApplyFullBodyHit_C_OnInterrupted_25E5E66442E815EB40A6DB8205FE0D98_Params
{
};

// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnBlendOut_25E5E66442E815EB40A6DB8205FE0D98
struct UGAB_GenericApplyFullBodyHit_C_OnBlendOut_25E5E66442E815EB40A6DB8205FE0D98_Params
{
};

// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnCompleted_25E5E66442E815EB40A6DB8205FE0D98
struct UGAB_GenericApplyFullBodyHit_C_OnCompleted_25E5E66442E815EB40A6DB8205FE0D98_Params
{
};

// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.K2_OnEndAbility
struct UGAB_GenericApplyFullBodyHit_C_K2_OnEndAbility_Params
{
};

// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnHitPawn
struct UGAB_GenericApplyFullBodyHit_C_OnHitPawn_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.K2_ActivateAbilityFromEvent
struct UGAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.PickFullBodyHitMontageSection
struct UGAB_GenericApplyFullBodyHit_C_PickFullBodyHitMontageSection_Params
{
};

// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.ExecuteUbergraph_GAB_GenericApplyFullBodyHit
struct UGAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
