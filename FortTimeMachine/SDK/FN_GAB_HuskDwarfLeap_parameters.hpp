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

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.K2_CanActivateAbility
struct UGAB_HuskDwarfLeap_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.Cancelled_CBB06DD545B56595CFFF06B2E6D07800
struct UGAB_HuskDwarfLeap_C_Cancelled_CBB06DD545B56595CFFF06B2E6D07800_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.Targeted_CBB06DD545B56595CFFF06B2E6D07800
struct UGAB_HuskDwarfLeap_C_Targeted_CBB06DD545B56595CFFF06B2E6D07800_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnCancelled_48EF415F4112E88BA579DDB3E574B1B2
struct UGAB_HuskDwarfLeap_C_OnCancelled_48EF415F4112E88BA579DDB3E574B1B2_Params
{
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnInterrupted_48EF415F4112E88BA579DDB3E574B1B2
struct UGAB_HuskDwarfLeap_C_OnInterrupted_48EF415F4112E88BA579DDB3E574B1B2_Params
{
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnBlendOut_48EF415F4112E88BA579DDB3E574B1B2
struct UGAB_HuskDwarfLeap_C_OnBlendOut_48EF415F4112E88BA579DDB3E574B1B2_Params
{
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnCompleted_48EF415F4112E88BA579DDB3E574B1B2
struct UGAB_HuskDwarfLeap_C_OnCompleted_48EF415F4112E88BA579DDB3E574B1B2_Params
{
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnCancelled_0A17B1564ADD76C7619FAFA6E9826AEF
struct UGAB_HuskDwarfLeap_C_OnCancelled_0A17B1564ADD76C7619FAFA6E9826AEF_Params
{
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnInterrupted_0A17B1564ADD76C7619FAFA6E9826AEF
struct UGAB_HuskDwarfLeap_C_OnInterrupted_0A17B1564ADD76C7619FAFA6E9826AEF_Params
{
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnBlendOut_0A17B1564ADD76C7619FAFA6E9826AEF
struct UGAB_HuskDwarfLeap_C_OnBlendOut_0A17B1564ADD76C7619FAFA6E9826AEF_Params
{
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnCompleted_0A17B1564ADD76C7619FAFA6E9826AEF
struct UGAB_HuskDwarfLeap_C_OnCompleted_0A17B1564ADD76C7619FAFA6E9826AEF_Params
{
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnCancelled_8DE1E2DE4743A41F47677B999617BA52
struct UGAB_HuskDwarfLeap_C_OnCancelled_8DE1E2DE4743A41F47677B999617BA52_Params
{
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnInterrupted_8DE1E2DE4743A41F47677B999617BA52
struct UGAB_HuskDwarfLeap_C_OnInterrupted_8DE1E2DE4743A41F47677B999617BA52_Params
{
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnBlendOut_8DE1E2DE4743A41F47677B999617BA52
struct UGAB_HuskDwarfLeap_C_OnBlendOut_8DE1E2DE4743A41F47677B999617BA52_Params
{
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnCompleted_8DE1E2DE4743A41F47677B999617BA52
struct UGAB_HuskDwarfLeap_C_OnCompleted_8DE1E2DE4743A41F47677B999617BA52_Params
{
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnCancelled_666B7CB24770D78F310B59B3BCC27DDB
struct UGAB_HuskDwarfLeap_C_OnCancelled_666B7CB24770D78F310B59B3BCC27DDB_Params
{
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnInterrupted_666B7CB24770D78F310B59B3BCC27DDB
struct UGAB_HuskDwarfLeap_C_OnInterrupted_666B7CB24770D78F310B59B3BCC27DDB_Params
{
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnBlendOut_666B7CB24770D78F310B59B3BCC27DDB
struct UGAB_HuskDwarfLeap_C_OnBlendOut_666B7CB24770D78F310B59B3BCC27DDB_Params
{
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnCompleted_666B7CB24770D78F310B59B3BCC27DDB
struct UGAB_HuskDwarfLeap_C_OnCompleted_666B7CB24770D78F310B59B3BCC27DDB_Params
{
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.K2_ActivateAbility
struct UGAB_HuskDwarfLeap_C_K2_ActivateAbility_Params
{
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.K2_OnEndAbility
struct UGAB_HuskDwarfLeap_C_K2_OnEndAbility_Params
{
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.CommitAndEndAbility
struct UGAB_HuskDwarfLeap_C_CommitAndEndAbility_Params
{
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnPawnLanded
struct UGAB_HuskDwarfLeap_C_OnPawnLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnHitPawn
struct UGAB_HuskDwarfLeap_C_OnHitPawn_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.UnbindEvents
struct UGAB_HuskDwarfLeap_C_UnbindEvents_Params
{
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.BindEvents
struct UGAB_HuskDwarfLeap_C_BindEvents_Params
{
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnReachedJumpApex
struct UGAB_HuskDwarfLeap_C_OnReachedJumpApex_Params
{
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.ResetDoOnce
struct UGAB_HuskDwarfLeap_C_ResetDoOnce_Params
{
};

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.ExecuteUbergraph_GAB_HuskDwarfLeap
struct UGAB_HuskDwarfLeap_C_ExecuteUbergraph_GAB_HuskDwarfLeap_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
