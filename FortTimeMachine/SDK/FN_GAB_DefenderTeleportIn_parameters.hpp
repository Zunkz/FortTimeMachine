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

// Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.Completed_AB4032854FBBB4B8A040B49C764FCC63
struct UGAB_DefenderTeleportIn_C_Completed_AB4032854FBBB4B8A040B49C764FCC63_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.Cancelled_AB4032854FBBB4B8A040B49C764FCC63
struct UGAB_DefenderTeleportIn_C_Cancelled_AB4032854FBBB4B8A040B49C764FCC63_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.Triggered_AB4032854FBBB4B8A040B49C764FCC63
struct UGAB_DefenderTeleportIn_C_Triggered_AB4032854FBBB4B8A040B49C764FCC63_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.OnFinish_77E3180049F2EF461DEF169ADDF46A93
struct UGAB_DefenderTeleportIn_C_OnFinish_77E3180049F2EF461DEF169ADDF46A93_Params
{
};

// Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.K2_OnEndAbility
struct UGAB_DefenderTeleportIn_C_K2_OnEndAbility_Params
{
};

// Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.K2_ActivateAbilityFromEvent
struct UGAB_DefenderTeleportIn_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.FinishTeleportIn
struct UGAB_DefenderTeleportIn_C_FinishTeleportIn_Params
{
};

// Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.RetryTeleportIn
struct UGAB_DefenderTeleportIn_C_RetryTeleportIn_Params
{
};

// Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.OnQueryFinishedEvent_Event_1
struct UGAB_DefenderTeleportIn_C_OnQueryFinishedEvent_Event_1_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.ExecuteUbergraph_GAB_DefenderTeleportIn
struct UGAB_DefenderTeleportIn_C_ExecuteUbergraph_GAB_DefenderTeleportIn_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
