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

// Function TT_Commando_DebilitatingShots.TT_Commando_DebilitatingShots_C.BP_GetTokenizedDescriptionText
struct UTT_Commando_DebilitatingShots_C_BP_GetTokenizedDescriptionText_Params
{
	class UObject**                                    ObjectToDescribe;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UFortTooltipContext**                        Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               OutDescription;                                           // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TT_Commando_DebilitatingShots.TT_Commando_DebilitatingShots_C.GetTextForTokenFromAbilityInstanceInternal
struct UTT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal_Params
{
	class UGameplayAbility**                           AbilityInstance;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UFortTooltipContext**                        Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               Token;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       OutText;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TT_Commando_DebilitatingShots.TT_Commando_DebilitatingShots_C.InitializeAbilityInstanceInternal
struct UTT_Commando_DebilitatingShots_C_InitializeAbilityInstanceInternal_Params
{
	class UGameplayAbility**                           AbilityInstance;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFortTooltipContext**                        Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
