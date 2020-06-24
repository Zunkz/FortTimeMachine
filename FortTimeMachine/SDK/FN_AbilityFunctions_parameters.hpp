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

// Function AbilityFunctions.AbilityFunctions_C.ConvertRangeToTiles
struct UAbilityFunctions_C_ConvertRangeToTiles_Params
{
	float                                              InRange;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutTile;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AbilityFunctions.AbilityFunctions_C.SetArrayOfHitActors
struct UAbilityFunctions_C_SetArrayOfHitActors_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (Parm)
	TArray<class AActor*>                              ArrayToSet;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AbilityFunctions.AbilityFunctions_C.DoNOTUse-BuildArrayOfHitActors
struct UAbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (Parm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              HitActors;                                                // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
