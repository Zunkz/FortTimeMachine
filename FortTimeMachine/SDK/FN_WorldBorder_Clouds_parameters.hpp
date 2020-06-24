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

// Function WorldBorder_Clouds.WorldBorder_Clouds_C.SetupACornerMaterial
struct AWorldBorder_Clouds_C_SetupACornerMaterial_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Falloff_Range;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorldBorder_Clouds.WorldBorder_Clouds_C.UserConstructionScript
struct AWorldBorder_Clouds_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
