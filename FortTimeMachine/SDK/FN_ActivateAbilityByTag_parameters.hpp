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

// Function ActivateAbilityByTag.ActivateAbilityByTag_C.ReceiveActivation
struct UActivateAbilityByTag_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActivateAbilityByTag.ActivateAbilityByTag_C.ReceiveDeactivation
struct UActivateAbilityByTag_C_ReceiveDeactivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActivateAbilityByTag.ActivateAbilityByTag_C.ReceiveTick
struct UActivateAbilityByTag_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActivateAbilityByTag.ActivateAbilityByTag_C.ExecuteUbergraph_ActivateAbilityByTag
struct UActivateAbilityByTag_C_ExecuteUbergraph_ActivateAbilityByTag_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
