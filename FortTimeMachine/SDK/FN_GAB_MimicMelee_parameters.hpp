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

// Function GAB_MimicMelee.GAB_MimicMelee_C.GameplayEffectContainerApplied
struct UGAB_MimicMelee_C_GameplayEffectContainerApplied_Params
{
	struct FGameplayAbilityTargetDataHandle*           Target_Data;                                              // (Parm)
};

// Function GAB_MimicMelee.GAB_MimicMelee_C.ExecuteUbergraph_GAB_MimicMelee
struct UGAB_MimicMelee_C_ExecuteUbergraph_GAB_MimicMelee_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
