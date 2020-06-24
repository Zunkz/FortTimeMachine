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

// Function ShielderSpringArm.ShielderSpringArm_C.UserConstructionScript
struct AShielderSpringArm_C_UserConstructionScript_Params
{
};

// Function ShielderSpringArm.ShielderSpringArm_C.ReceiveTick
struct AShielderSpringArm_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShielderSpringArm.ShielderSpringArm_C.ReceiveBeginPlay
struct AShielderSpringArm_C_ReceiveBeginPlay_Params
{
};

// Function ShielderSpringArm.ShielderSpringArm_C.HitFlashFX
struct AShielderSpringArm_C_HitFlashFX_Params
{
};

// Function ShielderSpringArm.ShielderSpringArm_C.ExecuteUbergraph_ShielderSpringArm
struct AShielderSpringArm_C_ExecuteUbergraph_ShielderSpringArm_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
