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

// Function Prj_HuskDwarfLeap.Prj_HuskDwarfLeap_C.ImpactOnHit
struct APrj_HuskDwarfLeap_C_ImpactOnHit_Params
{
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
};

// Function Prj_HuskDwarfLeap.Prj_HuskDwarfLeap_C.UserConstructionScript
struct APrj_HuskDwarfLeap_C_UserConstructionScript_Params
{
};

// Function Prj_HuskDwarfLeap.Prj_HuskDwarfLeap_C.OnShot
struct APrj_HuskDwarfLeap_C_OnShot_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Prj_HuskDwarfLeap.Prj_HuskDwarfLeap_C.ReceiveHit
struct APrj_HuskDwarfLeap_C_ReceiveHit_Params
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

// Function Prj_HuskDwarfLeap.Prj_HuskDwarfLeap_C.ExecuteUbergraph_Prj_HuskDwarfLeap
struct APrj_HuskDwarfLeap_C_ExecuteUbergraph_Prj_HuskDwarfLeap_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
