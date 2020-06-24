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

// Function GA_SentryGun_Fire.GA_SentryGun_Fire_C.Cancelled_BF3E087449D6A8B1FDC218AB9BEC1982
struct UGA_SentryGun_Fire_C_Cancelled_BF3E087449D6A8B1FDC218AB9BEC1982_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GA_SentryGun_Fire.GA_SentryGun_Fire_C.Targeted_BF3E087449D6A8B1FDC218AB9BEC1982
struct UGA_SentryGun_Fire_C_Targeted_BF3E087449D6A8B1FDC218AB9BEC1982_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GA_SentryGun_Fire.GA_SentryGun_Fire_C.K2_ActivateAbility
struct UGA_SentryGun_Fire_C_K2_ActivateAbility_Params
{
};

// Function GA_SentryGun_Fire.GA_SentryGun_Fire_C.ExecuteUbergraph_GA_SentryGun_Fire
struct UGA_SentryGun_Fire_C_ExecuteUbergraph_GA_SentryGun_Fire_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
