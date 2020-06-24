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

// Function WeaponReloadService.WeaponReloadService_C.HasFewAmmoLeftInMagazine
struct UWeaponReloadService_C_HasFewAmmoLeftInMagazine_Params
{
	class AFortWeapon*                                 WeaponUsed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanReload;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponReloadService.WeaponReloadService_C.ReceiveActivationAI
struct UWeaponReloadService_C_ReceiveActivationAI_Params
{
	class AAIController**                              OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponReloadService.WeaponReloadService_C.ReceiveTick
struct UWeaponReloadService_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponReloadService.WeaponReloadService_C.ExecuteUbergraph_WeaponReloadService
struct UWeaponReloadService_C_ExecuteUbergraph_WeaponReloadService_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
