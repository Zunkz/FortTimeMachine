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

// Function GAB_ShielderSummonShield.GAB_ShielderSummonShield_C.Completed_A740968F4C3C1AF2475795BD1818ADA3
struct UGAB_ShielderSummonShield_C_Completed_A740968F4C3C1AF2475795BD1818ADA3_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_ShielderSummonShield.GAB_ShielderSummonShield_C.Cancelled_A740968F4C3C1AF2475795BD1818ADA3
struct UGAB_ShielderSummonShield_C_Cancelled_A740968F4C3C1AF2475795BD1818ADA3_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_ShielderSummonShield.GAB_ShielderSummonShield_C.Triggered_A740968F4C3C1AF2475795BD1818ADA3
struct UGAB_ShielderSummonShield_C_Triggered_A740968F4C3C1AF2475795BD1818ADA3_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_ShielderSummonShield.GAB_ShielderSummonShield_C.K2_ActivateAbilityFromEvent
struct UGAB_ShielderSummonShield_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GAB_ShielderSummonShield.GAB_ShielderSummonShield_C.ExecuteUbergraph_GAB_ShielderSummonShield
struct UGAB_ShielderSummonShield_C_ExecuteUbergraph_GAB_ShielderSummonShield_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
