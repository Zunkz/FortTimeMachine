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

// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.K2_ActivateAbilityFromEvent
struct UGAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.ExecuteUbergraph_GAT_TriggeredAbility
struct UGAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
