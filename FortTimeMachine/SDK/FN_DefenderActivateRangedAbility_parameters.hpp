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

// Function DefenderActivateRangedAbility.DefenderActivateRangedAbility_C.HasAvailableAmmo
struct UDefenderActivateRangedAbility_C_HasAvailableAmmo_Params
{
	bool                                               HasAvailableAmmo;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DefenderActivateRangedAbility.DefenderActivateRangedAbility_C.ReceiveDeactivation
struct UDefenderActivateRangedAbility_C_ReceiveDeactivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefenderActivateRangedAbility.DefenderActivateRangedAbility_C.ReceiveTick
struct UDefenderActivateRangedAbility_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefenderActivateRangedAbility.DefenderActivateRangedAbility_C.ReceiveActivation
struct UDefenderActivateRangedAbility_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefenderActivateRangedAbility.DefenderActivateRangedAbility_C.ExecuteUbergraph_DefenderActivateRangedAbility
struct UDefenderActivateRangedAbility_C_ExecuteUbergraph_DefenderActivateRangedAbility_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
