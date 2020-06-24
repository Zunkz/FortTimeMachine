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

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.UserConstructionScript
struct AB_GoinCommandoWeapon_C_UserConstructionScript_Params
{
};

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.ChargeUp__FinishedFunc
struct AB_GoinCommandoWeapon_C_ChargeUp__FinishedFunc_Params
{
};

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.ChargeUp__UpdateFunc
struct AB_GoinCommandoWeapon_C_ChargeUp__UpdateFunc_Params
{
};

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.SetUpgradeLevel
struct AB_GoinCommandoWeapon_C_SetUpgradeLevel_Params
{
};

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.ReceiveBeginPlay
struct AB_GoinCommandoWeapon_C_ReceiveBeginPlay_Params
{
};

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnPlayWeaponFireFX
struct AB_GoinCommandoWeapon_C_OnPlayWeaponFireFX_Params
{
	bool*                                              bPersistentFire;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSecondaryFire;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnPlayImpactFX
struct AB_GoinCommandoWeapon_C_OnPlayImpactFX_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>*                     ImpactPhysicalSurface;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent**                   SpawnedPSC;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnChargeUp
struct AB_GoinCommandoWeapon_C_OnChargeUp_Params
{
};

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnChargeDown
struct AB_GoinCommandoWeapon_C_OnChargeDown_Params
{
};

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnInitCosmeticAlterations
struct AB_GoinCommandoWeapon_C_OnInitCosmeticAlterations_Params
{
	struct FFortCosmeticModification*                  CosmeticMod;                                              // (Parm)
	class UMaterialInstanceDynamic**                   DynamicMaterialInstance;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.ExecuteUbergraph_B_GoinCommandoWeapon
struct AB_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
