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

// Function GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C.K2_CanActivateAbility
struct UGAB_SurvivorGrabPickup_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C.OnCancelled_B3CE3AFB4C57F932694B73A2B89DEE1C
struct UGAB_SurvivorGrabPickup_C_OnCancelled_B3CE3AFB4C57F932694B73A2B89DEE1C_Params
{
};

// Function GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C.OnInterrupted_B3CE3AFB4C57F932694B73A2B89DEE1C
struct UGAB_SurvivorGrabPickup_C_OnInterrupted_B3CE3AFB4C57F932694B73A2B89DEE1C_Params
{
};

// Function GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C.OnComplete_B3CE3AFB4C57F932694B73A2B89DEE1C
struct UGAB_SurvivorGrabPickup_C_OnComplete_B3CE3AFB4C57F932694B73A2B89DEE1C_Params
{
};

// Function GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C.K2_ActivateAbility
struct UGAB_SurvivorGrabPickup_C_K2_ActivateAbility_Params
{
};

// Function GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C.K2_OnEndAbility
struct UGAB_SurvivorGrabPickup_C_K2_OnEndAbility_Params
{
};

// Function GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C.OnEndPlay_Event_1
struct UGAB_SurvivorGrabPickup_C_OnEndPlay_Event_1_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C.ExecuteUbergraph_GAB_SurvivorGrabPickup
struct UGAB_SurvivorGrabPickup_C_ExecuteUbergraph_GAB_SurvivorGrabPickup_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
