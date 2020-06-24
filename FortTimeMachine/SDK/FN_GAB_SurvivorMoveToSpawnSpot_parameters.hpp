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

// Function GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C.K2_CanActivateAbility
struct UGAB_SurvivorMoveToSpawnSpot_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C.OnCancelled_7777C42B4A977A34DD6FB2A03D4ED3A6
struct UGAB_SurvivorMoveToSpawnSpot_C_OnCancelled_7777C42B4A977A34DD6FB2A03D4ED3A6_Params
{
};

// Function GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C.OnInterrupted_7777C42B4A977A34DD6FB2A03D4ED3A6
struct UGAB_SurvivorMoveToSpawnSpot_C_OnInterrupted_7777C42B4A977A34DD6FB2A03D4ED3A6_Params
{
};

// Function GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C.OnComplete_7777C42B4A977A34DD6FB2A03D4ED3A6
struct UGAB_SurvivorMoveToSpawnSpot_C_OnComplete_7777C42B4A977A34DD6FB2A03D4ED3A6_Params
{
};

// Function GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C.K2_ActivateAbility
struct UGAB_SurvivorMoveToSpawnSpot_C_K2_ActivateAbility_Params
{
};

// Function GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C.K2_OnEndAbility
struct UGAB_SurvivorMoveToSpawnSpot_C_K2_OnEndAbility_Params
{
};

// Function GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C.OnMoveFinished_Event_1
struct UGAB_SurvivorMoveToSpawnSpot_C_OnMoveFinished_Event_1_Params
{
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AAIController*                               AIController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C.ExecuteUbergraph_GAB_SurvivorMoveToSpawnSpot
struct UGAB_SurvivorMoveToSpawnSpot_C_ExecuteUbergraph_GAB_SurvivorMoveToSpawnSpot_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
