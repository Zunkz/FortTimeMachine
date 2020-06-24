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

// Function GAB_SmasherBump.GAB_SmasherBump_C.K2_ActivateAbilityFromEvent
struct UGAB_SmasherBump_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GAB_SmasherBump.GAB_SmasherBump_C.ExecuteUbergraph_GAB_SmasherBump
struct UGAB_SmasherBump_C_ExecuteUbergraph_GAB_SmasherBump_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
