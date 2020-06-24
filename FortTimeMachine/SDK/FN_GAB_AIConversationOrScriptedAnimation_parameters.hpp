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

// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.Completed_0DEF95174D4614F4567B4E8B836FDE6F
struct UGAB_AIConversationOrScriptedAnimation_C_Completed_0DEF95174D4614F4567B4E8B836FDE6F_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.Cancelled_0DEF95174D4614F4567B4E8B836FDE6F
struct UGAB_AIConversationOrScriptedAnimation_C_Cancelled_0DEF95174D4614F4567B4E8B836FDE6F_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.Triggered_0DEF95174D4614F4567B4E8B836FDE6F
struct UGAB_AIConversationOrScriptedAnimation_C_Triggered_0DEF95174D4614F4567B4E8B836FDE6F_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.K2_ActivateAbilityFromEvent
struct UGAB_AIConversationOrScriptedAnimation_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation
struct UGAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
