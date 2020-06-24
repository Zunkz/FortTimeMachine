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

// Function DefenderAmmoAndWeaponCallouts.DefenderAmmoAndWeaponCallouts_C.ReceiveTick
struct UDefenderAmmoAndWeaponCallouts_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefenderAmmoAndWeaponCallouts.DefenderAmmoAndWeaponCallouts_C.ReceiveActivation
struct UDefenderAmmoAndWeaponCallouts_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefenderAmmoAndWeaponCallouts.DefenderAmmoAndWeaponCallouts_C.ReceiveDeactivationAI
struct UDefenderAmmoAndWeaponCallouts_C_ReceiveDeactivationAI_Params
{
	class AAIController**                              OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefenderAmmoAndWeaponCallouts.DefenderAmmoAndWeaponCallouts_C.ExecuteUbergraph_DefenderAmmoAndWeaponCallouts
struct UDefenderAmmoAndWeaponCallouts_C_ExecuteUbergraph_DefenderAmmoAndWeaponCallouts_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
