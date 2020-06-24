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

// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.Completed_8BD132F745BDCD15EBF232861F392E7B
struct UGAB_SurvivorRescue_C_Completed_8BD132F745BDCD15EBF232861F392E7B_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.Cancelled_8BD132F745BDCD15EBF232861F392E7B
struct UGAB_SurvivorRescue_C_Cancelled_8BD132F745BDCD15EBF232861F392E7B_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.Triggered_8BD132F745BDCD15EBF232861F392E7B
struct UGAB_SurvivorRescue_C_Triggered_8BD132F745BDCD15EBF232861F392E7B_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.EventReceived_AE3E49574CEC70DFC62B01973CCF7515
struct UGAB_SurvivorRescue_C_EventReceived_AE3E49574CEC70DFC62B01973CCF7515_Params
{
	struct FGameplayEventData                          Payload;                                                  // (Parm)
};

// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.K2_ActivateAbilityFromEvent
struct UGAB_SurvivorRescue_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.SpawnVictoryDrone
struct UGAB_SurvivorRescue_C_SpawnVictoryDrone_Params
{
};

// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.RescueComplete
struct UGAB_SurvivorRescue_C_RescueComplete_Params
{
};

// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.PlayRescueAnimation
struct UGAB_SurvivorRescue_C_PlayRescueAnimation_Params
{
};

// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.K2_OnEndAbility
struct UGAB_SurvivorRescue_C_K2_OnEndAbility_Params
{
};

// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.WaitForFinishRescueEvent
struct UGAB_SurvivorRescue_C_WaitForFinishRescueEvent_Params
{
};

// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.ExecuteUbergraph_GAB_SurvivorRescue
struct UGAB_SurvivorRescue_C_ExecuteUbergraph_GAB_SurvivorRescue_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
