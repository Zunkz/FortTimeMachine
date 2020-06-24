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

// Function GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C.Completed_50776FD24FD2018ECF8A639C63CF78FD
struct UGAB_DefenderTeleportOut_C_Completed_50776FD24FD2018ECF8A639C63CF78FD_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C.Cancelled_50776FD24FD2018ECF8A639C63CF78FD
struct UGAB_DefenderTeleportOut_C_Cancelled_50776FD24FD2018ECF8A639C63CF78FD_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C.Triggered_50776FD24FD2018ECF8A639C63CF78FD
struct UGAB_DefenderTeleportOut_C_Triggered_50776FD24FD2018ECF8A639C63CF78FD_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C.OnFinish_B28F01814A0C99AE17678C879A72D408
struct UGAB_DefenderTeleportOut_C_OnFinish_B28F01814A0C99AE17678C879A72D408_Params
{
};

// Function GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C.K2_ActivateAbilityFromEvent
struct UGAB_DefenderTeleportOut_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C.K2_OnEndAbility
struct UGAB_DefenderTeleportOut_C_K2_OnEndAbility_Params
{
};

// Function GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C.SpawnDrone
struct UGAB_DefenderTeleportOut_C_SpawnDrone_Params
{
};

// Function GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C.ExecuteUbergraph_GAB_DefenderTeleportOut
struct UGAB_DefenderTeleportOut_C_ExecuteUbergraph_GAB_DefenderTeleportOut_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
