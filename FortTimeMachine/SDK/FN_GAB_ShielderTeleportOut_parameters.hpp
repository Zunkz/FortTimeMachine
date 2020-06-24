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

// Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.Completed_04B647A04AB380AFDCCBD9B139883995
struct UGAB_ShielderTeleportOut_C_Completed_04B647A04AB380AFDCCBD9B139883995_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.Cancelled_04B647A04AB380AFDCCBD9B139883995
struct UGAB_ShielderTeleportOut_C_Cancelled_04B647A04AB380AFDCCBD9B139883995_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.Triggered_04B647A04AB380AFDCCBD9B139883995
struct UGAB_ShielderTeleportOut_C_Triggered_04B647A04AB380AFDCCBD9B139883995_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.K2_ActivateAbilityFromEvent
struct UGAB_ShielderTeleportOut_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.K2_OnEndAbility
struct UGAB_ShielderTeleportOut_C_K2_OnEndAbility_Params
{
};

// Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.ExecuteUbergraph_GAB_ShielderTeleportOut
struct UGAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
