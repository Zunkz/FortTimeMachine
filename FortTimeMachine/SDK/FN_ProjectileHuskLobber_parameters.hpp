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

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.ImpactOnHit
struct AProjectileHuskLobber_C_ImpactOnHit_Params
{
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
};

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.UserConstructionScript
struct AProjectileHuskLobber_C_UserConstructionScript_Params
{
};

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.ReceiveHit
struct AProjectileHuskLobber_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.ProjectileShot_Event
struct AProjectileHuskLobber_C_ProjectileShot_Event_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.OnShot
struct AProjectileHuskLobber_C_OnShot_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.ExecuteUbergraph_ProjectileHuskLobber
struct AProjectileHuskLobber_C_ExecuteUbergraph_ProjectileHuskLobber_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.ProjectileShot__DelegateSignature
struct AProjectileHuskLobber_C_ProjectileShot__DelegateSignature_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
