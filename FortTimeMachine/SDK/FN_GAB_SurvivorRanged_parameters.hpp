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

// Function GAB_SurvivorRanged.GAB_SurvivorRanged_C.K2_CanActivateAbility
struct UGAB_SurvivorRanged_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GAB_SurvivorRanged.GAB_SurvivorRanged_C.K2_OnEndAbility
struct UGAB_SurvivorRanged_C_K2_OnEndAbility_Params
{
};

// Function GAB_SurvivorRanged.GAB_SurvivorRanged_C.K2_ActivateAbility
struct UGAB_SurvivorRanged_C_K2_ActivateAbility_Params
{
};

// Function GAB_SurvivorRanged.GAB_SurvivorRanged_C.FireSingleBurst
struct UGAB_SurvivorRanged_C_FireSingleBurst_Params
{
};

// Function GAB_SurvivorRanged.GAB_SurvivorRanged_C.InitializeWeaponValues
struct UGAB_SurvivorRanged_C_InitializeWeaponValues_Params
{
};

// Function GAB_SurvivorRanged.GAB_SurvivorRanged_C.OnDied_Event_1
struct UGAB_SurvivorRanged_C_OnDied_Event_1_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, IsPlainOldData)
};

// Function GAB_SurvivorRanged.GAB_SurvivorRanged_C.ExecuteUbergraph_GAB_SurvivorRanged
struct UGAB_SurvivorRanged_C_ExecuteUbergraph_GAB_SurvivorRanged_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
