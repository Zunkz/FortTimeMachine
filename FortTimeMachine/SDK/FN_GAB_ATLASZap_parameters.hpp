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

// Function GAB_ATLASZap.GAB_ATLASZap_C.K2_ActivateAbilityFromEvent
struct UGAB_ATLASZap_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GAB_ATLASZap.GAB_ATLASZap_C.ExecuteUbergraph_GAB_ATLASZap
struct UGAB_ATLASZap_C_ExecuteUbergraph_GAB_ATLASZap_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
