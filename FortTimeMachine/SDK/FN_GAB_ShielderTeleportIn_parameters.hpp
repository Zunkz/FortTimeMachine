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

// Function GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.Completed_B576F3AF456E16FEAB9BCCB307590576
struct UGAB_ShielderTeleportIn_C_Completed_B576F3AF456E16FEAB9BCCB307590576_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.Cancelled_B576F3AF456E16FEAB9BCCB307590576
struct UGAB_ShielderTeleportIn_C_Cancelled_B576F3AF456E16FEAB9BCCB307590576_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.Triggered_B576F3AF456E16FEAB9BCCB307590576
struct UGAB_ShielderTeleportIn_C_Triggered_B576F3AF456E16FEAB9BCCB307590576_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.K2_ActivateAbilityFromEvent
struct UGAB_ShielderTeleportIn_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.ExecuteUbergraph_GAB_ShielderTeleportIn
struct UGAB_ShielderTeleportIn_C_ExecuteUbergraph_GAB_ShielderTeleportIn_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
