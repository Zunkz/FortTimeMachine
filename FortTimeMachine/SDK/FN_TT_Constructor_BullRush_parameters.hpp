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

// Function TT_Constructor_BullRush.TT_Constructor_BullRush_C.GetApplicationTag
struct UTT_Constructor_BullRush_C_GetApplicationTag_Params
{
	class UGameplayAbility**                           AbilityInstance;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                OutTag;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TT_Constructor_BullRush.TT_Constructor_BullRush_C.GetTextForTokenFromAbilityInstanceInternal
struct UTT_Constructor_BullRush_C_GetTextForTokenFromAbilityInstanceInternal_Params
{
	class UGameplayAbility**                           AbilityInstance;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UFortTooltipContext**                        Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               Token;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       OutText;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TT_Constructor_BullRush.TT_Constructor_BullRush_C.InitializeAbilityInstanceInternal
struct UTT_Constructor_BullRush_C_InitializeAbilityInstanceInternal_Params
{
	class UGameplayAbility**                           AbilityInstance;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFortTooltipContext**                        Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
